// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPENPLATFORM20191219_H_
#define ALIBABACLOUD_OPENPLATFORM20191219_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_OpenPlatform20191219 {
class AuthorizeFileUploadRequest : public Darabonba::Model {
public:
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};

  AuthorizeFileUploadRequest() {}

  explicit AuthorizeFileUploadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AuthorizeFileUploadRequest() = default;
};
class AuthorizeFileUploadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> bucket{};
  shared_ptr<string> encodedPolicy{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> objectKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};
  shared_ptr<bool> useAccelerate{};

  AuthorizeFileUploadResponseBody() {}

  explicit AuthorizeFileUploadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (encodedPolicy) {
      res["EncodedPolicy"] = boost::any(*encodedPolicy);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (objectKey) {
      res["ObjectKey"] = boost::any(*objectKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (useAccelerate) {
      res["UseAccelerate"] = boost::any(*useAccelerate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EncodedPolicy") != m.end() && !m["EncodedPolicy"].empty()) {
      encodedPolicy = make_shared<string>(boost::any_cast<string>(m["EncodedPolicy"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ObjectKey") != m.end() && !m["ObjectKey"].empty()) {
      objectKey = make_shared<string>(boost::any_cast<string>(m["ObjectKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("UseAccelerate") != m.end() && !m["UseAccelerate"].empty()) {
      useAccelerate = make_shared<bool>(boost::any_cast<bool>(m["UseAccelerate"]));
    }
  }


  virtual ~AuthorizeFileUploadResponseBody() = default;
};
class AuthorizeFileUploadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeFileUploadResponseBody> body{};

  AuthorizeFileUploadResponse() {}

  explicit AuthorizeFileUploadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeFileUploadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeFileUploadResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeFileUploadResponse() = default;
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
  AuthorizeFileUploadResponse authorizeFileUploadWithOptions(shared_ptr<AuthorizeFileUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeFileUploadResponse authorizeFileUpload(shared_ptr<AuthorizeFileUploadRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OpenPlatform20191219

#endif
