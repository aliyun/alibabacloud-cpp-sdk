// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FT20210101_H_
#define ALIBABACLOUD_FT20210101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Ft20210101 {
class DataRateLimitTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DataRateLimitTestResponseBody() {}

  explicit DataRateLimitTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DataRateLimitTestResponseBody() = default;
};
class DataRateLimitTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DataRateLimitTestResponseBody> body{};

  DataRateLimitTestResponse() {}

  explicit DataRateLimitTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DataRateLimitTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DataRateLimitTestResponseBody>(model1);
      }
    }
  }


  virtual ~DataRateLimitTestResponse() = default;
};
class NormalRpcHsfApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  NormalRpcHsfApiResponseBody() {}

  explicit NormalRpcHsfApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~NormalRpcHsfApiResponseBody() = default;
};
class NormalRpcHsfApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NormalRpcHsfApiResponseBody> body{};

  NormalRpcHsfApiResponse() {}

  explicit NormalRpcHsfApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NormalRpcHsfApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NormalRpcHsfApiResponseBody>(model1);
      }
    }
  }


  virtual ~NormalRpcHsfApiResponse() = default;
};
class NormalRpcHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  NormalRpcHttpApiResponseBody() {}

  explicit NormalRpcHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~NormalRpcHttpApiResponseBody() = default;
};
class NormalRpcHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NormalRpcHttpApiResponseBody> body{};

  NormalRpcHttpApiResponse() {}

  explicit NormalRpcHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NormalRpcHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NormalRpcHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~NormalRpcHttpApiResponse() = default;
};
class RpcDataUploadRequest : public Darabonba::Model {
public:
  shared_ptr<string> largeParam{};
  shared_ptr<string> query1{};
  shared_ptr<long> query2{};

  RpcDataUploadRequest() {}

  explicit RpcDataUploadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (largeParam) {
      res["largeParam"] = boost::any(*largeParam);
    }
    if (query1) {
      res["query1"] = boost::any(*query1);
    }
    if (query2) {
      res["query2"] = boost::any(*query2);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("largeParam") != m.end() && !m["largeParam"].empty()) {
      largeParam = make_shared<string>(boost::any_cast<string>(m["largeParam"]));
    }
    if (m.find("query1") != m.end() && !m["query1"].empty()) {
      query1 = make_shared<string>(boost::any_cast<string>(m["query1"]));
    }
    if (m.find("query2") != m.end() && !m["query2"].empty()) {
      query2 = make_shared<long>(boost::any_cast<long>(m["query2"]));
    }
  }


  virtual ~RpcDataUploadRequest() = default;
};
class RpcDataUploadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> headers{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> speed{};
  shared_ptr<long> totalBytes{};
  shared_ptr<long> totalTime{};
  shared_ptr<string> url{};

  RpcDataUploadResponseBody() {}

  explicit RpcDataUploadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (speed) {
      res["speed"] = boost::any(*speed);
    }
    if (totalBytes) {
      res["totalBytes"] = boost::any(*totalBytes);
    }
    if (totalTime) {
      res["totalTime"] = boost::any(*totalTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["headers"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("speed") != m.end() && !m["speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["speed"]));
    }
    if (m.find("totalBytes") != m.end() && !m["totalBytes"].empty()) {
      totalBytes = make_shared<long>(boost::any_cast<long>(m["totalBytes"]));
    }
    if (m.find("totalTime") != m.end() && !m["totalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["totalTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RpcDataUploadResponseBody() = default;
};
class RpcDataUploadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RpcDataUploadResponseBody> body{};

  RpcDataUploadResponse() {}

  explicit RpcDataUploadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RpcDataUploadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RpcDataUploadResponseBody>(model1);
      }
    }
  }


  virtual ~RpcDataUploadResponse() = default;
};
class RpcDataUploadAndDownloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> query1{};

  RpcDataUploadAndDownloadRequest() {}

  explicit RpcDataUploadAndDownloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query1) {
      res["query1"] = boost::any(*query1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query1") != m.end() && !m["query1"].empty()) {
      query1 = make_shared<string>(boost::any_cast<string>(m["query1"]));
    }
  }


  virtual ~RpcDataUploadAndDownloadRequest() = default;
};
class RpcDataUploadAndDownloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RpcDataUploadAndDownloadResponseBody() {}

  explicit RpcDataUploadAndDownloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RpcDataUploadAndDownloadResponseBody() = default;
};
class RpcDataUploadAndDownloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RpcDataUploadAndDownloadResponseBody> body{};

  RpcDataUploadAndDownloadResponse() {}

  explicit RpcDataUploadAndDownloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RpcDataUploadAndDownloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RpcDataUploadAndDownloadResponseBody>(model1);
      }
    }
  }


  virtual ~RpcDataUploadAndDownloadResponse() = default;
};
class RpcDataUploadTestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RpcDataUploadTestResponseBody() {}

  explicit RpcDataUploadTestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RpcDataUploadTestResponseBody() = default;
};
class RpcDataUploadTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RpcDataUploadTestResponseBody> body{};

  RpcDataUploadTestResponse() {}

  explicit RpcDataUploadTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RpcDataUploadTestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RpcDataUploadTestResponseBody>(model1);
      }
    }
  }


  virtual ~RpcDataUploadTestResponse() = default;
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
  DataRateLimitTestResponse dataRateLimitTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DataRateLimitTestResponse dataRateLimitTest();
  NormalRpcHsfApiResponse normalRpcHsfApiWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NormalRpcHsfApiResponse normalRpcHsfApi();
  NormalRpcHttpApiResponse normalRpcHttpApiWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NormalRpcHttpApiResponse normalRpcHttpApi();
  RpcDataUploadResponse rpcDataUploadWithOptions(shared_ptr<RpcDataUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RpcDataUploadResponse rpcDataUpload(shared_ptr<RpcDataUploadRequest> request);
  RpcDataUploadAndDownloadResponse rpcDataUploadAndDownloadWithOptions(shared_ptr<RpcDataUploadAndDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RpcDataUploadAndDownloadResponse rpcDataUploadAndDownload(shared_ptr<RpcDataUploadAndDownloadRequest> request);
  RpcDataUploadTestResponse rpcDataUploadTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RpcDataUploadTestResponse rpcDataUploadTest();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ft20210101

#endif
