// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VDMETER20210425_H_
#define ALIBABACLOUD_VDMETER20210425_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Vdmeter20210425 {
class DescribeHuYaRecordByDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeHuYaRecordByDomainRequest() {}

  explicit DescribeHuYaRecordByDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeHuYaRecordByDomainRequest() = default;
};
class DescribeHuYaRecordByDomainResponseBodyResultDesc : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<long> recordDuration{};
  shared_ptr<long> recordNum{};
  shared_ptr<string> recordType{};
  shared_ptr<string> time{};

  DescribeHuYaRecordByDomainResponseBodyResultDesc() {}

  explicit DescribeHuYaRecordByDomainResponseBodyResultDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (recordNum) {
      res["RecordNum"] = boost::any(*recordNum);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("RecordNum") != m.end() && !m["RecordNum"].empty()) {
      recordNum = make_shared<long>(boost::any_cast<long>(m["RecordNum"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~DescribeHuYaRecordByDomainResponseBodyResultDesc() = default;
};
class DescribeHuYaRecordByDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<vector<DescribeHuYaRecordByDomainResponseBodyResultDesc>> resultDesc{};
  shared_ptr<long> status{};

  DescribeHuYaRecordByDomainResponseBody() {}

  explicit DescribeHuYaRecordByDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (resultDesc) {
      vector<boost::any> temp1;
      for(auto item1:*resultDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultDesc"] = boost::any(temp1);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ResultDesc") != m.end() && !m["ResultDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultDesc"].type()) {
        vector<DescribeHuYaRecordByDomainResponseBodyResultDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHuYaRecordByDomainResponseBodyResultDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultDesc = make_shared<vector<DescribeHuYaRecordByDomainResponseBodyResultDesc>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeHuYaRecordByDomainResponseBody() = default;
};
class DescribeHuYaRecordByDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHuYaRecordByDomainResponseBody> body{};

  DescribeHuYaRecordByDomainResponse() {}

  explicit DescribeHuYaRecordByDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHuYaRecordByDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHuYaRecordByDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHuYaRecordByDomainResponse() = default;
};
class DescribeHuYaScreenshotByDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeHuYaScreenshotByDomainRequest() {}

  explicit DescribeHuYaScreenshotByDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeHuYaScreenshotByDomainRequest() = default;
};
class DescribeHuYaScreenshotByDomainResponseBodyResultDesc : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<long> screenshotNum{};
  shared_ptr<string> time{};

  DescribeHuYaScreenshotByDomainResponseBodyResultDesc() {}

  explicit DescribeHuYaScreenshotByDomainResponseBodyResultDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (screenshotNum) {
      res["ScreenshotNum"] = boost::any(*screenshotNum);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ScreenshotNum") != m.end() && !m["ScreenshotNum"].empty()) {
      screenshotNum = make_shared<long>(boost::any_cast<long>(m["ScreenshotNum"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~DescribeHuYaScreenshotByDomainResponseBodyResultDesc() = default;
};
class DescribeHuYaScreenshotByDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<vector<DescribeHuYaScreenshotByDomainResponseBodyResultDesc>> resultDesc{};
  shared_ptr<long> status{};

  DescribeHuYaScreenshotByDomainResponseBody() {}

  explicit DescribeHuYaScreenshotByDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (resultDesc) {
      vector<boost::any> temp1;
      for(auto item1:*resultDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultDesc"] = boost::any(temp1);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ResultDesc") != m.end() && !m["ResultDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultDesc"].type()) {
        vector<DescribeHuYaScreenshotByDomainResponseBodyResultDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHuYaScreenshotByDomainResponseBodyResultDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultDesc = make_shared<vector<DescribeHuYaScreenshotByDomainResponseBodyResultDesc>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeHuYaScreenshotByDomainResponseBody() = default;
};
class DescribeHuYaScreenshotByDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHuYaScreenshotByDomainResponseBody> body{};

  DescribeHuYaScreenshotByDomainResponse() {}

  explicit DescribeHuYaScreenshotByDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHuYaScreenshotByDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHuYaScreenshotByDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHuYaScreenshotByDomainResponse() = default;
};
class DescribeHuYaTranscodeByDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeHuYaTranscodeByDomainRequest() {}

  explicit DescribeHuYaTranscodeByDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeHuYaTranscodeByDomainRequest() = default;
};
class DescribeHuYaTranscodeByDomainResponseBodyResultDesc : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> time{};
  shared_ptr<long> transcodeDuration{};
  shared_ptr<long> transcodeNum{};
  shared_ptr<string> transcodeType{};

  DescribeHuYaTranscodeByDomainResponseBodyResultDesc() {}

  explicit DescribeHuYaTranscodeByDomainResponseBodyResultDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (transcodeDuration) {
      res["TranscodeDuration"] = boost::any(*transcodeDuration);
    }
    if (transcodeNum) {
      res["TranscodeNum"] = boost::any(*transcodeNum);
    }
    if (transcodeType) {
      res["TranscodeType"] = boost::any(*transcodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("TranscodeDuration") != m.end() && !m["TranscodeDuration"].empty()) {
      transcodeDuration = make_shared<long>(boost::any_cast<long>(m["TranscodeDuration"]));
    }
    if (m.find("TranscodeNum") != m.end() && !m["TranscodeNum"].empty()) {
      transcodeNum = make_shared<long>(boost::any_cast<long>(m["TranscodeNum"]));
    }
    if (m.find("TranscodeType") != m.end() && !m["TranscodeType"].empty()) {
      transcodeType = make_shared<string>(boost::any_cast<string>(m["TranscodeType"]));
    }
  }


  virtual ~DescribeHuYaTranscodeByDomainResponseBodyResultDesc() = default;
};
class DescribeHuYaTranscodeByDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<vector<DescribeHuYaTranscodeByDomainResponseBodyResultDesc>> resultDesc{};
  shared_ptr<long> status{};

  DescribeHuYaTranscodeByDomainResponseBody() {}

  explicit DescribeHuYaTranscodeByDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (resultDesc) {
      vector<boost::any> temp1;
      for(auto item1:*resultDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultDesc"] = boost::any(temp1);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ResultDesc") != m.end() && !m["ResultDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultDesc"].type()) {
        vector<DescribeHuYaTranscodeByDomainResponseBodyResultDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHuYaTranscodeByDomainResponseBodyResultDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultDesc = make_shared<vector<DescribeHuYaTranscodeByDomainResponseBodyResultDesc>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeHuYaTranscodeByDomainResponseBody() = default;
};
class DescribeHuYaTranscodeByDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHuYaTranscodeByDomainResponseBody> body{};

  DescribeHuYaTranscodeByDomainResponse() {}

  explicit DescribeHuYaTranscodeByDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHuYaTranscodeByDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHuYaTranscodeByDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHuYaTranscodeByDomainResponse() = default;
};
class DescribeMeterBypassRtUsageByTaskProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterBypassRtUsageByTaskProfileRequest() {}

  explicit DescribeMeterBypassRtUsageByTaskProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterBypassRtUsageByTaskProfileRequest() = default;
};
class DescribeMeterBypassRtUsageByTaskProfileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> ratio{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> taskProfile{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> type{};

  DescribeMeterBypassRtUsageByTaskProfileResponseBodyData() {}

  explicit DescribeMeterBypassRtUsageByTaskProfileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeMeterBypassRtUsageByTaskProfileResponseBodyData() = default;
};
class DescribeMeterBypassRtUsageByTaskProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterBypassRtUsageByTaskProfileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterBypassRtUsageByTaskProfileResponseBody() {}

  explicit DescribeMeterBypassRtUsageByTaskProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterBypassRtUsageByTaskProfileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterBypassRtUsageByTaskProfileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterBypassRtUsageByTaskProfileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterBypassRtUsageByTaskProfileResponseBody() = default;
};
class DescribeMeterBypassRtUsageByTaskProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterBypassRtUsageByTaskProfileResponseBody> body{};

  DescribeMeterBypassRtUsageByTaskProfileResponse() {}

  explicit DescribeMeterBypassRtUsageByTaskProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterBypassRtUsageByTaskProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterBypassRtUsageByTaskProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterBypassRtUsageByTaskProfileResponse() = default;
};
class DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest() {}

  explicit DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest() = default;
};
class DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> taskProfile{};
  shared_ptr<long> timeStamp{};

  DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData() {}

  explicit DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<long>(boost::any_cast<long>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData() = default;
};
class DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody() {}

  explicit DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody() = default;
};
class DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody> body{};

  DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse() {}

  explicit DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterMpuTranscodeRtUsageByTaskProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse() = default;
};
class DescribeMeterRecordRtUsageByTaskProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRecordRtUsageByTaskProfileRequest() {}

  explicit DescribeMeterRecordRtUsageByTaskProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRecordRtUsageByTaskProfileRequest() = default;
};
class DescribeMeterRecordRtUsageByTaskProfileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> ratio{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> taskProfile{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> type{};

  DescribeMeterRecordRtUsageByTaskProfileResponseBodyData() {}

  explicit DescribeMeterRecordRtUsageByTaskProfileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeMeterRecordRtUsageByTaskProfileResponseBodyData() = default;
};
class DescribeMeterRecordRtUsageByTaskProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRecordRtUsageByTaskProfileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRecordRtUsageByTaskProfileResponseBody() {}

  explicit DescribeMeterRecordRtUsageByTaskProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRecordRtUsageByTaskProfileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRecordRtUsageByTaskProfileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRecordRtUsageByTaskProfileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRecordRtUsageByTaskProfileResponseBody() = default;
};
class DescribeMeterRecordRtUsageByTaskProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRecordRtUsageByTaskProfileResponseBody> body{};

  DescribeMeterRecordRtUsageByTaskProfileResponse() {}

  explicit DescribeMeterRecordRtUsageByTaskProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRecordRtUsageByTaskProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRecordRtUsageByTaskProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRecordRtUsageByTaskProfileResponse() = default;
};
class DescribeMeterRtcApproxPeakRateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcApproxPeakRateRequest() {}

  explicit DescribeMeterRtcApproxPeakRateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcApproxPeakRateRequest() = default;
};
class DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList : public Darabonba::Model {
public:
  shared_ptr<double> peakRate{};
  shared_ptr<long> peakTs{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList() {}

  explicit DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peakRate) {
      res["PeakRate"] = boost::any(*peakRate);
    }
    if (peakTs) {
      res["PeakTs"] = boost::any(*peakTs);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeakRate") != m.end() && !m["PeakRate"].empty()) {
      peakRate = make_shared<double>(boost::any_cast<double>(m["PeakRate"]));
    }
    if (m.find("PeakTs") != m.end() && !m["PeakTs"].empty()) {
      peakTs = make_shared<long>(boost::any_cast<long>(m["PeakTs"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList() = default;
};
class DescribeMeterRtcApproxPeakRateResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> approxPeakRate{};
  shared_ptr<long> approxPeakTs{};
  shared_ptr<vector<DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList>> peakRateVoList{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcApproxPeakRateResponseBody() {}

  explicit DescribeMeterRtcApproxPeakRateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approxPeakRate) {
      res["ApproxPeakRate"] = boost::any(*approxPeakRate);
    }
    if (approxPeakTs) {
      res["ApproxPeakTs"] = boost::any(*approxPeakTs);
    }
    if (peakRateVoList) {
      vector<boost::any> temp1;
      for(auto item1:*peakRateVoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeakRateVoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproxPeakRate") != m.end() && !m["ApproxPeakRate"].empty()) {
      approxPeakRate = make_shared<double>(boost::any_cast<double>(m["ApproxPeakRate"]));
    }
    if (m.find("ApproxPeakTs") != m.end() && !m["ApproxPeakTs"].empty()) {
      approxPeakTs = make_shared<long>(boost::any_cast<long>(m["ApproxPeakTs"]));
    }
    if (m.find("PeakRateVoList") != m.end() && !m["PeakRateVoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PeakRateVoList"].type()) {
        vector<DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeakRateVoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peakRateVoList = make_shared<vector<DescribeMeterRtcApproxPeakRateResponseBodyPeakRateVoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcApproxPeakRateResponseBody() = default;
};
class DescribeMeterRtcApproxPeakRateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcApproxPeakRateResponseBody> body{};

  DescribeMeterRtcApproxPeakRateResponse() {}

  explicit DescribeMeterRtcApproxPeakRateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcApproxPeakRateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcApproxPeakRateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcApproxPeakRateResponse() = default;
};
class DescribeMeterRtcChannelCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcChannelCntDataRequest() {}

  explicit DescribeMeterRtcChannelCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcChannelCntDataRequest() = default;
};
class DescribeMeterRtcChannelCntDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> channelCnt{};
  shared_ptr<string> timestamp{};

  DescribeMeterRtcChannelCntDataResponseBodyData() {}

  explicit DescribeMeterRtcChannelCntDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCnt) {
      res["ChannelCnt"] = boost::any(*channelCnt);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCnt") != m.end() && !m["ChannelCnt"].empty()) {
      channelCnt = make_shared<long>(boost::any_cast<long>(m["ChannelCnt"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcChannelCntDataResponseBodyData() = default;
};
class DescribeMeterRtcChannelCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcChannelCntDataResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcChannelCntDataResponseBody() {}

  explicit DescribeMeterRtcChannelCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcChannelCntDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcChannelCntDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcChannelCntDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcChannelCntDataResponseBody() = default;
};
class DescribeMeterRtcChannelCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcChannelCntDataResponseBody> body{};

  DescribeMeterRtcChannelCntDataResponse() {}

  explicit DescribeMeterRtcChannelCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcChannelCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcChannelCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcChannelCntDataResponse() = default;
};
class DescribeMeterRtcDurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcDurationRequest() {}

  explicit DescribeMeterRtcDurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcDurationRequest() = default;
};
class DescribeMeterRtcDurationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> audioDuration{};
  shared_ptr<long> contentDuration{};
  shared_ptr<long> timestamp{};
  shared_ptr<long> totalDuration{};
  shared_ptr<long> v1080Duration{};
  shared_ptr<long> v480Duration{};
  shared_ptr<long> v720Duration{};

  DescribeMeterRtcDurationResponseBodyData() {}

  explicit DescribeMeterRtcDurationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDuration) {
      res["AudioDuration"] = boost::any(*audioDuration);
    }
    if (contentDuration) {
      res["ContentDuration"] = boost::any(*contentDuration);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    if (v1080Duration) {
      res["V1080Duration"] = boost::any(*v1080Duration);
    }
    if (v480Duration) {
      res["V480Duration"] = boost::any(*v480Duration);
    }
    if (v720Duration) {
      res["V720Duration"] = boost::any(*v720Duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDuration") != m.end() && !m["AudioDuration"].empty()) {
      audioDuration = make_shared<long>(boost::any_cast<long>(m["AudioDuration"]));
    }
    if (m.find("ContentDuration") != m.end() && !m["ContentDuration"].empty()) {
      contentDuration = make_shared<long>(boost::any_cast<long>(m["ContentDuration"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
    if (m.find("V1080Duration") != m.end() && !m["V1080Duration"].empty()) {
      v1080Duration = make_shared<long>(boost::any_cast<long>(m["V1080Duration"]));
    }
    if (m.find("V480Duration") != m.end() && !m["V480Duration"].empty()) {
      v480Duration = make_shared<long>(boost::any_cast<long>(m["V480Duration"]));
    }
    if (m.find("V720Duration") != m.end() && !m["V720Duration"].empty()) {
      v720Duration = make_shared<long>(boost::any_cast<long>(m["V720Duration"]));
    }
  }


  virtual ~DescribeMeterRtcDurationResponseBodyData() = default;
};
class DescribeMeterRtcDurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcDurationResponseBodyData>> data{};
  shared_ptr<long> readyTs{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcDurationResponseBody() {}

  explicit DescribeMeterRtcDurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (readyTs) {
      res["ReadyTs"] = boost::any(*readyTs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeMeterRtcDurationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcDurationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcDurationResponseBodyData>>(expect1);
      }
    }
    if (m.find("ReadyTs") != m.end() && !m["ReadyTs"].empty()) {
      readyTs = make_shared<long>(boost::any_cast<long>(m["ReadyTs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcDurationResponseBody() = default;
};
class DescribeMeterRtcDurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcDurationResponseBody> body{};

  DescribeMeterRtcDurationResponse() {}

  explicit DescribeMeterRtcDurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcDurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcDurationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcDurationResponse() = default;
};
class DescribeMeterRtcPeakChannelCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcPeakChannelCntDataRequest() {}

  explicit DescribeMeterRtcPeakChannelCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcPeakChannelCntDataRequest() = default;
};
class DescribeMeterRtcPeakChannelCntDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activeChannelPeak{};
  shared_ptr<long> activeChannelPeakTime{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcPeakChannelCntDataResponseBodyData() {}

  explicit DescribeMeterRtcPeakChannelCntDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeChannelPeak) {
      res["ActiveChannelPeak"] = boost::any(*activeChannelPeak);
    }
    if (activeChannelPeakTime) {
      res["ActiveChannelPeakTime"] = boost::any(*activeChannelPeakTime);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveChannelPeak") != m.end() && !m["ActiveChannelPeak"].empty()) {
      activeChannelPeak = make_shared<long>(boost::any_cast<long>(m["ActiveChannelPeak"]));
    }
    if (m.find("ActiveChannelPeakTime") != m.end() && !m["ActiveChannelPeakTime"].empty()) {
      activeChannelPeakTime = make_shared<long>(boost::any_cast<long>(m["ActiveChannelPeakTime"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcPeakChannelCntDataResponseBodyData() = default;
};
class DescribeMeterRtcPeakChannelCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcPeakChannelCntDataResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcPeakChannelCntDataResponseBody() {}

  explicit DescribeMeterRtcPeakChannelCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcPeakChannelCntDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcPeakChannelCntDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcPeakChannelCntDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcPeakChannelCntDataResponseBody() = default;
};
class DescribeMeterRtcPeakChannelCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcPeakChannelCntDataResponseBody> body{};

  DescribeMeterRtcPeakChannelCntDataResponse() {}

  explicit DescribeMeterRtcPeakChannelCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcPeakChannelCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcPeakChannelCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcPeakChannelCntDataResponse() = default;
};
class DescribeMeterRtcPeakUserCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcPeakUserCntDataRequest() {}

  explicit DescribeMeterRtcPeakUserCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcPeakUserCntDataRequest() = default;
};
class DescribeMeterRtcPeakUserCntDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activeUserPeak{};
  shared_ptr<long> activeUserPeakTime{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcPeakUserCntDataResponseBodyData() {}

  explicit DescribeMeterRtcPeakUserCntDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeUserPeak) {
      res["ActiveUserPeak"] = boost::any(*activeUserPeak);
    }
    if (activeUserPeakTime) {
      res["ActiveUserPeakTime"] = boost::any(*activeUserPeakTime);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveUserPeak") != m.end() && !m["ActiveUserPeak"].empty()) {
      activeUserPeak = make_shared<long>(boost::any_cast<long>(m["ActiveUserPeak"]));
    }
    if (m.find("ActiveUserPeakTime") != m.end() && !m["ActiveUserPeakTime"].empty()) {
      activeUserPeakTime = make_shared<long>(boost::any_cast<long>(m["ActiveUserPeakTime"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcPeakUserCntDataResponseBodyData() = default;
};
class DescribeMeterRtcPeakUserCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcPeakUserCntDataResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcPeakUserCntDataResponseBody() {}

  explicit DescribeMeterRtcPeakUserCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcPeakUserCntDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcPeakUserCntDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcPeakUserCntDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcPeakUserCntDataResponseBody() = default;
};
class DescribeMeterRtcPeakUserCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcPeakUserCntDataResponseBody> body{};

  DescribeMeterRtcPeakUserCntDataResponse() {}

  explicit DescribeMeterRtcPeakUserCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcPeakUserCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcPeakUserCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcPeakUserCntDataResponse() = default;
};
class DescribeMeterRtcRtBandWidthUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcRtBandWidthUsageRequest() {}

  explicit DescribeMeterRtcRtBandWidthUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcRtBandWidthUsageRequest() = default;
};
class DescribeMeterRtcRtBandWidthUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> anchorPeakRate{};
  shared_ptr<long> anchorPeakTs{};
  shared_ptr<double> audiencePeakRate{};
  shared_ptr<long> audiencePeakTs{};
  shared_ptr<double> peakRate{};
  shared_ptr<long> peakTs{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcRtBandWidthUsageResponseBodyData() {}

  explicit DescribeMeterRtcRtBandWidthUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorPeakRate) {
      res["AnchorPeakRate"] = boost::any(*anchorPeakRate);
    }
    if (anchorPeakTs) {
      res["AnchorPeakTs"] = boost::any(*anchorPeakTs);
    }
    if (audiencePeakRate) {
      res["AudiencePeakRate"] = boost::any(*audiencePeakRate);
    }
    if (audiencePeakTs) {
      res["AudiencePeakTs"] = boost::any(*audiencePeakTs);
    }
    if (peakRate) {
      res["PeakRate"] = boost::any(*peakRate);
    }
    if (peakTs) {
      res["PeakTs"] = boost::any(*peakTs);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorPeakRate") != m.end() && !m["AnchorPeakRate"].empty()) {
      anchorPeakRate = make_shared<double>(boost::any_cast<double>(m["AnchorPeakRate"]));
    }
    if (m.find("AnchorPeakTs") != m.end() && !m["AnchorPeakTs"].empty()) {
      anchorPeakTs = make_shared<long>(boost::any_cast<long>(m["AnchorPeakTs"]));
    }
    if (m.find("AudiencePeakRate") != m.end() && !m["AudiencePeakRate"].empty()) {
      audiencePeakRate = make_shared<double>(boost::any_cast<double>(m["AudiencePeakRate"]));
    }
    if (m.find("AudiencePeakTs") != m.end() && !m["AudiencePeakTs"].empty()) {
      audiencePeakTs = make_shared<long>(boost::any_cast<long>(m["AudiencePeakTs"]));
    }
    if (m.find("PeakRate") != m.end() && !m["PeakRate"].empty()) {
      peakRate = make_shared<double>(boost::any_cast<double>(m["PeakRate"]));
    }
    if (m.find("PeakTs") != m.end() && !m["PeakTs"].empty()) {
      peakTs = make_shared<long>(boost::any_cast<long>(m["PeakTs"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcRtBandWidthUsageResponseBodyData() = default;
};
class DescribeMeterRtcRtBandWidthUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcRtBandWidthUsageResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcRtBandWidthUsageResponseBody() {}

  explicit DescribeMeterRtcRtBandWidthUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcRtBandWidthUsageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcRtBandWidthUsageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcRtBandWidthUsageResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcRtBandWidthUsageResponseBody() = default;
};
class DescribeMeterRtcRtBandWidthUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcRtBandWidthUsageResponseBody> body{};

  DescribeMeterRtcRtBandWidthUsageResponse() {}

  explicit DescribeMeterRtcRtBandWidthUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcRtBandWidthUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcRtBandWidthUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcRtBandWidthUsageResponse() = default;
};
class DescribeMeterRtcRtFlowUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcRtFlowUsageRequest() {}

  explicit DescribeMeterRtcRtFlowUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcRtFlowUsageRequest() = default;
};
class DescribeMeterRtcRtFlowUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> anchorFlowValue{};
  shared_ptr<double> audienceFlowValue{};
  shared_ptr<double> flowValue{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcRtFlowUsageResponseBodyData() {}

  explicit DescribeMeterRtcRtFlowUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorFlowValue) {
      res["AnchorFlowValue"] = boost::any(*anchorFlowValue);
    }
    if (audienceFlowValue) {
      res["AudienceFlowValue"] = boost::any(*audienceFlowValue);
    }
    if (flowValue) {
      res["FlowValue"] = boost::any(*flowValue);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorFlowValue") != m.end() && !m["AnchorFlowValue"].empty()) {
      anchorFlowValue = make_shared<double>(boost::any_cast<double>(m["AnchorFlowValue"]));
    }
    if (m.find("AudienceFlowValue") != m.end() && !m["AudienceFlowValue"].empty()) {
      audienceFlowValue = make_shared<double>(boost::any_cast<double>(m["AudienceFlowValue"]));
    }
    if (m.find("FlowValue") != m.end() && !m["FlowValue"].empty()) {
      flowValue = make_shared<double>(boost::any_cast<double>(m["FlowValue"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcRtFlowUsageResponseBodyData() = default;
};
class DescribeMeterRtcRtFlowUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcRtFlowUsageResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcRtFlowUsageResponseBody() {}

  explicit DescribeMeterRtcRtFlowUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcRtFlowUsageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcRtFlowUsageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcRtFlowUsageResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcRtFlowUsageResponseBody() = default;
};
class DescribeMeterRtcRtFlowUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcRtFlowUsageResponseBody> body{};

  DescribeMeterRtcRtFlowUsageResponse() {}

  explicit DescribeMeterRtcRtFlowUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcRtFlowUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcRtFlowUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcRtFlowUsageResponse() = default;
};
class DescribeMeterRtcUserCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> interval{};
  shared_ptr<string> serviceArea{};
  shared_ptr<long> startTs{};

  DescribeMeterRtcUserCntDataRequest() {}

  explicit DescribeMeterRtcUserCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeMeterRtcUserCntDataRequest() = default;
};
class DescribeMeterRtcUserCntDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activeUserCnt{};
  shared_ptr<long> timestamp{};

  DescribeMeterRtcUserCntDataResponseBodyData() {}

  explicit DescribeMeterRtcUserCntDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeUserCnt) {
      res["ActiveUserCnt"] = boost::any(*activeUserCnt);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveUserCnt") != m.end() && !m["ActiveUserCnt"].empty()) {
      activeUserCnt = make_shared<long>(boost::any_cast<long>(m["ActiveUserCnt"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMeterRtcUserCntDataResponseBodyData() = default;
};
class DescribeMeterRtcUserCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMeterRtcUserCntDataResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeMeterRtcUserCntDataResponseBody() {}

  explicit DescribeMeterRtcUserCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeMeterRtcUserCntDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMeterRtcUserCntDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMeterRtcUserCntDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMeterRtcUserCntDataResponseBody() = default;
};
class DescribeMeterRtcUserCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMeterRtcUserCntDataResponseBody> body{};

  DescribeMeterRtcUserCntDataResponse() {}

  explicit DescribeMeterRtcUserCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMeterRtcUserCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMeterRtcUserCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMeterRtcUserCntDataResponse() = default;
};
class DescribeNewPlayVideoPlaySessionEventDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> bizDate{};
  shared_ptr<string> inputStatus{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> VPS{};

  DescribeNewPlayVideoPlaySessionEventDetailRequest() {}

  explicit DescribeNewPlayVideoPlaySessionEventDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (inputStatus) {
      res["InputStatus"] = boost::any(*inputStatus);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (VPS) {
      res["VPS"] = boost::any(*VPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<long>(boost::any_cast<long>(m["BizDate"]));
    }
    if (m.find("InputStatus") != m.end() && !m["InputStatus"].empty()) {
      inputStatus = make_shared<string>(boost::any_cast<string>(m["InputStatus"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("VPS") != m.end() && !m["VPS"].empty()) {
      VPS = make_shared<string>(boost::any_cast<string>(m["VPS"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionEventDetailRequest() = default;
};
class DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizTime{};
  shared_ptr<string> cost{};
  shared_ptr<string> details{};
  shared_ptr<string> eventName{};
  shared_ptr<string> IP{};
  shared_ptr<string> ISP{};
  shared_ptr<long> isNormal{};
  shared_ptr<string> networkType{};
  shared_ptr<string> region{};
  shared_ptr<string> subject{};

  DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData() {}

  explicit DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTime) {
      res["BizTime"] = boost::any(*bizTime);
    }
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (isNormal) {
      res["IsNormal"] = boost::any(*isNormal);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTime") != m.end() && !m["BizTime"].empty()) {
      bizTime = make_shared<string>(boost::any_cast<string>(m["BizTime"]));
    }
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<string>(boost::any_cast<string>(m["Cost"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("IsNormal") != m.end() && !m["IsNormal"].empty()) {
      isNormal = make_shared<long>(boost::any_cast<long>(m["IsNormal"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData() = default;
};
class DescribeNewPlayVideoPlaySessionEventDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> readyTs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  DescribeNewPlayVideoPlaySessionEventDetailResponseBody() {}

  explicit DescribeNewPlayVideoPlaySessionEventDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (readyTs) {
      res["ReadyTs"] = boost::any(*readyTs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeNewPlayVideoPlaySessionEventDetailResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReadyTs") != m.end() && !m["ReadyTs"].empty()) {
      readyTs = make_shared<long>(boost::any_cast<long>(m["ReadyTs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionEventDetailResponseBody() = default;
};
class DescribeNewPlayVideoPlaySessionEventDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNewPlayVideoPlaySessionEventDetailResponseBody> body{};

  DescribeNewPlayVideoPlaySessionEventDetailResponse() {}

  explicit DescribeNewPlayVideoPlaySessionEventDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNewPlayVideoPlaySessionEventDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNewPlayVideoPlaySessionEventDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionEventDetailResponse() = default;
};
class DescribeNewPlayVideoPlaySessionListRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimeStamp{};
  shared_ptr<string> inputStatus{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTimeStamp{};
  shared_ptr<string> uniqueId{};

  DescribeNewPlayVideoPlaySessionListRequest() {}

  explicit DescribeNewPlayVideoPlaySessionListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimeStamp) {
      res["EndTimeStamp"] = boost::any(*endTimeStamp);
    }
    if (inputStatus) {
      res["InputStatus"] = boost::any(*inputStatus);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTimeStamp) {
      res["StartTimeStamp"] = boost::any(*startTimeStamp);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimeStamp") != m.end() && !m["EndTimeStamp"].empty()) {
      endTimeStamp = make_shared<string>(boost::any_cast<string>(m["EndTimeStamp"]));
    }
    if (m.find("InputStatus") != m.end() && !m["InputStatus"].empty()) {
      inputStatus = make_shared<string>(boost::any_cast<string>(m["InputStatus"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTimeStamp") != m.end() && !m["StartTimeStamp"].empty()) {
      startTimeStamp = make_shared<string>(boost::any_cast<string>(m["StartTimeStamp"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["UniqueId"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionListRequest() = default;
};
class DescribeNewPlayVideoPlaySessionListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> traceId{};
  shared_ptr<string> UUID{};
  shared_ptr<string> VPS{};

  DescribeNewPlayVideoPlaySessionListResponseBodyData() {}

  explicit DescribeNewPlayVideoPlaySessionListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    if (VPS) {
      res["VPS"] = boost::any(*VPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
    if (m.find("VPS") != m.end() && !m["VPS"].empty()) {
      VPS = make_shared<string>(boost::any_cast<string>(m["VPS"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionListResponseBodyData() = default;
};
class DescribeNewPlayVideoPlaySessionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNewPlayVideoPlaySessionListResponseBodyData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> readyTs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  DescribeNewPlayVideoPlaySessionListResponseBody() {}

  explicit DescribeNewPlayVideoPlaySessionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (readyTs) {
      res["ReadyTs"] = boost::any(*readyTs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeNewPlayVideoPlaySessionListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNewPlayVideoPlaySessionListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeNewPlayVideoPlaySessionListResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReadyTs") != m.end() && !m["ReadyTs"].empty()) {
      readyTs = make_shared<long>(boost::any_cast<long>(m["ReadyTs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionListResponseBody() = default;
};
class DescribeNewPlayVideoPlaySessionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNewPlayVideoPlaySessionListResponseBody> body{};

  DescribeNewPlayVideoPlaySessionListResponse() {}

  explicit DescribeNewPlayVideoPlaySessionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNewPlayVideoPlaySessionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNewPlayVideoPlaySessionListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessionListResponse() = default;
};
class DescribeNewPlayVideoPlaySessioninfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> VPS{};

  DescribeNewPlayVideoPlaySessioninfoRequest() {}

  explicit DescribeNewPlayVideoPlaySessioninfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VPS) {
      res["VPS"] = boost::any(*VPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VPS") != m.end() && !m["VPS"].empty()) {
      VPS = make_shared<string>(boost::any_cast<string>(m["VPS"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessioninfoRequest() = default;
};
class DescribeNewPlayVideoPlaySessioninfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> deviceBrand{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> OS{};
  shared_ptr<string> OV{};
  shared_ptr<string> terminalType{};
  shared_ptr<string> VPS{};

  DescribeNewPlayVideoPlaySessioninfoResponseBodyData() {}

  explicit DescribeNewPlayVideoPlaySessioninfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (deviceBrand) {
      res["DeviceBrand"] = boost::any(*deviceBrand);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (OS) {
      res["OS"] = boost::any(*OS);
    }
    if (OV) {
      res["OV"] = boost::any(*OV);
    }
    if (terminalType) {
      res["TerminalType"] = boost::any(*terminalType);
    }
    if (VPS) {
      res["VPS"] = boost::any(*VPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DeviceBrand") != m.end() && !m["DeviceBrand"].empty()) {
      deviceBrand = make_shared<string>(boost::any_cast<string>(m["DeviceBrand"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("OS") != m.end() && !m["OS"].empty()) {
      OS = make_shared<string>(boost::any_cast<string>(m["OS"]));
    }
    if (m.find("OV") != m.end() && !m["OV"].empty()) {
      OV = make_shared<string>(boost::any_cast<string>(m["OV"]));
    }
    if (m.find("TerminalType") != m.end() && !m["TerminalType"].empty()) {
      terminalType = make_shared<string>(boost::any_cast<string>(m["TerminalType"]));
    }
    if (m.find("VPS") != m.end() && !m["VPS"].empty()) {
      VPS = make_shared<string>(boost::any_cast<string>(m["VPS"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessioninfoResponseBodyData() = default;
};
class DescribeNewPlayVideoPlaySessioninfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNewPlayVideoPlaySessioninfoResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeNewPlayVideoPlaySessioninfoResponseBody() {}

  explicit DescribeNewPlayVideoPlaySessioninfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeNewPlayVideoPlaySessioninfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNewPlayVideoPlaySessioninfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeNewPlayVideoPlaySessioninfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessioninfoResponseBody() = default;
};
class DescribeNewPlayVideoPlaySessioninfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNewPlayVideoPlaySessioninfoResponseBody> body{};

  DescribeNewPlayVideoPlaySessioninfoResponse() {}

  explicit DescribeNewPlayVideoPlaySessioninfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNewPlayVideoPlaySessioninfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNewPlayVideoPlaySessioninfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNewPlayVideoPlaySessioninfoResponse() = default;
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
  DescribeHuYaRecordByDomainResponse describeHuYaRecordByDomainWithOptions(shared_ptr<DescribeHuYaRecordByDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHuYaRecordByDomainResponse describeHuYaRecordByDomain(shared_ptr<DescribeHuYaRecordByDomainRequest> request);
  DescribeHuYaScreenshotByDomainResponse describeHuYaScreenshotByDomainWithOptions(shared_ptr<DescribeHuYaScreenshotByDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHuYaScreenshotByDomainResponse describeHuYaScreenshotByDomain(shared_ptr<DescribeHuYaScreenshotByDomainRequest> request);
  DescribeHuYaTranscodeByDomainResponse describeHuYaTranscodeByDomainWithOptions(shared_ptr<DescribeHuYaTranscodeByDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHuYaTranscodeByDomainResponse describeHuYaTranscodeByDomain(shared_ptr<DescribeHuYaTranscodeByDomainRequest> request);
  DescribeMeterBypassRtUsageByTaskProfileResponse describeMeterBypassRtUsageByTaskProfileWithOptions(shared_ptr<DescribeMeterBypassRtUsageByTaskProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterBypassRtUsageByTaskProfileResponse describeMeterBypassRtUsageByTaskProfile(shared_ptr<DescribeMeterBypassRtUsageByTaskProfileRequest> request);
  DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse describeMeterMpuTranscodeRtUsageByTaskProfileWithOptions(shared_ptr<DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterMpuTranscodeRtUsageByTaskProfileResponse describeMeterMpuTranscodeRtUsageByTaskProfile(shared_ptr<DescribeMeterMpuTranscodeRtUsageByTaskProfileRequest> request);
  DescribeMeterRecordRtUsageByTaskProfileResponse describeMeterRecordRtUsageByTaskProfileWithOptions(shared_ptr<DescribeMeterRecordRtUsageByTaskProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRecordRtUsageByTaskProfileResponse describeMeterRecordRtUsageByTaskProfile(shared_ptr<DescribeMeterRecordRtUsageByTaskProfileRequest> request);
  DescribeMeterRtcApproxPeakRateResponse describeMeterRtcApproxPeakRateWithOptions(shared_ptr<DescribeMeterRtcApproxPeakRateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcApproxPeakRateResponse describeMeterRtcApproxPeakRate(shared_ptr<DescribeMeterRtcApproxPeakRateRequest> request);
  DescribeMeterRtcChannelCntDataResponse describeMeterRtcChannelCntDataWithOptions(shared_ptr<DescribeMeterRtcChannelCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcChannelCntDataResponse describeMeterRtcChannelCntData(shared_ptr<DescribeMeterRtcChannelCntDataRequest> request);
  DescribeMeterRtcDurationResponse describeMeterRtcDurationWithOptions(shared_ptr<DescribeMeterRtcDurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcDurationResponse describeMeterRtcDuration(shared_ptr<DescribeMeterRtcDurationRequest> request);
  DescribeMeterRtcPeakChannelCntDataResponse describeMeterRtcPeakChannelCntDataWithOptions(shared_ptr<DescribeMeterRtcPeakChannelCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcPeakChannelCntDataResponse describeMeterRtcPeakChannelCntData(shared_ptr<DescribeMeterRtcPeakChannelCntDataRequest> request);
  DescribeMeterRtcPeakUserCntDataResponse describeMeterRtcPeakUserCntDataWithOptions(shared_ptr<DescribeMeterRtcPeakUserCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcPeakUserCntDataResponse describeMeterRtcPeakUserCntData(shared_ptr<DescribeMeterRtcPeakUserCntDataRequest> request);
  DescribeMeterRtcRtBandWidthUsageResponse describeMeterRtcRtBandWidthUsageWithOptions(shared_ptr<DescribeMeterRtcRtBandWidthUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcRtBandWidthUsageResponse describeMeterRtcRtBandWidthUsage(shared_ptr<DescribeMeterRtcRtBandWidthUsageRequest> request);
  DescribeMeterRtcRtFlowUsageResponse describeMeterRtcRtFlowUsageWithOptions(shared_ptr<DescribeMeterRtcRtFlowUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcRtFlowUsageResponse describeMeterRtcRtFlowUsage(shared_ptr<DescribeMeterRtcRtFlowUsageRequest> request);
  DescribeMeterRtcUserCntDataResponse describeMeterRtcUserCntDataWithOptions(shared_ptr<DescribeMeterRtcUserCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMeterRtcUserCntDataResponse describeMeterRtcUserCntData(shared_ptr<DescribeMeterRtcUserCntDataRequest> request);
  DescribeNewPlayVideoPlaySessionEventDetailResponse describeNewPlayVideoPlaySessionEventDetailWithOptions(shared_ptr<DescribeNewPlayVideoPlaySessionEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNewPlayVideoPlaySessionEventDetailResponse describeNewPlayVideoPlaySessionEventDetail(shared_ptr<DescribeNewPlayVideoPlaySessionEventDetailRequest> request);
  DescribeNewPlayVideoPlaySessionListResponse describeNewPlayVideoPlaySessionListWithOptions(shared_ptr<DescribeNewPlayVideoPlaySessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNewPlayVideoPlaySessionListResponse describeNewPlayVideoPlaySessionList(shared_ptr<DescribeNewPlayVideoPlaySessionListRequest> request);
  DescribeNewPlayVideoPlaySessioninfoResponse describeNewPlayVideoPlaySessioninfoWithOptions(shared_ptr<DescribeNewPlayVideoPlaySessioninfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNewPlayVideoPlaySessioninfoResponse describeNewPlayVideoPlaySessioninfo(shared_ptr<DescribeNewPlayVideoPlaySessioninfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Vdmeter20210425

#endif
