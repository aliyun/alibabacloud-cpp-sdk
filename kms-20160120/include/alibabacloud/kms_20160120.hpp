// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_KMS20160120_H_
#define ALIBABACLOUD_KMS20160120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Kms20160120 {
class AsymmetricDecryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> algorithm{};

  AsymmetricDecryptRequest() {}

  explicit AsymmetricDecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
  }


  virtual ~AsymmetricDecryptRequest() = default;
};
class AsymmetricDecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricDecryptResponseBody() {}

  explicit AsymmetricDecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~AsymmetricDecryptResponseBody() = default;
};
class AsymmetricDecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AsymmetricDecryptResponseBody> body{};

  AsymmetricDecryptResponse() {}

  explicit AsymmetricDecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsymmetricDecryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsymmetricDecryptResponseBody>(model1);
      }
    }
  }


  virtual ~AsymmetricDecryptResponse() = default;
};
class AsymmetricEncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> plaintext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> algorithm{};

  AsymmetricEncryptRequest() {}

  explicit AsymmetricEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
  }


  virtual ~AsymmetricEncryptRequest() = default;
};
class AsymmetricEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricEncryptResponseBody() {}

  explicit AsymmetricEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~AsymmetricEncryptResponseBody() = default;
};
class AsymmetricEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AsymmetricEncryptResponseBody> body{};

  AsymmetricEncryptResponse() {}

  explicit AsymmetricEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsymmetricEncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsymmetricEncryptResponseBody>(model1);
      }
    }
  }


  virtual ~AsymmetricEncryptResponse() = default;
};
class AsymmetricSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> digest{};

  AsymmetricSignRequest() {}

  explicit AsymmetricSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
  }


  virtual ~AsymmetricSignRequest() = default;
};
class AsymmetricSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> value{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricSignResponseBody() {}

  explicit AsymmetricSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~AsymmetricSignResponseBody() = default;
};
class AsymmetricSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AsymmetricSignResponseBody> body{};

  AsymmetricSignResponse() {}

  explicit AsymmetricSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsymmetricSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsymmetricSignResponseBody>(model1);
      }
    }
  }


  virtual ~AsymmetricSignResponse() = default;
};
class AsymmetricVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<string> value{};

  AsymmetricVerifyRequest() {}

  explicit AsymmetricVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AsymmetricVerifyRequest() = default;
};
class AsymmetricVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> value{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricVerifyResponseBody() {}

  explicit AsymmetricVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<bool>(boost::any_cast<bool>(m["Value"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~AsymmetricVerifyResponseBody() = default;
};
class AsymmetricVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AsymmetricVerifyResponseBody> body{};

  AsymmetricVerifyResponse() {}

  explicit AsymmetricVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsymmetricVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsymmetricVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~AsymmetricVerifyResponse() = default;
};
class CancelKeyDeletionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  CancelKeyDeletionRequest() {}

  explicit CancelKeyDeletionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~CancelKeyDeletionRequest() = default;
};
class CancelKeyDeletionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelKeyDeletionResponseBody() {}

  explicit CancelKeyDeletionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelKeyDeletionResponseBody() = default;
};
class CancelKeyDeletionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelKeyDeletionResponseBody> body{};

  CancelKeyDeletionResponse() {}

  explicit CancelKeyDeletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelKeyDeletionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelKeyDeletionResponseBody>(model1);
      }
    }
  }


  virtual ~CancelKeyDeletionResponse() = default;
};
class CertificatePrivateKeyDecryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> ciphertextBlob{};

  CertificatePrivateKeyDecryptRequest() {}

  explicit CertificatePrivateKeyDecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
  }


  virtual ~CertificatePrivateKeyDecryptRequest() = default;
};
class CertificatePrivateKeyDecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> plaintext{};

  CertificatePrivateKeyDecryptResponseBody() {}

  explicit CertificatePrivateKeyDecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~CertificatePrivateKeyDecryptResponseBody() = default;
};
class CertificatePrivateKeyDecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CertificatePrivateKeyDecryptResponseBody> body{};

  CertificatePrivateKeyDecryptResponse() {}

  explicit CertificatePrivateKeyDecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificatePrivateKeyDecryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificatePrivateKeyDecryptResponseBody>(model1);
      }
    }
  }


  virtual ~CertificatePrivateKeyDecryptResponse() = default;
};
class CertificatePrivateKeySignRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> messageType{};
  shared_ptr<string> message{};

  CertificatePrivateKeySignRequest() {}

  explicit CertificatePrivateKeySignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CertificatePrivateKeySignRequest() = default;
};
class CertificatePrivateKeySignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> signatureValue{};
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};

  CertificatePrivateKeySignResponseBody() {}

  explicit CertificatePrivateKeySignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~CertificatePrivateKeySignResponseBody() = default;
};
class CertificatePrivateKeySignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CertificatePrivateKeySignResponseBody> body{};

  CertificatePrivateKeySignResponse() {}

  explicit CertificatePrivateKeySignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificatePrivateKeySignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificatePrivateKeySignResponseBody>(model1);
      }
    }
  }


  virtual ~CertificatePrivateKeySignResponse() = default;
};
class CertificatePublicKeyEncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> plaintext{};

  CertificatePublicKeyEncryptRequest() {}

  explicit CertificatePublicKeyEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~CertificatePublicKeyEncryptRequest() = default;
};
class CertificatePublicKeyEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> certificateId{};

  CertificatePublicKeyEncryptResponseBody() {}

  explicit CertificatePublicKeyEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~CertificatePublicKeyEncryptResponseBody() = default;
};
class CertificatePublicKeyEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CertificatePublicKeyEncryptResponseBody> body{};

  CertificatePublicKeyEncryptResponse() {}

  explicit CertificatePublicKeyEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificatePublicKeyEncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificatePublicKeyEncryptResponseBody>(model1);
      }
    }
  }


  virtual ~CertificatePublicKeyEncryptResponse() = default;
};
class CertificatePublicKeyVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};
  shared_ptr<string> signatureValue{};

  CertificatePublicKeyVerifyRequest() {}

  explicit CertificatePublicKeyVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
  }


  virtual ~CertificatePublicKeyVerifyRequest() = default;
};
class CertificatePublicKeyVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<bool> signatureValid{};

  CertificatePublicKeyVerifyResponseBody() {}

  explicit CertificatePublicKeyVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (signatureValid) {
      res["SignatureValid"] = boost::any(*signatureValid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("SignatureValid") != m.end() && !m["SignatureValid"].empty()) {
      signatureValid = make_shared<bool>(boost::any_cast<bool>(m["SignatureValid"]));
    }
  }


  virtual ~CertificatePublicKeyVerifyResponseBody() = default;
};
class CertificatePublicKeyVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CertificatePublicKeyVerifyResponseBody> body{};

  CertificatePublicKeyVerifyResponse() {}

  explicit CertificatePublicKeyVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificatePublicKeyVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificatePublicKeyVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~CertificatePublicKeyVerifyResponse() = default;
};
class CreateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> aliasName{};

  CreateAliasRequest() {}

  explicit CreateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~CreateAliasRequest() = default;
};
class CreateAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAliasResponseBody() {}

  explicit CreateAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAliasResponseBody() = default;
};
class CreateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAliasResponseBody> body{};

  CreateAliasResponse() {}

  explicit CreateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAliasResponse() = default;
};
class CreateCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> subject{};
  shared_ptr<map<string, boost::any>> subjectAlternativeNames{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> protectionLevel{};

  CreateCertificateRequest() {}

  explicit CreateCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNames);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SubjectAlternativeNames"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      subjectAlternativeNames = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
  }


  virtual ~CreateCertificateRequest() = default;
};
class CreateCertificateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> subject{};
  shared_ptr<string> subjectAlternativeNamesShrink{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> protectionLevel{};

  CreateCertificateShrinkRequest() {}

  explicit CreateCertificateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectAlternativeNamesShrink) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNamesShrink);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      subjectAlternativeNamesShrink = make_shared<string>(boost::any_cast<string>(m["SubjectAlternativeNames"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
  }


  virtual ~CreateCertificateShrinkRequest() = default;
};
class CreateCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> arn{};

  CreateCertificateResponseBody() {}

  explicit CreateCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~CreateCertificateResponseBody() = default;
};
class CreateCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCertificateResponseBody> body{};

  CreateCertificateResponse() {}

  explicit CreateCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateResponse() = default;
};
class CreateKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> origin{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> keySpec{};

  CreateKeyRequest() {}

  explicit CreateKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
  }


  virtual ~CreateKeyRequest() = default;
};
class CreateKeyResponseBodyKeyMetadata : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> keyState{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> arn{};
  shared_ptr<string> creator{};
  shared_ptr<string> deleteDate{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> description{};
  shared_ptr<string> primaryKeyVersion{};
  shared_ptr<string> origin{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> materialExpireTime{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> creationDate{};

  CreateKeyResponseBodyKeyMetadata() {}

  explicit CreateKeyResponseBodyKeyMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (keyState) {
      res["KeyState"] = boost::any(*keyState);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (deleteDate) {
      res["DeleteDate"] = boost::any(*deleteDate);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (primaryKeyVersion) {
      res["PrimaryKeyVersion"] = boost::any(*primaryKeyVersion);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (materialExpireTime) {
      res["MaterialExpireTime"] = boost::any(*materialExpireTime);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("KeyState") != m.end() && !m["KeyState"].empty()) {
      keyState = make_shared<string>(boost::any_cast<string>(m["KeyState"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DeleteDate") != m.end() && !m["DeleteDate"].empty()) {
      deleteDate = make_shared<string>(boost::any_cast<string>(m["DeleteDate"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PrimaryKeyVersion") != m.end() && !m["PrimaryKeyVersion"].empty()) {
      primaryKeyVersion = make_shared<string>(boost::any_cast<string>(m["PrimaryKeyVersion"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("MaterialExpireTime") != m.end() && !m["MaterialExpireTime"].empty()) {
      materialExpireTime = make_shared<string>(boost::any_cast<string>(m["MaterialExpireTime"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
  }


  virtual ~CreateKeyResponseBodyKeyMetadata() = default;
};
class CreateKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateKeyResponseBodyKeyMetadata> keyMetadata{};

  CreateKeyResponseBody() {}

  explicit CreateKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (keyMetadata) {
      res["KeyMetadata"] = keyMetadata ? boost::any(keyMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KeyMetadata") != m.end() && !m["KeyMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyMetadata"].type()) {
        CreateKeyResponseBodyKeyMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyMetadata"]));
        keyMetadata = make_shared<CreateKeyResponseBodyKeyMetadata>(model1);
      }
    }
  }


  virtual ~CreateKeyResponseBody() = default;
};
class CreateKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateKeyResponseBody> body{};

  CreateKeyResponse() {}

  explicit CreateKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeyResponse() = default;
};
class CreateKeyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  CreateKeyVersionRequest() {}

  explicit CreateKeyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~CreateKeyVersionRequest() = default;
};
class CreateKeyVersionResponseBodyKeyVersion : public Darabonba::Model {
public:
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> keyId{};
  shared_ptr<string> creationDate{};

  CreateKeyVersionResponseBodyKeyVersion() {}

  explicit CreateKeyVersionResponseBodyKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
  }


  virtual ~CreateKeyVersionResponseBodyKeyVersion() = default;
};
class CreateKeyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateKeyVersionResponseBodyKeyVersion> keyVersion{};

  CreateKeyVersionResponseBody() {}

  explicit CreateKeyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (keyVersion) {
      res["KeyVersion"] = keyVersion ? boost::any(keyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KeyVersion") != m.end() && !m["KeyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersion"].type()) {
        CreateKeyVersionResponseBodyKeyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersion"]));
        keyVersion = make_shared<CreateKeyVersionResponseBodyKeyVersion>(model1);
      }
    }
  }


  virtual ~CreateKeyVersionResponseBody() = default;
};
class CreateKeyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateKeyVersionResponseBody> body{};

  CreateKeyVersionResponse() {}

  explicit CreateKeyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeyVersionResponse() = default;
};
class CreateSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> encryptionKeyId{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> description{};
  shared_ptr<string> tags{};
  shared_ptr<string> secretType{};
  shared_ptr<map<string, boost::any>> extendedConfig{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};

  CreateSecretRequest() {}

  explicit CreateSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendedConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendedConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~CreateSecretRequest() = default;
};
class CreateSecretShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> encryptionKeyId{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> description{};
  shared_ptr<string> tags{};
  shared_ptr<string> secretType{};
  shared_ptr<string> extendedConfigShrink{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};

  CreateSecretShrinkRequest() {}

  explicit CreateSecretShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (extendedConfigShrink) {
      res["ExtendedConfig"] = boost::any(*extendedConfigShrink);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfigShrink = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~CreateSecretShrinkRequest() = default;
};
class CreateSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretType{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> arn{};
  shared_ptr<string> automaticRotation{};

  CreateSecretResponseBody() {}

  explicit CreateSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
  }


  virtual ~CreateSecretResponseBody() = default;
};
class CreateSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSecretResponseBody> body{};

  CreateSecretResponse() {}

  explicit CreateSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecretResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecretResponse() = default;
};
class DecryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<map<string, boost::any>> encryptionContext{};

  DecryptRequest() {}

  explicit DecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DecryptRequest() = default;
};
class DecryptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> encryptionContextShrink{};

  DecryptShrinkRequest() {}

  explicit DecryptShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
  }


  virtual ~DecryptShrinkRequest() = default;
};
class DecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  DecryptResponseBody() {}

  explicit DecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~DecryptResponseBody() = default;
};
class DecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DecryptResponseBody> body{};

  DecryptResponse() {}

  explicit DecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecryptResponseBody>(model1);
      }
    }
  }


  virtual ~DecryptResponse() = default;
};
class DeleteAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};

  DeleteAliasRequest() {}

  explicit DeleteAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~DeleteAliasRequest() = default;
};
class DeleteAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAliasResponseBody() {}

  explicit DeleteAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAliasResponseBody() = default;
};
class DeleteAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAliasResponseBody> body{};

  DeleteAliasResponse() {}

  explicit DeleteAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAliasResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAliasResponse() = default;
};
class DeleteCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  DeleteCertificateRequest() {}

  explicit DeleteCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~DeleteCertificateRequest() = default;
};
class DeleteCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCertificateResponseBody() {}

  explicit DeleteCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCertificateResponseBody() = default;
};
class DeleteCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCertificateResponseBody> body{};

  DeleteCertificateResponse() {}

  explicit DeleteCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCertificateResponse() = default;
};
class DeleteKeyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  DeleteKeyMaterialRequest() {}

  explicit DeleteKeyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~DeleteKeyMaterialRequest() = default;
};
class DeleteKeyMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKeyMaterialResponseBody() {}

  explicit DeleteKeyMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKeyMaterialResponseBody() = default;
};
class DeleteKeyMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteKeyMaterialResponseBody> body{};

  DeleteKeyMaterialResponse() {}

  explicit DeleteKeyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeyMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeyMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeyMaterialResponse() = default;
};
class DeleteSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> forceDeleteWithoutRecovery{};
  shared_ptr<string> recoveryWindowInDays{};

  DeleteSecretRequest() {}

  explicit DeleteSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (forceDeleteWithoutRecovery) {
      res["ForceDeleteWithoutRecovery"] = boost::any(*forceDeleteWithoutRecovery);
    }
    if (recoveryWindowInDays) {
      res["RecoveryWindowInDays"] = boost::any(*recoveryWindowInDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("ForceDeleteWithoutRecovery") != m.end() && !m["ForceDeleteWithoutRecovery"].empty()) {
      forceDeleteWithoutRecovery = make_shared<string>(boost::any_cast<string>(m["ForceDeleteWithoutRecovery"]));
    }
    if (m.find("RecoveryWindowInDays") != m.end() && !m["RecoveryWindowInDays"].empty()) {
      recoveryWindowInDays = make_shared<string>(boost::any_cast<string>(m["RecoveryWindowInDays"]));
    }
  }


  virtual ~DeleteSecretRequest() = default;
};
class DeleteSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> plannedDeleteTime{};

  DeleteSecretResponseBody() {}

  explicit DeleteSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
  }


  virtual ~DeleteSecretResponseBody() = default;
};
class DeleteSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSecretResponseBody> body{};

  DeleteSecretResponse() {}

  explicit DeleteSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecretResponse() = default;
};
class DescribeAccountKmsStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> requestId{};

  DescribeAccountKmsStatusResponseBody() {}

  explicit DescribeAccountKmsStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountKmsStatusResponseBody() = default;
};
class DescribeAccountKmsStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountKmsStatusResponseBody> body{};

  DescribeAccountKmsStatusResponse() {}

  explicit DescribeAccountKmsStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountKmsStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountKmsStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountKmsStatusResponse() = default;
};
class DescribeCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  DescribeCertificateRequest() {}

  explicit DescribeCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~DescribeCertificateRequest() = default;
};
class DescribeCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> requestId{};
  shared_ptr<string> issuer{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> keySpec{};
  shared_ptr<vector<string>> subjectAlternativeNames{};
  shared_ptr<string> signatureAlgorithm{};
  shared_ptr<string> subjectKeyIdentifier{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> subject{};
  shared_ptr<string> serial{};
  shared_ptr<string> subjectPublicKey{};
  shared_ptr<string> arn{};
  shared_ptr<string> notBefore{};
  shared_ptr<map<string, boost::any>> tags{};

  DescribeCertificateResponseBody() {}

  explicit DescribeCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNames);
    }
    if (signatureAlgorithm) {
      res["SignatureAlgorithm"] = boost::any(*signatureAlgorithm);
    }
    if (subjectKeyIdentifier) {
      res["SubjectKeyIdentifier"] = boost::any(*subjectKeyIdentifier);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (serial) {
      res["Serial"] = boost::any(*serial);
    }
    if (subjectPublicKey) {
      res["SubjectPublicKey"] = boost::any(*subjectPublicKey);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubjectAlternativeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubjectAlternativeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subjectAlternativeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SignatureAlgorithm") != m.end() && !m["SignatureAlgorithm"].empty()) {
      signatureAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignatureAlgorithm"]));
    }
    if (m.find("SubjectKeyIdentifier") != m.end() && !m["SubjectKeyIdentifier"].empty()) {
      subjectKeyIdentifier = make_shared<string>(boost::any_cast<string>(m["SubjectKeyIdentifier"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Serial") != m.end() && !m["Serial"].empty()) {
      serial = make_shared<string>(boost::any_cast<string>(m["Serial"]));
    }
    if (m.find("SubjectPublicKey") != m.end() && !m["SubjectPublicKey"].empty()) {
      subjectPublicKey = make_shared<string>(boost::any_cast<string>(m["SubjectPublicKey"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeCertificateResponseBody() = default;
};
class DescribeCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCertificateResponseBody> body{};

  DescribeCertificateResponse() {}

  explicit DescribeCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertificateResponse() = default;
};
class DescribeKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  DescribeKeyRequest() {}

  explicit DescribeKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~DescribeKeyRequest() = default;
};
class DescribeKeyResponseBodyKeyMetadata : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> keyState{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> arn{};
  shared_ptr<string> creator{};
  shared_ptr<string> deleteDate{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> description{};
  shared_ptr<string> primaryKeyVersion{};
  shared_ptr<string> origin{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> materialExpireTime{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> creationDate{};

  DescribeKeyResponseBodyKeyMetadata() {}

  explicit DescribeKeyResponseBodyKeyMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (keyState) {
      res["KeyState"] = boost::any(*keyState);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (deleteDate) {
      res["DeleteDate"] = boost::any(*deleteDate);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (primaryKeyVersion) {
      res["PrimaryKeyVersion"] = boost::any(*primaryKeyVersion);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (materialExpireTime) {
      res["MaterialExpireTime"] = boost::any(*materialExpireTime);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("KeyState") != m.end() && !m["KeyState"].empty()) {
      keyState = make_shared<string>(boost::any_cast<string>(m["KeyState"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DeleteDate") != m.end() && !m["DeleteDate"].empty()) {
      deleteDate = make_shared<string>(boost::any_cast<string>(m["DeleteDate"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PrimaryKeyVersion") != m.end() && !m["PrimaryKeyVersion"].empty()) {
      primaryKeyVersion = make_shared<string>(boost::any_cast<string>(m["PrimaryKeyVersion"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("MaterialExpireTime") != m.end() && !m["MaterialExpireTime"].empty()) {
      materialExpireTime = make_shared<string>(boost::any_cast<string>(m["MaterialExpireTime"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
  }


  virtual ~DescribeKeyResponseBodyKeyMetadata() = default;
};
class DescribeKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeKeyResponseBodyKeyMetadata> keyMetadata{};

  DescribeKeyResponseBody() {}

  explicit DescribeKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (keyMetadata) {
      res["KeyMetadata"] = keyMetadata ? boost::any(keyMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KeyMetadata") != m.end() && !m["KeyMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyMetadata"].type()) {
        DescribeKeyResponseBodyKeyMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyMetadata"]));
        keyMetadata = make_shared<DescribeKeyResponseBodyKeyMetadata>(model1);
      }
    }
  }


  virtual ~DescribeKeyResponseBody() = default;
};
class DescribeKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeKeyResponseBody> body{};

  DescribeKeyResponse() {}

  explicit DescribeKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeyResponse() = default;
};
class DescribeKeyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  DescribeKeyVersionRequest() {}

  explicit DescribeKeyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~DescribeKeyVersionRequest() = default;
};
class DescribeKeyVersionResponseBodyKeyVersion : public Darabonba::Model {
public:
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> keyId{};
  shared_ptr<string> creationDate{};

  DescribeKeyVersionResponseBodyKeyVersion() {}

  explicit DescribeKeyVersionResponseBodyKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
  }


  virtual ~DescribeKeyVersionResponseBodyKeyVersion() = default;
};
class DescribeKeyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeKeyVersionResponseBodyKeyVersion> keyVersion{};

  DescribeKeyVersionResponseBody() {}

  explicit DescribeKeyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (keyVersion) {
      res["KeyVersion"] = keyVersion ? boost::any(keyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KeyVersion") != m.end() && !m["KeyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersion"].type()) {
        DescribeKeyVersionResponseBodyKeyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersion"]));
        keyVersion = make_shared<DescribeKeyVersionResponseBodyKeyVersion>(model1);
      }
    }
  }


  virtual ~DescribeKeyVersionResponseBody() = default;
};
class DescribeKeyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeKeyVersionResponseBody> body{};

  DescribeKeyVersionResponse() {}

  explicit DescribeKeyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeyVersionResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> fetchTags{};

  DescribeSecretRequest() {}

  explicit DescribeSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (fetchTags) {
      res["FetchTags"] = boost::any(*fetchTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("FetchTags") != m.end() && !m["FetchTags"].empty()) {
      fetchTags = make_shared<string>(boost::any_cast<string>(m["FetchTags"]));
    }
  }


  virtual ~DescribeSecretRequest() = default;
};
class DescribeSecretResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> tagKey{};

  DescribeSecretResponseBodyTagsTag() {}

  explicit DescribeSecretResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~DescribeSecretResponseBodyTagsTag() = default;
};
class DescribeSecretResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecretResponseBodyTagsTag>> tag{};

  DescribeSecretResponseBodyTags() {}

  explicit DescribeSecretResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeSecretResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecretResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeSecretResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeSecretResponseBodyTags() = default;
};
class DescribeSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> secretName{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> plannedDeleteTime{};
  shared_ptr<string> arn{};
  shared_ptr<DescribeSecretResponseBodyTags> tags{};
  shared_ptr<string> encryptionKeyId{};

  DescribeSecretResponseBody() {}

  explicit DescribeSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeSecretResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeSecretResponseBodyTags>(model1);
      }
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
  }


  virtual ~DescribeSecretResponseBody() = default;
};
class DescribeSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecretResponseBody> body{};

  DescribeSecretResponse() {}

  explicit DescribeSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecretResponse() = default;
};
class DescribeServiceResponseBodyProtectionLevelsProtectionLevel : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  DescribeServiceResponseBodyProtectionLevelsProtectionLevel() {}

  explicit DescribeServiceResponseBodyProtectionLevelsProtectionLevel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeServiceResponseBodyProtectionLevelsProtectionLevel() = default;
};
class DescribeServiceResponseBodyProtectionLevels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceResponseBodyProtectionLevelsProtectionLevel>> protectionLevel{};

  DescribeServiceResponseBodyProtectionLevels() {}

  explicit DescribeServiceResponseBodyProtectionLevels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectionLevel) {
      vector<boost::any> temp1;
      for(auto item1:*protectionLevel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProtectionLevel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      if (typeid(vector<boost::any>) == m["ProtectionLevel"].type()) {
        vector<DescribeServiceResponseBodyProtectionLevelsProtectionLevel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProtectionLevel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceResponseBodyProtectionLevelsProtectionLevel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protectionLevel = make_shared<vector<DescribeServiceResponseBodyProtectionLevelsProtectionLevel>>(expect1);
      }
    }
  }


  virtual ~DescribeServiceResponseBodyProtectionLevels() = default;
};
class DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels : public Darabonba::Model {
public:
  shared_ptr<vector<string>> supportedProtectionLevel{};

  DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels() {}

  explicit DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedProtectionLevel) {
      res["SupportedProtectionLevel"] = boost::any(*supportedProtectionLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedProtectionLevel") != m.end() && !m["SupportedProtectionLevel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedProtectionLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedProtectionLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedProtectionLevel = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels() = default;
};
class DescribeServiceResponseBodyKeySpecsKeySpecUsages : public Darabonba::Model {
public:
  shared_ptr<vector<string>> usage{};

  DescribeServiceResponseBodyKeySpecsKeySpecUsages() {}

  explicit DescribeServiceResponseBodyKeySpecsKeySpecUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Usage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Usage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      usage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceResponseBodyKeySpecsKeySpecUsages() = default;
};
class DescribeServiceResponseBodyKeySpecsKeySpec : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels> supportedProtectionLevels{};
  shared_ptr<string> name{};
  shared_ptr<DescribeServiceResponseBodyKeySpecsKeySpecUsages> usages{};

  DescribeServiceResponseBodyKeySpecsKeySpec() {}

  explicit DescribeServiceResponseBodyKeySpecsKeySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedProtectionLevels) {
      res["SupportedProtectionLevels"] = supportedProtectionLevels ? boost::any(supportedProtectionLevels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (usages) {
      res["Usages"] = usages ? boost::any(usages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedProtectionLevels") != m.end() && !m["SupportedProtectionLevels"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedProtectionLevels"].type()) {
        DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedProtectionLevels"]));
        supportedProtectionLevels = make_shared<DescribeServiceResponseBodyKeySpecsKeySpecSupportedProtectionLevels>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Usages") != m.end() && !m["Usages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usages"].type()) {
        DescribeServiceResponseBodyKeySpecsKeySpecUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usages"]));
        usages = make_shared<DescribeServiceResponseBodyKeySpecsKeySpecUsages>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponseBodyKeySpecsKeySpec() = default;
};
class DescribeServiceResponseBodyKeySpecs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceResponseBodyKeySpecsKeySpec>> keySpec{};

  DescribeServiceResponseBodyKeySpecs() {}

  explicit DescribeServiceResponseBodyKeySpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keySpec) {
      vector<boost::any> temp1;
      for(auto item1:*keySpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeySpec"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      if (typeid(vector<boost::any>) == m["KeySpec"].type()) {
        vector<DescribeServiceResponseBodyKeySpecsKeySpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeySpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceResponseBodyKeySpecsKeySpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keySpec = make_shared<vector<DescribeServiceResponseBodyKeySpecsKeySpec>>(expect1);
      }
    }
  }


  virtual ~DescribeServiceResponseBodyKeySpecs() = default;
};
class DescribeServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceResponseBodyProtectionLevels> protectionLevels{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeServiceResponseBodyKeySpecs> keySpecs{};

  DescribeServiceResponseBody() {}

  explicit DescribeServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectionLevels) {
      res["ProtectionLevels"] = protectionLevels ? boost::any(protectionLevels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (keySpecs) {
      res["KeySpecs"] = keySpecs ? boost::any(keySpecs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectionLevels") != m.end() && !m["ProtectionLevels"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProtectionLevels"].type()) {
        DescribeServiceResponseBodyProtectionLevels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProtectionLevels"]));
        protectionLevels = make_shared<DescribeServiceResponseBodyProtectionLevels>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KeySpecs") != m.end() && !m["KeySpecs"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeySpecs"].type()) {
        DescribeServiceResponseBodyKeySpecs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeySpecs"]));
        keySpecs = make_shared<DescribeServiceResponseBodyKeySpecs>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponseBody() = default;
};
class DescribeServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceResponseBody> body{};

  DescribeServiceResponse() {}

  explicit DescribeServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponse() = default;
};
class DisableKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  DisableKeyRequest() {}

  explicit DisableKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~DisableKeyRequest() = default;
};
class DisableKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableKeyResponseBody() {}

  explicit DisableKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableKeyResponseBody() = default;
};
class DisableKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableKeyResponseBody> body{};

  DisableKeyResponse() {}

  explicit DisableKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DisableKeyResponse() = default;
};
class EnableKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  EnableKeyRequest() {}

  explicit EnableKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~EnableKeyRequest() = default;
};
class EnableKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableKeyResponseBody() {}

  explicit EnableKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableKeyResponseBody() = default;
};
class EnableKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableKeyResponseBody> body{};

  EnableKeyResponse() {}

  explicit EnableKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableKeyResponseBody>(model1);
      }
    }
  }


  virtual ~EnableKeyResponse() = default;
};
class EncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> plaintext{};
  shared_ptr<map<string, boost::any>> encryptionContext{};

  EncryptRequest() {}

  explicit EncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~EncryptRequest() = default;
};
class EncryptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> encryptionContextShrink{};

  EncryptShrinkRequest() {}

  explicit EncryptShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
  }


  virtual ~EncryptShrinkRequest() = default;
};
class EncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  EncryptResponseBody() {}

  explicit EncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~EncryptResponseBody() = default;
};
class EncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EncryptResponseBody> body{};

  EncryptResponse() {}

  explicit EncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncryptResponseBody>(model1);
      }
    }
  }


  virtual ~EncryptResponse() = default;
};
class ExportCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> passphrase{};
  shared_ptr<string> exportFormat{};

  ExportCertificateRequest() {}

  explicit ExportCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (passphrase) {
      res["Passphrase"] = boost::any(*passphrase);
    }
    if (exportFormat) {
      res["ExportFormat"] = boost::any(*exportFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Passphrase") != m.end() && !m["Passphrase"].empty()) {
      passphrase = make_shared<string>(boost::any_cast<string>(m["Passphrase"]));
    }
    if (m.find("ExportFormat") != m.end() && !m["ExportFormat"].empty()) {
      exportFormat = make_shared<string>(boost::any_cast<string>(m["ExportFormat"]));
    }
  }


  virtual ~ExportCertificateRequest() = default;
};
class ExportCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> privateKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> PKCS12Blob{};
  shared_ptr<string> certificate{};

  ExportCertificateResponseBody() {}

  explicit ExportCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (PKCS12Blob) {
      res["PKCS12Blob"] = boost::any(*PKCS12Blob);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("PKCS12Blob") != m.end() && !m["PKCS12Blob"].empty()) {
      PKCS12Blob = make_shared<string>(boost::any_cast<string>(m["PKCS12Blob"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
  }


  virtual ~ExportCertificateResponseBody() = default;
};
class ExportCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExportCertificateResponseBody> body{};

  ExportCertificateResponse() {}

  explicit ExportCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ExportCertificateResponse() = default;
};
class ExportDataKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingKeySpec{};
  shared_ptr<string> wrappingAlgorithm{};

  ExportDataKeyRequest() {}

  explicit ExportDataKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
    }
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
  }


  virtual ~ExportDataKeyRequest() = default;
};
class ExportDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingKeySpec{};
  shared_ptr<string> wrappingAlgorithm{};

  ExportDataKeyShrinkRequest() {}

  explicit ExportDataKeyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
    }
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
  }


  virtual ~ExportDataKeyShrinkRequest() = default;
};
class ExportDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> exportedDataKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  ExportDataKeyResponseBody() {}

  explicit ExportDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (exportedDataKey) {
      res["ExportedDataKey"] = boost::any(*exportedDataKey);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ExportedDataKey") != m.end() && !m["ExportedDataKey"].empty()) {
      exportedDataKey = make_shared<string>(boost::any_cast<string>(m["ExportedDataKey"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~ExportDataKeyResponseBody() = default;
};
class ExportDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExportDataKeyResponseBody> body{};

  ExportDataKeyResponse() {}

  explicit ExportDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportDataKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportDataKeyResponseBody>(model1);
      }
    }
  }


  virtual ~ExportDataKeyResponse() = default;
};
class GenerateAndExportDataKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingKeySpec{};
  shared_ptr<string> wrappingAlgorithm{};

  GenerateAndExportDataKeyRequest() {}

  explicit GenerateAndExportDataKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
    }
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
  }


  virtual ~GenerateAndExportDataKeyRequest() = default;
};
class GenerateAndExportDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingKeySpec{};
  shared_ptr<string> wrappingAlgorithm{};

  GenerateAndExportDataKeyShrinkRequest() {}

  explicit GenerateAndExportDataKeyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
    }
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
  }


  virtual ~GenerateAndExportDataKeyShrinkRequest() = default;
};
class GenerateAndExportDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> exportedDataKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  GenerateAndExportDataKeyResponseBody() {}

  explicit GenerateAndExportDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (exportedDataKey) {
      res["ExportedDataKey"] = boost::any(*exportedDataKey);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("ExportedDataKey") != m.end() && !m["ExportedDataKey"].empty()) {
      exportedDataKey = make_shared<string>(boost::any_cast<string>(m["ExportedDataKey"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~GenerateAndExportDataKeyResponseBody() = default;
};
class GenerateAndExportDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateAndExportDataKeyResponseBody> body{};

  GenerateAndExportDataKeyResponse() {}

  explicit GenerateAndExportDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAndExportDataKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAndExportDataKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAndExportDataKeyResponse() = default;
};
class GenerateDataKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<map<string, boost::any>> encryptionContext{};

  GenerateDataKeyRequest() {}

  explicit GenerateDataKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GenerateDataKeyRequest() = default;
};
class GenerateDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<string> encryptionContextShrink{};

  GenerateDataKeyShrinkRequest() {}

  explicit GenerateDataKeyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
  }


  virtual ~GenerateDataKeyShrinkRequest() = default;
};
class GenerateDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  GenerateDataKeyResponseBody() {}

  explicit GenerateDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~GenerateDataKeyResponseBody() = default;
};
class GenerateDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateDataKeyResponseBody> body{};

  GenerateDataKeyResponse() {}

  explicit GenerateDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateDataKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateDataKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateDataKeyResponse() = default;
};
class GenerateDataKeyWithoutPlaintextRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<map<string, boost::any>> encryptionContext{};

  GenerateDataKeyWithoutPlaintextRequest() {}

  explicit GenerateDataKeyWithoutPlaintextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextRequest() = default;
};
class GenerateDataKeyWithoutPlaintextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<string> encryptionContextShrink{};

  GenerateDataKeyWithoutPlaintextShrinkRequest() {}

  explicit GenerateDataKeyWithoutPlaintextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextShrinkRequest() = default;
};
class GenerateDataKeyWithoutPlaintextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  GenerateDataKeyWithoutPlaintextResponseBody() {}

  explicit GenerateDataKeyWithoutPlaintextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextResponseBody() = default;
};
class GenerateDataKeyWithoutPlaintextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateDataKeyWithoutPlaintextResponseBody> body{};

  GenerateDataKeyWithoutPlaintextResponse() {}

  explicit GenerateDataKeyWithoutPlaintextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateDataKeyWithoutPlaintextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateDataKeyWithoutPlaintextResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextResponse() = default;
};
class GetCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  GetCertificateRequest() {}

  explicit GetCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~GetCertificateRequest() = default;
};
class GetCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> certificate{};

  GetCertificateResponseBody() {}

  explicit GetCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
  }


  virtual ~GetCertificateResponseBody() = default;
};
class GetCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCertificateResponseBody> body{};

  GetCertificateResponse() {}

  explicit GetCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetCertificateResponse() = default;
};
class GetParametersForImportRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> wrappingAlgorithm{};
  shared_ptr<string> wrappingKeySpec{};

  GetParametersForImportRequest() {}

  explicit GetParametersForImportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
  }


  virtual ~GetParametersForImportRequest() = default;
};
class GetParametersForImportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> tokenExpireTime{};
  shared_ptr<string> importToken{};

  GetParametersForImportResponseBody() {}

  explicit GetParametersForImportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (tokenExpireTime) {
      res["TokenExpireTime"] = boost::any(*tokenExpireTime);
    }
    if (importToken) {
      res["ImportToken"] = boost::any(*importToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("TokenExpireTime") != m.end() && !m["TokenExpireTime"].empty()) {
      tokenExpireTime = make_shared<string>(boost::any_cast<string>(m["TokenExpireTime"]));
    }
    if (m.find("ImportToken") != m.end() && !m["ImportToken"].empty()) {
      importToken = make_shared<string>(boost::any_cast<string>(m["ImportToken"]));
    }
  }


  virtual ~GetParametersForImportResponseBody() = default;
};
class GetParametersForImportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetParametersForImportResponseBody> body{};

  GetParametersForImportResponse() {}

  explicit GetParametersForImportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParametersForImportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParametersForImportResponseBody>(model1);
      }
    }
  }


  virtual ~GetParametersForImportResponse() = default;
};
class GetPublicKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  GetPublicKeyRequest() {}

  explicit GetPublicKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~GetPublicKeyRequest() = default;
};
class GetPublicKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  GetPublicKeyResponseBody() {}

  explicit GetPublicKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~GetPublicKeyResponseBody() = default;
};
class GetPublicKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPublicKeyResponseBody> body{};

  GetPublicKeyResponse() {}

  explicit GetPublicKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicKeyResponse() = default;
};
class GetRandomPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> passwordLength{};
  shared_ptr<string> excludeCharacters{};
  shared_ptr<string> excludeLowercase{};
  shared_ptr<string> excludeUppercase{};
  shared_ptr<string> excludeNumbers{};
  shared_ptr<string> excludePunctuation{};
  shared_ptr<string> requireEachIncludedType{};

  GetRandomPasswordRequest() {}

  explicit GetRandomPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordLength) {
      res["PasswordLength"] = boost::any(*passwordLength);
    }
    if (excludeCharacters) {
      res["ExcludeCharacters"] = boost::any(*excludeCharacters);
    }
    if (excludeLowercase) {
      res["ExcludeLowercase"] = boost::any(*excludeLowercase);
    }
    if (excludeUppercase) {
      res["ExcludeUppercase"] = boost::any(*excludeUppercase);
    }
    if (excludeNumbers) {
      res["ExcludeNumbers"] = boost::any(*excludeNumbers);
    }
    if (excludePunctuation) {
      res["ExcludePunctuation"] = boost::any(*excludePunctuation);
    }
    if (requireEachIncludedType) {
      res["RequireEachIncludedType"] = boost::any(*requireEachIncludedType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordLength") != m.end() && !m["PasswordLength"].empty()) {
      passwordLength = make_shared<string>(boost::any_cast<string>(m["PasswordLength"]));
    }
    if (m.find("ExcludeCharacters") != m.end() && !m["ExcludeCharacters"].empty()) {
      excludeCharacters = make_shared<string>(boost::any_cast<string>(m["ExcludeCharacters"]));
    }
    if (m.find("ExcludeLowercase") != m.end() && !m["ExcludeLowercase"].empty()) {
      excludeLowercase = make_shared<string>(boost::any_cast<string>(m["ExcludeLowercase"]));
    }
    if (m.find("ExcludeUppercase") != m.end() && !m["ExcludeUppercase"].empty()) {
      excludeUppercase = make_shared<string>(boost::any_cast<string>(m["ExcludeUppercase"]));
    }
    if (m.find("ExcludeNumbers") != m.end() && !m["ExcludeNumbers"].empty()) {
      excludeNumbers = make_shared<string>(boost::any_cast<string>(m["ExcludeNumbers"]));
    }
    if (m.find("ExcludePunctuation") != m.end() && !m["ExcludePunctuation"].empty()) {
      excludePunctuation = make_shared<string>(boost::any_cast<string>(m["ExcludePunctuation"]));
    }
    if (m.find("RequireEachIncludedType") != m.end() && !m["RequireEachIncludedType"].empty()) {
      requireEachIncludedType = make_shared<string>(boost::any_cast<string>(m["RequireEachIncludedType"]));
    }
  }


  virtual ~GetRandomPasswordRequest() = default;
};
class GetRandomPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> randomPassword{};
  shared_ptr<string> requestId{};

  GetRandomPasswordResponseBody() {}

  explicit GetRandomPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (randomPassword) {
      res["RandomPassword"] = boost::any(*randomPassword);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RandomPassword") != m.end() && !m["RandomPassword"].empty()) {
      randomPassword = make_shared<string>(boost::any_cast<string>(m["RandomPassword"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRandomPasswordResponseBody() = default;
};
class GetRandomPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRandomPasswordResponseBody> body{};

  GetRandomPasswordResponse() {}

  explicit GetRandomPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRandomPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRandomPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~GetRandomPasswordResponse() = default;
};
class GetSecretValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionStage{};
  shared_ptr<string> versionId{};
  shared_ptr<bool> fetchExtendedConfig{};

  GetSecretValueRequest() {}

  explicit GetSecretValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (fetchExtendedConfig) {
      res["FetchExtendedConfig"] = boost::any(*fetchExtendedConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      versionStage = make_shared<string>(boost::any_cast<string>(m["VersionStage"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("FetchExtendedConfig") != m.end() && !m["FetchExtendedConfig"].empty()) {
      fetchExtendedConfig = make_shared<bool>(boost::any_cast<bool>(m["FetchExtendedConfig"]));
    }
  }


  virtual ~GetSecretValueRequest() = default;
};
class GetSecretValueResponseBodyVersionStages : public Darabonba::Model {
public:
  shared_ptr<vector<string>> versionStage{};

  GetSecretValueResponseBodyVersionStages() {}

  explicit GetSecretValueResponseBodyVersionStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VersionStage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VersionStage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versionStage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetSecretValueResponseBodyVersionStages() = default;
};
class GetSecretValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> secretDataType{};
  shared_ptr<GetSecretValueResponseBodyVersionStages> versionStages{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> secretName{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> secretData{};

  GetSecretValueResponseBody() {}

  explicit GetSecretValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (versionStages) {
      res["VersionStages"] = versionStages ? boost::any(versionStages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("VersionStages") != m.end() && !m["VersionStages"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionStages"].type()) {
        GetSecretValueResponseBodyVersionStages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionStages"]));
        versionStages = make_shared<GetSecretValueResponseBodyVersionStages>(model1);
      }
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
  }


  virtual ~GetSecretValueResponseBody() = default;
};
class GetSecretValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSecretValueResponseBody> body{};

  GetSecretValueResponse() {}

  explicit GetSecretValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretValueResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretValueResponse() = default;
};
class ImportCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> PKCS12Blob{};
  shared_ptr<string> passphrase{};

  ImportCertificateRequest() {}

  explicit ImportCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (PKCS12Blob) {
      res["PKCS12Blob"] = boost::any(*PKCS12Blob);
    }
    if (passphrase) {
      res["Passphrase"] = boost::any(*passphrase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PKCS12Blob") != m.end() && !m["PKCS12Blob"].empty()) {
      PKCS12Blob = make_shared<string>(boost::any_cast<string>(m["PKCS12Blob"]));
    }
    if (m.find("Passphrase") != m.end() && !m["Passphrase"].empty()) {
      passphrase = make_shared<string>(boost::any_cast<string>(m["Passphrase"]));
    }
  }


  virtual ~ImportCertificateRequest() = default;
};
class ImportCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> arn{};

  ImportCertificateResponseBody() {}

  explicit ImportCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~ImportCertificateResponseBody() = default;
};
class ImportCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportCertificateResponseBody> body{};

  ImportCertificateResponse() {}

  explicit ImportCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ImportCertificateResponse() = default;
};
class ImportEncryptionCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> encryptedSymmetricKey{};
  shared_ptr<string> encryptedPrivateKey{};
  shared_ptr<string> symmetricAlgorithm{};
  shared_ptr<string> asymmetricAlgorithm{};
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};

  ImportEncryptionCertificateRequest() {}

  explicit ImportEncryptionCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (encryptedSymmetricKey) {
      res["EncryptedSymmetricKey"] = boost::any(*encryptedSymmetricKey);
    }
    if (encryptedPrivateKey) {
      res["EncryptedPrivateKey"] = boost::any(*encryptedPrivateKey);
    }
    if (symmetricAlgorithm) {
      res["SymmetricAlgorithm"] = boost::any(*symmetricAlgorithm);
    }
    if (asymmetricAlgorithm) {
      res["AsymmetricAlgorithm"] = boost::any(*asymmetricAlgorithm);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("EncryptedSymmetricKey") != m.end() && !m["EncryptedSymmetricKey"].empty()) {
      encryptedSymmetricKey = make_shared<string>(boost::any_cast<string>(m["EncryptedSymmetricKey"]));
    }
    if (m.find("EncryptedPrivateKey") != m.end() && !m["EncryptedPrivateKey"].empty()) {
      encryptedPrivateKey = make_shared<string>(boost::any_cast<string>(m["EncryptedPrivateKey"]));
    }
    if (m.find("SymmetricAlgorithm") != m.end() && !m["SymmetricAlgorithm"].empty()) {
      symmetricAlgorithm = make_shared<string>(boost::any_cast<string>(m["SymmetricAlgorithm"]));
    }
    if (m.find("AsymmetricAlgorithm") != m.end() && !m["AsymmetricAlgorithm"].empty()) {
      asymmetricAlgorithm = make_shared<string>(boost::any_cast<string>(m["AsymmetricAlgorithm"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
  }


  virtual ~ImportEncryptionCertificateRequest() = default;
};
class ImportEncryptionCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> arn{};

  ImportEncryptionCertificateResponseBody() {}

  explicit ImportEncryptionCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~ImportEncryptionCertificateResponseBody() = default;
};
class ImportEncryptionCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportEncryptionCertificateResponseBody> body{};

  ImportEncryptionCertificateResponse() {}

  explicit ImportEncryptionCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportEncryptionCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportEncryptionCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ImportEncryptionCertificateResponse() = default;
};
class ImportKeyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> encryptedKeyMaterial{};
  shared_ptr<string> importToken{};
  shared_ptr<long> keyMaterialExpireUnix{};

  ImportKeyMaterialRequest() {}

  explicit ImportKeyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (encryptedKeyMaterial) {
      res["EncryptedKeyMaterial"] = boost::any(*encryptedKeyMaterial);
    }
    if (importToken) {
      res["ImportToken"] = boost::any(*importToken);
    }
    if (keyMaterialExpireUnix) {
      res["KeyMaterialExpireUnix"] = boost::any(*keyMaterialExpireUnix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("EncryptedKeyMaterial") != m.end() && !m["EncryptedKeyMaterial"].empty()) {
      encryptedKeyMaterial = make_shared<string>(boost::any_cast<string>(m["EncryptedKeyMaterial"]));
    }
    if (m.find("ImportToken") != m.end() && !m["ImportToken"].empty()) {
      importToken = make_shared<string>(boost::any_cast<string>(m["ImportToken"]));
    }
    if (m.find("KeyMaterialExpireUnix") != m.end() && !m["KeyMaterialExpireUnix"].empty()) {
      keyMaterialExpireUnix = make_shared<long>(boost::any_cast<long>(m["KeyMaterialExpireUnix"]));
    }
  }


  virtual ~ImportKeyMaterialRequest() = default;
};
class ImportKeyMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImportKeyMaterialResponseBody() {}

  explicit ImportKeyMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImportKeyMaterialResponseBody() = default;
};
class ImportKeyMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportKeyMaterialResponseBody> body{};

  ImportKeyMaterialResponse() {}

  explicit ImportKeyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportKeyMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportKeyMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~ImportKeyMaterialResponse() = default;
};
class ListAliasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAliasesRequest() {}

  explicit ListAliasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAliasesRequest() = default;
};
class ListAliasesResponseBodyAliasesAlias : public Darabonba::Model {
public:
  shared_ptr<string> aliasArn{};
  shared_ptr<string> keyId{};
  shared_ptr<string> aliasName{};

  ListAliasesResponseBodyAliasesAlias() {}

  explicit ListAliasesResponseBodyAliasesAlias(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasArn) {
      res["AliasArn"] = boost::any(*aliasArn);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasArn") != m.end() && !m["AliasArn"].empty()) {
      aliasArn = make_shared<string>(boost::any_cast<string>(m["AliasArn"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~ListAliasesResponseBodyAliasesAlias() = default;
};
class ListAliasesResponseBodyAliases : public Darabonba::Model {
public:
  shared_ptr<vector<ListAliasesResponseBodyAliasesAlias>> alias{};

  ListAliasesResponseBodyAliases() {}

  explicit ListAliasesResponseBodyAliases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      vector<boost::any> temp1;
      for(auto item1:*alias){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alias"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<ListAliasesResponseBodyAliasesAlias> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alias"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAliasesResponseBodyAliasesAlias model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alias = make_shared<vector<ListAliasesResponseBodyAliasesAlias>>(expect1);
      }
    }
  }


  virtual ~ListAliasesResponseBodyAliases() = default;
};
class ListAliasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListAliasesResponseBodyAliases> aliases{};

  ListAliasesResponseBody() {}

  explicit ListAliasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (aliases) {
      res["Aliases"] = aliases ? boost::any(aliases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Aliases") != m.end() && !m["Aliases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Aliases"].type()) {
        ListAliasesResponseBodyAliases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Aliases"]));
        aliases = make_shared<ListAliasesResponseBodyAliases>(model1);
      }
    }
  }


  virtual ~ListAliasesResponseBody() = default;
};
class ListAliasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAliasesResponseBody> body{};

  ListAliasesResponse() {}

  explicit ListAliasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAliasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAliasesResponse() = default;
};
class ListAliasesByKeyIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAliasesByKeyIdRequest() {}

  explicit ListAliasesByKeyIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAliasesByKeyIdRequest() = default;
};
class ListAliasesByKeyIdResponseBodyAliasesAlias : public Darabonba::Model {
public:
  shared_ptr<string> aliasArn{};
  shared_ptr<string> keyId{};
  shared_ptr<string> aliasName{};

  ListAliasesByKeyIdResponseBodyAliasesAlias() {}

  explicit ListAliasesByKeyIdResponseBodyAliasesAlias(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasArn) {
      res["AliasArn"] = boost::any(*aliasArn);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasArn") != m.end() && !m["AliasArn"].empty()) {
      aliasArn = make_shared<string>(boost::any_cast<string>(m["AliasArn"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~ListAliasesByKeyIdResponseBodyAliasesAlias() = default;
};
class ListAliasesByKeyIdResponseBodyAliases : public Darabonba::Model {
public:
  shared_ptr<vector<ListAliasesByKeyIdResponseBodyAliasesAlias>> alias{};

  ListAliasesByKeyIdResponseBodyAliases() {}

  explicit ListAliasesByKeyIdResponseBodyAliases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      vector<boost::any> temp1;
      for(auto item1:*alias){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alias"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      if (typeid(vector<boost::any>) == m["Alias"].type()) {
        vector<ListAliasesByKeyIdResponseBodyAliasesAlias> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alias"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAliasesByKeyIdResponseBodyAliasesAlias model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alias = make_shared<vector<ListAliasesByKeyIdResponseBodyAliasesAlias>>(expect1);
      }
    }
  }


  virtual ~ListAliasesByKeyIdResponseBodyAliases() = default;
};
class ListAliasesByKeyIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListAliasesByKeyIdResponseBodyAliases> aliases{};

  ListAliasesByKeyIdResponseBody() {}

  explicit ListAliasesByKeyIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (aliases) {
      res["Aliases"] = aliases ? boost::any(aliases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Aliases") != m.end() && !m["Aliases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Aliases"].type()) {
        ListAliasesByKeyIdResponseBodyAliases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Aliases"]));
        aliases = make_shared<ListAliasesByKeyIdResponseBodyAliases>(model1);
      }
    }
  }


  virtual ~ListAliasesByKeyIdResponseBody() = default;
};
class ListAliasesByKeyIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAliasesByKeyIdResponseBody> body{};

  ListAliasesByKeyIdResponse() {}

  explicit ListAliasesByKeyIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAliasesByKeyIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliasesByKeyIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAliasesByKeyIdResponse() = default;
};
class ListCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> subject{};
  shared_ptr<string> issuer{};
  shared_ptr<string> status{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCertificatesRequest() {}

  explicit ListCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCertificatesRequest() = default;
};
class ListCertificatesResponseBodyCertificateSummaryListCertificateSummary : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> subject{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> issuer{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> certificateId{};

  ListCertificatesResponseBodyCertificateSummaryListCertificateSummary() {}

  explicit ListCertificatesResponseBodyCertificateSummaryListCertificateSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~ListCertificatesResponseBodyCertificateSummaryListCertificateSummary() = default;
};
class ListCertificatesResponseBodyCertificateSummaryList : public Darabonba::Model {
public:
  shared_ptr<vector<ListCertificatesResponseBodyCertificateSummaryListCertificateSummary>> certificateSummary{};

  ListCertificatesResponseBodyCertificateSummaryList() {}

  explicit ListCertificatesResponseBodyCertificateSummaryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateSummary) {
      vector<boost::any> temp1;
      for(auto item1:*certificateSummary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateSummary"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateSummary") != m.end() && !m["CertificateSummary"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateSummary"].type()) {
        vector<ListCertificatesResponseBodyCertificateSummaryListCertificateSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateSummary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCertificatesResponseBodyCertificateSummaryListCertificateSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateSummary = make_shared<vector<ListCertificatesResponseBodyCertificateSummaryListCertificateSummary>>(expect1);
      }
    }
  }


  virtual ~ListCertificatesResponseBodyCertificateSummaryList() = default;
};
class ListCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListCertificatesResponseBodyCertificateSummaryList> certificateSummaryList{};
  shared_ptr<long> totalSize{};

  ListCertificatesResponseBody() {}

  explicit ListCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (certificateSummaryList) {
      res["CertificateSummaryList"] = certificateSummaryList ? boost::any(certificateSummaryList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("CertificateSummaryList") != m.end() && !m["CertificateSummaryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertificateSummaryList"].type()) {
        ListCertificatesResponseBodyCertificateSummaryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertificateSummaryList"]));
        certificateSummaryList = make_shared<ListCertificatesResponseBodyCertificateSummaryList>(model1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListCertificatesResponseBody() = default;
};
class ListCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCertificatesResponseBody> body{};

  ListCertificatesResponse() {}

  explicit ListCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCertificatesResponse() = default;
};
class ListKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> filters{};

  ListKeysRequest() {}

  explicit ListKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (filters) {
      res["Filters"] = boost::any(*filters);
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
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
  }


  virtual ~ListKeysRequest() = default;
};
class ListKeysResponseBodyKeysKey : public Darabonba::Model {
public:
  shared_ptr<string> keyArn{};
  shared_ptr<string> keyId{};

  ListKeysResponseBodyKeysKey() {}

  explicit ListKeysResponseBodyKeysKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyArn) {
      res["KeyArn"] = boost::any(*keyArn);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyArn") != m.end() && !m["KeyArn"].empty()) {
      keyArn = make_shared<string>(boost::any_cast<string>(m["KeyArn"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~ListKeysResponseBodyKeysKey() = default;
};
class ListKeysResponseBodyKeys : public Darabonba::Model {
public:
  shared_ptr<vector<ListKeysResponseBodyKeysKey>> key{};

  ListKeysResponseBodyKeys() {}

  explicit ListKeysResponseBodyKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Key"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(vector<boost::any>) == m["Key"].type()) {
        vector<ListKeysResponseBodyKeysKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListKeysResponseBodyKeysKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ListKeysResponseBodyKeysKey>>(expect1);
      }
    }
  }


  virtual ~ListKeysResponseBodyKeys() = default;
};
class ListKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListKeysResponseBodyKeys> keys{};

  ListKeysResponseBody() {}

  explicit ListKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        ListKeysResponseBodyKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<ListKeysResponseBodyKeys>(model1);
      }
    }
  }


  virtual ~ListKeysResponseBody() = default;
};
class ListKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListKeysResponseBody> body{};

  ListKeysResponse() {}

  explicit ListKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeysResponse() = default;
};
class ListKeyVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListKeyVersionsRequest() {}

  explicit ListKeyVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListKeyVersionsRequest() = default;
};
class ListKeyVersionsResponseBodyKeyVersionsKeyVersion : public Darabonba::Model {
public:
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> keyId{};
  shared_ptr<string> creationDate{};

  ListKeyVersionsResponseBodyKeyVersionsKeyVersion() {}

  explicit ListKeyVersionsResponseBodyKeyVersionsKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
  }


  virtual ~ListKeyVersionsResponseBodyKeyVersionsKeyVersion() = default;
};
class ListKeyVersionsResponseBodyKeyVersions : public Darabonba::Model {
public:
  shared_ptr<vector<ListKeyVersionsResponseBodyKeyVersionsKeyVersion>> keyVersion{};

  ListKeyVersionsResponseBodyKeyVersions() {}

  explicit ListKeyVersionsResponseBodyKeyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersion) {
      vector<boost::any> temp1;
      for(auto item1:*keyVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersion") != m.end() && !m["KeyVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyVersion"].type()) {
        vector<ListKeyVersionsResponseBodyKeyVersionsKeyVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListKeyVersionsResponseBodyKeyVersionsKeyVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyVersion = make_shared<vector<ListKeyVersionsResponseBodyKeyVersionsKeyVersion>>(expect1);
      }
    }
  }


  virtual ~ListKeyVersionsResponseBodyKeyVersions() = default;
};
class ListKeyVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListKeyVersionsResponseBodyKeyVersions> keyVersions{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};

  ListKeyVersionsResponseBody() {}

  explicit ListKeyVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersions) {
      res["KeyVersions"] = keyVersions ? boost::any(keyVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersions") != m.end() && !m["KeyVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersions"].type()) {
        ListKeyVersionsResponseBodyKeyVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersions"]));
        keyVersions = make_shared<ListKeyVersionsResponseBodyKeyVersions>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListKeyVersionsResponseBody() = default;
};
class ListKeyVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListKeyVersionsResponseBody> body{};

  ListKeyVersionsResponse() {}

  explicit ListKeyVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeyVersionsResponse() = default;
};
class ListResourceTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  ListResourceTagsRequest() {}

  explicit ListResourceTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~ListResourceTagsRequest() = default;
};
class ListResourceTagsResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> tagKey{};

  ListResourceTagsResponseBodyTagsTag() {}

  explicit ListResourceTagsResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListResourceTagsResponseBodyTagsTag() = default;
};
class ListResourceTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceTagsResponseBodyTagsTag>> tag{};

  ListResourceTagsResponseBodyTags() {}

  explicit ListResourceTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListResourceTagsResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceTagsResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListResourceTagsResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListResourceTagsResponseBodyTags() = default;
};
class ListResourceTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListResourceTagsResponseBodyTags> tags{};

  ListResourceTagsResponseBody() {}

  explicit ListResourceTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListResourceTagsResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListResourceTagsResponseBodyTags>(model1);
      }
    }
  }


  virtual ~ListResourceTagsResponseBody() = default;
};
class ListResourceTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourceTagsResponseBody> body{};

  ListResourceTagsResponse() {}

  explicit ListResourceTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceTagsResponse() = default;
};
class ListSecretsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fetchTags{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> filters{};

  ListSecretsRequest() {}

  explicit ListSecretsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchTags) {
      res["FetchTags"] = boost::any(*fetchTags);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchTags") != m.end() && !m["FetchTags"].empty()) {
      fetchTags = make_shared<string>(boost::any_cast<string>(m["FetchTags"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
  }


  virtual ~ListSecretsRequest() = default;
};
class ListSecretsResponseBodySecretListSecretTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> tagKey{};

  ListSecretsResponseBodySecretListSecretTagsTag() {}

  explicit ListSecretsResponseBodySecretListSecretTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListSecretsResponseBodySecretListSecretTagsTag() = default;
};
class ListSecretsResponseBodySecretListSecretTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListSecretsResponseBodySecretListSecretTagsTag>> tag{};

  ListSecretsResponseBodySecretListSecretTags() {}

  explicit ListSecretsResponseBodySecretListSecretTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListSecretsResponseBodySecretListSecretTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecretsResponseBodySecretListSecretTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListSecretsResponseBodySecretListSecretTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListSecretsResponseBodySecretListSecretTags() = default;
};
class ListSecretsResponseBodySecretListSecret : public Darabonba::Model {
public:
  shared_ptr<string> updateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> secretName{};
  shared_ptr<ListSecretsResponseBodySecretListSecretTags> tags{};
  shared_ptr<string> secretType{};
  shared_ptr<string> plannedDeleteTime{};

  ListSecretsResponseBodySecretListSecret() {}

  explicit ListSecretsResponseBodySecretListSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListSecretsResponseBodySecretListSecretTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListSecretsResponseBodySecretListSecretTags>(model1);
      }
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
  }


  virtual ~ListSecretsResponseBodySecretListSecret() = default;
};
class ListSecretsResponseBodySecretList : public Darabonba::Model {
public:
  shared_ptr<vector<ListSecretsResponseBodySecretListSecret>> secret{};

  ListSecretsResponseBodySecretList() {}

  explicit ListSecretsResponseBodySecretList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secret) {
      vector<boost::any> temp1;
      for(auto item1:*secret){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Secret"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      if (typeid(vector<boost::any>) == m["Secret"].type()) {
        vector<ListSecretsResponseBodySecretListSecret> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Secret"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecretsResponseBodySecretListSecret model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secret = make_shared<vector<ListSecretsResponseBodySecretListSecret>>(expect1);
      }
    }
  }


  virtual ~ListSecretsResponseBodySecretList() = default;
};
class ListSecretsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSecretsResponseBodySecretList> secretList{};
  shared_ptr<long> pageNumber{};

  ListSecretsResponseBody() {}

  explicit ListSecretsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretList) {
      res["SecretList"] = secretList ? boost::any(secretList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretList") != m.end() && !m["SecretList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretList"].type()) {
        ListSecretsResponseBodySecretList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretList"]));
        secretList = make_shared<ListSecretsResponseBodySecretList>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListSecretsResponseBody() = default;
};
class ListSecretsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecretsResponseBody> body{};

  ListSecretsResponse() {}

  explicit ListSecretsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretsResponse() = default;
};
class ListSecretVersionIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> includeDeprecated{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSecretVersionIdsRequest() {}

  explicit ListSecretVersionIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (includeDeprecated) {
      res["IncludeDeprecated"] = boost::any(*includeDeprecated);
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
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("IncludeDeprecated") != m.end() && !m["IncludeDeprecated"].empty()) {
      includeDeprecated = make_shared<string>(boost::any_cast<string>(m["IncludeDeprecated"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSecretVersionIdsRequest() = default;
};
class ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages : public Darabonba::Model {
public:
  shared_ptr<vector<string>> versionStage{};

  ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages() {}

  explicit ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VersionStage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VersionStage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versionStage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages() = default;
};
class ListSecretVersionIdsResponseBodyVersionIdsVersionId : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> versionId{};
  shared_ptr<ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages> versionStages{};

  ListSecretVersionIdsResponseBodyVersionIdsVersionId() {}

  explicit ListSecretVersionIdsResponseBodyVersionIdsVersionId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionStages) {
      res["VersionStages"] = versionStages ? boost::any(versionStages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionStages") != m.end() && !m["VersionStages"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionStages"].type()) {
        ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionStages"]));
        versionStages = make_shared<ListSecretVersionIdsResponseBodyVersionIdsVersionIdVersionStages>(model1);
      }
    }
  }


  virtual ~ListSecretVersionIdsResponseBodyVersionIdsVersionId() = default;
};
class ListSecretVersionIdsResponseBodyVersionIds : public Darabonba::Model {
public:
  shared_ptr<vector<ListSecretVersionIdsResponseBodyVersionIdsVersionId>> versionId{};

  ListSecretVersionIdsResponseBodyVersionIds() {}

  explicit ListSecretVersionIdsResponseBodyVersionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      vector<boost::any> temp1;
      for(auto item1:*versionId){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionId"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionId"].type()) {
        vector<ListSecretVersionIdsResponseBodyVersionIdsVersionId> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionId"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecretVersionIdsResponseBodyVersionIdsVersionId model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionId = make_shared<vector<ListSecretVersionIdsResponseBodyVersionIdsVersionId>>(expect1);
      }
    }
  }


  virtual ~ListSecretVersionIdsResponseBodyVersionIds() = default;
};
class ListSecretVersionIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListSecretVersionIdsResponseBodyVersionIds> versionIds{};

  ListSecretVersionIdsResponseBody() {}

  explicit ListSecretVersionIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (versionIds) {
      res["VersionIds"] = versionIds ? boost::any(versionIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("VersionIds") != m.end() && !m["VersionIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionIds"].type()) {
        ListSecretVersionIdsResponseBodyVersionIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionIds"]));
        versionIds = make_shared<ListSecretVersionIdsResponseBodyVersionIds>(model1);
      }
    }
  }


  virtual ~ListSecretVersionIdsResponseBody() = default;
};
class ListSecretVersionIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecretVersionIdsResponseBody> body{};

  ListSecretVersionIdsResponse() {}

  explicit ListSecretVersionIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretVersionIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretVersionIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretVersionIdsResponse() = default;
};
class OpenKmsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenKmsServiceResponseBody() {}

  explicit OpenKmsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenKmsServiceResponseBody() = default;
};
class OpenKmsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenKmsServiceResponseBody> body{};

  OpenKmsServiceResponse() {}

  explicit OpenKmsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenKmsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenKmsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenKmsServiceResponse() = default;
};
class PutSecretValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> versionStages{};

  PutSecretValueRequest() {}

  explicit PutSecretValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (versionStages) {
      res["VersionStages"] = boost::any(*versionStages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("VersionStages") != m.end() && !m["VersionStages"].empty()) {
      versionStages = make_shared<string>(boost::any_cast<string>(m["VersionStages"]));
    }
  }


  virtual ~PutSecretValueRequest() = default;
};
class PutSecretValueResponseBodyVersionStages : public Darabonba::Model {
public:
  shared_ptr<vector<string>> versionStage{};

  PutSecretValueResponseBodyVersionStages() {}

  explicit PutSecretValueResponseBodyVersionStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VersionStage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VersionStage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versionStage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PutSecretValueResponseBodyVersionStages() = default;
};
class PutSecretValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> requestId{};
  shared_ptr<PutSecretValueResponseBodyVersionStages> versionStages{};

  PutSecretValueResponseBody() {}

  explicit PutSecretValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionStages) {
      res["VersionStages"] = versionStages ? boost::any(versionStages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionStages") != m.end() && !m["VersionStages"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionStages"].type()) {
        PutSecretValueResponseBodyVersionStages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionStages"]));
        versionStages = make_shared<PutSecretValueResponseBodyVersionStages>(model1);
      }
    }
  }


  virtual ~PutSecretValueResponseBody() = default;
};
class PutSecretValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutSecretValueResponseBody> body{};

  PutSecretValueResponse() {}

  explicit PutSecretValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutSecretValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutSecretValueResponseBody>(model1);
      }
    }
  }


  virtual ~PutSecretValueResponse() = default;
};
class ReEncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> sourceKeyId{};
  shared_ptr<string> sourceKeyVersionId{};
  shared_ptr<string> sourceEncryptionAlgorithm{};
  shared_ptr<map<string, boost::any>> sourceEncryptionContext{};
  shared_ptr<string> destinationKeyId{};
  shared_ptr<map<string, boost::any>> destinationEncryptionContext{};

  ReEncryptRequest() {}

  explicit ReEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (sourceKeyId) {
      res["SourceKeyId"] = boost::any(*sourceKeyId);
    }
    if (sourceKeyVersionId) {
      res["SourceKeyVersionId"] = boost::any(*sourceKeyVersionId);
    }
    if (sourceEncryptionAlgorithm) {
      res["SourceEncryptionAlgorithm"] = boost::any(*sourceEncryptionAlgorithm);
    }
    if (sourceEncryptionContext) {
      res["SourceEncryptionContext"] = boost::any(*sourceEncryptionContext);
    }
    if (destinationKeyId) {
      res["DestinationKeyId"] = boost::any(*destinationKeyId);
    }
    if (destinationEncryptionContext) {
      res["DestinationEncryptionContext"] = boost::any(*destinationEncryptionContext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("SourceKeyId") != m.end() && !m["SourceKeyId"].empty()) {
      sourceKeyId = make_shared<string>(boost::any_cast<string>(m["SourceKeyId"]));
    }
    if (m.find("SourceKeyVersionId") != m.end() && !m["SourceKeyVersionId"].empty()) {
      sourceKeyVersionId = make_shared<string>(boost::any_cast<string>(m["SourceKeyVersionId"]));
    }
    if (m.find("SourceEncryptionAlgorithm") != m.end() && !m["SourceEncryptionAlgorithm"].empty()) {
      sourceEncryptionAlgorithm = make_shared<string>(boost::any_cast<string>(m["SourceEncryptionAlgorithm"]));
    }
    if (m.find("SourceEncryptionContext") != m.end() && !m["SourceEncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SourceEncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sourceEncryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DestinationKeyId") != m.end() && !m["DestinationKeyId"].empty()) {
      destinationKeyId = make_shared<string>(boost::any_cast<string>(m["DestinationKeyId"]));
    }
    if (m.find("DestinationEncryptionContext") != m.end() && !m["DestinationEncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DestinationEncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      destinationEncryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ReEncryptRequest() = default;
};
class ReEncryptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> sourceKeyId{};
  shared_ptr<string> sourceKeyVersionId{};
  shared_ptr<string> sourceEncryptionAlgorithm{};
  shared_ptr<string> sourceEncryptionContextShrink{};
  shared_ptr<string> destinationKeyId{};
  shared_ptr<string> destinationEncryptionContextShrink{};

  ReEncryptShrinkRequest() {}

  explicit ReEncryptShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (sourceKeyId) {
      res["SourceKeyId"] = boost::any(*sourceKeyId);
    }
    if (sourceKeyVersionId) {
      res["SourceKeyVersionId"] = boost::any(*sourceKeyVersionId);
    }
    if (sourceEncryptionAlgorithm) {
      res["SourceEncryptionAlgorithm"] = boost::any(*sourceEncryptionAlgorithm);
    }
    if (sourceEncryptionContextShrink) {
      res["SourceEncryptionContext"] = boost::any(*sourceEncryptionContextShrink);
    }
    if (destinationKeyId) {
      res["DestinationKeyId"] = boost::any(*destinationKeyId);
    }
    if (destinationEncryptionContextShrink) {
      res["DestinationEncryptionContext"] = boost::any(*destinationEncryptionContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("SourceKeyId") != m.end() && !m["SourceKeyId"].empty()) {
      sourceKeyId = make_shared<string>(boost::any_cast<string>(m["SourceKeyId"]));
    }
    if (m.find("SourceKeyVersionId") != m.end() && !m["SourceKeyVersionId"].empty()) {
      sourceKeyVersionId = make_shared<string>(boost::any_cast<string>(m["SourceKeyVersionId"]));
    }
    if (m.find("SourceEncryptionAlgorithm") != m.end() && !m["SourceEncryptionAlgorithm"].empty()) {
      sourceEncryptionAlgorithm = make_shared<string>(boost::any_cast<string>(m["SourceEncryptionAlgorithm"]));
    }
    if (m.find("SourceEncryptionContext") != m.end() && !m["SourceEncryptionContext"].empty()) {
      sourceEncryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["SourceEncryptionContext"]));
    }
    if (m.find("DestinationKeyId") != m.end() && !m["DestinationKeyId"].empty()) {
      destinationKeyId = make_shared<string>(boost::any_cast<string>(m["DestinationKeyId"]));
    }
    if (m.find("DestinationEncryptionContext") != m.end() && !m["DestinationEncryptionContext"].empty()) {
      destinationEncryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["DestinationEncryptionContext"]));
    }
  }


  virtual ~ReEncryptShrinkRequest() = default;
};
class ReEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  ReEncryptResponseBody() {}

  explicit ReEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~ReEncryptResponseBody() = default;
};
class ReEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReEncryptResponseBody> body{};

  ReEncryptResponse() {}

  explicit ReEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReEncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReEncryptResponseBody>(model1);
      }
    }
  }


  virtual ~ReEncryptResponse() = default;
};
class RestoreSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};

  RestoreSecretRequest() {}

  explicit RestoreSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~RestoreSecretRequest() = default;
};
class RestoreSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> requestId{};

  RestoreSecretResponseBody() {}

  explicit RestoreSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestoreSecretResponseBody() = default;
};
class RestoreSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestoreSecretResponseBody> body{};

  RestoreSecretResponse() {}

  explicit RestoreSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestoreSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreSecretResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreSecretResponse() = default;
};
class RotateSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};

  RotateSecretRequest() {}

  explicit RotateSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~RotateSecretRequest() = default;
};
class RotateSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> arn{};

  RotateSecretResponseBody() {}

  explicit RotateSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~RotateSecretResponseBody() = default;
};
class RotateSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RotateSecretResponseBody> body{};

  RotateSecretResponse() {}

  explicit RotateSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RotateSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RotateSecretResponseBody>(model1);
      }
    }
  }


  virtual ~RotateSecretResponse() = default;
};
class ScheduleKeyDeletionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<long> pendingWindowInDays{};

  ScheduleKeyDeletionRequest() {}

  explicit ScheduleKeyDeletionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (pendingWindowInDays) {
      res["PendingWindowInDays"] = boost::any(*pendingWindowInDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("PendingWindowInDays") != m.end() && !m["PendingWindowInDays"].empty()) {
      pendingWindowInDays = make_shared<long>(boost::any_cast<long>(m["PendingWindowInDays"]));
    }
  }


  virtual ~ScheduleKeyDeletionRequest() = default;
};
class ScheduleKeyDeletionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ScheduleKeyDeletionResponseBody() {}

  explicit ScheduleKeyDeletionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ScheduleKeyDeletionResponseBody() = default;
};
class ScheduleKeyDeletionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScheduleKeyDeletionResponseBody> body{};

  ScheduleKeyDeletionResponse() {}

  explicit ScheduleKeyDeletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScheduleKeyDeletionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScheduleKeyDeletionResponseBody>(model1);
      }
    }
  }


  virtual ~ScheduleKeyDeletionResponse() = default;
};
class TagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> tags{};
  shared_ptr<string> secretName{};
  shared_ptr<string> certificateId{};

  TagResourceRequest() {}

  explicit TagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~TagResourceRequest() = default;
};
class TagResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourceResponseBody() {}

  explicit TagResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourceResponseBody() = default;
};
class TagResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourceResponseBody> body{};

  TagResourceResponse() {}

  explicit TagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourceResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourceResponse() = default;
};
class UntagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> tagKeys{};
  shared_ptr<string> secretName{};
  shared_ptr<string> certificateId{};

  UntagResourceRequest() {}

  explicit UntagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeys = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~UntagResourceRequest() = default;
};
class UntagResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourceResponseBody() {}

  explicit UntagResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourceResponseBody() = default;
};
class UntagResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourceResponseBody> body{};

  UntagResourceResponse() {}

  explicit UntagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourceResponse() = default;
};
class UpdateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> aliasName{};

  UpdateAliasRequest() {}

  explicit UpdateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~UpdateAliasRequest() = default;
};
class UpdateAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAliasResponseBody() {}

  explicit UpdateAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAliasResponseBody() = default;
};
class UpdateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAliasResponseBody> body{};

  UpdateAliasResponse() {}

  explicit UpdateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAliasResponse() = default;
};
class UpdateCertificateStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> status{};

  UpdateCertificateStatusRequest() {}

  explicit UpdateCertificateStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateCertificateStatusRequest() = default;
};
class UpdateCertificateStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCertificateStatusResponseBody() {}

  explicit UpdateCertificateStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCertificateStatusResponseBody() = default;
};
class UpdateCertificateStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCertificateStatusResponseBody> body{};

  UpdateCertificateStatusResponse() {}

  explicit UpdateCertificateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCertificateStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCertificateStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCertificateStatusResponse() = default;
};
class UpdateKeyDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> description{};

  UpdateKeyDescriptionRequest() {}

  explicit UpdateKeyDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateKeyDescriptionRequest() = default;
};
class UpdateKeyDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateKeyDescriptionResponseBody() {}

  explicit UpdateKeyDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateKeyDescriptionResponseBody() = default;
};
class UpdateKeyDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateKeyDescriptionResponseBody> body{};

  UpdateKeyDescriptionResponse() {}

  explicit UpdateKeyDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKeyDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKeyDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKeyDescriptionResponse() = default;
};
class UpdateRotationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};

  UpdateRotationPolicyRequest() {}

  explicit UpdateRotationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~UpdateRotationPolicyRequest() = default;
};
class UpdateRotationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRotationPolicyResponseBody() {}

  explicit UpdateRotationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRotationPolicyResponseBody() = default;
};
class UpdateRotationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRotationPolicyResponseBody> body{};

  UpdateRotationPolicyResponse() {}

  explicit UpdateRotationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRotationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRotationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRotationPolicyResponse() = default;
};
class UpdateSecretRotationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};

  UpdateSecretRotationPolicyRequest() {}

  explicit UpdateSecretRotationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~UpdateSecretRotationPolicyRequest() = default;
};
class UpdateSecretRotationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> requestId{};

  UpdateSecretRotationPolicyResponseBody() {}

  explicit UpdateSecretRotationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSecretRotationPolicyResponseBody() = default;
};
class UpdateSecretRotationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSecretRotationPolicyResponseBody> body{};

  UpdateSecretRotationPolicyResponse() {}

  explicit UpdateSecretRotationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecretRotationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecretRotationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecretRotationPolicyResponse() = default;
};
class UpdateSecretVersionStageRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> versionStage{};
  shared_ptr<string> removeFromVersion{};
  shared_ptr<string> moveToVersion{};

  UpdateSecretVersionStageRequest() {}

  explicit UpdateSecretVersionStageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    if (removeFromVersion) {
      res["RemoveFromVersion"] = boost::any(*removeFromVersion);
    }
    if (moveToVersion) {
      res["MoveToVersion"] = boost::any(*moveToVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      versionStage = make_shared<string>(boost::any_cast<string>(m["VersionStage"]));
    }
    if (m.find("RemoveFromVersion") != m.end() && !m["RemoveFromVersion"].empty()) {
      removeFromVersion = make_shared<string>(boost::any_cast<string>(m["RemoveFromVersion"]));
    }
    if (m.find("MoveToVersion") != m.end() && !m["MoveToVersion"].empty()) {
      moveToVersion = make_shared<string>(boost::any_cast<string>(m["MoveToVersion"]));
    }
  }


  virtual ~UpdateSecretVersionStageRequest() = default;
};
class UpdateSecretVersionStageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> secretName{};
  shared_ptr<string> requestId{};

  UpdateSecretVersionStageResponseBody() {}

  explicit UpdateSecretVersionStageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSecretVersionStageResponseBody() = default;
};
class UpdateSecretVersionStageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSecretVersionStageResponseBody> body{};

  UpdateSecretVersionStageResponse() {}

  explicit UpdateSecretVersionStageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecretVersionStageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecretVersionStageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecretVersionStageResponse() = default;
};
class UploadCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};

  UploadCertificateRequest() {}

  explicit UploadCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
  }


  virtual ~UploadCertificateRequest() = default;
};
class UploadCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UploadCertificateResponseBody() {}

  explicit UploadCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadCertificateResponseBody() = default;
};
class UploadCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadCertificateResponseBody> body{};

  UploadCertificateResponse() {}

  explicit UploadCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCertificateResponse() = default;
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
  AsymmetricDecryptResponse asymmetricDecryptWithOptions(shared_ptr<AsymmetricDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsymmetricDecryptResponse asymmetricDecrypt(shared_ptr<AsymmetricDecryptRequest> request);
  AsymmetricEncryptResponse asymmetricEncryptWithOptions(shared_ptr<AsymmetricEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsymmetricEncryptResponse asymmetricEncrypt(shared_ptr<AsymmetricEncryptRequest> request);
  AsymmetricSignResponse asymmetricSignWithOptions(shared_ptr<AsymmetricSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsymmetricSignResponse asymmetricSign(shared_ptr<AsymmetricSignRequest> request);
  AsymmetricVerifyResponse asymmetricVerifyWithOptions(shared_ptr<AsymmetricVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsymmetricVerifyResponse asymmetricVerify(shared_ptr<AsymmetricVerifyRequest> request);
  CancelKeyDeletionResponse cancelKeyDeletionWithOptions(shared_ptr<CancelKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelKeyDeletionResponse cancelKeyDeletion(shared_ptr<CancelKeyDeletionRequest> request);
  CertificatePrivateKeyDecryptResponse certificatePrivateKeyDecryptWithOptions(shared_ptr<CertificatePrivateKeyDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertificatePrivateKeyDecryptResponse certificatePrivateKeyDecrypt(shared_ptr<CertificatePrivateKeyDecryptRequest> request);
  CertificatePrivateKeySignResponse certificatePrivateKeySignWithOptions(shared_ptr<CertificatePrivateKeySignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertificatePrivateKeySignResponse certificatePrivateKeySign(shared_ptr<CertificatePrivateKeySignRequest> request);
  CertificatePublicKeyEncryptResponse certificatePublicKeyEncryptWithOptions(shared_ptr<CertificatePublicKeyEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertificatePublicKeyEncryptResponse certificatePublicKeyEncrypt(shared_ptr<CertificatePublicKeyEncryptRequest> request);
  CertificatePublicKeyVerifyResponse certificatePublicKeyVerifyWithOptions(shared_ptr<CertificatePublicKeyVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertificatePublicKeyVerifyResponse certificatePublicKeyVerify(shared_ptr<CertificatePublicKeyVerifyRequest> request);
  CreateAliasResponse createAliasWithOptions(shared_ptr<CreateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAliasResponse createAlias(shared_ptr<CreateAliasRequest> request);
  CreateCertificateResponse createCertificateWithOptions(shared_ptr<CreateCertificateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateResponse createCertificate(shared_ptr<CreateCertificateRequest> request);
  CreateKeyResponse createKeyWithOptions(shared_ptr<CreateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyResponse createKey(shared_ptr<CreateKeyRequest> request);
  CreateKeyVersionResponse createKeyVersionWithOptions(shared_ptr<CreateKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyVersionResponse createKeyVersion(shared_ptr<CreateKeyVersionRequest> request);
  CreateSecretResponse createSecretWithOptions(shared_ptr<CreateSecretRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecretResponse createSecret(shared_ptr<CreateSecretRequest> request);
  DecryptResponse decryptWithOptions(shared_ptr<DecryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecryptResponse decrypt(shared_ptr<DecryptRequest> request);
  DeleteAliasResponse deleteAliasWithOptions(shared_ptr<DeleteAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAliasResponse deleteAlias(shared_ptr<DeleteAliasRequest> request);
  DeleteCertificateResponse deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertificateResponse deleteCertificate(shared_ptr<DeleteCertificateRequest> request);
  DeleteKeyMaterialResponse deleteKeyMaterialWithOptions(shared_ptr<DeleteKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeyMaterialResponse deleteKeyMaterial(shared_ptr<DeleteKeyMaterialRequest> request);
  DeleteSecretResponse deleteSecretWithOptions(shared_ptr<DeleteSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretResponse deleteSecret(shared_ptr<DeleteSecretRequest> request);
  DescribeAccountKmsStatusResponse describeAccountKmsStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountKmsStatusResponse describeAccountKmsStatus();
  DescribeCertificateResponse describeCertificateWithOptions(shared_ptr<DescribeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificateResponse describeCertificate(shared_ptr<DescribeCertificateRequest> request);
  DescribeKeyResponse describeKeyWithOptions(shared_ptr<DescribeKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyResponse describeKey(shared_ptr<DescribeKeyRequest> request);
  DescribeKeyVersionResponse describeKeyVersionWithOptions(shared_ptr<DescribeKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyVersionResponse describeKeyVersion(shared_ptr<DescribeKeyVersionRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeSecretResponse describeSecretWithOptions(shared_ptr<DescribeSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecretResponse describeSecret(shared_ptr<DescribeSecretRequest> request);
  DescribeServiceResponse describeServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceResponse describeService();
  DisableKeyResponse disableKeyWithOptions(shared_ptr<DisableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableKeyResponse disableKey(shared_ptr<DisableKeyRequest> request);
  EnableKeyResponse enableKeyWithOptions(shared_ptr<EnableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableKeyResponse enableKey(shared_ptr<EnableKeyRequest> request);
  EncryptResponse encryptWithOptions(shared_ptr<EncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncryptResponse encrypt(shared_ptr<EncryptRequest> request);
  ExportCertificateResponse exportCertificateWithOptions(shared_ptr<ExportCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportCertificateResponse exportCertificate(shared_ptr<ExportCertificateRequest> request);
  ExportDataKeyResponse exportDataKeyWithOptions(shared_ptr<ExportDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportDataKeyResponse exportDataKey(shared_ptr<ExportDataKeyRequest> request);
  GenerateAndExportDataKeyResponse generateAndExportDataKeyWithOptions(shared_ptr<GenerateAndExportDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAndExportDataKeyResponse generateAndExportDataKey(shared_ptr<GenerateAndExportDataKeyRequest> request);
  GenerateDataKeyResponse generateDataKeyWithOptions(shared_ptr<GenerateDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateDataKeyResponse generateDataKey(shared_ptr<GenerateDataKeyRequest> request);
  GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintextWithOptions(shared_ptr<GenerateDataKeyWithoutPlaintextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateDataKeyWithoutPlaintextResponse generateDataKeyWithoutPlaintext(shared_ptr<GenerateDataKeyWithoutPlaintextRequest> request);
  GetCertificateResponse getCertificateWithOptions(shared_ptr<GetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCertificateResponse getCertificate(shared_ptr<GetCertificateRequest> request);
  GetParametersForImportResponse getParametersForImportWithOptions(shared_ptr<GetParametersForImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParametersForImportResponse getParametersForImport(shared_ptr<GetParametersForImportRequest> request);
  GetPublicKeyResponse getPublicKeyWithOptions(shared_ptr<GetPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicKeyResponse getPublicKey(shared_ptr<GetPublicKeyRequest> request);
  GetRandomPasswordResponse getRandomPasswordWithOptions(shared_ptr<GetRandomPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRandomPasswordResponse getRandomPassword(shared_ptr<GetRandomPasswordRequest> request);
  GetSecretValueResponse getSecretValueWithOptions(shared_ptr<GetSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretValueResponse getSecretValue(shared_ptr<GetSecretValueRequest> request);
  ImportCertificateResponse importCertificateWithOptions(shared_ptr<ImportCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportCertificateResponse importCertificate(shared_ptr<ImportCertificateRequest> request);
  ImportEncryptionCertificateResponse importEncryptionCertificateWithOptions(shared_ptr<ImportEncryptionCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportEncryptionCertificateResponse importEncryptionCertificate(shared_ptr<ImportEncryptionCertificateRequest> request);
  ImportKeyMaterialResponse importKeyMaterialWithOptions(shared_ptr<ImportKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportKeyMaterialResponse importKeyMaterial(shared_ptr<ImportKeyMaterialRequest> request);
  ListAliasesResponse listAliasesWithOptions(shared_ptr<ListAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesResponse listAliases(shared_ptr<ListAliasesRequest> request);
  ListAliasesByKeyIdResponse listAliasesByKeyIdWithOptions(shared_ptr<ListAliasesByKeyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesByKeyIdResponse listAliasesByKeyId(shared_ptr<ListAliasesByKeyIdRequest> request);
  ListCertificatesResponse listCertificatesWithOptions(shared_ptr<ListCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCertificatesResponse listCertificates(shared_ptr<ListCertificatesRequest> request);
  ListKeysResponse listKeysWithOptions(shared_ptr<ListKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeysResponse listKeys(shared_ptr<ListKeysRequest> request);
  ListKeyVersionsResponse listKeyVersionsWithOptions(shared_ptr<ListKeyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeyVersionsResponse listKeyVersions(shared_ptr<ListKeyVersionsRequest> request);
  ListResourceTagsResponse listResourceTagsWithOptions(shared_ptr<ListResourceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTagsResponse listResourceTags(shared_ptr<ListResourceTagsRequest> request);
  ListSecretsResponse listSecretsWithOptions(shared_ptr<ListSecretsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretsResponse listSecrets(shared_ptr<ListSecretsRequest> request);
  ListSecretVersionIdsResponse listSecretVersionIdsWithOptions(shared_ptr<ListSecretVersionIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretVersionIdsResponse listSecretVersionIds(shared_ptr<ListSecretVersionIdsRequest> request);
  OpenKmsServiceResponse openKmsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenKmsServiceResponse openKmsService();
  PutSecretValueResponse putSecretValueWithOptions(shared_ptr<PutSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutSecretValueResponse putSecretValue(shared_ptr<PutSecretValueRequest> request);
  ReEncryptResponse reEncryptWithOptions(shared_ptr<ReEncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReEncryptResponse reEncrypt(shared_ptr<ReEncryptRequest> request);
  RestoreSecretResponse restoreSecretWithOptions(shared_ptr<RestoreSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreSecretResponse restoreSecret(shared_ptr<RestoreSecretRequest> request);
  RotateSecretResponse rotateSecretWithOptions(shared_ptr<RotateSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RotateSecretResponse rotateSecret(shared_ptr<RotateSecretRequest> request);
  ScheduleKeyDeletionResponse scheduleKeyDeletionWithOptions(shared_ptr<ScheduleKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScheduleKeyDeletionResponse scheduleKeyDeletion(shared_ptr<ScheduleKeyDeletionRequest> request);
  TagResourceResponse tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourceResponse tagResource(shared_ptr<TagResourceRequest> request);
  UntagResourceResponse untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourceResponse untagResource(shared_ptr<UntagResourceRequest> request);
  UpdateAliasResponse updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAliasResponse updateAlias(shared_ptr<UpdateAliasRequest> request);
  UpdateCertificateStatusResponse updateCertificateStatusWithOptions(shared_ptr<UpdateCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCertificateStatusResponse updateCertificateStatus(shared_ptr<UpdateCertificateStatusRequest> request);
  UpdateKeyDescriptionResponse updateKeyDescriptionWithOptions(shared_ptr<UpdateKeyDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKeyDescriptionResponse updateKeyDescription(shared_ptr<UpdateKeyDescriptionRequest> request);
  UpdateRotationPolicyResponse updateRotationPolicyWithOptions(shared_ptr<UpdateRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRotationPolicyResponse updateRotationPolicy(shared_ptr<UpdateRotationPolicyRequest> request);
  UpdateSecretRotationPolicyResponse updateSecretRotationPolicyWithOptions(shared_ptr<UpdateSecretRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecretRotationPolicyResponse updateSecretRotationPolicy(shared_ptr<UpdateSecretRotationPolicyRequest> request);
  UpdateSecretVersionStageResponse updateSecretVersionStageWithOptions(shared_ptr<UpdateSecretVersionStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecretVersionStageResponse updateSecretVersionStage(shared_ptr<UpdateSecretVersionStageRequest> request);
  UploadCertificateResponse uploadCertificateWithOptions(shared_ptr<UploadCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCertificateResponse uploadCertificate(shared_ptr<UploadCertificateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Kms20160120

#endif
