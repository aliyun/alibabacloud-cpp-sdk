// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20201112_H_
#define ALIBABACLOUD_CLOUDAUTH20201112_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Cloudauth20201112 {
class LivenessDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> mediaCategory{};
  shared_ptr<string> mediaUrl{};
  shared_ptr<string> mediaFile{};

  LivenessDetectRequest() {}

  explicit LivenessDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (mediaCategory) {
      res["MediaCategory"] = boost::any(*mediaCategory);
    }
    if (mediaUrl) {
      res["MediaUrl"] = boost::any(*mediaUrl);
    }
    if (mediaFile) {
      res["MediaFile"] = boost::any(*mediaFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("MediaCategory") != m.end() && !m["MediaCategory"].empty()) {
      mediaCategory = make_shared<string>(boost::any_cast<string>(m["MediaCategory"]));
    }
    if (m.find("MediaUrl") != m.end() && !m["MediaUrl"].empty()) {
      mediaUrl = make_shared<string>(boost::any_cast<string>(m["MediaUrl"]));
    }
    if (m.find("MediaFile") != m.end() && !m["MediaFile"].empty()) {
      mediaFile = make_shared<string>(boost::any_cast<string>(m["MediaFile"]));
    }
  }


  virtual ~LivenessDetectRequest() = default;
};
class LivenessDetectAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> mediaFileObject{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> mediaCategory{};
  shared_ptr<string> mediaUrl{};

  LivenessDetectAdvanceRequest() {}

  explicit LivenessDetectAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!mediaFileObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("mediaFileObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaFileObject) {
      res["MediaFileObject"] = boost::any(*mediaFileObject);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (mediaCategory) {
      res["MediaCategory"] = boost::any(*mediaCategory);
    }
    if (mediaUrl) {
      res["MediaUrl"] = boost::any(*mediaUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaFileObject") != m.end() && !m["MediaFileObject"].empty()) {
      mediaFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["MediaFileObject"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("MediaCategory") != m.end() && !m["MediaCategory"].empty()) {
      mediaCategory = make_shared<string>(boost::any_cast<string>(m["MediaCategory"]));
    }
    if (m.find("MediaUrl") != m.end() && !m["MediaUrl"].empty()) {
      mediaUrl = make_shared<string>(boost::any_cast<string>(m["MediaUrl"]));
    }
  }


  virtual ~LivenessDetectAdvanceRequest() = default;
};
class LivenessDetectResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> frameUrl{};
  shared_ptr<string> passed{};

  LivenessDetectResponseBodyResultObject() {}

  explicit LivenessDetectResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (frameUrl) {
      res["FrameUrl"] = boost::any(*frameUrl);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("FrameUrl") != m.end() && !m["FrameUrl"].empty()) {
      frameUrl = make_shared<string>(boost::any_cast<string>(m["FrameUrl"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~LivenessDetectResponseBodyResultObject() = default;
};
class LivenessDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<LivenessDetectResponseBodyResultObject> resultObject{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  LivenessDetectResponseBody() {}

  explicit LivenessDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        LivenessDetectResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<LivenessDetectResponseBodyResultObject>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~LivenessDetectResponseBody() = default;
};
class LivenessDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LivenessDetectResponseBody> body{};

  LivenessDetectResponse() {}

  explicit LivenessDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivenessDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LivenessDetectResponseBody>(model1);
      }
    }
  }


  virtual ~LivenessDetectResponse() = default;
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
  LivenessDetectResponse livenessDetectWithOptions(shared_ptr<LivenessDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessDetectResponse livenessDetect(shared_ptr<LivenessDetectRequest> request);
  LivenessDetectResponse livenessDetectAdvance(shared_ptr<LivenessDetectAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20201112

#endif
