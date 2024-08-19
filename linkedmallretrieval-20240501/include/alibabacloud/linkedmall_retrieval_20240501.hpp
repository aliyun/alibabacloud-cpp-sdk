// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKEDMALLRETRIEVAL20240501_H_
#define ALIBABACLOUD_LINKEDMALLRETRIEVAL20240501_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_LinkedmallRetrieval20240501 {
class AISearchQuery : public Darabonba::Model {
public:
  shared_ptr<string> card{};
  shared_ptr<string> query{};

  AISearchQuery() {}

  explicit AISearchQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (card) {
      res["card"] = boost::any(*card);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("card") != m.end() && !m["card"].empty()) {
      card = make_shared<string>(boost::any_cast<string>(m["card"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~AISearchQuery() = default;
};
class EventHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> responseTime{};

  EventHeader() {}

  explicit EventHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["eventId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<long>(boost::any_cast<long>(m["responseTime"]));
    }
  }


  virtual ~EventHeader() = default;
};
class AISearchResult : public Darabonba::Model {
public:
  shared_ptr<EventHeader> header{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};

  AISearchResult() {}

  explicit AISearchResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        EventHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<EventHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["payload"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AISearchResult() = default;
};
class AISearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> card{};
  shared_ptr<string> query{};

  AISearchRequest() {}

  explicit AISearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (card) {
      res["card"] = boost::any(*card);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("card") != m.end() && !m["card"].empty()) {
      card = make_shared<string>(boost::any_cast<string>(m["card"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~AISearchRequest() = default;
};
class AISearchResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseTime{};

  AISearchResponseBodyHeader() {}

  explicit AISearchResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["eventId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
  }


  virtual ~AISearchResponseBodyHeader() = default;
};
class AISearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<AISearchResponseBodyHeader> header{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};

  AISearchResponseBody() {}

  explicit AISearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        AISearchResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<AISearchResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["payload"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AISearchResponseBody() = default;
};
class AISearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AISearchResponseBody> body{};

  AISearchResponse() {}

  explicit AISearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AISearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AISearchResponseBody>(model1);
      }
    }
  }


  virtual ~AISearchResponse() = default;
};
class AISearchV2Request : public Darabonba::Model {
public:
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> timeRange{};

  AISearchV2Request() {}

  explicit AISearchV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~AISearchV2Request() = default;
};
class AISearchV2ResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventId{};
  shared_ptr<string> responseTime{};

  AISearchV2ResponseBodyHeader() {}

  explicit AISearchV2ResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["eventId"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
  }


  virtual ~AISearchV2ResponseBodyHeader() = default;
};
class AISearchV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<AISearchV2ResponseBodyHeader> header{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};

  AISearchV2ResponseBody() {}

  explicit AISearchV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        AISearchV2ResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<AISearchV2ResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["payload"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AISearchV2ResponseBody() = default;
};
class AISearchV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AISearchV2ResponseBody> body{};

  AISearchV2Response() {}

  explicit AISearchV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AISearchV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AISearchV2ResponseBody>(model1);
      }
    }
  }


  virtual ~AISearchV2Response() = default;
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
  AISearchResponse aISearchWithOptions(shared_ptr<AISearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AISearchResponse aISearch(shared_ptr<AISearchRequest> request);
  AISearchV2Response aISearchV2WithOptions(shared_ptr<AISearchV2Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AISearchV2Response aISearchV2(shared_ptr<AISearchV2Request> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_LinkedmallRetrieval20240501

#endif
