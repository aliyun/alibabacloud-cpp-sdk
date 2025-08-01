// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYSMSAPI20180501_H_
#define ALIBABACLOUD_DYSMSAPI20180501_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Dysmsapi20180501 {
class BatchSendMessageToGlobeRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> from{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};
  shared_ptr<long> validityPeriod{};

  BatchSendMessageToGlobeRequest() {}

  explicit BatchSendMessageToGlobeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (validityPeriod) {
      res["ValidityPeriod"] = boost::any(*validityPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValidityPeriod") != m.end() && !m["ValidityPeriod"].empty()) {
      validityPeriod = make_shared<long>(boost::any_cast<long>(m["ValidityPeriod"]));
    }
  }


  virtual ~BatchSendMessageToGlobeRequest() = default;
};
class BatchSendMessageToGlobeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> failedList{};
  shared_ptr<string> from{};
  shared_ptr<string> messageIdList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};
  shared_ptr<string> successCount{};

  BatchSendMessageToGlobeResponseBody() {}

  explicit BatchSendMessageToGlobeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedList) {
      res["FailedList"] = boost::any(*failedList);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (messageIdList) {
      res["MessageIdList"] = boost::any(*messageIdList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedList") != m.end() && !m["FailedList"].empty()) {
      failedList = make_shared<string>(boost::any_cast<string>(m["FailedList"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("MessageIdList") != m.end() && !m["MessageIdList"].empty()) {
      messageIdList = make_shared<string>(boost::any_cast<string>(m["MessageIdList"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<string>(boost::any_cast<string>(m["SuccessCount"]));
    }
  }


  virtual ~BatchSendMessageToGlobeResponseBody() = default;
};
class BatchSendMessageToGlobeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchSendMessageToGlobeResponseBody> body{};

  BatchSendMessageToGlobeResponse() {}

  explicit BatchSendMessageToGlobeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchSendMessageToGlobeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSendMessageToGlobeResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSendMessageToGlobeResponse() = default;
};
class ConversionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversionRate{};
  shared_ptr<long> reportTime{};

  ConversionDataRequest() {}

  explicit ConversionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversionRate) {
      res["ConversionRate"] = boost::any(*conversionRate);
    }
    if (reportTime) {
      res["ReportTime"] = boost::any(*reportTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversionRate") != m.end() && !m["ConversionRate"].empty()) {
      conversionRate = make_shared<string>(boost::any_cast<string>(m["ConversionRate"]));
    }
    if (m.find("ReportTime") != m.end() && !m["ReportTime"].empty()) {
      reportTime = make_shared<long>(boost::any_cast<long>(m["ReportTime"]));
    }
  }


  virtual ~ConversionDataRequest() = default;
};
class ConversionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};

  ConversionDataResponseBody() {}

  explicit ConversionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
  }


  virtual ~ConversionDataResponseBody() = default;
};
class ConversionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConversionDataResponseBody> body{};

  ConversionDataResponse() {}

  explicit ConversionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConversionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConversionDataResponseBody>(model1);
      }
    }
  }


  virtual ~ConversionDataResponse() = default;
};
class QueryMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};

  QueryMessageRequest() {}

  explicit QueryMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~QueryMessageRequest() = default;
};
class QueryMessageResponseBodyNumberDetail : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> country{};
  shared_ptr<string> region{};

  QueryMessageResponseBodyNumberDetail() {}

  explicit QueryMessageResponseBodyNumberDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryMessageResponseBodyNumberDetail() = default;
};
class QueryMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorDescription{};
  shared_ptr<string> message{};
  shared_ptr<string> messageId{};
  shared_ptr<QueryMessageResponseBodyNumberDetail> numberDetail{};
  shared_ptr<string> receiveDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};
  shared_ptr<string> sendDate{};
  shared_ptr<string> status{};
  shared_ptr<string> to{};

  QueryMessageResponseBody() {}

  explicit QueryMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorDescription) {
      res["ErrorDescription"] = boost::any(*errorDescription);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (numberDetail) {
      res["NumberDetail"] = numberDetail ? boost::any(numberDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (receiveDate) {
      res["ReceiveDate"] = boost::any(*receiveDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorDescription") != m.end() && !m["ErrorDescription"].empty()) {
      errorDescription = make_shared<string>(boost::any_cast<string>(m["ErrorDescription"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("NumberDetail") != m.end() && !m["NumberDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["NumberDetail"].type()) {
        QueryMessageResponseBodyNumberDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NumberDetail"]));
        numberDetail = make_shared<QueryMessageResponseBodyNumberDetail>(model1);
      }
    }
    if (m.find("ReceiveDate") != m.end() && !m["ReceiveDate"].empty()) {
      receiveDate = make_shared<string>(boost::any_cast<string>(m["ReceiveDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~QueryMessageResponseBody() = default;
};
class QueryMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMessageResponseBody> body{};

  QueryMessageResponse() {}

  explicit QueryMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMessageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMessageResponse() = default;
};
class SendMessageToGlobeRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> from{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};
  shared_ptr<long> validityPeriod{};

  SendMessageToGlobeRequest() {}

  explicit SendMessageToGlobeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (validityPeriod) {
      res["ValidityPeriod"] = boost::any(*validityPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValidityPeriod") != m.end() && !m["ValidityPeriod"].empty()) {
      validityPeriod = make_shared<long>(boost::any_cast<long>(m["ValidityPeriod"]));
    }
  }


  virtual ~SendMessageToGlobeRequest() = default;
};
class SendMessageToGlobeResponseBodyNumberDetail : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> country{};
  shared_ptr<string> region{};

  SendMessageToGlobeResponseBodyNumberDetail() {}

  explicit SendMessageToGlobeResponseBodyNumberDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SendMessageToGlobeResponseBodyNumberDetail() = default;
};
class SendMessageToGlobeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> from{};
  shared_ptr<string> messageId{};
  shared_ptr<SendMessageToGlobeResponseBodyNumberDetail> numberDetail{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};
  shared_ptr<string> segments{};
  shared_ptr<string> to{};

  SendMessageToGlobeResponseBody() {}

  explicit SendMessageToGlobeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (numberDetail) {
      res["NumberDetail"] = numberDetail ? boost::any(numberDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    if (segments) {
      res["Segments"] = boost::any(*segments);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("NumberDetail") != m.end() && !m["NumberDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["NumberDetail"].type()) {
        SendMessageToGlobeResponseBodyNumberDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NumberDetail"]));
        numberDetail = make_shared<SendMessageToGlobeResponseBodyNumberDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
    if (m.find("Segments") != m.end() && !m["Segments"].empty()) {
      segments = make_shared<string>(boost::any_cast<string>(m["Segments"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SendMessageToGlobeResponseBody() = default;
};
class SendMessageToGlobeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageToGlobeResponseBody> body{};

  SendMessageToGlobeResponse() {}

  explicit SendMessageToGlobeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageToGlobeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageToGlobeResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageToGlobeResponse() = default;
};
class SendMessageWithTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> from{};
  shared_ptr<string> smsUpExtendCode{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParam{};
  shared_ptr<string> to{};
  shared_ptr<long> validityPeriod{};

  SendMessageWithTemplateRequest() {}

  explicit SendMessageWithTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (smsUpExtendCode) {
      res["SmsUpExtendCode"] = boost::any(*smsUpExtendCode);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParam) {
      res["TemplateParam"] = boost::any(*templateParam);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (validityPeriod) {
      res["ValidityPeriod"] = boost::any(*validityPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("SmsUpExtendCode") != m.end() && !m["SmsUpExtendCode"].empty()) {
      smsUpExtendCode = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCode"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParam") != m.end() && !m["TemplateParam"].empty()) {
      templateParam = make_shared<string>(boost::any_cast<string>(m["TemplateParam"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("ValidityPeriod") != m.end() && !m["ValidityPeriod"].empty()) {
      validityPeriod = make_shared<long>(boost::any_cast<long>(m["ValidityPeriod"]));
    }
  }


  virtual ~SendMessageWithTemplateRequest() = default;
};
class SendMessageWithTemplateResponseBodyNumberDetail : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> country{};
  shared_ptr<string> region{};

  SendMessageWithTemplateResponseBodyNumberDetail() {}

  explicit SendMessageWithTemplateResponseBodyNumberDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SendMessageWithTemplateResponseBodyNumberDetail() = default;
};
class SendMessageWithTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<SendMessageWithTemplateResponseBodyNumberDetail> numberDetail{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};
  shared_ptr<string> segments{};
  shared_ptr<string> to{};

  SendMessageWithTemplateResponseBody() {}

  explicit SendMessageWithTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (numberDetail) {
      res["NumberDetail"] = numberDetail ? boost::any(numberDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    if (segments) {
      res["Segments"] = boost::any(*segments);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("NumberDetail") != m.end() && !m["NumberDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["NumberDetail"].type()) {
        SendMessageWithTemplateResponseBodyNumberDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NumberDetail"]));
        numberDetail = make_shared<SendMessageWithTemplateResponseBodyNumberDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
    if (m.find("Segments") != m.end() && !m["Segments"].empty()) {
      segments = make_shared<string>(boost::any_cast<string>(m["Segments"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SendMessageWithTemplateResponseBody() = default;
};
class SendMessageWithTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageWithTemplateResponseBody> body{};

  SendMessageWithTemplateResponse() {}

  explicit SendMessageWithTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageWithTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageWithTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageWithTemplateResponse() = default;
};
class SmsConversionRequest : public Darabonba::Model {
public:
  shared_ptr<long> conversionTime{};
  shared_ptr<bool> delivered{};
  shared_ptr<string> messageId{};
  shared_ptr<string> to{};

  SmsConversionRequest() {}

  explicit SmsConversionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversionTime) {
      res["ConversionTime"] = boost::any(*conversionTime);
    }
    if (delivered) {
      res["Delivered"] = boost::any(*delivered);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversionTime") != m.end() && !m["ConversionTime"].empty()) {
      conversionTime = make_shared<long>(boost::any_cast<long>(m["ConversionTime"]));
    }
    if (m.find("Delivered") != m.end() && !m["Delivered"].empty()) {
      delivered = make_shared<bool>(boost::any_cast<bool>(m["Delivered"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SmsConversionRequest() = default;
};
class SmsConversionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> responseDescription{};

  SmsConversionResponseBody() {}

  explicit SmsConversionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (responseDescription) {
      res["ResponseDescription"] = boost::any(*responseDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("ResponseDescription") != m.end() && !m["ResponseDescription"].empty()) {
      responseDescription = make_shared<string>(boost::any_cast<string>(m["ResponseDescription"]));
    }
  }


  virtual ~SmsConversionResponseBody() = default;
};
class SmsConversionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmsConversionResponseBody> body{};

  SmsConversionResponse() {}

  explicit SmsConversionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmsConversionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmsConversionResponseBody>(model1);
      }
    }
  }


  virtual ~SmsConversionResponse() = default;
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
  BatchSendMessageToGlobeResponse batchSendMessageToGlobeWithOptions(shared_ptr<BatchSendMessageToGlobeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSendMessageToGlobeResponse batchSendMessageToGlobe(shared_ptr<BatchSendMessageToGlobeRequest> request);
  ConversionDataResponse conversionDataWithOptions(shared_ptr<ConversionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConversionDataResponse conversionData(shared_ptr<ConversionDataRequest> request);
  QueryMessageResponse queryMessageWithOptions(shared_ptr<QueryMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMessageResponse queryMessage(shared_ptr<QueryMessageRequest> request);
  SendMessageToGlobeResponse sendMessageToGlobeWithOptions(shared_ptr<SendMessageToGlobeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageToGlobeResponse sendMessageToGlobe(shared_ptr<SendMessageToGlobeRequest> request);
  SendMessageWithTemplateResponse sendMessageWithTemplateWithOptions(shared_ptr<SendMessageWithTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageWithTemplateResponse sendMessageWithTemplate(shared_ptr<SendMessageWithTemplateRequest> request);
  SmsConversionResponse smsConversionWithOptions(shared_ptr<SmsConversionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmsConversionResponse smsConversion(shared_ptr<SmsConversionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dysmsapi20180501

#endif
