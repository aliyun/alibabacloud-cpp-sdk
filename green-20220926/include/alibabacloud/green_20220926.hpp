// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GREEN20220926_H_
#define ALIBABACLOUD_GREEN20220926_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Green20220926 {
class AddAnswerSampleRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sampleObject{};
  shared_ptr<string> samples{};

  AddAnswerSampleRequest() {}

  explicit AddAnswerSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sampleObject) {
      res["SampleObject"] = boost::any(*sampleObject);
    }
    if (samples) {
      res["Samples"] = boost::any(*samples);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SampleObject") != m.end() && !m["SampleObject"].empty()) {
      sampleObject = make_shared<string>(boost::any_cast<string>(m["SampleObject"]));
    }
    if (m.find("Samples") != m.end() && !m["Samples"].empty()) {
      samples = make_shared<string>(boost::any_cast<string>(m["Samples"]));
    }
  }


  virtual ~AddAnswerSampleRequest() = default;
};
class AddAnswerSampleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthSamples{};
  shared_ptr<long> invalidCount{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatSamples{};
  shared_ptr<long> successCount{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};

  AddAnswerSampleResponseBodyResult() {}

  explicit AddAnswerSampleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthSamples) {
      res["IllegalLengthSamples"] = boost::any(*illegalLengthSamples);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatSamples) {
      res["RepeatSamples"] = boost::any(*repeatSamples);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthSamples") != m.end() && !m["IllegalLengthSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatSamples") != m.end() && !m["RepeatSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~AddAnswerSampleResponseBodyResult() = default;
};
class AddAnswerSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> requestId{};
  shared_ptr<AddAnswerSampleResponseBodyResult> result{};
  shared_ptr<string> taskId{};

  AddAnswerSampleResponseBody() {}

  explicit AddAnswerSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AddAnswerSampleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AddAnswerSampleResponseBodyResult>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddAnswerSampleResponseBody() = default;
};
class AddAnswerSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddAnswerSampleResponseBody> body{};

  AddAnswerSampleResponse() {}

  explicit AddAnswerSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddAnswerSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAnswerSampleResponseBody>(model1);
      }
    }
  }


  virtual ~AddAnswerSampleResponse() = default;
};
class AddImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};

  AddImageLibRequest() {}

  explicit AddImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddImageLibRequest() = default;
};
class AddImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddImageLibResponseBody() {}

  explicit AddImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddImageLibResponseBody() = default;
};
class AddImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageLibResponseBody> body{};

  AddImageLibResponse() {}

  explicit AddImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageLibResponse() = default;
};
class AddImages2LibRequest : public Darabonba::Model {
public:
  shared_ptr<string> imgUrl{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  AddImages2LibRequest() {}

  explicit AddImages2LibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgUrl) {
      res["ImgUrl"] = boost::any(*imgUrl);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgUrl") != m.end() && !m["ImgUrl"].empty()) {
      imgUrl = make_shared<string>(boost::any_cast<string>(m["ImgUrl"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddImages2LibRequest() = default;
};
class AddImages2LibResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imgId{};

  AddImages2LibResponseBodyData() {}

  explicit AddImages2LibResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgId) {
      res["ImgId"] = boost::any(*imgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgId") != m.end() && !m["ImgId"].empty()) {
      imgId = make_shared<string>(boost::any_cast<string>(m["ImgId"]));
    }
  }


  virtual ~AddImages2LibResponseBodyData() = default;
};
class AddImages2LibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AddImages2LibResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddImages2LibResponseBody() {}

  explicit AddImages2LibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddImages2LibResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddImages2LibResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddImages2LibResponseBody() = default;
};
class AddImages2LibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImages2LibResponseBody> body{};

  AddImages2LibResponse() {}

  explicit AddImages2LibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddImages2LibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImages2LibResponseBody>(model1);
      }
    }
  }


  virtual ~AddImages2LibResponse() = default;
};
class AddKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<string> keywordsObject{};
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};

  AddKeywordLibRequest() {}

  explicit AddKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (keywordsObject) {
      res["KeywordsObject"] = boost::any(*keywordsObject);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("KeywordsObject") != m.end() && !m["KeywordsObject"].empty()) {
      keywordsObject = make_shared<string>(boost::any_cast<string>(m["KeywordsObject"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddKeywordLibRequest() = default;
};
class AddKeywordLibResponseBodyDataKeywordsResult : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthKeywords{};
  shared_ptr<long> invalidCount{};
  shared_ptr<vector<string>> invalidKeywords{};
  shared_ptr<string> libId{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatKeywords{};
  shared_ptr<long> successCount{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalCount{};

  AddKeywordLibResponseBodyDataKeywordsResult() {}

  explicit AddKeywordLibResponseBodyDataKeywordsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthKeywords) {
      res["IllegalLengthKeywords"] = boost::any(*illegalLengthKeywords);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (invalidKeywords) {
      res["InvalidKeywords"] = boost::any(*invalidKeywords);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatKeywords) {
      res["RepeatKeywords"] = boost::any(*repeatKeywords);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthKeywords") != m.end() && !m["IllegalLengthKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("InvalidKeywords") != m.end() && !m["InvalidKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatKeywords") != m.end() && !m["RepeatKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~AddKeywordLibResponseBodyDataKeywordsResult() = default;
};
class AddKeywordLibResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<AddKeywordLibResponseBodyDataKeywordsResult> keywordsResult{};
  shared_ptr<string> libId{};
  shared_ptr<string> taskId{};

  AddKeywordLibResponseBodyData() {}

  explicit AddKeywordLibResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordsResult) {
      res["KeywordsResult"] = keywordsResult ? boost::any(keywordsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordsResult") != m.end() && !m["KeywordsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeywordsResult"].type()) {
        AddKeywordLibResponseBodyDataKeywordsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeywordsResult"]));
        keywordsResult = make_shared<AddKeywordLibResponseBodyDataKeywordsResult>(model1);
      }
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddKeywordLibResponseBodyData() = default;
};
class AddKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AddKeywordLibResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddKeywordLibResponseBody() {}

  explicit AddKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddKeywordLibResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddKeywordLibResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddKeywordLibResponseBody() = default;
};
class AddKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddKeywordLibResponseBody> body{};

  AddKeywordLibResponse() {}

  explicit AddKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~AddKeywordLibResponse() = default;
};
class AddKeywordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<string> keywordsObject{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  AddKeywordsRequest() {}

  explicit AddKeywordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (keywordsObject) {
      res["KeywordsObject"] = boost::any(*keywordsObject);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("KeywordsObject") != m.end() && !m["KeywordsObject"].empty()) {
      keywordsObject = make_shared<string>(boost::any_cast<string>(m["KeywordsObject"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddKeywordsRequest() = default;
};
class AddKeywordsResponseBodyDataKeywordsResult : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthKeywords{};
  shared_ptr<long> invalidCount{};
  shared_ptr<vector<string>> invalidKeywords{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatKeywords{};
  shared_ptr<long> successCount{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalCount{};

  AddKeywordsResponseBodyDataKeywordsResult() {}

  explicit AddKeywordsResponseBodyDataKeywordsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthKeywords) {
      res["IllegalLengthKeywords"] = boost::any(*illegalLengthKeywords);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (invalidKeywords) {
      res["InvalidKeywords"] = boost::any(*invalidKeywords);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatKeywords) {
      res["RepeatKeywords"] = boost::any(*repeatKeywords);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthKeywords") != m.end() && !m["IllegalLengthKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("InvalidKeywords") != m.end() && !m["InvalidKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatKeywords") != m.end() && !m["RepeatKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~AddKeywordsResponseBodyDataKeywordsResult() = default;
};
class AddKeywordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<AddKeywordsResponseBodyDataKeywordsResult> keywordsResult{};
  shared_ptr<string> libId{};
  shared_ptr<string> taskId{};

  AddKeywordsResponseBodyData() {}

  explicit AddKeywordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordsResult) {
      res["KeywordsResult"] = keywordsResult ? boost::any(keywordsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordsResult") != m.end() && !m["KeywordsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeywordsResult"].type()) {
        AddKeywordsResponseBodyDataKeywordsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeywordsResult"]));
        keywordsResult = make_shared<AddKeywordsResponseBodyDataKeywordsResult>(model1);
      }
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddKeywordsResponseBodyData() = default;
};
class AddKeywordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AddKeywordsResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddKeywordsResponseBody() {}

  explicit AddKeywordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddKeywordsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddKeywordsResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddKeywordsResponseBody() = default;
};
class AddKeywordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddKeywordsResponseBody> body{};

  AddKeywordsResponse() {}

  explicit AddKeywordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddKeywordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddKeywordsResponseBody>(model1);
      }
    }
  }


  virtual ~AddKeywordsResponse() = default;
};
class AddKeywordsToLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywords{};
  shared_ptr<string> keywordsObject{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  AddKeywordsToLibRequest() {}

  explicit AddKeywordsToLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (keywordsObject) {
      res["KeywordsObject"] = boost::any(*keywordsObject);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("KeywordsObject") != m.end() && !m["KeywordsObject"].empty()) {
      keywordsObject = make_shared<string>(boost::any_cast<string>(m["KeywordsObject"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddKeywordsToLibRequest() = default;
};
class AddKeywordsToLibResponseBodyDataKeywordsResult : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthKeywords{};
  shared_ptr<long> invalidCount{};
  shared_ptr<vector<string>> invalidKeywords{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatKeywords{};
  shared_ptr<long> successCount{};
  shared_ptr<long> totalCount{};

  AddKeywordsToLibResponseBodyDataKeywordsResult() {}

  explicit AddKeywordsToLibResponseBodyDataKeywordsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthKeywords) {
      res["IllegalLengthKeywords"] = boost::any(*illegalLengthKeywords);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (invalidKeywords) {
      res["InvalidKeywords"] = boost::any(*invalidKeywords);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatKeywords) {
      res["RepeatKeywords"] = boost::any(*repeatKeywords);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthKeywords") != m.end() && !m["IllegalLengthKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("InvalidKeywords") != m.end() && !m["InvalidKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatKeywords") != m.end() && !m["RepeatKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~AddKeywordsToLibResponseBodyDataKeywordsResult() = default;
};
class AddKeywordsToLibResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<AddKeywordsToLibResponseBodyDataKeywordsResult> keywordsResult{};
  shared_ptr<string> libId{};
  shared_ptr<string> taskId{};

  AddKeywordsToLibResponseBodyData() {}

  explicit AddKeywordsToLibResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordsResult) {
      res["KeywordsResult"] = keywordsResult ? boost::any(keywordsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordsResult") != m.end() && !m["KeywordsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeywordsResult"].type()) {
        AddKeywordsToLibResponseBodyDataKeywordsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeywordsResult"]));
        keywordsResult = make_shared<AddKeywordsToLibResponseBodyDataKeywordsResult>(model1);
      }
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddKeywordsToLibResponseBodyData() = default;
};
class AddKeywordsToLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddKeywordsToLibResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AddKeywordsToLibResponseBody() {}

  explicit AddKeywordsToLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddKeywordsToLibResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddKeywordsToLibResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddKeywordsToLibResponseBody() = default;
};
class AddKeywordsToLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddKeywordsToLibResponseBody> body{};

  AddKeywordsToLibResponse() {}

  explicit AddKeywordsToLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddKeywordsToLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddKeywordsToLibResponseBody>(model1);
      }
    }
  }


  virtual ~AddKeywordsToLibResponse() = default;
};
class CancelStockOssCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  CancelStockOssCheckTaskRequest() {}

  explicit CancelStockOssCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelStockOssCheckTaskRequest() = default;
};
class CancelStockOssCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CancelStockOssCheckTaskResponseBody() {}

  explicit CancelStockOssCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelStockOssCheckTaskResponseBody() = default;
};
class CancelStockOssCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelStockOssCheckTaskResponseBody> body{};

  CancelStockOssCheckTaskResponse() {}

  explicit CancelStockOssCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelStockOssCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelStockOssCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelStockOssCheckTaskResponse() = default;
};
class CopyServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceDesc{};
  shared_ptr<string> serviceName{};

  CopyServiceConfigRequest() {}

  explicit CopyServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceDesc) {
      res["ServiceDesc"] = boost::any(*serviceDesc);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceDesc") != m.end() && !m["ServiceDesc"].empty()) {
      serviceDesc = make_shared<string>(boost::any_cast<string>(m["ServiceDesc"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CopyServiceConfigRequest() = default;
};
class CopyServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CopyServiceConfigResponseBody() {}

  explicit CopyServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CopyServiceConfigResponseBody() = default;
};
class CopyServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyServiceConfigResponseBody> body{};

  CopyServiceConfigResponse() {}

  explicit CopyServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CopyServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CopyServiceConfigResponse() = default;
};
class CreatStockOssCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<string> callbackId{};
  shared_ptr<bool> distinctHistoryTasks{};
  shared_ptr<string> endTime{};
  shared_ptr<long> executeDate{};
  shared_ptr<string> executeTime{};
  shared_ptr<bool> freeze{};
  shared_ptr<bool> freezeHighRisk1{};
  shared_ptr<bool> freezeHighRisk2{};
  shared_ptr<bool> freezeMediumRisk1{};
  shared_ptr<bool> freezeMediumRisk2{};
  shared_ptr<string> freezeType{};
  shared_ptr<bool> isInc{};
  shared_ptr<long> mediaType{};
  shared_ptr<string> prefixFilterType{};
  shared_ptr<string> prefixFilters{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<long> scanLimit{};
  shared_ptr<bool> scanNoFileType{};
  shared_ptr<string> scanResourceType{};
  shared_ptr<string> scanService{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskCycle{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};

  CreatStockOssCheckTaskRequest() {}

  explicit CreatStockOssCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (callbackId) {
      res["CallbackId"] = boost::any(*callbackId);
    }
    if (distinctHistoryTasks) {
      res["DistinctHistoryTasks"] = boost::any(*distinctHistoryTasks);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeDate) {
      res["ExecuteDate"] = boost::any(*executeDate);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (freeze) {
      res["Freeze"] = boost::any(*freeze);
    }
    if (freezeHighRisk1) {
      res["FreezeHighRisk1"] = boost::any(*freezeHighRisk1);
    }
    if (freezeHighRisk2) {
      res["FreezeHighRisk2"] = boost::any(*freezeHighRisk2);
    }
    if (freezeMediumRisk1) {
      res["FreezeMediumRisk1"] = boost::any(*freezeMediumRisk1);
    }
    if (freezeMediumRisk2) {
      res["FreezeMediumRisk2"] = boost::any(*freezeMediumRisk2);
    }
    if (freezeType) {
      res["FreezeType"] = boost::any(*freezeType);
    }
    if (isInc) {
      res["IsInc"] = boost::any(*isInc);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (prefixFilterType) {
      res["PrefixFilterType"] = boost::any(*prefixFilterType);
    }
    if (prefixFilters) {
      res["PrefixFilters"] = boost::any(*prefixFilters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scanLimit) {
      res["ScanLimit"] = boost::any(*scanLimit);
    }
    if (scanNoFileType) {
      res["ScanNoFileType"] = boost::any(*scanNoFileType);
    }
    if (scanResourceType) {
      res["ScanResourceType"] = boost::any(*scanResourceType);
    }
    if (scanService) {
      res["ScanService"] = boost::any(*scanService);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskCycle) {
      res["TaskCycle"] = boost::any(*taskCycle);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("CallbackId") != m.end() && !m["CallbackId"].empty()) {
      callbackId = make_shared<string>(boost::any_cast<string>(m["CallbackId"]));
    }
    if (m.find("DistinctHistoryTasks") != m.end() && !m["DistinctHistoryTasks"].empty()) {
      distinctHistoryTasks = make_shared<bool>(boost::any_cast<bool>(m["DistinctHistoryTasks"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteDate") != m.end() && !m["ExecuteDate"].empty()) {
      executeDate = make_shared<long>(boost::any_cast<long>(m["ExecuteDate"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("Freeze") != m.end() && !m["Freeze"].empty()) {
      freeze = make_shared<bool>(boost::any_cast<bool>(m["Freeze"]));
    }
    if (m.find("FreezeHighRisk1") != m.end() && !m["FreezeHighRisk1"].empty()) {
      freezeHighRisk1 = make_shared<bool>(boost::any_cast<bool>(m["FreezeHighRisk1"]));
    }
    if (m.find("FreezeHighRisk2") != m.end() && !m["FreezeHighRisk2"].empty()) {
      freezeHighRisk2 = make_shared<bool>(boost::any_cast<bool>(m["FreezeHighRisk2"]));
    }
    if (m.find("FreezeMediumRisk1") != m.end() && !m["FreezeMediumRisk1"].empty()) {
      freezeMediumRisk1 = make_shared<bool>(boost::any_cast<bool>(m["FreezeMediumRisk1"]));
    }
    if (m.find("FreezeMediumRisk2") != m.end() && !m["FreezeMediumRisk2"].empty()) {
      freezeMediumRisk2 = make_shared<bool>(boost::any_cast<bool>(m["FreezeMediumRisk2"]));
    }
    if (m.find("FreezeType") != m.end() && !m["FreezeType"].empty()) {
      freezeType = make_shared<string>(boost::any_cast<string>(m["FreezeType"]));
    }
    if (m.find("IsInc") != m.end() && !m["IsInc"].empty()) {
      isInc = make_shared<bool>(boost::any_cast<bool>(m["IsInc"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("PrefixFilterType") != m.end() && !m["PrefixFilterType"].empty()) {
      prefixFilterType = make_shared<string>(boost::any_cast<string>(m["PrefixFilterType"]));
    }
    if (m.find("PrefixFilters") != m.end() && !m["PrefixFilters"].empty()) {
      prefixFilters = make_shared<string>(boost::any_cast<string>(m["PrefixFilters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScanLimit") != m.end() && !m["ScanLimit"].empty()) {
      scanLimit = make_shared<long>(boost::any_cast<long>(m["ScanLimit"]));
    }
    if (m.find("ScanNoFileType") != m.end() && !m["ScanNoFileType"].empty()) {
      scanNoFileType = make_shared<bool>(boost::any_cast<bool>(m["ScanNoFileType"]));
    }
    if (m.find("ScanResourceType") != m.end() && !m["ScanResourceType"].empty()) {
      scanResourceType = make_shared<string>(boost::any_cast<string>(m["ScanResourceType"]));
    }
    if (m.find("ScanService") != m.end() && !m["ScanService"].empty()) {
      scanService = make_shared<string>(boost::any_cast<string>(m["ScanService"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskCycle") != m.end() && !m["TaskCycle"].empty()) {
      taskCycle = make_shared<long>(boost::any_cast<long>(m["TaskCycle"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreatStockOssCheckTaskRequest() = default;
};
class CreatStockOssCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CreatStockOssCheckTaskResponseBody() {}

  explicit CreatStockOssCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatStockOssCheckTaskResponseBody() = default;
};
class CreatStockOssCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatStockOssCheckTaskResponseBody> body{};

  CreatStockOssCheckTaskResponse() {}

  explicit CreatStockOssCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatStockOssCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatStockOssCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreatStockOssCheckTaskResponse() = default;
};
class CreateAnswerLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sampleBucket{};
  shared_ptr<string> sampleObject{};
  shared_ptr<string> samples{};

  CreateAnswerLibRequest() {}

  explicit CreateAnswerLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sampleBucket) {
      res["SampleBucket"] = boost::any(*sampleBucket);
    }
    if (sampleObject) {
      res["SampleObject"] = boost::any(*sampleObject);
    }
    if (samples) {
      res["Samples"] = boost::any(*samples);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SampleBucket") != m.end() && !m["SampleBucket"].empty()) {
      sampleBucket = make_shared<string>(boost::any_cast<string>(m["SampleBucket"]));
    }
    if (m.find("SampleObject") != m.end() && !m["SampleObject"].empty()) {
      sampleObject = make_shared<string>(boost::any_cast<string>(m["SampleObject"]));
    }
    if (m.find("Samples") != m.end() && !m["Samples"].empty()) {
      samples = make_shared<string>(boost::any_cast<string>(m["Samples"]));
    }
  }


  virtual ~CreateAnswerLibRequest() = default;
};
class CreateAnswerLibResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthSamples{};
  shared_ptr<long> invalidCount{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatSamples{};
  shared_ptr<long> successCount{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};

  CreateAnswerLibResponseBodyResult() {}

  explicit CreateAnswerLibResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthSamples) {
      res["IllegalLengthSamples"] = boost::any(*illegalLengthSamples);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatSamples) {
      res["RepeatSamples"] = boost::any(*repeatSamples);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthSamples") != m.end() && !m["IllegalLengthSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatSamples") != m.end() && !m["RepeatSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateAnswerLibResponseBodyResult() = default;
};
class CreateAnswerLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateAnswerLibResponseBodyResult> result{};
  shared_ptr<string> taskId{};

  CreateAnswerLibResponseBody() {}

  explicit CreateAnswerLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateAnswerLibResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateAnswerLibResponseBodyResult>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateAnswerLibResponseBody() = default;
};
class CreateAnswerLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAnswerLibResponseBody> body{};

  CreateAnswerLibResponse() {}

  explicit CreateAnswerLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAnswerLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAnswerLibResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAnswerLibResponse() = default;
};
class CreateCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> cryptType{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scope{};
  shared_ptr<string> url{};

  CreateCallbackRequest() {}

  explicit CreateCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateCallbackRequest() = default;
};
class CreateCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  CreateCallbackResponseBody() {}

  explicit CreateCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCallbackResponseBody() = default;
};
class CreateCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCallbackResponseBody> body{};

  CreateCallbackResponse() {}

  explicit CreateCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCallbackResponse() = default;
};
class CreatePreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<bool> distinctHistoryTasks{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isInc{};
  shared_ptr<long> mediaType{};
  shared_ptr<string> prefixFilterType{};
  shared_ptr<string> prefixFilters{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<long> scanLimit{};
  shared_ptr<bool> scanNoFileType{};
  shared_ptr<string> scanService{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskName{};

  CreatePreCheckRequest() {}

  explicit CreatePreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (distinctHistoryTasks) {
      res["DistinctHistoryTasks"] = boost::any(*distinctHistoryTasks);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isInc) {
      res["IsInc"] = boost::any(*isInc);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (prefixFilterType) {
      res["PrefixFilterType"] = boost::any(*prefixFilterType);
    }
    if (prefixFilters) {
      res["PrefixFilters"] = boost::any(*prefixFilters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scanLimit) {
      res["ScanLimit"] = boost::any(*scanLimit);
    }
    if (scanNoFileType) {
      res["ScanNoFileType"] = boost::any(*scanNoFileType);
    }
    if (scanService) {
      res["ScanService"] = boost::any(*scanService);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("DistinctHistoryTasks") != m.end() && !m["DistinctHistoryTasks"].empty()) {
      distinctHistoryTasks = make_shared<bool>(boost::any_cast<bool>(m["DistinctHistoryTasks"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsInc") != m.end() && !m["IsInc"].empty()) {
      isInc = make_shared<bool>(boost::any_cast<bool>(m["IsInc"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("PrefixFilterType") != m.end() && !m["PrefixFilterType"].empty()) {
      prefixFilterType = make_shared<string>(boost::any_cast<string>(m["PrefixFilterType"]));
    }
    if (m.find("PrefixFilters") != m.end() && !m["PrefixFilters"].empty()) {
      prefixFilters = make_shared<string>(boost::any_cast<string>(m["PrefixFilters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScanLimit") != m.end() && !m["ScanLimit"].empty()) {
      scanLimit = make_shared<long>(boost::any_cast<long>(m["ScanLimit"]));
    }
    if (m.find("ScanNoFileType") != m.end() && !m["ScanNoFileType"].empty()) {
      scanNoFileType = make_shared<bool>(boost::any_cast<bool>(m["ScanNoFileType"]));
    }
    if (m.find("ScanService") != m.end() && !m["ScanService"].empty()) {
      scanService = make_shared<string>(boost::any_cast<string>(m["ScanService"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreatePreCheckRequest() = default;
};
class CreatePreCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, bool>> data{};
  shared_ptr<string> requestId{};

  CreatePreCheckResponseBody() {}

  explicit CreatePreCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["Data"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePreCheckResponseBody() = default;
};
class CreatePreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePreCheckResponseBody> body{};

  CreatePreCheckResponse() {}

  explicit CreatePreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePreCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePreCheckResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePreCheckResponse() = default;
};
class DeleteAnswerLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  DeleteAnswerLibRequest() {}

  explicit DeleteAnswerLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAnswerLibRequest() = default;
};
class DeleteAnswerLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteAnswerLibResponseBody() {}

  explicit DeleteAnswerLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAnswerLibResponseBody() = default;
};
class DeleteAnswerLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAnswerLibResponseBody> body{};

  DeleteAnswerLibResponse() {}

  explicit DeleteAnswerLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAnswerLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAnswerLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAnswerLibResponse() = default;
};
class DeleteAnswerSampleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  DeleteAnswerSampleRequest() {}

  explicit DeleteAnswerSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAnswerSampleRequest() = default;
};
class DeleteAnswerSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteAnswerSampleResponseBody() {}

  explicit DeleteAnswerSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAnswerSampleResponseBody() = default;
};
class DeleteAnswerSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAnswerSampleResponseBody> body{};

  DeleteAnswerSampleResponse() {}

  explicit DeleteAnswerSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAnswerSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAnswerSampleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAnswerSampleResponse() = default;
};
class DeleteCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DeleteCallbackRequest() {}

  explicit DeleteCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteCallbackRequest() = default;
};
class DeleteCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteCallbackResponseBody() {}

  explicit DeleteCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCallbackResponseBody() = default;
};
class DeleteCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCallbackResponseBody> body{};

  DeleteCallbackResponse() {}

  explicit DeleteCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCallbackResponse() = default;
};
class DeleteFeatureConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> type{};

  DeleteFeatureConfigRequest() {}

  explicit DeleteFeatureConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DeleteFeatureConfigRequest() = default;
};
class DeleteFeatureConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFeatureConfigResponseBody() {}

  explicit DeleteFeatureConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFeatureConfigResponseBody() = default;
};
class DeleteFeatureConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFeatureConfigResponseBody> body{};

  DeleteFeatureConfigResponse() {}

  explicit DeleteFeatureConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFeatureConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFeatureConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFeatureConfigResponse() = default;
};
class DeleteImagesFromLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageIds{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  DeleteImagesFromLibRequest() {}

  explicit DeleteImagesFromLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageIds) {
      res["ImageIds"] = boost::any(*imageIds);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageIds") != m.end() && !m["ImageIds"].empty()) {
      imageIds = make_shared<string>(boost::any_cast<string>(m["ImageIds"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteImagesFromLibRequest() = default;
};
class DeleteImagesFromLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteImagesFromLibResponseBody() {}

  explicit DeleteImagesFromLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteImagesFromLibResponseBody() = default;
};
class DeleteImagesFromLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImagesFromLibResponseBody> body{};

  DeleteImagesFromLibResponse() {}

  explicit DeleteImagesFromLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImagesFromLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImagesFromLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImagesFromLibResponse() = default;
};
class DeleteKeywordRequest : public Darabonba::Model {
public:
  shared_ptr<string> keywordIdList{};
  shared_ptr<string> keywordIds{};
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  DeleteKeywordRequest() {}

  explicit DeleteKeywordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordIdList) {
      res["KeywordIdList"] = boost::any(*keywordIdList);
    }
    if (keywordIds) {
      res["KeywordIds"] = boost::any(*keywordIds);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordIdList") != m.end() && !m["KeywordIdList"].empty()) {
      keywordIdList = make_shared<string>(boost::any_cast<string>(m["KeywordIdList"]));
    }
    if (m.find("KeywordIds") != m.end() && !m["KeywordIds"].empty()) {
      keywordIds = make_shared<string>(boost::any_cast<string>(m["KeywordIds"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteKeywordRequest() = default;
};
class DeleteKeywordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteKeywordResponseBody() {}

  explicit DeleteKeywordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteKeywordResponseBody() = default;
};
class DeleteKeywordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeywordResponseBody> body{};

  DeleteKeywordResponse() {}

  explicit DeleteKeywordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeywordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeywordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeywordResponse() = default;
};
class DeleteKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  DeleteKeywordLibRequest() {}

  explicit DeleteKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteKeywordLibRequest() = default;
};
class DeleteKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteKeywordLibResponseBody() {}

  explicit DeleteKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteKeywordLibResponseBody() = default;
};
class DeleteKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeywordLibResponseBody> body{};

  DeleteKeywordLibResponse() {}

  explicit DeleteKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeywordLibResponse() = default;
};
class ExportAnswerSampleRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  ExportAnswerSampleRequest() {}

  explicit ExportAnswerSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ExportAnswerSampleRequest() = default;
};
class ExportAnswerSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExportAnswerSampleResponseBody() {}

  explicit ExportAnswerSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportAnswerSampleResponseBody() = default;
};
class ExportAnswerSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportAnswerSampleResponseBody> body{};

  ExportAnswerSampleResponse() {}

  explicit ExportAnswerSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportAnswerSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportAnswerSampleResponseBody>(model1);
      }
    }
  }


  virtual ~ExportAnswerSampleResponse() = default;
};
class ExportCipStatsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> byMonth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> exportType{};
  shared_ptr<string> label{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startDate{};
  shared_ptr<string> subUid{};
  shared_ptr<string> type{};

  ExportCipStatsRequest() {}

  explicit ExportCipStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byMonth) {
      res["ByMonth"] = boost::any(*byMonth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (exportType) {
      res["ExportType"] = boost::any(*exportType);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (subUid) {
      res["SubUid"] = boost::any(*subUid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByMonth") != m.end() && !m["ByMonth"].empty()) {
      byMonth = make_shared<bool>(boost::any_cast<bool>(m["ByMonth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ExportType") != m.end() && !m["ExportType"].empty()) {
      exportType = make_shared<string>(boost::any_cast<string>(m["ExportType"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("SubUid") != m.end() && !m["SubUid"].empty()) {
      subUid = make_shared<string>(boost::any_cast<string>(m["SubUid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ExportCipStatsRequest() = default;
};
class ExportCipStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportCipStatsResponseBody() {}

  explicit ExportCipStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportCipStatsResponseBody() = default;
};
class ExportCipStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportCipStatsResponseBody> body{};

  ExportCipStatsResponse() {}

  explicit ExportCipStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportCipStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportCipStatsResponseBody>(model1);
      }
    }
  }


  virtual ~ExportCipStatsResponse() = default;
};
class ExportKeywordRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  ExportKeywordRequest() {}

  explicit ExportKeywordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ExportKeywordRequest() = default;
};
class ExportKeywordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportKeywordResponseBody() {}

  explicit ExportKeywordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportKeywordResponseBody() = default;
};
class ExportKeywordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportKeywordResponseBody> body{};

  ExportKeywordResponse() {}

  explicit ExportKeywordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportKeywordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportKeywordResponseBody>(model1);
      }
    }
  }


  virtual ~ExportKeywordResponse() = default;
};
class ExportOssCheckStatRequest : public Darabonba::Model {
public:
  shared_ptr<bool> byMonth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startDate{};

  ExportOssCheckStatRequest() {}

  explicit ExportOssCheckStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byMonth) {
      res["ByMonth"] = boost::any(*byMonth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByMonth") != m.end() && !m["ByMonth"].empty()) {
      byMonth = make_shared<bool>(boost::any_cast<bool>(m["ByMonth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportOssCheckStatRequest() = default;
};
class ExportOssCheckStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExportOssCheckStatResponseBody() {}

  explicit ExportOssCheckStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportOssCheckStatResponseBody() = default;
};
class ExportOssCheckStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportOssCheckStatResponseBody> body{};

  ExportOssCheckStatResponse() {}

  explicit ExportOssCheckStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportOssCheckStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportOssCheckStatResponseBody>(model1);
      }
    }
  }


  virtual ~ExportOssCheckStatResponse() = default;
};
class ExportResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  ExportResultRequest() {}

  explicit ExportResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportResultRequest() = default;
};
class ExportResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  ExportResultShrinkRequest() {}

  explicit ExportResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportResultShrinkRequest() = default;
};
class ExportResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportResultResponseBody() {}

  explicit ExportResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportResultResponseBody() = default;
};
class ExportResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportResultResponseBody> body{};

  ExportResultResponse() {}

  explicit ExportResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportResultResponseBody>(model1);
      }
    }
  }


  virtual ~ExportResultResponse() = default;
};
class ExportScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, string>> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  ExportScanResultRequest() {}

  explicit ExportScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Query"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      query = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportScanResultRequest() = default;
};
class ExportScanResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  ExportScanResultShrinkRequest() {}

  explicit ExportScanResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportScanResultShrinkRequest() = default;
};
class ExportScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportScanResultResponseBody() {}

  explicit ExportScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportScanResultResponseBody() = default;
};
class ExportScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportScanResultResponseBody> body{};

  ExportScanResultResponse() {}

  explicit ExportScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~ExportScanResultResponse() = default;
};
class ExportTextScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<map<string, string>> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startDate{};

  ExportTextScanResultRequest() {}

  explicit ExportTextScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Query"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      query = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportTextScanResultRequest() = default;
};
class ExportTextScanResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startDate{};

  ExportTextScanResultShrinkRequest() {}

  explicit ExportTextScanResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportTextScanResultShrinkRequest() = default;
};
class ExportTextScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportTextScanResultResponseBody() {}

  explicit ExportTextScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportTextScanResultResponseBody() = default;
};
class ExportTextScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportTextScanResultResponseBody> body{};

  ExportTextScanResultResponse() {}

  explicit ExportTextScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportTextScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportTextScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~ExportTextScanResultResponse() = default;
};
class GetAnswerImportProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  GetAnswerImportProgressRequest() {}

  explicit GetAnswerImportProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetAnswerImportProgressRequest() = default;
};
class GetAnswerImportProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthSamples{};
  shared_ptr<long> invalidCount{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatSamples{};
  shared_ptr<string> requestId{};
  shared_ptr<long> successCount{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalCount{};

  GetAnswerImportProgressResponseBody() {}

  explicit GetAnswerImportProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthSamples) {
      res["IllegalLengthSamples"] = boost::any(*illegalLengthSamples);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatSamples) {
      res["RepeatSamples"] = boost::any(*repeatSamples);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthSamples") != m.end() && !m["IllegalLengthSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatSamples") != m.end() && !m["RepeatSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAnswerImportProgressResponseBody() = default;
};
class GetAnswerImportProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAnswerImportProgressResponseBody> body{};

  GetAnswerImportProgressResponse() {}

  explicit GetAnswerImportProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAnswerImportProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAnswerImportProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetAnswerImportProgressResponse() = default;
};
class GetBackupBucketsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetBackupBucketsListRequest() {}

  explicit GetBackupBucketsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetBackupBucketsListRequest() = default;
};
class GetBackupBucketsListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> region{};

  GetBackupBucketsListResponseBodyData() {}

  explicit GetBackupBucketsListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetBackupBucketsListResponseBodyData() = default;
};
class GetBackupBucketsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetBackupBucketsListResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetBackupBucketsListResponseBody() {}

  explicit GetBackupBucketsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetBackupBucketsListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBackupBucketsListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetBackupBucketsListResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBackupBucketsListResponseBody() = default;
};
class GetBackupBucketsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBackupBucketsListResponseBody> body{};

  GetBackupBucketsListResponse() {}

  explicit GetBackupBucketsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBackupBucketsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBackupBucketsListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBackupBucketsListResponse() = default;
};
class GetBackupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};

  GetBackupConfigRequest() {}

  explicit GetBackupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetBackupConfigRequest() = default;
};
class GetBackupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backupMode{};
  shared_ptr<string> bucket{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> enableBackup{};
  shared_ptr<bool> enableBackupVoice{};
  shared_ptr<long> expireSeconds{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> path{};
  shared_ptr<string> pathVoice{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> uid{};

  GetBackupConfigResponseBody() {}

  explicit GetBackupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (enableBackup) {
      res["EnableBackup"] = boost::any(*enableBackup);
    }
    if (enableBackupVoice) {
      res["EnableBackupVoice"] = boost::any(*enableBackupVoice);
    }
    if (expireSeconds) {
      res["ExpireSeconds"] = boost::any(*expireSeconds);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathVoice) {
      res["PathVoice"] = boost::any(*pathVoice);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<long>(boost::any_cast<long>(m["BackupMode"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EnableBackup") != m.end() && !m["EnableBackup"].empty()) {
      enableBackup = make_shared<bool>(boost::any_cast<bool>(m["EnableBackup"]));
    }
    if (m.find("EnableBackupVoice") != m.end() && !m["EnableBackupVoice"].empty()) {
      enableBackupVoice = make_shared<bool>(boost::any_cast<bool>(m["EnableBackupVoice"]));
    }
    if (m.find("ExpireSeconds") != m.end() && !m["ExpireSeconds"].empty()) {
      expireSeconds = make_shared<long>(boost::any_cast<long>(m["ExpireSeconds"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathVoice") != m.end() && !m["PathVoice"].empty()) {
      pathVoice = make_shared<string>(boost::any_cast<string>(m["PathVoice"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetBackupConfigResponseBody() = default;
};
class GetBackupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBackupConfigResponseBody> body{};

  GetBackupConfigResponse() {}

  explicit GetBackupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBackupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBackupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetBackupConfigResponse() = default;
};
class GetBackupStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetBackupStatusRequest() {}

  explicit GetBackupStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetBackupStatusRequest() = default;
};
class GetBackupStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  GetBackupStatusResponseBody() {}

  explicit GetBackupStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBackupStatusResponseBody() = default;
};
class GetBackupStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBackupStatusResponseBody> body{};

  GetBackupStatusResponse() {}

  explicit GetBackupStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBackupStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBackupStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetBackupStatusResponse() = default;
};
class GetBucketsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetBucketsListRequest() {}

  explicit GetBucketsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetBucketsListRequest() = default;
};
class GetBucketsListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> region{};

  GetBucketsListResponseBodyData() {}

  explicit GetBucketsListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetBucketsListResponseBodyData() = default;
};
class GetBucketsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetBucketsListResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetBucketsListResponseBody() {}

  explicit GetBucketsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetBucketsListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBucketsListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetBucketsListResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBucketsListResponseBody() = default;
};
class GetBucketsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBucketsListResponseBody> body{};

  GetBucketsListResponse() {}

  explicit GetBucketsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBucketsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBucketsListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBucketsListResponse() = default;
};
class GetCipStatsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> byMonth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> label{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startDate{};
  shared_ptr<string> subUid{};
  shared_ptr<string> type{};

  GetCipStatsRequest() {}

  explicit GetCipStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byMonth) {
      res["ByMonth"] = boost::any(*byMonth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (subUid) {
      res["SubUid"] = boost::any(*subUid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByMonth") != m.end() && !m["ByMonth"].empty()) {
      byMonth = make_shared<bool>(boost::any_cast<bool>(m["ByMonth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("SubUid") != m.end() && !m["SubUid"].empty()) {
      subUid = make_shared<string>(boost::any_cast<string>(m["SubUid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetCipStatsRequest() = default;
};
class GetCipStatsResponseBodyDataLabelStatChartImageTreeChar : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetCipStatsResponseBodyDataLabelStatChartImageTreeChar() {}

  explicit GetCipStatsResponseBodyDataLabelStatChartImageTreeChar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataLabelStatChartImageTreeChar() = default;
};
class GetCipStatsResponseBodyDataLabelStatChartTreeChart : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetCipStatsResponseBodyDataLabelStatChartTreeChart() {}

  explicit GetCipStatsResponseBodyDataLabelStatChartTreeChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataLabelStatChartTreeChart() = default;
};
class GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart() {}

  explicit GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart() = default;
};
class GetCipStatsResponseBodyDataLabelStatChartY : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> name{};

  GetCipStatsResponseBodyDataLabelStatChartY() {}

  explicit GetCipStatsResponseBodyDataLabelStatChartY(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataLabelStatChartY() = default;
};
class GetCipStatsResponseBodyDataLabelStatChart : public Darabonba::Model {
public:
  shared_ptr<vector<GetCipStatsResponseBodyDataLabelStatChartImageTreeChar>> imageTreeChar{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetCipStatsResponseBodyDataLabelStatChartTreeChart>> treeChart{};
  shared_ptr<vector<GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart>> voiceTreeChart{};
  shared_ptr<vector<string>> x{};
  shared_ptr<vector<GetCipStatsResponseBodyDataLabelStatChartY>> y{};

  GetCipStatsResponseBodyDataLabelStatChart() {}

  explicit GetCipStatsResponseBodyDataLabelStatChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTreeChar) {
      vector<boost::any> temp1;
      for(auto item1:*imageTreeChar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageTreeChar"] = boost::any(temp1);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (treeChart) {
      vector<boost::any> temp1;
      for(auto item1:*treeChart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TreeChart"] = boost::any(temp1);
    }
    if (voiceTreeChart) {
      vector<boost::any> temp1;
      for(auto item1:*voiceTreeChart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VoiceTreeChart"] = boost::any(temp1);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      vector<boost::any> temp1;
      for(auto item1:*y){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Y"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTreeChar") != m.end() && !m["ImageTreeChar"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageTreeChar"].type()) {
        vector<GetCipStatsResponseBodyDataLabelStatChartImageTreeChar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageTreeChar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataLabelStatChartImageTreeChar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageTreeChar = make_shared<vector<GetCipStatsResponseBodyDataLabelStatChartImageTreeChar>>(expect1);
      }
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TreeChart") != m.end() && !m["TreeChart"].empty()) {
      if (typeid(vector<boost::any>) == m["TreeChart"].type()) {
        vector<GetCipStatsResponseBodyDataLabelStatChartTreeChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TreeChart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataLabelStatChartTreeChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        treeChart = make_shared<vector<GetCipStatsResponseBodyDataLabelStatChartTreeChart>>(expect1);
      }
    }
    if (m.find("VoiceTreeChart") != m.end() && !m["VoiceTreeChart"].empty()) {
      if (typeid(vector<boost::any>) == m["VoiceTreeChart"].type()) {
        vector<GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VoiceTreeChart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        voiceTreeChart = make_shared<vector<GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart>>(expect1);
      }
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["X"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["X"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      x = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      if (typeid(vector<boost::any>) == m["Y"].type()) {
        vector<GetCipStatsResponseBodyDataLabelStatChartY> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Y"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataLabelStatChartY model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        y = make_shared<vector<GetCipStatsResponseBodyDataLabelStatChartY>>(expect1);
      }
    }
  }


  virtual ~GetCipStatsResponseBodyDataLabelStatChart() = default;
};
class GetCipStatsResponseBodyDataY : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> name{};

  GetCipStatsResponseBodyDataY() {}

  explicit GetCipStatsResponseBodyDataY(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataY() = default;
};
class GetCipStatsResponseBodyDataZ : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> name{};

  GetCipStatsResponseBodyDataZ() {}

  explicit GetCipStatsResponseBodyDataZ(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetCipStatsResponseBodyDataZ() = default;
};
class GetCipStatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCipStatsResponseBodyDataLabelStatChart>> labelStatChart{};
  shared_ptr<map<string, boost::any>> totalStat{};
  shared_ptr<vector<string>> uids{};
  shared_ptr<vector<string>> x{};
  shared_ptr<vector<GetCipStatsResponseBodyDataY>> y{};
  shared_ptr<vector<GetCipStatsResponseBodyDataZ>> z{};

  GetCipStatsResponseBodyData() {}

  explicit GetCipStatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelStatChart) {
      vector<boost::any> temp1;
      for(auto item1:*labelStatChart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelStatChart"] = boost::any(temp1);
    }
    if (totalStat) {
      res["TotalStat"] = boost::any(*totalStat);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      vector<boost::any> temp1;
      for(auto item1:*y){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Y"] = boost::any(temp1);
    }
    if (z) {
      vector<boost::any> temp1;
      for(auto item1:*z){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Z"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelStatChart") != m.end() && !m["LabelStatChart"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelStatChart"].type()) {
        vector<GetCipStatsResponseBodyDataLabelStatChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelStatChart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataLabelStatChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelStatChart = make_shared<vector<GetCipStatsResponseBodyDataLabelStatChart>>(expect1);
      }
    }
    if (m.find("TotalStat") != m.end() && !m["TotalStat"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TotalStat"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      totalStat = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["X"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["X"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      x = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      if (typeid(vector<boost::any>) == m["Y"].type()) {
        vector<GetCipStatsResponseBodyDataY> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Y"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataY model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        y = make_shared<vector<GetCipStatsResponseBodyDataY>>(expect1);
      }
    }
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      if (typeid(vector<boost::any>) == m["Z"].type()) {
        vector<GetCipStatsResponseBodyDataZ> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Z"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCipStatsResponseBodyDataZ model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        z = make_shared<vector<GetCipStatsResponseBodyDataZ>>(expect1);
      }
    }
  }


  virtual ~GetCipStatsResponseBodyData() = default;
};
class GetCipStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetCipStatsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCipStatsResponseBody() {}

  explicit GetCipStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCipStatsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCipStatsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCipStatsResponseBody() = default;
};
class GetCipStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCipStatsResponseBody> body{};

  GetCipStatsResponse() {}

  explicit GetCipStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCipStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCipStatsResponseBody>(model1);
      }
    }
  }


  virtual ~GetCipStatsResponse() = default;
};
class GetExecuteTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetExecuteTimeRequest() {}

  explicit GetExecuteTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetExecuteTimeRequest() = default;
};
class GetExecuteTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetExecuteTimeResponseBody() {}

  explicit GetExecuteTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetExecuteTimeResponseBody() = default;
};
class GetExecuteTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExecuteTimeResponseBody> body{};

  GetExecuteTimeResponse() {}

  explicit GetExecuteTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExecuteTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExecuteTimeResponseBody>(model1);
      }
    }
  }


  virtual ~GetExecuteTimeResponse() = default;
};
class GetFeatureConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> type{};

  GetFeatureConfigRequest() {}

  explicit GetFeatureConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetFeatureConfigRequest() = default;
};
class GetFeatureConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> featureConf{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  GetFeatureConfigResponseBodyData() {}

  explicit GetFeatureConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConf) {
      res["FeatureConf"] = boost::any(*featureConf);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureConf") != m.end() && !m["FeatureConf"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["FeatureConf"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FeatureConf"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      featureConf = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetFeatureConfigResponseBodyData() = default;
};
class GetFeatureConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetFeatureConfigResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFeatureConfigResponseBody() {}

  explicit GetFeatureConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFeatureConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFeatureConfigResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetFeatureConfigResponseBody() = default;
};
class GetFeatureConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureConfigResponseBody> body{};

  GetFeatureConfigResponse() {}

  explicit GetFeatureConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureConfigResponse() = default;
};
class GetImageSceneLabelConfRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetImageSceneLabelConfRequest() {}

  explicit GetImageSceneLabelConfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetImageSceneLabelConfRequest() = default;
};
class GetImageSceneLabelConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetImageSceneLabelConfResponseBody() {}

  explicit GetImageSceneLabelConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImageSceneLabelConfResponseBody() = default;
};
class GetImageSceneLabelConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageSceneLabelConfResponseBody> body{};

  GetImageSceneLabelConfResponse() {}

  explicit GetImageSceneLabelConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageSceneLabelConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageSceneLabelConfResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageSceneLabelConfResponse() = default;
};
class GetImageSceneLabelListConfRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageServiceCode{};
  shared_ptr<string> regionId{};

  GetImageSceneLabelListConfRequest() {}

  explicit GetImageSceneLabelListConfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageServiceCode) {
      res["ImageServiceCode"] = boost::any(*imageServiceCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageServiceCode") != m.end() && !m["ImageServiceCode"].empty()) {
      imageServiceCode = make_shared<string>(boost::any_cast<string>(m["ImageServiceCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetImageSceneLabelListConfRequest() = default;
};
class GetImageSceneLabelListConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> data{};
  shared_ptr<string> requestId{};

  GetImageSceneLabelListConfResponseBody() {}

  explicit GetImageSceneLabelListConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      data = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageSceneLabelListConfResponseBody() = default;
};
class GetImageSceneLabelListConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageSceneLabelListConfResponseBody> body{};

  GetImageSceneLabelListConfResponse() {}

  explicit GetImageSceneLabelListConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageSceneLabelListConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageSceneLabelListConfResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageSceneLabelListConfResponse() = default;
};
class GetJobNameListRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  GetJobNameListRequest() {}

  explicit GetJobNameListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetJobNameListRequest() = default;
};
class GetJobNameListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  GetJobNameListShrinkRequest() {}

  explicit GetJobNameListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetJobNameListShrinkRequest() = default;
};
class GetJobNameListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> requestId{};

  GetJobNameListResponseBody() {}

  explicit GetJobNameListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobNameListResponseBody() = default;
};
class GetJobNameListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobNameListResponseBody> body{};

  GetJobNameListResponse() {}

  explicit GetJobNameListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobNameListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobNameListResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobNameListResponse() = default;
};
class GetKeywordImportResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  GetKeywordImportResultRequest() {}

  explicit GetKeywordImportResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetKeywordImportResultRequest() = default;
};
class GetKeywordImportResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> i18nKey{};
  shared_ptr<vector<string>> illegalLengthKeywords{};
  shared_ptr<long> invalidCount{};
  shared_ptr<vector<string>> invalidKeywords{};
  shared_ptr<string> libId{};
  shared_ptr<long> progress{};
  shared_ptr<long> repeatCount{};
  shared_ptr<vector<string>> repeatKeywords{};
  shared_ptr<long> successCount{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalCount{};

  GetKeywordImportResultResponseBodyData() {}

  explicit GetKeywordImportResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (i18nKey) {
      res["I18nKey"] = boost::any(*i18nKey);
    }
    if (illegalLengthKeywords) {
      res["IllegalLengthKeywords"] = boost::any(*illegalLengthKeywords);
    }
    if (invalidCount) {
      res["InvalidCount"] = boost::any(*invalidCount);
    }
    if (invalidKeywords) {
      res["InvalidKeywords"] = boost::any(*invalidKeywords);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatKeywords) {
      res["RepeatKeywords"] = boost::any(*repeatKeywords);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("I18nKey") != m.end() && !m["I18nKey"].empty()) {
      i18nKey = make_shared<string>(boost::any_cast<string>(m["I18nKey"]));
    }
    if (m.find("IllegalLengthKeywords") != m.end() && !m["IllegalLengthKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalLengthKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalLengthKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      illegalLengthKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvalidCount") != m.end() && !m["InvalidCount"].empty()) {
      invalidCount = make_shared<long>(boost::any_cast<long>(m["InvalidCount"]));
    }
    if (m.find("InvalidKeywords") != m.end() && !m["InvalidKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatKeywords") != m.end() && !m["RepeatKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetKeywordImportResultResponseBodyData() = default;
};
class GetKeywordImportResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetKeywordImportResultResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetKeywordImportResultResponseBody() {}

  explicit GetKeywordImportResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetKeywordImportResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetKeywordImportResultResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetKeywordImportResultResponseBody() = default;
};
class GetKeywordImportResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKeywordImportResultResponseBody> body{};

  GetKeywordImportResultResponse() {}

  explicit GetKeywordImportResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKeywordImportResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKeywordImportResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetKeywordImportResultResponse() = default;
};
class GetKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> regionId{};

  GetKeywordLibRequest() {}

  explicit GetKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetKeywordLibRequest() = default;
};
class GetKeywordLibResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtModified{};
  shared_ptr<string> keywordCount{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> uid{};

  GetKeywordLibResponseBodyData() {}

  explicit GetKeywordLibResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (keywordCount) {
      res["KeywordCount"] = boost::any(*keywordCount);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("KeywordCount") != m.end() && !m["KeywordCount"].empty()) {
      keywordCount = make_shared<string>(boost::any_cast<string>(m["KeywordCount"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetKeywordLibResponseBodyData() = default;
};
class GetKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetKeywordLibResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetKeywordLibResponseBody() {}

  explicit GetKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetKeywordLibResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetKeywordLibResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetKeywordLibResponseBody() = default;
};
class GetKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKeywordLibResponseBody> body{};

  GetKeywordLibResponse() {}

  explicit GetKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~GetKeywordLibResponse() = default;
};
class GetOssCheckStatRequest : public Darabonba::Model {
public:
  shared_ptr<bool> byMonth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startDate{};

  GetOssCheckStatRequest() {}

  explicit GetOssCheckStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byMonth) {
      res["ByMonth"] = boost::any(*byMonth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByMonth") != m.end() && !m["ByMonth"].empty()) {
      byMonth = make_shared<bool>(boost::any_cast<bool>(m["ByMonth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetOssCheckStatRequest() = default;
};
class GetOssCheckStatResponseBodyBarChartY : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> name{};

  GetOssCheckStatResponseBodyBarChartY() {}

  explicit GetOssCheckStatResponseBodyBarChartY(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetOssCheckStatResponseBodyBarChartY() = default;
};
class GetOssCheckStatResponseBodyBarChart : public Darabonba::Model {
public:
  shared_ptr<vector<string>> x{};
  shared_ptr<vector<GetOssCheckStatResponseBodyBarChartY>> y{};

  GetOssCheckStatResponseBodyBarChart() {}

  explicit GetOssCheckStatResponseBodyBarChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      vector<boost::any> temp1;
      for(auto item1:*y){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Y"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["X"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["X"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      x = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      if (typeid(vector<boost::any>) == m["Y"].type()) {
        vector<GetOssCheckStatResponseBodyBarChartY> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Y"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOssCheckStatResponseBodyBarChartY model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        y = make_shared<vector<GetOssCheckStatResponseBodyBarChartY>>(expect1);
      }
    }
  }


  virtual ~GetOssCheckStatResponseBodyBarChart() = default;
};
class GetOssCheckStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOssCheckStatResponseBodyBarChart> barChart{};
  shared_ptr<string> requestId{};

  GetOssCheckStatResponseBody() {}

  explicit GetOssCheckStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (barChart) {
      res["BarChart"] = barChart ? boost::any(barChart->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BarChart") != m.end() && !m["BarChart"].empty()) {
      if (typeid(map<string, boost::any>) == m["BarChart"].type()) {
        GetOssCheckStatResponseBodyBarChart model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BarChart"]));
        barChart = make_shared<GetOssCheckStatResponseBodyBarChart>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOssCheckStatResponseBody() = default;
};
class GetOssCheckStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssCheckStatResponseBody> body{};

  GetOssCheckStatResponse() {}

  explicit GetOssCheckStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOssCheckStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssCheckStatResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssCheckStatResponse() = default;
};
class GetOssCheckStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetOssCheckStatusRequest() {}

  explicit GetOssCheckStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetOssCheckStatusRequest() = default;
};
class GetOssCheckStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<bool> buy{};
  shared_ptr<string> commodityCode{};
  shared_ptr<bool> indebt{};
  shared_ptr<string> ramStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> slsStatus{};

  GetOssCheckStatusResponseBody() {}

  explicit GetOssCheckStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (buy) {
      res["Buy"] = boost::any(*buy);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (indebt) {
      res["Indebt"] = boost::any(*indebt);
    }
    if (ramStatus) {
      res["RamStatus"] = boost::any(*ramStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsStatus) {
      res["SlsStatus"] = boost::any(*slsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Buy") != m.end() && !m["Buy"].empty()) {
      buy = make_shared<bool>(boost::any_cast<bool>(m["Buy"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Indebt") != m.end() && !m["Indebt"].empty()) {
      indebt = make_shared<bool>(boost::any_cast<bool>(m["Indebt"]));
    }
    if (m.find("RamStatus") != m.end() && !m["RamStatus"].empty()) {
      ramStatus = make_shared<string>(boost::any_cast<string>(m["RamStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsStatus") != m.end() && !m["SlsStatus"].empty()) {
      slsStatus = make_shared<string>(boost::any_cast<string>(m["SlsStatus"]));
    }
  }


  virtual ~GetOssCheckStatusResponseBody() = default;
};
class GetOssCheckStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssCheckStatusResponseBody> body{};

  GetOssCheckStatusResponse() {}

  explicit GetOssCheckStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOssCheckStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssCheckStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssCheckStatusResponse() = default;
};
class GetScanNumRequest : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<long> mediaType{};
  shared_ptr<string> regionId{};

  GetScanNumRequest() {}

  explicit GetScanNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetScanNumRequest() = default;
};
class GetScanNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> limitNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> scanNumber{};
  shared_ptr<long> sumNumber{};
  shared_ptr<bool> tag{};

  GetScanNumResponseBody() {}

  explicit GetScanNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limitNumber) {
      res["LimitNumber"] = boost::any(*limitNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanNumber) {
      res["ScanNumber"] = boost::any(*scanNumber);
    }
    if (sumNumber) {
      res["SumNumber"] = boost::any(*sumNumber);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LimitNumber") != m.end() && !m["LimitNumber"].empty()) {
      limitNumber = make_shared<long>(boost::any_cast<long>(m["LimitNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanNumber") != m.end() && !m["ScanNumber"].empty()) {
      scanNumber = make_shared<long>(boost::any_cast<long>(m["ScanNumber"]));
    }
    if (m.find("SumNumber") != m.end() && !m["SumNumber"].empty()) {
      sumNumber = make_shared<long>(boost::any_cast<long>(m["SumNumber"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<bool>(boost::any_cast<bool>(m["Tag"]));
    }
  }


  virtual ~GetScanNumResponseBody() = default;
};
class GetScanNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScanNumResponseBody> body{};

  GetScanNumResponse() {}

  explicit GetScanNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScanNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScanNumResponseBody>(model1);
      }
    }
  }


  virtual ~GetScanNumResponse() = default;
};
class GetScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, string>> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  GetScanResultRequest() {}

  explicit GetScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Query"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      query = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetScanResultRequest() = default;
};
class GetScanResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  GetScanResultShrinkRequest() {}

  explicit GetScanResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetScanResultShrinkRequest() = default;
};
class GetScanResultResponseBodyDataItemsResult : public Darabonba::Model {
public:
  shared_ptr<string> confidence{};
  shared_ptr<string> description{};
  shared_ptr<string> label{};

  GetScanResultResponseBodyDataItemsResult() {}

  explicit GetScanResultResponseBodyDataItemsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<string>(boost::any_cast<string>(m["Confidence"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~GetScanResultResponseBodyDataItemsResult() = default;
};
class GetScanResultResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> attackLevel{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> extFeedback{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<long> frameCount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<map<string, boost::any>>> imageLabels{};
  shared_ptr<string> imageService{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> labels{};
  shared_ptr<vector<string>> noLabels{};
  shared_ptr<long> offset{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestFrom{};
  shared_ptr<string> requestId{};
  shared_ptr<string> requestTime{};
  shared_ptr<vector<GetScanResultResponseBodyDataItemsResult>> result{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> riskTips{};
  shared_ptr<string> riskWords{};
  shared_ptr<string> scanResult{};
  shared_ptr<double> score{};
  shared_ptr<string> sensitiveLevel{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<map<string, boost::any>>> textLabels{};
  shared_ptr<string> thumbnail{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> url{};
  shared_ptr<vector<map<string, boost::any>>> voiceLabels{};
  shared_ptr<bool> voiceScanOpened{};
  shared_ptr<string> voiceService{};

  GetScanResultResponseBodyDataItems() {}

  explicit GetScanResultResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackLevel) {
      res["AttackLevel"] = boost::any(*attackLevel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extFeedback) {
      res["ExtFeedback"] = boost::any(*extFeedback);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (frameCount) {
      res["FrameCount"] = boost::any(*frameCount);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (imageLabels) {
      res["ImageLabels"] = boost::any(*imageLabels);
    }
    if (imageService) {
      res["ImageService"] = boost::any(*imageService);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (noLabels) {
      res["NoLabels"] = boost::any(*noLabels);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestFrom) {
      res["RequestFrom"] = boost::any(*requestFrom);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestTime) {
      res["RequestTime"] = boost::any(*requestTime);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (riskTips) {
      res["RiskTips"] = boost::any(*riskTips);
    }
    if (riskWords) {
      res["RiskWords"] = boost::any(*riskWords);
    }
    if (scanResult) {
      res["ScanResult"] = boost::any(*scanResult);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (sensitiveLevel) {
      res["SensitiveLevel"] = boost::any(*sensitiveLevel);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (textLabels) {
      res["TextLabels"] = boost::any(*textLabels);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (voiceLabels) {
      res["VoiceLabels"] = boost::any(*voiceLabels);
    }
    if (voiceScanOpened) {
      res["VoiceScanOpened"] = boost::any(*voiceScanOpened);
    }
    if (voiceService) {
      res["VoiceService"] = boost::any(*voiceService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackLevel") != m.end() && !m["AttackLevel"].empty()) {
      attackLevel = make_shared<string>(boost::any_cast<string>(m["AttackLevel"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExtFeedback") != m.end() && !m["ExtFeedback"].empty()) {
      extFeedback = make_shared<string>(boost::any_cast<string>(m["ExtFeedback"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FrameCount") != m.end() && !m["FrameCount"].empty()) {
      frameCount = make_shared<long>(boost::any_cast<long>(m["FrameCount"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ImageLabels") != m.end() && !m["ImageLabels"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ImageLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageLabels"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      imageLabels = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("ImageService") != m.end() && !m["ImageService"].empty()) {
      imageService = make_shared<string>(boost::any_cast<string>(m["ImageService"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("NoLabels") != m.end() && !m["NoLabels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NoLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NoLabels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noLabels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestFrom") != m.end() && !m["RequestFrom"].empty()) {
      requestFrom = make_shared<string>(boost::any_cast<string>(m["RequestFrom"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestTime") != m.end() && !m["RequestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["RequestTime"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetScanResultResponseBodyDataItemsResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScanResultResponseBodyDataItemsResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetScanResultResponseBodyDataItemsResult>>(expect1);
      }
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("RiskTips") != m.end() && !m["RiskTips"].empty()) {
      riskTips = make_shared<string>(boost::any_cast<string>(m["RiskTips"]));
    }
    if (m.find("RiskWords") != m.end() && !m["RiskWords"].empty()) {
      riskWords = make_shared<string>(boost::any_cast<string>(m["RiskWords"]));
    }
    if (m.find("ScanResult") != m.end() && !m["ScanResult"].empty()) {
      scanResult = make_shared<string>(boost::any_cast<string>(m["ScanResult"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SensitiveLevel") != m.end() && !m["SensitiveLevel"].empty()) {
      sensitiveLevel = make_shared<string>(boost::any_cast<string>(m["SensitiveLevel"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TextLabels") != m.end() && !m["TextLabels"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["TextLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TextLabels"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      textLabels = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VoiceLabels") != m.end() && !m["VoiceLabels"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["VoiceLabels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VoiceLabels"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      voiceLabels = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("VoiceScanOpened") != m.end() && !m["VoiceScanOpened"].empty()) {
      voiceScanOpened = make_shared<bool>(boost::any_cast<bool>(m["VoiceScanOpened"]));
    }
    if (m.find("VoiceService") != m.end() && !m["VoiceService"].empty()) {
      voiceService = make_shared<string>(boost::any_cast<string>(m["VoiceService"]));
    }
  }


  virtual ~GetScanResultResponseBodyDataItems() = default;
};
class GetScanResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetScanResultResponseBodyDataItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetScanResultResponseBodyData() {}

  explicit GetScanResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetScanResultResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScanResultResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetScanResultResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetScanResultResponseBodyData() = default;
};
class GetScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetScanResultResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetScanResultResponseBody() {}

  explicit GetScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetScanResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetScanResultResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetScanResultResponseBody() = default;
};
class GetScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScanResultResponseBody> body{};

  GetScanResultResponse() {}

  explicit GetScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetScanResultResponse() = default;
};
class GetServiceConfRequest : public Darabonba::Model {
public:
  shared_ptr<bool> byDefault{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> serviceCode{};

  GetServiceConfRequest() {}

  explicit GetServiceConfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byDefault) {
      res["ByDefault"] = boost::any(*byDefault);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByDefault") != m.end() && !m["ByDefault"].empty()) {
      byDefault = make_shared<bool>(boost::any_cast<bool>(m["ByDefault"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetServiceConfRequest() = default;
};
class GetServiceConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> customServiceConf{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> msg{};
  shared_ptr<map<string, boost::any>> option{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> uid{};

  GetServiceConfResponseBody() {}

  explicit GetServiceConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (customServiceConf) {
      res["CustomServiceConf"] = boost::any(*customServiceConf);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("CustomServiceConf") != m.end() && !m["CustomServiceConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomServiceConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customServiceConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Option"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      option = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetServiceConfResponseBody() = default;
};
class GetServiceConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceConfResponseBody> body{};

  GetServiceConfResponse() {}

  explicit GetServiceConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceConfResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceConfResponse() = default;
};
class GetServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};

  GetServiceConfigRequest() {}

  explicit GetServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetServiceConfigRequest() = default;
};
class GetServiceConfigResponseBodyDataCustomServiceConf : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keywordFilterLibs{};
  shared_ptr<vector<string>> keywordHitLibs{};
  shared_ptr<vector<string>> similarTextHitLibs{};

  GetServiceConfigResponseBodyDataCustomServiceConf() {}

  explicit GetServiceConfigResponseBodyDataCustomServiceConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordFilterLibs) {
      res["KeywordFilterLibs"] = boost::any(*keywordFilterLibs);
    }
    if (keywordHitLibs) {
      res["KeywordHitLibs"] = boost::any(*keywordHitLibs);
    }
    if (similarTextHitLibs) {
      res["SimilarTextHitLibs"] = boost::any(*similarTextHitLibs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordFilterLibs") != m.end() && !m["KeywordFilterLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordFilterLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordFilterLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordFilterLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeywordHitLibs") != m.end() && !m["KeywordHitLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordHitLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordHitLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordHitLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SimilarTextHitLibs") != m.end() && !m["SimilarTextHitLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SimilarTextHitLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SimilarTextHitLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      similarTextHitLibs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceConfigResponseBodyDataCustomServiceConf() = default;
};
class GetServiceConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetServiceConfigResponseBodyDataCustomServiceConf> customServiceConf{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> uid{};

  GetServiceConfigResponseBodyData() {}

  explicit GetServiceConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customServiceConf) {
      res["CustomServiceConf"] = customServiceConf ? boost::any(customServiceConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomServiceConf") != m.end() && !m["CustomServiceConf"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomServiceConf"].type()) {
        GetServiceConfigResponseBodyDataCustomServiceConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomServiceConf"]));
        customServiceConf = make_shared<GetServiceConfigResponseBodyDataCustomServiceConf>(model1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetServiceConfigResponseBodyData() = default;
};
class GetServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetServiceConfigResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetServiceConfigResponseBody() {}

  explicit GetServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetServiceConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetServiceConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetServiceConfigResponseBody() = default;
};
class GetServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceConfigResponseBody> body{};

  GetServiceConfigResponse() {}

  explicit GetServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceConfigResponse() = default;
};
class GetServiceLabelConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};

  GetServiceLabelConfigRequest() {}

  explicit GetServiceLabelConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetServiceLabelConfigRequest() = default;
};
class GetServiceLabelConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> data{};
  shared_ptr<string> requestId{};

  GetServiceLabelConfigResponseBody() {}

  explicit GetServiceLabelConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      data = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetServiceLabelConfigResponseBody() = default;
};
class GetServiceLabelConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceLabelConfigResponseBody> body{};

  GetServiceLabelConfigResponse() {}

  explicit GetServiceLabelConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceLabelConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLabelConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLabelConfigResponse() = default;
};
class GetStockOssCheckTasksListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isInc{};
  shared_ptr<long> mediaType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskType{};

  GetStockOssCheckTasksListRequest() {}

  explicit GetStockOssCheckTasksListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isInc) {
      res["IsInc"] = boost::any(*isInc);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsInc") != m.end() && !m["IsInc"].empty()) {
      isInc = make_shared<bool>(boost::any_cast<bool>(m["IsInc"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetStockOssCheckTasksListRequest() = default;
};
class GetStockOssCheckTasksListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isInc{};
  shared_ptr<long> mediaType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskType{};

  GetStockOssCheckTasksListShrinkRequest() {}

  explicit GetStockOssCheckTasksListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isInc) {
      res["IsInc"] = boost::any(*isInc);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsInc") != m.end() && !m["IsInc"].empty()) {
      isInc = make_shared<bool>(boost::any_cast<bool>(m["IsInc"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetStockOssCheckTasksListShrinkRequest() = default;
};
class GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> copyFrom{};
  shared_ptr<bool> isCopy{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};

  GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos() {}

  explicit GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (copyFrom) {
      res["CopyFrom"] = boost::any(*copyFrom);
    }
    if (isCopy) {
      res["IsCopy"] = boost::any(*isCopy);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CopyFrom") != m.end() && !m["CopyFrom"].empty()) {
      copyFrom = make_shared<string>(boost::any_cast<string>(m["CopyFrom"]));
    }
    if (m.find("IsCopy") != m.end() && !m["IsCopy"].empty()) {
      isCopy = make_shared<bool>(boost::any_cast<bool>(m["IsCopy"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos() = default;
};
class GetStockOssCheckTasksListResponseBodyItemsConfig : public Darabonba::Model {
public:
  shared_ptr<long> callbackId{};
  shared_ptr<bool> distinctHistoryTasks{};
  shared_ptr<string> endTime{};
  shared_ptr<long> executeDate{};
  shared_ptr<string> executeTime{};
  shared_ptr<bool> freeze{};
  shared_ptr<bool> freezeHighRisk1{};
  shared_ptr<bool> freezeHighRisk2{};
  shared_ptr<bool> freezeMediumRisk1{};
  shared_ptr<bool> freezeMediumRisk2{};
  shared_ptr<string> freezeType{};
  shared_ptr<string> prefixFilterType{};
  shared_ptr<vector<string>> prefixFilters{};
  shared_ptr<long> priority{};
  shared_ptr<long> scanLimit{};
  shared_ptr<bool> scanNoFileType{};
  shared_ptr<long> scanResourceType{};
  shared_ptr<vector<string>> scanService{};
  shared_ptr<vector<GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos>> scanServiceInfos{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskCycle{};

  GetStockOssCheckTasksListResponseBodyItemsConfig() {}

  explicit GetStockOssCheckTasksListResponseBodyItemsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackId) {
      res["CallbackId"] = boost::any(*callbackId);
    }
    if (distinctHistoryTasks) {
      res["DistinctHistoryTasks"] = boost::any(*distinctHistoryTasks);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeDate) {
      res["ExecuteDate"] = boost::any(*executeDate);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (freeze) {
      res["Freeze"] = boost::any(*freeze);
    }
    if (freezeHighRisk1) {
      res["FreezeHighRisk1"] = boost::any(*freezeHighRisk1);
    }
    if (freezeHighRisk2) {
      res["FreezeHighRisk2"] = boost::any(*freezeHighRisk2);
    }
    if (freezeMediumRisk1) {
      res["FreezeMediumRisk1"] = boost::any(*freezeMediumRisk1);
    }
    if (freezeMediumRisk2) {
      res["FreezeMediumRisk2"] = boost::any(*freezeMediumRisk2);
    }
    if (freezeType) {
      res["FreezeType"] = boost::any(*freezeType);
    }
    if (prefixFilterType) {
      res["PrefixFilterType"] = boost::any(*prefixFilterType);
    }
    if (prefixFilters) {
      res["PrefixFilters"] = boost::any(*prefixFilters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (scanLimit) {
      res["ScanLimit"] = boost::any(*scanLimit);
    }
    if (scanNoFileType) {
      res["ScanNoFileType"] = boost::any(*scanNoFileType);
    }
    if (scanResourceType) {
      res["ScanResourceType"] = boost::any(*scanResourceType);
    }
    if (scanService) {
      res["ScanService"] = boost::any(*scanService);
    }
    if (scanServiceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*scanServiceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScanServiceInfos"] = boost::any(temp1);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskCycle) {
      res["TaskCycle"] = boost::any(*taskCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackId") != m.end() && !m["CallbackId"].empty()) {
      callbackId = make_shared<long>(boost::any_cast<long>(m["CallbackId"]));
    }
    if (m.find("DistinctHistoryTasks") != m.end() && !m["DistinctHistoryTasks"].empty()) {
      distinctHistoryTasks = make_shared<bool>(boost::any_cast<bool>(m["DistinctHistoryTasks"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteDate") != m.end() && !m["ExecuteDate"].empty()) {
      executeDate = make_shared<long>(boost::any_cast<long>(m["ExecuteDate"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("Freeze") != m.end() && !m["Freeze"].empty()) {
      freeze = make_shared<bool>(boost::any_cast<bool>(m["Freeze"]));
    }
    if (m.find("FreezeHighRisk1") != m.end() && !m["FreezeHighRisk1"].empty()) {
      freezeHighRisk1 = make_shared<bool>(boost::any_cast<bool>(m["FreezeHighRisk1"]));
    }
    if (m.find("FreezeHighRisk2") != m.end() && !m["FreezeHighRisk2"].empty()) {
      freezeHighRisk2 = make_shared<bool>(boost::any_cast<bool>(m["FreezeHighRisk2"]));
    }
    if (m.find("FreezeMediumRisk1") != m.end() && !m["FreezeMediumRisk1"].empty()) {
      freezeMediumRisk1 = make_shared<bool>(boost::any_cast<bool>(m["FreezeMediumRisk1"]));
    }
    if (m.find("FreezeMediumRisk2") != m.end() && !m["FreezeMediumRisk2"].empty()) {
      freezeMediumRisk2 = make_shared<bool>(boost::any_cast<bool>(m["FreezeMediumRisk2"]));
    }
    if (m.find("FreezeType") != m.end() && !m["FreezeType"].empty()) {
      freezeType = make_shared<string>(boost::any_cast<string>(m["FreezeType"]));
    }
    if (m.find("PrefixFilterType") != m.end() && !m["PrefixFilterType"].empty()) {
      prefixFilterType = make_shared<string>(boost::any_cast<string>(m["PrefixFilterType"]));
    }
    if (m.find("PrefixFilters") != m.end() && !m["PrefixFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrefixFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrefixFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prefixFilters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ScanLimit") != m.end() && !m["ScanLimit"].empty()) {
      scanLimit = make_shared<long>(boost::any_cast<long>(m["ScanLimit"]));
    }
    if (m.find("ScanNoFileType") != m.end() && !m["ScanNoFileType"].empty()) {
      scanNoFileType = make_shared<bool>(boost::any_cast<bool>(m["ScanNoFileType"]));
    }
    if (m.find("ScanResourceType") != m.end() && !m["ScanResourceType"].empty()) {
      scanResourceType = make_shared<long>(boost::any_cast<long>(m["ScanResourceType"]));
    }
    if (m.find("ScanService") != m.end() && !m["ScanService"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScanService"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScanService"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scanService = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScanServiceInfos") != m.end() && !m["ScanServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ScanServiceInfos"].type()) {
        vector<GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScanServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scanServiceInfos = make_shared<vector<GetStockOssCheckTasksListResponseBodyItemsConfigScanServiceInfos>>(expect1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskCycle") != m.end() && !m["TaskCycle"].empty()) {
      taskCycle = make_shared<long>(boost::any_cast<long>(m["TaskCycle"]));
    }
  }


  virtual ~GetStockOssCheckTasksListResponseBodyItemsConfig() = default;
};
class GetStockOssCheckTasksListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<GetStockOssCheckTasksListResponseBodyItemsConfig> config{};
  shared_ptr<string> endTime{};
  shared_ptr<long> finishNum{};
  shared_ptr<bool> isInc{};
  shared_ptr<string> lastExecuteDate{};
  shared_ptr<long> mediaType{};
  shared_ptr<string> nextExecuteDate{};
  shared_ptr<long> objectNum{};
  shared_ptr<long> searchNum{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};

  GetStockOssCheckTasksListResponseBodyItems() {}

  explicit GetStockOssCheckTasksListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (finishNum) {
      res["FinishNum"] = boost::any(*finishNum);
    }
    if (isInc) {
      res["IsInc"] = boost::any(*isInc);
    }
    if (lastExecuteDate) {
      res["LastExecuteDate"] = boost::any(*lastExecuteDate);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (nextExecuteDate) {
      res["NextExecuteDate"] = boost::any(*nextExecuteDate);
    }
    if (objectNum) {
      res["ObjectNum"] = boost::any(*objectNum);
    }
    if (searchNum) {
      res["SearchNum"] = boost::any(*searchNum);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        GetStockOssCheckTasksListResponseBodyItemsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<GetStockOssCheckTasksListResponseBodyItemsConfig>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FinishNum") != m.end() && !m["FinishNum"].empty()) {
      finishNum = make_shared<long>(boost::any_cast<long>(m["FinishNum"]));
    }
    if (m.find("IsInc") != m.end() && !m["IsInc"].empty()) {
      isInc = make_shared<bool>(boost::any_cast<bool>(m["IsInc"]));
    }
    if (m.find("LastExecuteDate") != m.end() && !m["LastExecuteDate"].empty()) {
      lastExecuteDate = make_shared<string>(boost::any_cast<string>(m["LastExecuteDate"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<long>(boost::any_cast<long>(m["MediaType"]));
    }
    if (m.find("NextExecuteDate") != m.end() && !m["NextExecuteDate"].empty()) {
      nextExecuteDate = make_shared<string>(boost::any_cast<string>(m["NextExecuteDate"]));
    }
    if (m.find("ObjectNum") != m.end() && !m["ObjectNum"].empty()) {
      objectNum = make_shared<long>(boost::any_cast<long>(m["ObjectNum"]));
    }
    if (m.find("SearchNum") != m.end() && !m["SearchNum"].empty()) {
      searchNum = make_shared<long>(boost::any_cast<long>(m["SearchNum"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
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
  }


  virtual ~GetStockOssCheckTasksListResponseBodyItems() = default;
};
class GetStockOssCheckTasksListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetStockOssCheckTasksListResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetStockOssCheckTasksListResponseBody() {}

  explicit GetStockOssCheckTasksListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetStockOssCheckTasksListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStockOssCheckTasksListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetStockOssCheckTasksListResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetStockOssCheckTasksListResponseBody() = default;
};
class GetStockOssCheckTasksListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStockOssCheckTasksListResponseBody> body{};

  GetStockOssCheckTasksListResponse() {}

  explicit GetStockOssCheckTasksListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStockOssCheckTasksListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStockOssCheckTasksListResponseBody>(model1);
      }
    }
  }


  virtual ~GetStockOssCheckTasksListResponse() = default;
};
class GetTextScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, string>> query{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  GetTextScanResultRequest() {}

  explicit GetTextScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Query"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      query = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetTextScanResultRequest() = default;
};
class GetTextScanResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  GetTextScanResultShrinkRequest() {}

  explicit GetTextScanResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetTextScanResultShrinkRequest() = default;
};
class GetTextScanResultResponseBodyDataItemsResult : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> description{};
  shared_ptr<string> label{};

  GetTextScanResultResponseBodyDataItemsResult() {}

  explicit GetTextScanResultResponseBodyDataItemsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~GetTextScanResultResponseBodyDataItemsResult() = default;
};
class GetTextScanResultResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> bailianRequestId{};
  shared_ptr<string> content{};
  shared_ptr<string> extFeedback{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> labels{};
  shared_ptr<string> requestId{};
  shared_ptr<string> requestTime{};
  shared_ptr<vector<GetTextScanResultResponseBodyDataItemsResult>> result{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> scanResult{};
  shared_ptr<double> score{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};

  GetTextScanResultResponseBodyDataItems() {}

  explicit GetTextScanResultResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bailianRequestId) {
      res["BailianRequestId"] = boost::any(*bailianRequestId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (extFeedback) {
      res["ExtFeedback"] = boost::any(*extFeedback);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestTime) {
      res["RequestTime"] = boost::any(*requestTime);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (scanResult) {
      res["ScanResult"] = boost::any(*scanResult);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BailianRequestId") != m.end() && !m["BailianRequestId"].empty()) {
      bailianRequestId = make_shared<string>(boost::any_cast<string>(m["BailianRequestId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ExtFeedback") != m.end() && !m["ExtFeedback"].empty()) {
      extFeedback = make_shared<string>(boost::any_cast<string>(m["ExtFeedback"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestTime") != m.end() && !m["RequestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["RequestTime"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetTextScanResultResponseBodyDataItemsResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTextScanResultResponseBodyDataItemsResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetTextScanResultResponseBodyDataItemsResult>>(expect1);
      }
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("ScanResult") != m.end() && !m["ScanResult"].empty()) {
      scanResult = make_shared<string>(boost::any_cast<string>(m["ScanResult"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTextScanResultResponseBodyDataItems() = default;
};
class GetTextScanResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetTextScanResultResponseBodyDataItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetTextScanResultResponseBodyData() {}

  explicit GetTextScanResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetTextScanResultResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTextScanResultResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetTextScanResultResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTextScanResultResponseBodyData() = default;
};
class GetTextScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTextScanResultResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTextScanResultResponseBody() {}

  explicit GetTextScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTextScanResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTextScanResultResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTextScanResultResponseBody() = default;
};
class GetTextScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTextScanResultResponseBody> body{};

  GetTextScanResultResponse() {}

  explicit GetTextScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTextScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTextScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTextScanResultResponse() = default;
};
class GetUploadInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  GetUploadInfoRequest() {}

  explicit GetUploadInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetUploadInfoRequest() = default;
};
class GetUploadInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<long> code{};
  shared_ptr<long> expire{};
  shared_ptr<string> folder{};
  shared_ptr<string> host{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> key{};
  shared_ptr<string> msg{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};
  shared_ptr<bool> success{};

  GetUploadInfoResponseBody() {}

  explicit GetUploadInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUploadInfoResponseBody() = default;
};
class GetUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUploadInfoResponseBody> body{};

  GetUploadInfoResponse() {}

  explicit GetUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUploadInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUploadInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUploadInfoResponse() = default;
};
class GetUserBuyStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> regionId{};

  GetUserBuyStatusRequest() {}

  explicit GetUserBuyStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetUserBuyStatusRequest() = default;
};
class GetUserBuyStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<bool> buy{};
  shared_ptr<bool> indebt{};
  shared_ptr<string> tag{};

  GetUserBuyStatusResponseBodyData() {}

  explicit GetUserBuyStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (buy) {
      res["Buy"] = boost::any(*buy);
    }
    if (indebt) {
      res["Indebt"] = boost::any(*indebt);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("Buy") != m.end() && !m["Buy"].empty()) {
      buy = make_shared<bool>(boost::any_cast<bool>(m["Buy"]));
    }
    if (m.find("Indebt") != m.end() && !m["Indebt"].empty()) {
      indebt = make_shared<bool>(boost::any_cast<bool>(m["Indebt"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetUserBuyStatusResponseBodyData() = default;
};
class GetUserBuyStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetUserBuyStatusResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserBuyStatusResponseBody() {}

  explicit GetUserBuyStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUserBuyStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserBuyStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserBuyStatusResponseBody() = default;
};
class GetUserBuyStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserBuyStatusResponseBody> body{};

  GetUserBuyStatusResponse() {}

  explicit GetUserBuyStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserBuyStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserBuyStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserBuyStatusResponse() = default;
};
class ListAnswerLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListAnswerLibRequest() {}

  explicit ListAnswerLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAnswerLibRequest() = default;
};
class ListAnswerLibResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> answerCount{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> uid{};

  ListAnswerLibResponseBodyData() {}

  explicit ListAnswerLibResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerCount) {
      res["AnswerCount"] = boost::any(*answerCount);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerCount") != m.end() && !m["AnswerCount"].empty()) {
      answerCount = make_shared<long>(boost::any_cast<long>(m["AnswerCount"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ListAnswerLibResponseBodyData() = default;
};
class ListAnswerLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAnswerLibResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListAnswerLibResponseBody() {}

  explicit ListAnswerLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAnswerLibResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnswerLibResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnswerLibResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAnswerLibResponseBody() = default;
};
class ListAnswerLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnswerLibResponseBody> body{};

  ListAnswerLibResponse() {}

  explicit ListAnswerLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAnswerLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnswerLibResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnswerLibResponse() = default;
};
class ListCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListCallbackRequest() {}

  explicit ListCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListCallbackRequest() = default;
};
class ListCallbackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cryptType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> seed{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  ListCallbackResponseBodyData() {}

  explicit ListCallbackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListCallbackResponseBodyData() = default;
};
class ListCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCallbackResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListCallbackResponseBody() {}

  explicit ListCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCallbackResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCallbackResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCallbackResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCallbackResponseBody() = default;
};
class ListCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCallbackResponseBody> body{};

  ListCallbackResponse() {}

  explicit ListCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~ListCallbackResponse() = default;
};
class ListImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListImageLibRequest() {}

  explicit ListImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListImageLibRequest() = default;
};
class ListImageLibResponseBodyLibList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<long> freeInspection{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> imageNum{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};

  ListImageLibResponseBodyLibList() {}

  explicit ListImageLibResponseBodyLibList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (freeInspection) {
      res["FreeInspection"] = boost::any(*freeInspection);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (imageNum) {
      res["ImageNum"] = boost::any(*imageNum);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("FreeInspection") != m.end() && !m["FreeInspection"].empty()) {
      freeInspection = make_shared<long>(boost::any_cast<long>(m["FreeInspection"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ImageNum") != m.end() && !m["ImageNum"].empty()) {
      imageNum = make_shared<long>(boost::any_cast<long>(m["ImageNum"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
  }


  virtual ~ListImageLibResponseBodyLibList() = default;
};
class ListImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListImageLibResponseBodyLibList>> libList{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListImageLibResponseBody() {}

  explicit ListImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (libList) {
      vector<boost::any> temp1;
      for(auto item1:*libList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LibList"] = boost::any(temp1);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("LibList") != m.end() && !m["LibList"].empty()) {
      if (typeid(vector<boost::any>) == m["LibList"].type()) {
        vector<ListImageLibResponseBodyLibList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LibList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImageLibResponseBodyLibList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        libList = make_shared<vector<ListImageLibResponseBodyLibList>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListImageLibResponseBody() = default;
};
class ListImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImageLibResponseBody> body{};

  ListImageLibResponse() {}

  explicit ListImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~ListImageLibResponse() = default;
};
class ListImagesFromLibRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<string> imgId{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};

  ListImagesFromLibRequest() {}

  explicit ListImagesFromLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (imgId) {
      res["ImgId"] = boost::any(*imgId);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ImgId") != m.end() && !m["ImgId"].empty()) {
      imgId = make_shared<string>(boost::any_cast<string>(m["ImgId"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ListImagesFromLibRequest() = default;
};
class ListImagesFromLibShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<string> imgId{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};

  ListImagesFromLibShrinkRequest() {}

  explicit ListImagesFromLibShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (imgId) {
      res["ImgId"] = boost::any(*imgId);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ImgId") != m.end() && !m["ImgId"].empty()) {
      imgId = make_shared<string>(boost::any_cast<string>(m["ImgId"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ListImagesFromLibShrinkRequest() = default;
};
class ListImagesFromLibResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> thumbnailUrl{};

  ListImagesFromLibResponseBodyItems() {}

  explicit ListImagesFromLibResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (thumbnailUrl) {
      res["ThumbnailUrl"] = boost::any(*thumbnailUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ThumbnailUrl") != m.end() && !m["ThumbnailUrl"].empty()) {
      thumbnailUrl = make_shared<string>(boost::any_cast<string>(m["ThumbnailUrl"]));
    }
  }


  virtual ~ListImagesFromLibResponseBodyItems() = default;
};
class ListImagesFromLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListImagesFromLibResponseBodyItems>> items{};
  shared_ptr<string> msg{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListImagesFromLibResponseBody() {}

  explicit ListImagesFromLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListImagesFromLibResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesFromLibResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListImagesFromLibResponseBodyItems>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
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
  }


  virtual ~ListImagesFromLibResponseBody() = default;
};
class ListImagesFromLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImagesFromLibResponseBody> body{};

  ListImagesFromLibResponse() {}

  explicit ListImagesFromLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListImagesFromLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesFromLibResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesFromLibResponse() = default;
};
class ListKeywordLibsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListKeywordLibsRequest() {}

  explicit ListKeywordLibsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListKeywordLibsRequest() = default;
};
class ListKeywordLibsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtModified{};
  shared_ptr<string> keywordCount{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> serviceCodes{};
  shared_ptr<string> uid{};

  ListKeywordLibsResponseBodyData() {}

  explicit ListKeywordLibsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (keywordCount) {
      res["KeywordCount"] = boost::any(*keywordCount);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (serviceCodes) {
      res["ServiceCodes"] = boost::any(*serviceCodes);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("KeywordCount") != m.end() && !m["KeywordCount"].empty()) {
      keywordCount = make_shared<string>(boost::any_cast<string>(m["KeywordCount"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("ServiceCodes") != m.end() && !m["ServiceCodes"].empty()) {
      serviceCodes = make_shared<string>(boost::any_cast<string>(m["ServiceCodes"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ListKeywordLibsResponseBodyData() = default;
};
class ListKeywordLibsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListKeywordLibsResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListKeywordLibsResponseBody() {}

  explicit ListKeywordLibsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListKeywordLibsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListKeywordLibsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListKeywordLibsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListKeywordLibsResponseBody() = default;
};
class ListKeywordLibsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListKeywordLibsResponseBody> body{};

  ListKeywordLibsResponse() {}

  explicit ListKeywordLibsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeywordLibsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeywordLibsResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeywordLibsResponse() = default;
};
class ListKeywordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> word{};

  ListKeywordsRequest() {}

  explicit ListKeywordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~ListKeywordsRequest() = default;
};
class ListKeywordsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> word{};

  ListKeywordsShrinkRequest() {}

  explicit ListKeywordsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~ListKeywordsShrinkRequest() = default;
};
class ListKeywordsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> keywordLibId{};
  shared_ptr<long> keywordMd5Id{};
  shared_ptr<string> word{};

  ListKeywordsResponseBodyDataItems() {}

  explicit ListKeywordsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    if (keywordMd5Id) {
      res["KeywordMd5Id"] = boost::any(*keywordMd5Id);
    }
    if (word) {
      res["Word"] = boost::any(*word);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<string>(boost::any_cast<string>(m["KeywordLibId"]));
    }
    if (m.find("KeywordMd5Id") != m.end() && !m["KeywordMd5Id"].empty()) {
      keywordMd5Id = make_shared<long>(boost::any_cast<long>(m["KeywordMd5Id"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~ListKeywordsResponseBodyDataItems() = default;
};
class ListKeywordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListKeywordsResponseBodyDataItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListKeywordsResponseBodyData() {}

  explicit ListKeywordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListKeywordsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListKeywordsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListKeywordsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListKeywordsResponseBodyData() = default;
};
class ListKeywordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListKeywordsResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListKeywordsResponseBody() {}

  explicit ListKeywordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListKeywordsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListKeywordsResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListKeywordsResponseBody() = default;
};
class ListKeywordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListKeywordsResponseBody> body{};

  ListKeywordsResponse() {}

  explicit ListKeywordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeywordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeywordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeywordsResponse() = default;
};
class ListOssCheckResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> finishNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};
  shared_ptr<string> startDate{};
  shared_ptr<long> status{};

  ListOssCheckResultRequest() {}

  explicit ListOssCheckResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (finishNum) {
      res["FinishNum"] = boost::any(*finishNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FinishNum") != m.end() && !m["FinishNum"].empty()) {
      finishNum = make_shared<long>(boost::any_cast<long>(m["FinishNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListOssCheckResultRequest() = default;
};
class ListOssCheckResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> finishNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> startDate{};
  shared_ptr<long> status{};

  ListOssCheckResultShrinkRequest() {}

  explicit ListOssCheckResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (finishNum) {
      res["FinishNum"] = boost::any(*finishNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FinishNum") != m.end() && !m["FinishNum"].empty()) {
      finishNum = make_shared<long>(boost::any_cast<long>(m["FinishNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListOssCheckResultShrinkRequest() = default;
};
class ListOssCheckResultResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> code{};
  shared_ptr<string> contentType{};
  shared_ptr<string> copyFrom{};
  shared_ptr<string> freezeStatus{};
  shared_ptr<string> freezeType{};
  shared_ptr<string> imageUrl{};
  shared_ptr<bool> isCopy{};
  shared_ptr<string> jobName{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<vector<string>> labels2{};
  shared_ptr<string> md5{};
  shared_ptr<string> msg{};
  shared_ptr<string> object{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> riskLevel0{};
  shared_ptr<string> riskLevel2{};
  shared_ptr<string> scanResult{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> taskId{};
  shared_ptr<string> url{};

  ListOssCheckResultResponseBodyItems() {}

  explicit ListOssCheckResultResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (copyFrom) {
      res["CopyFrom"] = boost::any(*copyFrom);
    }
    if (freezeStatus) {
      res["FreezeStatus"] = boost::any(*freezeStatus);
    }
    if (freezeType) {
      res["FreezeType"] = boost::any(*freezeType);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCopy) {
      res["IsCopy"] = boost::any(*isCopy);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (labels2) {
      res["Labels2"] = boost::any(*labels2);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (riskLevel0) {
      res["RiskLevel0"] = boost::any(*riskLevel0);
    }
    if (riskLevel2) {
      res["RiskLevel2"] = boost::any(*riskLevel2);
    }
    if (scanResult) {
      res["ScanResult"] = boost::any(*scanResult);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("CopyFrom") != m.end() && !m["CopyFrom"].empty()) {
      copyFrom = make_shared<string>(boost::any_cast<string>(m["CopyFrom"]));
    }
    if (m.find("FreezeStatus") != m.end() && !m["FreezeStatus"].empty()) {
      freezeStatus = make_shared<string>(boost::any_cast<string>(m["FreezeStatus"]));
    }
    if (m.find("FreezeType") != m.end() && !m["FreezeType"].empty()) {
      freezeType = make_shared<string>(boost::any_cast<string>(m["FreezeType"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCopy") != m.end() && !m["IsCopy"].empty()) {
      isCopy = make_shared<bool>(boost::any_cast<bool>(m["IsCopy"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Labels2") != m.end() && !m["Labels2"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels2"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels2"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels2 = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("RiskLevel0") != m.end() && !m["RiskLevel0"].empty()) {
      riskLevel0 = make_shared<string>(boost::any_cast<string>(m["RiskLevel0"]));
    }
    if (m.find("RiskLevel2") != m.end() && !m["RiskLevel2"].empty()) {
      riskLevel2 = make_shared<string>(boost::any_cast<string>(m["RiskLevel2"]));
    }
    if (m.find("ScanResult") != m.end() && !m["ScanResult"].empty()) {
      scanResult = make_shared<string>(boost::any_cast<string>(m["ScanResult"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListOssCheckResultResponseBodyItems() = default;
};
class ListOssCheckResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListOssCheckResultResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListOssCheckResultResponseBody() {}

  explicit ListOssCheckResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListOssCheckResultResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOssCheckResultResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListOssCheckResultResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOssCheckResultResponseBody() = default;
};
class ListOssCheckResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOssCheckResultResponseBody> body{};

  ListOssCheckResultResponse() {}

  explicit ListOssCheckResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOssCheckResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOssCheckResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListOssCheckResultResponse() = default;
};
class ListServiceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> useStatus{};

  ListServiceConfigsRequest() {}

  explicit ListServiceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (useStatus) {
      res["UseStatus"] = boost::any(*useStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UseStatus") != m.end() && !m["UseStatus"].empty()) {
      useStatus = make_shared<string>(boost::any_cast<string>(m["UseStatus"]));
    }
  }


  virtual ~ListServiceConfigsRequest() = default;
};
class ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule : public Darabonba::Model {
public:
  shared_ptr<vector<string>> services{};

  ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule() {}

  explicit ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["Services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Services"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      services = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule() = default;
};
class ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule : public Darabonba::Model {
public:
  shared_ptr<vector<string>> services{};

  ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule() {}

  explicit ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["Services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Services"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      services = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule() = default;
};
class ListServiceConfigsResponseBodyDataCustomServiceConfRules : public Darabonba::Model {
public:
  shared_ptr<ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule> imageScanRule{};
  shared_ptr<long> index{};
  shared_ptr<ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule> textScanRule{};

  ListServiceConfigsResponseBodyDataCustomServiceConfRules() {}

  explicit ListServiceConfigsResponseBodyDataCustomServiceConfRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageScanRule) {
      res["ImageScanRule"] = imageScanRule ? boost::any(imageScanRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (textScanRule) {
      res["TextScanRule"] = textScanRule ? boost::any(textScanRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageScanRule") != m.end() && !m["ImageScanRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScanRule"].type()) {
        ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScanRule"]));
        imageScanRule = make_shared<ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule>(model1);
      }
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("TextScanRule") != m.end() && !m["TextScanRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextScanRule"].type()) {
        ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextScanRule"]));
        textScanRule = make_shared<ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule>(model1);
      }
    }
  }


  virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRules() = default;
};
class ListServiceConfigsResponseBodyDataCustomServiceConf : public Darabonba::Model {
public:
  shared_ptr<string> audioService{};
  shared_ptr<vector<string>> imageService{};
  shared_ptr<vector<string>> keywordFilterLibs{};
  shared_ptr<vector<string>> keywordHitLibs{};
  shared_ptr<vector<ListServiceConfigsResponseBodyDataCustomServiceConfRules>> rules{};
  shared_ptr<vector<string>> similarTextHitLibs{};

  ListServiceConfigsResponseBodyDataCustomServiceConf() {}

  explicit ListServiceConfigsResponseBodyDataCustomServiceConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioService) {
      res["AudioService"] = boost::any(*audioService);
    }
    if (imageService) {
      res["ImageService"] = boost::any(*imageService);
    }
    if (keywordFilterLibs) {
      res["KeywordFilterLibs"] = boost::any(*keywordFilterLibs);
    }
    if (keywordHitLibs) {
      res["KeywordHitLibs"] = boost::any(*keywordHitLibs);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (similarTextHitLibs) {
      res["SimilarTextHitLibs"] = boost::any(*similarTextHitLibs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioService") != m.end() && !m["AudioService"].empty()) {
      audioService = make_shared<string>(boost::any_cast<string>(m["AudioService"]));
    }
    if (m.find("ImageService") != m.end() && !m["ImageService"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageService"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageService"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageService = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeywordFilterLibs") != m.end() && !m["KeywordFilterLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordFilterLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordFilterLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordFilterLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeywordHitLibs") != m.end() && !m["KeywordHitLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordHitLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordHitLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordHitLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListServiceConfigsResponseBodyDataCustomServiceConfRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceConfigsResponseBodyDataCustomServiceConfRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListServiceConfigsResponseBodyDataCustomServiceConfRules>>(expect1);
      }
    }
    if (m.find("SimilarTextHitLibs") != m.end() && !m["SimilarTextHitLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SimilarTextHitLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SimilarTextHitLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      similarTextHitLibs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceConfigsResponseBodyDataCustomServiceConf() = default;
};
class ListServiceConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<string> copyFrom{};
  shared_ptr<ListServiceConfigsResponseBodyDataCustomServiceConf> customServiceConf{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> option{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceDesc{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> uid{};
  shared_ptr<string> useStatus{};

  ListServiceConfigsResponseBodyData() {}

  explicit ListServiceConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (copyFrom) {
      res["CopyFrom"] = boost::any(*copyFrom);
    }
    if (customServiceConf) {
      res["CustomServiceConf"] = customServiceConf ? boost::any(customServiceConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceDesc) {
      res["ServiceDesc"] = boost::any(*serviceDesc);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (useStatus) {
      res["UseStatus"] = boost::any(*useStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("CopyFrom") != m.end() && !m["CopyFrom"].empty()) {
      copyFrom = make_shared<string>(boost::any_cast<string>(m["CopyFrom"]));
    }
    if (m.find("CustomServiceConf") != m.end() && !m["CustomServiceConf"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomServiceConf"].type()) {
        ListServiceConfigsResponseBodyDataCustomServiceConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomServiceConf"]));
        customServiceConf = make_shared<ListServiceConfigsResponseBodyDataCustomServiceConf>(model1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Option"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      option = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceDesc") != m.end() && !m["ServiceDesc"].empty()) {
      serviceDesc = make_shared<string>(boost::any_cast<string>(m["ServiceDesc"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UseStatus") != m.end() && !m["UseStatus"].empty()) {
      useStatus = make_shared<string>(boost::any_cast<string>(m["UseStatus"]));
    }
  }


  virtual ~ListServiceConfigsResponseBodyData() = default;
};
class ListServiceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListServiceConfigsResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListServiceConfigsResponseBody() {}

  explicit ListServiceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListServiceConfigsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceConfigsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServiceConfigsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListServiceConfigsResponseBody() = default;
};
class ListServiceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceConfigsResponseBody> body{};

  ListServiceConfigsResponse() {}

  explicit ListServiceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceConfigsResponse() = default;
};
class ModifyAnswerLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};

  ModifyAnswerLibRequest() {}

  explicit ModifyAnswerLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAnswerLibRequest() = default;
};
class ModifyAnswerLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ModifyAnswerLibResponseBody() {}

  explicit ModifyAnswerLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAnswerLibResponseBody() = default;
};
class ModifyAnswerLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAnswerLibResponseBody> body{};

  ModifyAnswerLibResponse() {}

  explicit ModifyAnswerLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAnswerLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAnswerLibResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAnswerLibResponse() = default;
};
class ModifyCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> cryptType{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scope{};
  shared_ptr<string> url{};

  ModifyCallbackRequest() {}

  explicit ModifyCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ModifyCallbackRequest() = default;
};
class ModifyCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ModifyCallbackResponseBody() {}

  explicit ModifyCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCallbackResponseBody() = default;
};
class ModifyCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCallbackResponseBody> body{};

  ModifyCallbackResponse() {}

  explicit ModifyCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCallbackResponse() = default;
};
class ModifyFeatureConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> description{};
  shared_ptr<string> field{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> type{};

  ModifyFeatureConfigRequest() {}

  explicit ModifyFeatureConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ModifyFeatureConfigRequest() = default;
};
class ModifyFeatureConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyFeatureConfigResponseBody() {}

  explicit ModifyFeatureConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyFeatureConfigResponseBody() = default;
};
class ModifyFeatureConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFeatureConfigResponseBody> body{};

  ModifyFeatureConfigResponse() {}

  explicit ModifyFeatureConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFeatureConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFeatureConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFeatureConfigResponse() = default;
};
class ModifyServiceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceDesc{};
  shared_ptr<string> serviceName{};

  ModifyServiceInfoRequest() {}

  explicit ModifyServiceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceDesc) {
      res["ServiceDesc"] = boost::any(*serviceDesc);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceDesc") != m.end() && !m["ServiceDesc"].empty()) {
      serviceDesc = make_shared<string>(boost::any_cast<string>(m["ServiceDesc"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModifyServiceInfoRequest() = default;
};
class ModifyServiceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ModifyServiceInfoResponseBody() {}

  explicit ModifyServiceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyServiceInfoResponseBody() = default;
};
class ModifyServiceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyServiceInfoResponseBody> body{};

  ModifyServiceInfoResponse() {}

  explicit ModifyServiceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyServiceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyServiceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyServiceInfoResponse() = default;
};
class QueryAnswerSampleByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, string>> sort{};

  QueryAnswerSampleByPageRequest() {}

  explicit QueryAnswerSampleByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Sort"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sort = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~QueryAnswerSampleByPageRequest() = default;
};
class QueryAnswerSampleByPageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> libId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortShrink{};

  QueryAnswerSampleByPageShrinkRequest() {}

  explicit QueryAnswerSampleByPageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~QueryAnswerSampleByPageShrinkRequest() = default;
};
class QueryAnswerSampleByPageResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> libId{};
  shared_ptr<string> uid{};

  QueryAnswerSampleByPageResponseBodyItems() {}

  explicit QueryAnswerSampleByPageResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryAnswerSampleByPageResponseBodyItems() = default;
};
class QueryAnswerSampleByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryAnswerSampleByPageResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryAnswerSampleByPageResponseBody() {}

  explicit QueryAnswerSampleByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<QueryAnswerSampleByPageResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAnswerSampleByPageResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<QueryAnswerSampleByPageResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryAnswerSampleByPageResponseBody() = default;
};
class QueryAnswerSampleByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAnswerSampleByPageResponseBody> body{};

  QueryAnswerSampleByPageResponse() {}

  explicit QueryAnswerSampleByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAnswerSampleByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAnswerSampleByPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAnswerSampleByPageResponse() = default;
};
class QueryCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<bool> checkForOss{};
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  QueryCallbackRequest() {}

  explicit QueryCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkForOss) {
      res["CheckForOss"] = boost::any(*checkForOss);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckForOss") != m.end() && !m["CheckForOss"].empty()) {
      checkForOss = make_shared<bool>(boost::any_cast<bool>(m["CheckForOss"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryCallbackRequest() = default;
};
class QueryCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cryptType{};
  shared_ptr<bool> existsOssCheckTask{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scope{};
  shared_ptr<string> seed{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  QueryCallbackResponseBody() {}

  explicit QueryCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (existsOssCheckTask) {
      res["ExistsOssCheckTask"] = boost::any(*existsOssCheckTask);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("ExistsOssCheckTask") != m.end() && !m["ExistsOssCheckTask"].empty()) {
      existsOssCheckTask = make_shared<bool>(boost::any_cast<bool>(m["ExistsOssCheckTask"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryCallbackResponseBody() = default;
};
class QueryCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCallbackResponseBody> body{};

  QueryCallbackResponse() {}

  explicit QueryCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallbackResponse() = default;
};
class QueryCallbackByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  QueryCallbackByPageRequest() {}

  explicit QueryCallbackByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryCallbackByPageRequest() = default;
};
class QueryCallbackByPageResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> cryptType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> seed{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  QueryCallbackByPageResponseBodyItems() {}

  explicit QueryCallbackByPageResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryCallbackByPageResponseBodyItems() = default;
};
class QueryCallbackByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryCallbackByPageResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryCallbackByPageResponseBody() {}

  explicit QueryCallbackByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<QueryCallbackByPageResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCallbackByPageResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<QueryCallbackByPageResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryCallbackByPageResponseBody() = default;
};
class QueryCallbackByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCallbackByPageResponseBody> body{};

  QueryCallbackByPageResponse() {}

  explicit QueryCallbackByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCallbackByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallbackByPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallbackByPageResponse() = default;
};
class UpdateBackupConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupConfig{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCode{};

  UpdateBackupConfigRequest() {}

  explicit UpdateBackupConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupConfig) {
      res["BackupConfig"] = boost::any(*backupConfig);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupConfig") != m.end() && !m["BackupConfig"].empty()) {
      backupConfig = make_shared<string>(boost::any_cast<string>(m["BackupConfig"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~UpdateBackupConfigRequest() = default;
};
class UpdateBackupConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  UpdateBackupConfigResponseBody() {}

  explicit UpdateBackupConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateBackupConfigResponseBody() = default;
};
class UpdateBackupConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBackupConfigResponseBody> body{};

  UpdateBackupConfigResponse() {}

  explicit UpdateBackupConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBackupConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBackupConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBackupConfigResponse() = default;
};
class UpdateImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<long> freeInspection{};
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};

  UpdateImageLibRequest() {}

  explicit UpdateImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (freeInspection) {
      res["FreeInspection"] = boost::any(*freeInspection);
    }
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("FreeInspection") != m.end() && !m["FreeInspection"].empty()) {
      freeInspection = make_shared<long>(boost::any_cast<long>(m["FreeInspection"]));
    }
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateImageLibRequest() = default;
};
class UpdateImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateImageLibResponseBody() {}

  explicit UpdateImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateImageLibResponseBody() = default;
};
class UpdateImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageLibResponseBody> body{};

  UpdateImageLibResponse() {}

  explicit UpdateImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageLibResponse() = default;
};
class UpdateImageLibFreeInspectionRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, long>> config{};
  shared_ptr<string> regionId{};

  UpdateImageLibFreeInspectionRequest() {}

  explicit UpdateImageLibFreeInspectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["Config"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateImageLibFreeInspectionRequest() = default;
};
class UpdateImageLibFreeInspectionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configShrink{};
  shared_ptr<string> regionId{};

  UpdateImageLibFreeInspectionShrinkRequest() {}

  explicit UpdateImageLibFreeInspectionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configShrink) {
      res["Config"] = boost::any(*configShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      configShrink = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateImageLibFreeInspectionShrinkRequest() = default;
};
class UpdateImageLibFreeInspectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateImageLibFreeInspectionResponseBody() {}

  explicit UpdateImageLibFreeInspectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateImageLibFreeInspectionResponseBody() = default;
};
class UpdateImageLibFreeInspectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageLibFreeInspectionResponseBody> body{};

  UpdateImageLibFreeInspectionResponse() {}

  explicit UpdateImageLibFreeInspectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateImageLibFreeInspectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageLibFreeInspectionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageLibFreeInspectionResponse() = default;
};
class UpdateKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> libId{};
  shared_ptr<string> libName{};
  shared_ptr<string> regionId{};

  UpdateKeywordLibRequest() {}

  explicit UpdateKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libId) {
      res["LibId"] = boost::any(*libId);
    }
    if (libName) {
      res["LibName"] = boost::any(*libName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LibId") != m.end() && !m["LibId"].empty()) {
      libId = make_shared<string>(boost::any_cast<string>(m["LibId"]));
    }
    if (m.find("LibName") != m.end() && !m["LibName"].empty()) {
      libName = make_shared<string>(boost::any_cast<string>(m["LibName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateKeywordLibRequest() = default;
};
class UpdateKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateKeywordLibResponseBody() {}

  explicit UpdateKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateKeywordLibResponseBody() = default;
};
class UpdateKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateKeywordLibResponseBody> body{};

  UpdateKeywordLibResponse() {}

  explicit UpdateKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKeywordLibResponse() = default;
};
class UpdateScanResultFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> feedback{};
  shared_ptr<string> queryRequestId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  UpdateScanResultFeedbackRequest() {}

  explicit UpdateScanResultFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (queryRequestId) {
      res["QueryRequestId"] = boost::any(*queryRequestId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("QueryRequestId") != m.end() && !m["QueryRequestId"].empty()) {
      queryRequestId = make_shared<string>(boost::any_cast<string>(m["QueryRequestId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~UpdateScanResultFeedbackRequest() = default;
};
class UpdateScanResultFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  UpdateScanResultFeedbackResponseBody() {}

  explicit UpdateScanResultFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateScanResultFeedbackResponseBody() = default;
};
class UpdateScanResultFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateScanResultFeedbackResponseBody> body{};

  UpdateScanResultFeedbackResponse() {}

  explicit UpdateScanResultFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateScanResultFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateScanResultFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateScanResultFeedbackResponse() = default;
};
class UpdateServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileConfig{};
  shared_ptr<string> keywordFilterLibs{};
  shared_ptr<string> keywordHitLibs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sceneConfig{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> videoConfig{};

  UpdateServiceConfigRequest() {}

  explicit UpdateServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileConfig) {
      res["FileConfig"] = boost::any(*fileConfig);
    }
    if (keywordFilterLibs) {
      res["KeywordFilterLibs"] = boost::any(*keywordFilterLibs);
    }
    if (keywordHitLibs) {
      res["KeywordHitLibs"] = boost::any(*keywordHitLibs);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sceneConfig) {
      res["SceneConfig"] = boost::any(*sceneConfig);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (videoConfig) {
      res["VideoConfig"] = boost::any(*videoConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileConfig") != m.end() && !m["FileConfig"].empty()) {
      fileConfig = make_shared<string>(boost::any_cast<string>(m["FileConfig"]));
    }
    if (m.find("KeywordFilterLibs") != m.end() && !m["KeywordFilterLibs"].empty()) {
      keywordFilterLibs = make_shared<string>(boost::any_cast<string>(m["KeywordFilterLibs"]));
    }
    if (m.find("KeywordHitLibs") != m.end() && !m["KeywordHitLibs"].empty()) {
      keywordHitLibs = make_shared<string>(boost::any_cast<string>(m["KeywordHitLibs"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SceneConfig") != m.end() && !m["SceneConfig"].empty()) {
      sceneConfig = make_shared<string>(boost::any_cast<string>(m["SceneConfig"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("VideoConfig") != m.end() && !m["VideoConfig"].empty()) {
      videoConfig = make_shared<string>(boost::any_cast<string>(m["VideoConfig"]));
    }
  }


  virtual ~UpdateServiceConfigRequest() = default;
};
class UpdateServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateServiceConfigResponseBody() {}

  explicit UpdateServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateServiceConfigResponseBody() = default;
};
class UpdateServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceConfigResponseBody> body{};

  UpdateServiceConfigResponse() {}

  explicit UpdateServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceConfigResponse() = default;
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
  AddAnswerSampleResponse addAnswerSampleWithOptions(shared_ptr<AddAnswerSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddAnswerSampleResponse addAnswerSample(shared_ptr<AddAnswerSampleRequest> request);
  AddImageLibResponse addImageLibWithOptions(shared_ptr<AddImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageLibResponse addImageLib(shared_ptr<AddImageLibRequest> request);
  AddImages2LibResponse addImages2LibWithOptions(shared_ptr<AddImages2LibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImages2LibResponse addImages2Lib(shared_ptr<AddImages2LibRequest> request);
  AddKeywordLibResponse addKeywordLibWithOptions(shared_ptr<AddKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddKeywordLibResponse addKeywordLib(shared_ptr<AddKeywordLibRequest> request);
  AddKeywordsResponse addKeywordsWithOptions(shared_ptr<AddKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddKeywordsResponse addKeywords(shared_ptr<AddKeywordsRequest> request);
  AddKeywordsToLibResponse addKeywordsToLibWithOptions(shared_ptr<AddKeywordsToLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddKeywordsToLibResponse addKeywordsToLib(shared_ptr<AddKeywordsToLibRequest> request);
  CancelStockOssCheckTaskResponse cancelStockOssCheckTaskWithOptions(shared_ptr<CancelStockOssCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelStockOssCheckTaskResponse cancelStockOssCheckTask(shared_ptr<CancelStockOssCheckTaskRequest> request);
  CopyServiceConfigResponse copyServiceConfigWithOptions(shared_ptr<CopyServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyServiceConfigResponse copyServiceConfig(shared_ptr<CopyServiceConfigRequest> request);
  CreatStockOssCheckTaskResponse creatStockOssCheckTaskWithOptions(shared_ptr<CreatStockOssCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatStockOssCheckTaskResponse creatStockOssCheckTask(shared_ptr<CreatStockOssCheckTaskRequest> request);
  CreateAnswerLibResponse createAnswerLibWithOptions(shared_ptr<CreateAnswerLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAnswerLibResponse createAnswerLib(shared_ptr<CreateAnswerLibRequest> request);
  CreateCallbackResponse createCallbackWithOptions(shared_ptr<CreateCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCallbackResponse createCallback(shared_ptr<CreateCallbackRequest> request);
  CreatePreCheckResponse createPreCheckWithOptions(shared_ptr<CreatePreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePreCheckResponse createPreCheck(shared_ptr<CreatePreCheckRequest> request);
  DeleteAnswerLibResponse deleteAnswerLibWithOptions(shared_ptr<DeleteAnswerLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAnswerLibResponse deleteAnswerLib(shared_ptr<DeleteAnswerLibRequest> request);
  DeleteAnswerSampleResponse deleteAnswerSampleWithOptions(shared_ptr<DeleteAnswerSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAnswerSampleResponse deleteAnswerSample(shared_ptr<DeleteAnswerSampleRequest> request);
  DeleteCallbackResponse deleteCallbackWithOptions(shared_ptr<DeleteCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCallbackResponse deleteCallback(shared_ptr<DeleteCallbackRequest> request);
  DeleteFeatureConfigResponse deleteFeatureConfigWithOptions(shared_ptr<DeleteFeatureConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFeatureConfigResponse deleteFeatureConfig(shared_ptr<DeleteFeatureConfigRequest> request);
  DeleteImagesFromLibResponse deleteImagesFromLibWithOptions(shared_ptr<DeleteImagesFromLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImagesFromLibResponse deleteImagesFromLib(shared_ptr<DeleteImagesFromLibRequest> request);
  DeleteKeywordResponse deleteKeywordWithOptions(shared_ptr<DeleteKeywordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeywordResponse deleteKeyword(shared_ptr<DeleteKeywordRequest> request);
  DeleteKeywordLibResponse deleteKeywordLibWithOptions(shared_ptr<DeleteKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeywordLibResponse deleteKeywordLib(shared_ptr<DeleteKeywordLibRequest> request);
  ExportAnswerSampleResponse exportAnswerSampleWithOptions(shared_ptr<ExportAnswerSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportAnswerSampleResponse exportAnswerSample(shared_ptr<ExportAnswerSampleRequest> request);
  ExportCipStatsResponse exportCipStatsWithOptions(shared_ptr<ExportCipStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportCipStatsResponse exportCipStats(shared_ptr<ExportCipStatsRequest> request);
  ExportKeywordResponse exportKeywordWithOptions(shared_ptr<ExportKeywordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportKeywordResponse exportKeyword(shared_ptr<ExportKeywordRequest> request);
  ExportOssCheckStatResponse exportOssCheckStatWithOptions(shared_ptr<ExportOssCheckStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportOssCheckStatResponse exportOssCheckStat(shared_ptr<ExportOssCheckStatRequest> request);
  ExportResultResponse exportResultWithOptions(shared_ptr<ExportResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportResultResponse exportResult(shared_ptr<ExportResultRequest> request);
  ExportScanResultResponse exportScanResultWithOptions(shared_ptr<ExportScanResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportScanResultResponse exportScanResult(shared_ptr<ExportScanResultRequest> request);
  ExportTextScanResultResponse exportTextScanResultWithOptions(shared_ptr<ExportTextScanResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportTextScanResultResponse exportTextScanResult(shared_ptr<ExportTextScanResultRequest> request);
  GetAnswerImportProgressResponse getAnswerImportProgressWithOptions(shared_ptr<GetAnswerImportProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAnswerImportProgressResponse getAnswerImportProgress(shared_ptr<GetAnswerImportProgressRequest> request);
  GetBackupBucketsListResponse getBackupBucketsListWithOptions(shared_ptr<GetBackupBucketsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBackupBucketsListResponse getBackupBucketsList(shared_ptr<GetBackupBucketsListRequest> request);
  GetBackupConfigResponse getBackupConfigWithOptions(shared_ptr<GetBackupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBackupConfigResponse getBackupConfig(shared_ptr<GetBackupConfigRequest> request);
  GetBackupStatusResponse getBackupStatusWithOptions(shared_ptr<GetBackupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBackupStatusResponse getBackupStatus(shared_ptr<GetBackupStatusRequest> request);
  GetBucketsListResponse getBucketsListWithOptions(shared_ptr<GetBucketsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBucketsListResponse getBucketsList(shared_ptr<GetBucketsListRequest> request);
  GetCipStatsResponse getCipStatsWithOptions(shared_ptr<GetCipStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCipStatsResponse getCipStats(shared_ptr<GetCipStatsRequest> request);
  GetExecuteTimeResponse getExecuteTimeWithOptions(shared_ptr<GetExecuteTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExecuteTimeResponse getExecuteTime(shared_ptr<GetExecuteTimeRequest> request);
  GetFeatureConfigResponse getFeatureConfigWithOptions(shared_ptr<GetFeatureConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureConfigResponse getFeatureConfig(shared_ptr<GetFeatureConfigRequest> request);
  GetImageSceneLabelConfResponse getImageSceneLabelConfWithOptions(shared_ptr<GetImageSceneLabelConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageSceneLabelConfResponse getImageSceneLabelConf(shared_ptr<GetImageSceneLabelConfRequest> request);
  GetImageSceneLabelListConfResponse getImageSceneLabelListConfWithOptions(shared_ptr<GetImageSceneLabelListConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageSceneLabelListConfResponse getImageSceneLabelListConf(shared_ptr<GetImageSceneLabelListConfRequest> request);
  GetJobNameListResponse getJobNameListWithOptions(shared_ptr<GetJobNameListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobNameListResponse getJobNameList(shared_ptr<GetJobNameListRequest> request);
  GetKeywordImportResultResponse getKeywordImportResultWithOptions(shared_ptr<GetKeywordImportResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKeywordImportResultResponse getKeywordImportResult(shared_ptr<GetKeywordImportResultRequest> request);
  GetKeywordLibResponse getKeywordLibWithOptions(shared_ptr<GetKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKeywordLibResponse getKeywordLib(shared_ptr<GetKeywordLibRequest> request);
  GetOssCheckStatResponse getOssCheckStatWithOptions(shared_ptr<GetOssCheckStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssCheckStatResponse getOssCheckStat(shared_ptr<GetOssCheckStatRequest> request);
  GetOssCheckStatusResponse getOssCheckStatusWithOptions(shared_ptr<GetOssCheckStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssCheckStatusResponse getOssCheckStatus(shared_ptr<GetOssCheckStatusRequest> request);
  GetScanNumResponse getScanNumWithOptions(shared_ptr<GetScanNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScanNumResponse getScanNum(shared_ptr<GetScanNumRequest> request);
  GetScanResultResponse getScanResultWithOptions(shared_ptr<GetScanResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScanResultResponse getScanResult(shared_ptr<GetScanResultRequest> request);
  GetServiceConfResponse getServiceConfWithOptions(shared_ptr<GetServiceConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceConfResponse getServiceConf(shared_ptr<GetServiceConfRequest> request);
  GetServiceConfigResponse getServiceConfigWithOptions(shared_ptr<GetServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceConfigResponse getServiceConfig(shared_ptr<GetServiceConfigRequest> request);
  GetServiceLabelConfigResponse getServiceLabelConfigWithOptions(shared_ptr<GetServiceLabelConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLabelConfigResponse getServiceLabelConfig(shared_ptr<GetServiceLabelConfigRequest> request);
  GetStockOssCheckTasksListResponse getStockOssCheckTasksListWithOptions(shared_ptr<GetStockOssCheckTasksListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStockOssCheckTasksListResponse getStockOssCheckTasksList(shared_ptr<GetStockOssCheckTasksListRequest> request);
  GetTextScanResultResponse getTextScanResultWithOptions(shared_ptr<GetTextScanResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextScanResultResponse getTextScanResult(shared_ptr<GetTextScanResultRequest> request);
  GetUploadInfoResponse getUploadInfoWithOptions(shared_ptr<GetUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUploadInfoResponse getUploadInfo(shared_ptr<GetUploadInfoRequest> request);
  GetUserBuyStatusResponse getUserBuyStatusWithOptions(shared_ptr<GetUserBuyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserBuyStatusResponse getUserBuyStatus(shared_ptr<GetUserBuyStatusRequest> request);
  ListAnswerLibResponse listAnswerLibWithOptions(shared_ptr<ListAnswerLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnswerLibResponse listAnswerLib(shared_ptr<ListAnswerLibRequest> request);
  ListCallbackResponse listCallbackWithOptions(shared_ptr<ListCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCallbackResponse listCallback(shared_ptr<ListCallbackRequest> request);
  ListImageLibResponse listImageLibWithOptions(shared_ptr<ListImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImageLibResponse listImageLib(shared_ptr<ListImageLibRequest> request);
  ListImagesFromLibResponse listImagesFromLibWithOptions(shared_ptr<ListImagesFromLibRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesFromLibResponse listImagesFromLib(shared_ptr<ListImagesFromLibRequest> request);
  ListKeywordLibsResponse listKeywordLibsWithOptions(shared_ptr<ListKeywordLibsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeywordLibsResponse listKeywordLibs(shared_ptr<ListKeywordLibsRequest> request);
  ListKeywordsResponse listKeywordsWithOptions(shared_ptr<ListKeywordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeywordsResponse listKeywords(shared_ptr<ListKeywordsRequest> request);
  ListOssCheckResultResponse listOssCheckResultWithOptions(shared_ptr<ListOssCheckResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOssCheckResultResponse listOssCheckResult(shared_ptr<ListOssCheckResultRequest> request);
  ListServiceConfigsResponse listServiceConfigsWithOptions(shared_ptr<ListServiceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceConfigsResponse listServiceConfigs(shared_ptr<ListServiceConfigsRequest> request);
  ModifyAnswerLibResponse modifyAnswerLibWithOptions(shared_ptr<ModifyAnswerLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAnswerLibResponse modifyAnswerLib(shared_ptr<ModifyAnswerLibRequest> request);
  ModifyCallbackResponse modifyCallbackWithOptions(shared_ptr<ModifyCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCallbackResponse modifyCallback(shared_ptr<ModifyCallbackRequest> request);
  ModifyFeatureConfigResponse modifyFeatureConfigWithOptions(shared_ptr<ModifyFeatureConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFeatureConfigResponse modifyFeatureConfig(shared_ptr<ModifyFeatureConfigRequest> request);
  ModifyServiceInfoResponse modifyServiceInfoWithOptions(shared_ptr<ModifyServiceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyServiceInfoResponse modifyServiceInfo(shared_ptr<ModifyServiceInfoRequest> request);
  QueryAnswerSampleByPageResponse queryAnswerSampleByPageWithOptions(shared_ptr<QueryAnswerSampleByPageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAnswerSampleByPageResponse queryAnswerSampleByPage(shared_ptr<QueryAnswerSampleByPageRequest> request);
  QueryCallbackResponse queryCallbackWithOptions(shared_ptr<QueryCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallbackResponse queryCallback(shared_ptr<QueryCallbackRequest> request);
  QueryCallbackByPageResponse queryCallbackByPageWithOptions(shared_ptr<QueryCallbackByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallbackByPageResponse queryCallbackByPage(shared_ptr<QueryCallbackByPageRequest> request);
  UpdateBackupConfigResponse updateBackupConfigWithOptions(shared_ptr<UpdateBackupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBackupConfigResponse updateBackupConfig(shared_ptr<UpdateBackupConfigRequest> request);
  UpdateImageLibResponse updateImageLibWithOptions(shared_ptr<UpdateImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageLibResponse updateImageLib(shared_ptr<UpdateImageLibRequest> request);
  UpdateImageLibFreeInspectionResponse updateImageLibFreeInspectionWithOptions(shared_ptr<UpdateImageLibFreeInspectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageLibFreeInspectionResponse updateImageLibFreeInspection(shared_ptr<UpdateImageLibFreeInspectionRequest> request);
  UpdateKeywordLibResponse updateKeywordLibWithOptions(shared_ptr<UpdateKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKeywordLibResponse updateKeywordLib(shared_ptr<UpdateKeywordLibRequest> request);
  UpdateScanResultFeedbackResponse updateScanResultFeedbackWithOptions(shared_ptr<UpdateScanResultFeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateScanResultFeedbackResponse updateScanResultFeedback(shared_ptr<UpdateScanResultFeedbackRequest> request);
  UpdateServiceConfigResponse updateServiceConfigWithOptions(shared_ptr<UpdateServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceConfigResponse updateServiceConfig(shared_ptr<UpdateServiceConfigRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Green20220926

#endif
