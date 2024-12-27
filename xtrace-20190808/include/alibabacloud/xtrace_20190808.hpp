// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_XTRACE20190808_H_
#define ALIBABACLOUD_XTRACE20190808_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Xtrace20190808 {
class CheckCommercialStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> service{};

  CheckCommercialStatusRequest() {}

  explicit CheckCommercialStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~CheckCommercialStatusRequest() = default;
};
class CheckCommercialStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CheckCommercialStatusResponseBody() {}

  explicit CheckCommercialStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckCommercialStatusResponseBody() = default;
};
class CheckCommercialStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCommercialStatusResponseBody> body{};

  CheckCommercialStatusResponse() {}

  explicit CheckCommercialStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCommercialStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCommercialStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCommercialStatusResponse() = default;
};
class GetTagKeyRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spanName{};
  shared_ptr<long> startTime{};

  GetTagKeyRequest() {}

  explicit GetTagKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetTagKeyRequest() = default;
};
class GetTagKeyResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tagKey{};

  GetTagKeyResponseBodyTagKeys() {}

  explicit GetTagKeyResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTagKeyResponseBodyTagKeys() = default;
};
class GetTagKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTagKeyResponseBodyTagKeys> tagKeys{};

  GetTagKeyResponseBody() {}

  explicit GetTagKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      res["TagKeys"] = tagKeys ? boost::any(tagKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagKeys"].type()) {
        GetTagKeyResponseBodyTagKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagKeys"]));
        tagKeys = make_shared<GetTagKeyResponseBodyTagKeys>(model1);
      }
    }
  }


  virtual ~GetTagKeyResponseBody() = default;
};
class GetTagKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTagKeyResponseBody> body{};

  GetTagKeyResponse() {}

  explicit GetTagKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTagKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTagKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GetTagKeyResponse() = default;
};
class GetTagValRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spanName{};
  shared_ptr<long> startTime{};
  shared_ptr<string> tagKey{};

  GetTagValRequest() {}

  explicit GetTagValRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~GetTagValRequest() = default;
};
class GetTagValResponseBodyTagValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tagValue{};

  GetTagValResponseBodyTagValues() {}

  explicit GetTagValResponseBodyTagValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValue = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTagValResponseBodyTagValues() = default;
};
class GetTagValResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTagValResponseBodyTagValues> tagValues{};

  GetTagValResponseBody() {}

  explicit GetTagValResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagValues) {
      res["TagValues"] = tagValues ? boost::any(tagValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagValues"].type()) {
        GetTagValResponseBodyTagValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagValues"]));
        tagValues = make_shared<GetTagValResponseBodyTagValues>(model1);
      }
    }
  }


  virtual ~GetTagValResponseBody() = default;
};
class GetTagValResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTagValResponseBody> body{};

  GetTagValResponse() {}

  explicit GetTagValResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTagValResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTagValResponseBody>(model1);
      }
    }
  }


  virtual ~GetTagValResponse() = default;
};
class GetTraceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> traceID{};

  GetTraceRequest() {}

  explicit GetTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetTraceRequest() = default;
};
class GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry() {}

  explicit GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry() = default;
};
class GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry>> tagEntry{};

  GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList() {}

  explicit GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagEntry) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagEntry") != m.end() && !m["TagEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntry"].type()) {
        vector<GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntry = make_shared<vector<GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryListTagEntry>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList() = default;
};
class GetTraceResponseBodySpansSpanLogEventListLogEvent : public Darabonba::Model {
public:
  shared_ptr<GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList> tagEntryList{};
  shared_ptr<long> timestamp{};

  GetTraceResponseBodySpansSpanLogEventListLogEvent() {}

  explicit GetTraceResponseBodySpansSpanLogEventListLogEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagEntryList) {
      res["TagEntryList"] = tagEntryList ? boost::any(tagEntryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagEntryList"].type()) {
        GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagEntryList"]));
        tagEntryList = make_shared<GetTraceResponseBodySpansSpanLogEventListLogEventTagEntryList>(model1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~GetTraceResponseBodySpansSpanLogEventListLogEvent() = default;
};
class GetTraceResponseBodySpansSpanLogEventList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodySpansSpanLogEventListLogEvent>> logEvent{};

  GetTraceResponseBodySpansSpanLogEventList() {}

  explicit GetTraceResponseBodySpansSpanLogEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logEvent) {
      vector<boost::any> temp1;
      for(auto item1:*logEvent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogEvent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogEvent") != m.end() && !m["LogEvent"].empty()) {
      if (typeid(vector<boost::any>) == m["LogEvent"].type()) {
        vector<GetTraceResponseBodySpansSpanLogEventListLogEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogEvent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansSpanLogEventListLogEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logEvent = make_shared<vector<GetTraceResponseBodySpansSpanLogEventListLogEvent>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodySpansSpanLogEventList() = default;
};
class GetTraceResponseBodySpansSpanTagEntryListTagEntry : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTraceResponseBodySpansSpanTagEntryListTagEntry() {}

  explicit GetTraceResponseBodySpansSpanTagEntryListTagEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetTraceResponseBodySpansSpanTagEntryListTagEntry() = default;
};
class GetTraceResponseBodySpansSpanTagEntryList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodySpansSpanTagEntryListTagEntry>> tagEntry{};

  GetTraceResponseBodySpansSpanTagEntryList() {}

  explicit GetTraceResponseBodySpansSpanTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagEntry) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagEntry") != m.end() && !m["TagEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntry"].type()) {
        vector<GetTraceResponseBodySpansSpanTagEntryListTagEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansSpanTagEntryListTagEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntry = make_shared<vector<GetTraceResponseBodySpansSpanTagEntryListTagEntry>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodySpansSpanTagEntryList() = default;
};
class GetTraceResponseBodySpansSpan : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<bool> haveStack{};
  shared_ptr<GetTraceResponseBodySpansSpanLogEventList> logEventList{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parentSpanId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spanId{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTraceResponseBodySpansSpanTagEntryList> tagEntryList{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  GetTraceResponseBodySpansSpan() {}

  explicit GetTraceResponseBodySpansSpan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (haveStack) {
      res["HaveStack"] = boost::any(*haveStack);
    }
    if (logEventList) {
      res["LogEventList"] = logEventList ? boost::any(logEventList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parentSpanId) {
      res["ParentSpanId"] = boost::any(*parentSpanId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spanId) {
      res["SpanId"] = boost::any(*spanId);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (tagEntryList) {
      res["TagEntryList"] = tagEntryList ? boost::any(tagEntryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HaveStack") != m.end() && !m["HaveStack"].empty()) {
      haveStack = make_shared<bool>(boost::any_cast<bool>(m["HaveStack"]));
    }
    if (m.find("LogEventList") != m.end() && !m["LogEventList"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogEventList"].type()) {
        GetTraceResponseBodySpansSpanLogEventList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogEventList"]));
        logEventList = make_shared<GetTraceResponseBodySpansSpanLogEventList>(model1);
      }
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ParentSpanId") != m.end() && !m["ParentSpanId"].empty()) {
      parentSpanId = make_shared<string>(boost::any_cast<string>(m["ParentSpanId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpanId") != m.end() && !m["SpanId"].empty()) {
      spanId = make_shared<string>(boost::any_cast<string>(m["SpanId"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagEntryList"].type()) {
        GetTraceResponseBodySpansSpanTagEntryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagEntryList"]));
        tagEntryList = make_shared<GetTraceResponseBodySpansSpanTagEntryList>(model1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetTraceResponseBodySpansSpan() = default;
};
class GetTraceResponseBodySpans : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodySpansSpan>> span{};

  GetTraceResponseBodySpans() {}

  explicit GetTraceResponseBodySpans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (span) {
      vector<boost::any> temp1;
      for(auto item1:*span){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Span"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Span") != m.end() && !m["Span"].empty()) {
      if (typeid(vector<boost::any>) == m["Span"].type()) {
        vector<GetTraceResponseBodySpansSpan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Span"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansSpan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        span = make_shared<vector<GetTraceResponseBodySpansSpan>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodySpans() = default;
};
class GetTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTraceResponseBodySpans> spans{};

  GetTraceResponseBody() {}

  explicit GetTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spans) {
      res["Spans"] = spans ? boost::any(spans->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spans") != m.end() && !m["Spans"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spans"].type()) {
        GetTraceResponseBodySpans model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spans"]));
        spans = make_shared<GetTraceResponseBodySpans>(model1);
      }
    }
  }


  virtual ~GetTraceResponseBody() = default;
};
class GetTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTraceResponseBody> body{};

  GetTraceResponse() {}

  explicit GetTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTraceResponseBody>(model1);
      }
    }
  }


  virtual ~GetTraceResponse() = default;
};
class ListIpOrHostsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};

  ListIpOrHostsRequest() {}

  explicit ListIpOrHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListIpOrHostsRequest() = default;
};
class ListIpOrHostsResponseBodyIpNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipName{};

  ListIpOrHostsResponseBodyIpNames() {}

  explicit ListIpOrHostsResponseBodyIpNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListIpOrHostsResponseBodyIpNames() = default;
};
class ListIpOrHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListIpOrHostsResponseBodyIpNames> ipNames{};
  shared_ptr<string> requestId{};

  ListIpOrHostsResponseBody() {}

  explicit ListIpOrHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipNames) {
      res["IpNames"] = ipNames ? boost::any(ipNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpNames") != m.end() && !m["IpNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpNames"].type()) {
        ListIpOrHostsResponseBodyIpNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpNames"]));
        ipNames = make_shared<ListIpOrHostsResponseBodyIpNames>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListIpOrHostsResponseBody() = default;
};
class ListIpOrHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpOrHostsResponseBody> body{};

  ListIpOrHostsResponse() {}

  explicit ListIpOrHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIpOrHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpOrHostsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpOrHostsResponse() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> regionId{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServicesService : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};

  ListServicesResponseBodyServicesService() {}

  explicit ListServicesResponseBodyServicesService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesService() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<vector<ListServicesResponseBodyServicesService>> service{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      vector<boost::any> temp1;
      for(auto item1:*service){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Service"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(vector<boost::any>) == m["Service"].type()) {
        vector<ListServicesResponseBodyServicesService> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Service"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesService model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        service = make_shared<vector<ListServicesResponseBodyServicesService>>(expect1);
      }
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListServicesResponseBodyServices> services{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (services) {
      res["Services"] = services ? boost::any(services->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(map<string, boost::any>) == m["Services"].type()) {
        ListServicesResponseBodyServices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Services"]));
        services = make_shared<ListServicesResponseBodyServices>(model1);
      }
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListSpanNamesRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};

  ListSpanNamesRequest() {}

  explicit ListSpanNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListSpanNamesRequest() = default;
};
class ListSpanNamesResponseBodySpanNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> spanName{};

  ListSpanNamesResponseBodySpanNames() {}

  explicit ListSpanNamesResponseBodySpanNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpanName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpanName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spanName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSpanNamesResponseBodySpanNames() = default;
};
class ListSpanNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSpanNamesResponseBodySpanNames> spanNames{};

  ListSpanNamesResponseBody() {}

  explicit ListSpanNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spanNames) {
      res["SpanNames"] = spanNames ? boost::any(spanNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpanNames") != m.end() && !m["SpanNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpanNames"].type()) {
        ListSpanNamesResponseBodySpanNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpanNames"]));
        spanNames = make_shared<ListSpanNamesResponseBodySpanNames>(model1);
      }
    }
  }


  virtual ~ListSpanNamesResponseBody() = default;
};
class ListSpanNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSpanNamesResponseBody> body{};

  ListSpanNamesResponse() {}

  explicit ListSpanNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSpanNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSpanNamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSpanNamesResponse() = default;
};
class OpenXtraceServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  OpenXtraceServiceRequest() {}

  explicit OpenXtraceServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenXtraceServiceRequest() = default;
};
class OpenXtraceServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  OpenXtraceServiceResponseBody() {}

  explicit OpenXtraceServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~OpenXtraceServiceResponseBody() = default;
};
class OpenXtraceServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenXtraceServiceResponseBody> body{};

  OpenXtraceServiceResponse() {}

  explicit OpenXtraceServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenXtraceServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenXtraceServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenXtraceServiceResponse() = default;
};
class QueryMetricRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  QueryMetricRequestFilters() {}

  explicit QueryMetricRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryMetricRequestFilters() = default;
};
class QueryMetricRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dimensions{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<QueryMetricRequestFilters>> filters{};
  shared_ptr<long> intervalInSec{};
  shared_ptr<long> limit{};
  shared_ptr<vector<string>> measures{};
  shared_ptr<string> metric{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<long> startTime{};

  QueryMetricRequest() {}

  explicit QueryMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (intervalInSec) {
      res["IntervalInSec"] = boost::any(*intervalInSec);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (metric) {
      res["Metric"] = boost::any(*metric);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dimensions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<QueryMetricRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMetricRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<QueryMetricRequestFilters>>(expect1);
      }
    }
    if (m.find("IntervalInSec") != m.end() && !m["IntervalInSec"].empty()) {
      intervalInSec = make_shared<long>(boost::any_cast<long>(m["IntervalInSec"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Measures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Measures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      measures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      metric = make_shared<string>(boost::any_cast<string>(m["Metric"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryMetricRequest() = default;
};
class QueryMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryMetricResponseBody() {}

  explicit QueryMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryMetricResponseBody() = default;
};
class QueryMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMetricResponseBody> body{};

  QueryMetricResponse() {}

  explicit QueryMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMetricResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMetricResponse() = default;
};
class SearchTracesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchTracesRequestTag() {}

  explicit SearchTracesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SearchTracesRequestTag() = default;
};
class SearchTracesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> endTime{};
  shared_ptr<long> minDuration{};
  shared_ptr<string> operationName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};
  shared_ptr<string> statusCode{};
  shared_ptr<vector<SearchTracesRequestTag>> tag{};

  SearchTracesRequest() {}

  explicit SearchTracesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<long>(boost::any_cast<long>(m["MinDuration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<SearchTracesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<SearchTracesRequestTag>>(expect1);
      }
    }
  }


  virtual ~SearchTracesRequest() = default;
};
class SearchTracesResponseBodyPageBeanTraceInfosTraceInfo : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> operationName{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> tagMap{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  SearchTracesResponseBodyPageBeanTraceInfosTraceInfo() {}

  explicit SearchTracesResponseBodyPageBeanTraceInfosTraceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (tagMap) {
      res["TagMap"] = boost::any(*tagMap);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
    if (m.find("TagMap") != m.end() && !m["TagMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TagMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tagMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~SearchTracesResponseBodyPageBeanTraceInfosTraceInfo() = default;
};
class SearchTracesResponseBodyPageBeanTraceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<SearchTracesResponseBodyPageBeanTraceInfosTraceInfo>> traceInfo{};

  SearchTracesResponseBodyPageBeanTraceInfos() {}

  explicit SearchTracesResponseBodyPageBeanTraceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (traceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*traceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TraceInfo") != m.end() && !m["TraceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceInfo"].type()) {
        vector<SearchTracesResponseBodyPageBeanTraceInfosTraceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesResponseBodyPageBeanTraceInfosTraceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceInfo = make_shared<vector<SearchTracesResponseBodyPageBeanTraceInfosTraceInfo>>(expect1);
      }
    }
  }


  virtual ~SearchTracesResponseBodyPageBeanTraceInfos() = default;
};
class SearchTracesResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<SearchTracesResponseBodyPageBeanTraceInfos> traceInfos{};

  SearchTracesResponseBodyPageBean() {}

  explicit SearchTracesResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (traceInfos) {
      res["TraceInfos"] = traceInfos ? boost::any(traceInfos->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TraceInfos") != m.end() && !m["TraceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceInfos"].type()) {
        SearchTracesResponseBodyPageBeanTraceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceInfos"]));
        traceInfos = make_shared<SearchTracesResponseBodyPageBeanTraceInfos>(model1);
      }
    }
  }


  virtual ~SearchTracesResponseBodyPageBean() = default;
};
class SearchTracesResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchTracesResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchTracesResponseBody() {}

  explicit SearchTracesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchTracesResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchTracesResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchTracesResponseBody() = default;
};
class SearchTracesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchTracesResponseBody> body{};

  SearchTracesResponse() {}

  explicit SearchTracesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTracesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTracesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTracesResponse() = default;
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
  CheckCommercialStatusResponse checkCommercialStatusWithOptions(shared_ptr<CheckCommercialStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCommercialStatusResponse checkCommercialStatus(shared_ptr<CheckCommercialStatusRequest> request);
  GetTagKeyResponse getTagKeyWithOptions(shared_ptr<GetTagKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTagKeyResponse getTagKey(shared_ptr<GetTagKeyRequest> request);
  GetTagValResponse getTagValWithOptions(shared_ptr<GetTagValRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTagValResponse getTagVal(shared_ptr<GetTagValRequest> request);
  GetTraceResponse getTraceWithOptions(shared_ptr<GetTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTraceResponse getTrace(shared_ptr<GetTraceRequest> request);
  ListIpOrHostsResponse listIpOrHostsWithOptions(shared_ptr<ListIpOrHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpOrHostsResponse listIpOrHosts(shared_ptr<ListIpOrHostsRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListSpanNamesResponse listSpanNamesWithOptions(shared_ptr<ListSpanNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSpanNamesResponse listSpanNames(shared_ptr<ListSpanNamesRequest> request);
  OpenXtraceServiceResponse openXtraceServiceWithOptions(shared_ptr<OpenXtraceServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenXtraceServiceResponse openXtraceService(shared_ptr<OpenXtraceServiceRequest> request);
  QueryMetricResponse queryMetricWithOptions(shared_ptr<QueryMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMetricResponse queryMetric(shared_ptr<QueryMetricRequest> request);
  SearchTracesResponse searchTracesWithOptions(shared_ptr<SearchTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTracesResponse searchTraces(shared_ptr<SearchTracesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Xtrace20190808

#endif
