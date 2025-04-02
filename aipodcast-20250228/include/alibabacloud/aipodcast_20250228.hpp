// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIPODCAST20250228_H_
#define ALIBABACLOUD_AIPODCAST20250228_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AIPodcast20250228 {
class PodcastTaskResultQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> workspaceId{};

  PodcastTaskResultQueryRequest() {}

  explicit PodcastTaskResultQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~PodcastTaskResultQueryRequest() = default;
};
class PodcastTaskResultQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<boost::any> resultUrl{};
  shared_ptr<string> script{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  PodcastTaskResultQueryResponseBodyData() {}

  explicit PodcastTaskResultQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["resultUrl"] = boost::any(*resultUrl);
    }
    if (script) {
      res["script"] = boost::any(*script);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resultUrl") != m.end() && !m["resultUrl"].empty()) {
      resultUrl = make_shared<boost::any>(boost::any_cast<boost::any>(m["resultUrl"]));
    }
    if (m.find("script") != m.end() && !m["script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["script"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~PodcastTaskResultQueryResponseBodyData() = default;
};
class PodcastTaskResultQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PodcastTaskResultQueryResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PodcastTaskResultQueryResponseBody() {}

  explicit PodcastTaskResultQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PodcastTaskResultQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PodcastTaskResultQueryResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PodcastTaskResultQueryResponseBody() = default;
};
class PodcastTaskResultQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PodcastTaskResultQueryResponseBody> body{};

  PodcastTaskResultQueryResponse() {}

  explicit PodcastTaskResultQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PodcastTaskResultQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PodcastTaskResultQueryResponseBody>(model1);
      }
    }
  }


  virtual ~PodcastTaskResultQueryResponse() = default;
};
class PodcastTaskSubmitRequest : public Darabonba::Model {
public:
  shared_ptr<long> counts{};
  shared_ptr<vector<string>> fileUrls{};
  shared_ptr<string> text{};
  shared_ptr<string> topic{};
  shared_ptr<vector<string>> voices{};
  shared_ptr<string> workspaceId{};

  PodcastTaskSubmitRequest() {}

  explicit PodcastTaskSubmitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (counts) {
      res["counts"] = boost::any(*counts);
    }
    if (fileUrls) {
      res["fileUrls"] = boost::any(*fileUrls);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (voices) {
      res["voices"] = boost::any(*voices);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("counts") != m.end() && !m["counts"].empty()) {
      counts = make_shared<long>(boost::any_cast<long>(m["counts"]));
    }
    if (m.find("fileUrls") != m.end() && !m["fileUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fileUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fileUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("voices") != m.end() && !m["voices"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["voices"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["voices"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      voices = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~PodcastTaskSubmitRequest() = default;
};
class PodcastTaskSubmitShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> counts{};
  shared_ptr<string> fileUrlsShrink{};
  shared_ptr<string> text{};
  shared_ptr<string> topic{};
  shared_ptr<string> voicesShrink{};
  shared_ptr<string> workspaceId{};

  PodcastTaskSubmitShrinkRequest() {}

  explicit PodcastTaskSubmitShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (counts) {
      res["counts"] = boost::any(*counts);
    }
    if (fileUrlsShrink) {
      res["fileUrls"] = boost::any(*fileUrlsShrink);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (voicesShrink) {
      res["voices"] = boost::any(*voicesShrink);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("counts") != m.end() && !m["counts"].empty()) {
      counts = make_shared<long>(boost::any_cast<long>(m["counts"]));
    }
    if (m.find("fileUrls") != m.end() && !m["fileUrls"].empty()) {
      fileUrlsShrink = make_shared<string>(boost::any_cast<string>(m["fileUrls"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("voices") != m.end() && !m["voices"].empty()) {
      voicesShrink = make_shared<string>(boost::any_cast<string>(m["voices"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~PodcastTaskSubmitShrinkRequest() = default;
};
class PodcastTaskSubmitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  PodcastTaskSubmitResponseBodyData() {}

  explicit PodcastTaskSubmitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~PodcastTaskSubmitResponseBodyData() = default;
};
class PodcastTaskSubmitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PodcastTaskSubmitResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PodcastTaskSubmitResponseBody() {}

  explicit PodcastTaskSubmitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PodcastTaskSubmitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PodcastTaskSubmitResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PodcastTaskSubmitResponseBody() = default;
};
class PodcastTaskSubmitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PodcastTaskSubmitResponseBody> body{};

  PodcastTaskSubmitResponse() {}

  explicit PodcastTaskSubmitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PodcastTaskSubmitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PodcastTaskSubmitResponseBody>(model1);
      }
    }
  }


  virtual ~PodcastTaskSubmitResponse() = default;
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
  PodcastTaskResultQueryResponse podcastTaskResultQueryWithOptions(shared_ptr<PodcastTaskResultQueryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PodcastTaskResultQueryResponse podcastTaskResultQuery(shared_ptr<PodcastTaskResultQueryRequest> request);
  PodcastTaskSubmitResponse podcastTaskSubmitWithOptions(shared_ptr<PodcastTaskSubmitRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PodcastTaskSubmitResponse podcastTaskSubmit(shared_ptr<PodcastTaskSubmitRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AIPodcast20250228

#endif
