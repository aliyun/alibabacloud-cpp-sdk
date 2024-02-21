// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_KMS20160120_H_
#define ALIBABACLOUD_KMS20160120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Kms20160120 {
class AsymmetricDecryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricDecryptRequest() {}

  explicit AsymmetricDecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
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


  virtual ~AsymmetricDecryptRequest() = default;
};
class AsymmetricDecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> requestId{};

  AsymmetricDecryptResponseBody() {}

  explicit AsymmetricDecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AsymmetricDecryptResponseBody() = default;
};
class AsymmetricDecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsymmetricDecryptResponseBody> body{};

  AsymmetricDecryptResponse() {}

  explicit AsymmetricDecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> plaintext{};

  AsymmetricEncryptRequest() {}

  explicit AsymmetricEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~AsymmetricEncryptRequest() = default;
};
class AsymmetricEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  AsymmetricEncryptResponseBody() {}

  explicit AsymmetricEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AsymmetricEncryptResponseBody() = default;
};
class AsymmetricEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsymmetricEncryptResponseBody> body{};

  AsymmetricEncryptResponse() {}

  explicit AsymmetricEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  AsymmetricSignRequest() {}

  explicit AsymmetricSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~AsymmetricSignRequest() = default;
};
class AsymmetricSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> value{};

  AsymmetricSignResponseBody() {}

  explicit AsymmetricSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AsymmetricSignResponseBody() = default;
};
class AsymmetricSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsymmetricSignResponseBody> body{};

  AsymmetricSignResponse() {}

  explicit AsymmetricSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> value{};

  AsymmetricVerifyRequest() {}

  explicit AsymmetricVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AsymmetricVerifyRequest() = default;
};
class AsymmetricVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> value{};

  AsymmetricVerifyResponseBody() {}

  explicit AsymmetricVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<bool>(boost::any_cast<bool>(m["Value"]));
    }
  }


  virtual ~AsymmetricVerifyResponseBody() = default;
};
class AsymmetricVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsymmetricVerifyResponseBody> body{};

  AsymmetricVerifyResponse() {}

  explicit AsymmetricVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CancelKeyDeletionResponseBody> body{};

  CancelKeyDeletionResponse() {}

  explicit CancelKeyDeletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> ciphertextBlob{};

  CertificatePrivateKeyDecryptRequest() {}

  explicit CertificatePrivateKeyDecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
  }


  virtual ~CertificatePrivateKeyDecryptRequest() = default;
};
class CertificatePrivateKeyDecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> requestId{};

  CertificatePrivateKeyDecryptResponseBody() {}

  explicit CertificatePrivateKeyDecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CertificatePrivateKeyDecryptResponseBody() = default;
};
class CertificatePrivateKeyDecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CertificatePrivateKeyDecryptResponseBody> body{};

  CertificatePrivateKeyDecryptResponse() {}

  explicit CertificatePrivateKeyDecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};

  CertificatePrivateKeySignRequest() {}

  explicit CertificatePrivateKeySignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~CertificatePrivateKeySignRequest() = default;
};
class CertificatePrivateKeySignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signatureValue{};

  CertificatePrivateKeySignResponseBody() {}

  explicit CertificatePrivateKeySignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
  }


  virtual ~CertificatePrivateKeySignResponseBody() = default;
};
class CertificatePrivateKeySignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CertificatePrivateKeySignResponseBody> body{};

  CertificatePrivateKeySignResponse() {}

  explicit CertificatePrivateKeySignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> plaintext{};

  CertificatePublicKeyEncryptRequest() {}

  explicit CertificatePublicKeyEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~CertificatePublicKeyEncryptRequest() = default;
};
class CertificatePublicKeyEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> requestId{};

  CertificatePublicKeyEncryptResponseBody() {}

  explicit CertificatePublicKeyEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CertificatePublicKeyEncryptResponseBody() = default;
};
class CertificatePublicKeyEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CertificatePublicKeyEncryptResponseBody> body{};

  CertificatePublicKeyEncryptResponse() {}

  explicit CertificatePublicKeyEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> algorithm{};
  shared_ptr<string> certificateId{};
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
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
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
  shared_ptr<string> certificateId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> signatureValid{};

  CertificatePublicKeyVerifyResponseBody() {}

  explicit CertificatePublicKeyVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signatureValid) {
      res["SignatureValid"] = boost::any(*signatureValid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CertificatePublicKeyVerifyResponseBody> body{};

  CertificatePublicKeyVerifyResponse() {}

  explicit CertificatePublicKeyVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificatePublicKeyVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificatePublicKeyVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~CertificatePublicKeyVerifyResponse() = default;
};
class ConnectKmsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> KMProvider{};
  shared_ptr<string> kmsInstanceId{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneIds{};

  ConnectKmsInstanceRequest() {}

  explicit ConnectKmsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KMProvider) {
      res["KMProvider"] = boost::any(*KMProvider);
    }
    if (kmsInstanceId) {
      res["KmsInstanceId"] = boost::any(*kmsInstanceId);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KMProvider") != m.end() && !m["KMProvider"].empty()) {
      KMProvider = make_shared<string>(boost::any_cast<string>(m["KMProvider"]));
    }
    if (m.find("KmsInstanceId") != m.end() && !m["KmsInstanceId"].empty()) {
      kmsInstanceId = make_shared<string>(boost::any_cast<string>(m["KmsInstanceId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      zoneIds = make_shared<string>(boost::any_cast<string>(m["ZoneIds"]));
    }
  }


  virtual ~ConnectKmsInstanceRequest() = default;
};
class ConnectKmsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConnectKmsInstanceResponseBody() {}

  explicit ConnectKmsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConnectKmsInstanceResponseBody() = default;
};
class ConnectKmsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConnectKmsInstanceResponseBody> body{};

  ConnectKmsInstanceResponse() {}

  explicit ConnectKmsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConnectKmsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConnectKmsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConnectKmsInstanceResponse() = default;
};
class CreateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> keyId{};

  CreateAliasRequest() {}

  explicit CreateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAliasResponseBody> body{};

  CreateAliasResponse() {}

  explicit CreateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAliasResponse() = default;
};
class CreateApplicationAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> authenticationMethod{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policies{};

  CreateApplicationAccessPointRequest() {}

  explicit CreateApplicationAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationMethod) {
      res["AuthenticationMethod"] = boost::any(*authenticationMethod);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationMethod") != m.end() && !m["AuthenticationMethod"].empty()) {
      authenticationMethod = make_shared<string>(boost::any_cast<string>(m["AuthenticationMethod"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<string>(boost::any_cast<string>(m["Policies"]));
    }
  }


  virtual ~CreateApplicationAccessPointRequest() = default;
};
class CreateApplicationAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> authenticationMethod{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policies{};
  shared_ptr<string> requestId{};

  CreateApplicationAccessPointResponseBody() {}

  explicit CreateApplicationAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (authenticationMethod) {
      res["AuthenticationMethod"] = boost::any(*authenticationMethod);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AuthenticationMethod") != m.end() && !m["AuthenticationMethod"].empty()) {
      authenticationMethod = make_shared<string>(boost::any_cast<string>(m["AuthenticationMethod"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<string>(boost::any_cast<string>(m["Policies"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationAccessPointResponseBody() = default;
};
class CreateApplicationAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationAccessPointResponseBody> body{};

  CreateApplicationAccessPointResponse() {}

  explicit CreateApplicationAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationAccessPointResponse() = default;
};
class CreateCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> exportablePrivateKey{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> subject{};
  shared_ptr<map<string, boost::any>> subjectAlternativeNames{};

  CreateCertificateRequest() {}

  explicit CreateCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportablePrivateKey) {
      res["ExportablePrivateKey"] = boost::any(*exportablePrivateKey);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportablePrivateKey") != m.end() && !m["ExportablePrivateKey"].empty()) {
      exportablePrivateKey = make_shared<bool>(boost::any_cast<bool>(m["ExportablePrivateKey"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
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
  }


  virtual ~CreateCertificateRequest() = default;
};
class CreateCertificateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> exportablePrivateKey{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> subject{};
  shared_ptr<string> subjectAlternativeNamesShrink{};

  CreateCertificateShrinkRequest() {}

  explicit CreateCertificateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportablePrivateKey) {
      res["ExportablePrivateKey"] = boost::any(*exportablePrivateKey);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectAlternativeNamesShrink) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNamesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportablePrivateKey") != m.end() && !m["ExportablePrivateKey"].empty()) {
      exportablePrivateKey = make_shared<bool>(boost::any_cast<bool>(m["ExportablePrivateKey"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      subjectAlternativeNamesShrink = make_shared<string>(boost::any_cast<string>(m["SubjectAlternativeNames"]));
    }
  }


  virtual ~CreateCertificateShrinkRequest() = default;
};
class CreateCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> csr{};
  shared_ptr<string> requestId{};

  CreateCertificateResponseBody() {}

  explicit CreateCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateResponseBody() = default;
};
class CreateCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateResponseBody> body{};

  CreateCertificateResponse() {}

  explicit CreateCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateResponse() = default;
};
class CreateClientKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aapName{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> password{};

  CreateClientKeyRequest() {}

  explicit CreateClientKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aapName) {
      res["AapName"] = boost::any(*aapName);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AapName") != m.end() && !m["AapName"].empty()) {
      aapName = make_shared<string>(boost::any_cast<string>(m["AapName"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~CreateClientKeyRequest() = default;
};
class CreateClientKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientKeyId{};
  shared_ptr<string> keyAlgorithm{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> privateKeyData{};
  shared_ptr<string> requestId{};

  CreateClientKeyResponseBody() {}

  explicit CreateClientKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientKeyId) {
      res["ClientKeyId"] = boost::any(*clientKeyId);
    }
    if (keyAlgorithm) {
      res["KeyAlgorithm"] = boost::any(*keyAlgorithm);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (privateKeyData) {
      res["PrivateKeyData"] = boost::any(*privateKeyData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientKeyId") != m.end() && !m["ClientKeyId"].empty()) {
      clientKeyId = make_shared<string>(boost::any_cast<string>(m["ClientKeyId"]));
    }
    if (m.find("KeyAlgorithm") != m.end() && !m["KeyAlgorithm"].empty()) {
      keyAlgorithm = make_shared<string>(boost::any_cast<string>(m["KeyAlgorithm"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("PrivateKeyData") != m.end() && !m["PrivateKeyData"].empty()) {
      privateKeyData = make_shared<string>(boost::any_cast<string>(m["PrivateKeyData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClientKeyResponseBody() = default;
};
class CreateClientKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClientKeyResponseBody> body{};

  CreateClientKeyResponse() {}

  explicit CreateClientKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClientKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClientKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClientKeyResponse() = default;
};
class CreateKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> origin{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> tags{};

  CreateKeyRequest() {}

  explicit CreateKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
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
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
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
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~CreateKeyRequest() = default;
};
class CreateKeyResponseBodyKeyMetadata : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> creationDate{};
  shared_ptr<string> creator{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> deleteDate{};
  shared_ptr<string> description{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> keyState{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> materialExpireTime{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> origin{};
  shared_ptr<string> primaryKeyVersion{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> rotationInterval{};

  CreateKeyResponseBodyKeyMetadata() {}

  explicit CreateKeyResponseBodyKeyMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (deleteDate) {
      res["DeleteDate"] = boost::any(*deleteDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (keyState) {
      res["KeyState"] = boost::any(*keyState);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (materialExpireTime) {
      res["MaterialExpireTime"] = boost::any(*materialExpireTime);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (primaryKeyVersion) {
      res["PrimaryKeyVersion"] = boost::any(*primaryKeyVersion);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("DeleteDate") != m.end() && !m["DeleteDate"].empty()) {
      deleteDate = make_shared<string>(boost::any_cast<string>(m["DeleteDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("KeyState") != m.end() && !m["KeyState"].empty()) {
      keyState = make_shared<string>(boost::any_cast<string>(m["KeyState"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("MaterialExpireTime") != m.end() && !m["MaterialExpireTime"].empty()) {
      materialExpireTime = make_shared<string>(boost::any_cast<string>(m["MaterialExpireTime"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("PrimaryKeyVersion") != m.end() && !m["PrimaryKeyVersion"].empty()) {
      primaryKeyVersion = make_shared<string>(boost::any_cast<string>(m["PrimaryKeyVersion"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~CreateKeyResponseBodyKeyMetadata() = default;
};
class CreateKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateKeyResponseBodyKeyMetadata> keyMetadata{};
  shared_ptr<string> requestId{};

  CreateKeyResponseBody() {}

  explicit CreateKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyMetadata) {
      res["KeyMetadata"] = keyMetadata ? boost::any(keyMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyMetadata") != m.end() && !m["KeyMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyMetadata"].type()) {
        CreateKeyResponseBodyKeyMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyMetadata"]));
        keyMetadata = make_shared<CreateKeyResponseBodyKeyMetadata>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateKeyResponseBody() = default;
};
class CreateKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKeyResponseBody> body{};

  CreateKeyResponse() {}

  explicit CreateKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> creationDate{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  CreateKeyVersionResponseBodyKeyVersion() {}

  explicit CreateKeyVersionResponseBodyKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
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
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~CreateKeyVersionResponseBodyKeyVersion() = default;
};
class CreateKeyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateKeyVersionResponseBodyKeyVersion> keyVersion{};
  shared_ptr<string> requestId{};

  CreateKeyVersionResponseBody() {}

  explicit CreateKeyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersion) {
      res["KeyVersion"] = keyVersion ? boost::any(keyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersion") != m.end() && !m["KeyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersion"].type()) {
        CreateKeyVersionResponseBodyKeyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersion"]));
        keyVersion = make_shared<CreateKeyVersionResponseBodyKeyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateKeyVersionResponseBody() = default;
};
class CreateKeyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKeyVersionResponseBody> body{};

  CreateKeyVersionResponse() {}

  explicit CreateKeyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeyVersionResponse() = default;
};
class CreateNetworkRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> sourcePrivateIp{};
  shared_ptr<string> type{};

  CreateNetworkRuleRequest() {}

  explicit CreateNetworkRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sourcePrivateIp) {
      res["SourcePrivateIp"] = boost::any(*sourcePrivateIp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("SourcePrivateIp") != m.end() && !m["SourcePrivateIp"].empty()) {
      sourcePrivateIp = make_shared<string>(boost::any_cast<string>(m["SourcePrivateIp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateNetworkRuleRequest() = default;
};
class CreateNetworkRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourcePrivateIp{};
  shared_ptr<string> type{};

  CreateNetworkRuleResponseBody() {}

  explicit CreateNetworkRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourcePrivateIp) {
      res["SourcePrivateIp"] = boost::any(*sourcePrivateIp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourcePrivateIp") != m.end() && !m["SourcePrivateIp"].empty()) {
      sourcePrivateIp = make_shared<string>(boost::any_cast<string>(m["SourcePrivateIp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateNetworkRuleResponseBody() = default;
};
class CreateNetworkRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNetworkRuleResponseBody> body{};

  CreateNetworkRuleResponse() {}

  explicit CreateNetworkRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNetworkRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetworkRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetworkRuleResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessControlRules{};
  shared_ptr<string> description{};
  shared_ptr<string> kmsInstance{};
  shared_ptr<string> name{};
  shared_ptr<string> permissions{};
  shared_ptr<string> resources{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlRules) {
      res["AccessControlRules"] = boost::any(*accessControlRules);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (kmsInstance) {
      res["KmsInstance"] = boost::any(*kmsInstance);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlRules") != m.end() && !m["AccessControlRules"].empty()) {
      accessControlRules = make_shared<string>(boost::any_cast<string>(m["AccessControlRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KmsInstance") != m.end() && !m["KmsInstance"].empty()) {
      kmsInstance = make_shared<string>(boost::any_cast<string>(m["KmsInstance"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissions = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessControlRules{};
  shared_ptr<string> arn{};
  shared_ptr<string> description{};
  shared_ptr<string> kmsInstance{};
  shared_ptr<string> name{};
  shared_ptr<string> permissions{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resources{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlRules) {
      res["AccessControlRules"] = boost::any(*accessControlRules);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (kmsInstance) {
      res["KmsInstance"] = boost::any(*kmsInstance);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlRules") != m.end() && !m["AccessControlRules"].empty()) {
      accessControlRules = make_shared<string>(boost::any_cast<string>(m["AccessControlRules"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KmsInstance") != m.end() && !m["KmsInstance"].empty()) {
      kmsInstance = make_shared<string>(boost::any_cast<string>(m["KmsInstance"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissions = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreateSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> encryptionKeyId{};
  shared_ptr<map<string, boost::any>> extendedConfig{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<string> tags{};
  shared_ptr<string> versionId{};

  CreateSecretRequest() {}

  explicit CreateSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendedConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendedConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreateSecretRequest() = default;
};
class CreateSecretShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> encryptionKeyId{};
  shared_ptr<string> extendedConfigShrink{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<string> tags{};
  shared_ptr<string> versionId{};

  CreateSecretShrinkRequest() {}

  explicit CreateSecretShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    if (extendedConfigShrink) {
      res["ExtendedConfig"] = boost::any(*extendedConfigShrink);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfigShrink = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreateSecretShrinkRequest() = default;
};
class CreateSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<string> versionId{};

  CreateSecretResponseBody() {}

  explicit CreateSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreateSecretResponseBody() = default;
};
class CreateSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecretResponseBody> body{};

  CreateSecretResponse() {}

  explicit CreateSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> requestId{};

  DecryptResponseBody() {}

  explicit DecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DecryptResponseBody() = default;
};
class DecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DecryptResponseBody> body{};

  DecryptResponse() {}

  explicit DecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAliasResponseBody> body{};

  DeleteAliasResponse() {}

  explicit DeleteAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAliasResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAliasResponse() = default;
};
class DeleteApplicationAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteApplicationAccessPointRequest() {}

  explicit DeleteApplicationAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteApplicationAccessPointRequest() = default;
};
class DeleteApplicationAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationAccessPointResponseBody() {}

  explicit DeleteApplicationAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationAccessPointResponseBody() = default;
};
class DeleteApplicationAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationAccessPointResponseBody> body{};

  DeleteApplicationAccessPointResponse() {}

  explicit DeleteApplicationAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationAccessPointResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCertificateResponseBody> body{};

  DeleteCertificateResponse() {}

  explicit DeleteCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCertificateResponse() = default;
};
class DeleteClientKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientKeyId{};

  DeleteClientKeyRequest() {}

  explicit DeleteClientKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientKeyId) {
      res["ClientKeyId"] = boost::any(*clientKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientKeyId") != m.end() && !m["ClientKeyId"].empty()) {
      clientKeyId = make_shared<string>(boost::any_cast<string>(m["ClientKeyId"]));
    }
  }


  virtual ~DeleteClientKeyRequest() = default;
};
class DeleteClientKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClientKeyResponseBody() {}

  explicit DeleteClientKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClientKeyResponseBody() = default;
};
class DeleteClientKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClientKeyResponseBody> body{};

  DeleteClientKeyResponse() {}

  explicit DeleteClientKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClientKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClientKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClientKeyResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeyMaterialResponseBody> body{};

  DeleteKeyMaterialResponse() {}

  explicit DeleteKeyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeyMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeyMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeyMaterialResponse() = default;
};
class DeleteNetworkRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteNetworkRuleRequest() {}

  explicit DeleteNetworkRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteNetworkRuleRequest() = default;
};
class DeleteNetworkRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNetworkRuleResponseBody() {}

  explicit DeleteNetworkRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNetworkRuleResponseBody() = default;
};
class DeleteNetworkRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNetworkRuleResponseBody> body{};

  DeleteNetworkRuleResponse() {}

  explicit DeleteNetworkRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNetworkRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNetworkRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNetworkRuleResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeletePolicyRequest() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeleteSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> forceDeleteWithoutRecovery{};
  shared_ptr<string> recoveryWindowInDays{};
  shared_ptr<string> secretName{};

  DeleteSecretRequest() {}

  explicit DeleteSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceDeleteWithoutRecovery) {
      res["ForceDeleteWithoutRecovery"] = boost::any(*forceDeleteWithoutRecovery);
    }
    if (recoveryWindowInDays) {
      res["RecoveryWindowInDays"] = boost::any(*recoveryWindowInDays);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceDeleteWithoutRecovery") != m.end() && !m["ForceDeleteWithoutRecovery"].empty()) {
      forceDeleteWithoutRecovery = make_shared<string>(boost::any_cast<string>(m["ForceDeleteWithoutRecovery"]));
    }
    if (m.find("RecoveryWindowInDays") != m.end() && !m["RecoveryWindowInDays"].empty()) {
      recoveryWindowInDays = make_shared<string>(boost::any_cast<string>(m["RecoveryWindowInDays"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~DeleteSecretRequest() = default;
};
class DeleteSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> plannedDeleteTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};

  DeleteSecretResponseBody() {}

  explicit DeleteSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~DeleteSecretResponseBody() = default;
};
class DeleteSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecretResponseBody> body{};

  DeleteSecretResponse() {}

  explicit DeleteSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountKmsStatusResponseBody> body{};

  DescribeAccountKmsStatusResponse() {}

  explicit DescribeAccountKmsStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountKmsStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountKmsStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountKmsStatusResponse() = default;
};
class DescribeApplicationAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeApplicationAccessPointRequest() {}

  explicit DescribeApplicationAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeApplicationAccessPointRequest() = default;
};
class DescribeApplicationAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> authenticationMethod{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policies{};
  shared_ptr<string> requestId{};

  DescribeApplicationAccessPointResponseBody() {}

  explicit DescribeApplicationAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (authenticationMethod) {
      res["AuthenticationMethod"] = boost::any(*authenticationMethod);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AuthenticationMethod") != m.end() && !m["AuthenticationMethod"].empty()) {
      authenticationMethod = make_shared<string>(boost::any_cast<string>(m["AuthenticationMethod"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<string>(boost::any_cast<string>(m["Policies"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeApplicationAccessPointResponseBody() = default;
};
class DescribeApplicationAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationAccessPointResponseBody> body{};

  DescribeApplicationAccessPointResponse() {}

  explicit DescribeApplicationAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationAccessPointResponse() = default;
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
  shared_ptr<string> arn{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> createdAt{};
  shared_ptr<bool> exportablePrivateKey{};
  shared_ptr<string> issuer{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serial{};
  shared_ptr<string> signatureAlgorithm{};
  shared_ptr<string> status{};
  shared_ptr<string> subject{};
  shared_ptr<vector<string>> subjectAlternativeNames{};
  shared_ptr<string> subjectKeyIdentifier{};
  shared_ptr<string> subjectPublicKey{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> updatedAt{};

  DescribeCertificateResponseBody() {}

  explicit DescribeCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (exportablePrivateKey) {
      res["ExportablePrivateKey"] = boost::any(*exportablePrivateKey);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serial) {
      res["Serial"] = boost::any(*serial);
    }
    if (signatureAlgorithm) {
      res["SignatureAlgorithm"] = boost::any(*signatureAlgorithm);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectAlternativeNames) {
      res["SubjectAlternativeNames"] = boost::any(*subjectAlternativeNames);
    }
    if (subjectKeyIdentifier) {
      res["SubjectKeyIdentifier"] = boost::any(*subjectKeyIdentifier);
    }
    if (subjectPublicKey) {
      res["SubjectPublicKey"] = boost::any(*subjectPublicKey);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("ExportablePrivateKey") != m.end() && !m["ExportablePrivateKey"].empty()) {
      exportablePrivateKey = make_shared<bool>(boost::any_cast<bool>(m["ExportablePrivateKey"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Serial") != m.end() && !m["Serial"].empty()) {
      serial = make_shared<string>(boost::any_cast<string>(m["Serial"]));
    }
    if (m.find("SignatureAlgorithm") != m.end() && !m["SignatureAlgorithm"].empty()) {
      signatureAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignatureAlgorithm"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
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
    if (m.find("SubjectKeyIdentifier") != m.end() && !m["SubjectKeyIdentifier"].empty()) {
      subjectKeyIdentifier = make_shared<string>(boost::any_cast<string>(m["SubjectKeyIdentifier"]));
    }
    if (m.find("SubjectPublicKey") != m.end() && !m["SubjectPublicKey"].empty()) {
      subjectPublicKey = make_shared<string>(boost::any_cast<string>(m["SubjectPublicKey"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~DescribeCertificateResponseBody() = default;
};
class DescribeCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCertificateResponseBody> body{};

  DescribeCertificateResponse() {}

  explicit DescribeCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> arn{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> creationDate{};
  shared_ptr<string> creator{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> deleteDate{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> deletionProtectionDescription{};
  shared_ptr<string> description{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<string> keyState{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> materialExpireTime{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> origin{};
  shared_ptr<string> primaryKeyVersion{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> rotationInterval{};

  DescribeKeyResponseBodyKeyMetadata() {}

  explicit DescribeKeyResponseBodyKeyMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (deleteDate) {
      res["DeleteDate"] = boost::any(*deleteDate);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (deletionProtectionDescription) {
      res["DeletionProtectionDescription"] = boost::any(*deletionProtectionDescription);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (keyState) {
      res["KeyState"] = boost::any(*keyState);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (materialExpireTime) {
      res["MaterialExpireTime"] = boost::any(*materialExpireTime);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (primaryKeyVersion) {
      res["PrimaryKeyVersion"] = boost::any(*primaryKeyVersion);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("DeleteDate") != m.end() && !m["DeleteDate"].empty()) {
      deleteDate = make_shared<string>(boost::any_cast<string>(m["DeleteDate"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("DeletionProtectionDescription") != m.end() && !m["DeletionProtectionDescription"].empty()) {
      deletionProtectionDescription = make_shared<string>(boost::any_cast<string>(m["DeletionProtectionDescription"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("KeyState") != m.end() && !m["KeyState"].empty()) {
      keyState = make_shared<string>(boost::any_cast<string>(m["KeyState"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("MaterialExpireTime") != m.end() && !m["MaterialExpireTime"].empty()) {
      materialExpireTime = make_shared<string>(boost::any_cast<string>(m["MaterialExpireTime"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("PrimaryKeyVersion") != m.end() && !m["PrimaryKeyVersion"].empty()) {
      primaryKeyVersion = make_shared<string>(boost::any_cast<string>(m["PrimaryKeyVersion"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
  }


  virtual ~DescribeKeyResponseBodyKeyMetadata() = default;
};
class DescribeKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeKeyResponseBodyKeyMetadata> keyMetadata{};
  shared_ptr<string> requestId{};

  DescribeKeyResponseBody() {}

  explicit DescribeKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyMetadata) {
      res["KeyMetadata"] = keyMetadata ? boost::any(keyMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyMetadata") != m.end() && !m["KeyMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyMetadata"].type()) {
        DescribeKeyResponseBodyKeyMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyMetadata"]));
        keyMetadata = make_shared<DescribeKeyResponseBodyKeyMetadata>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeKeyResponseBody() = default;
};
class DescribeKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKeyResponseBody> body{};

  DescribeKeyResponse() {}

  explicit DescribeKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> creationDate{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  DescribeKeyVersionResponseBodyKeyVersion() {}

  explicit DescribeKeyVersionResponseBodyKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
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
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
  }


  virtual ~DescribeKeyVersionResponseBodyKeyVersion() = default;
};
class DescribeKeyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeKeyVersionResponseBodyKeyVersion> keyVersion{};
  shared_ptr<string> requestId{};

  DescribeKeyVersionResponseBody() {}

  explicit DescribeKeyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyVersion) {
      res["KeyVersion"] = keyVersion ? boost::any(keyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyVersion") != m.end() && !m["KeyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersion"].type()) {
        DescribeKeyVersionResponseBodyKeyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersion"]));
        keyVersion = make_shared<DescribeKeyVersionResponseBodyKeyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeKeyVersionResponseBody() = default;
};
class DescribeKeyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKeyVersionResponseBody> body{};

  DescribeKeyVersionResponse() {}

  explicit DescribeKeyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeyVersionResponse() = default;
};
class DescribeNetworkRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeNetworkRuleRequest() {}

  explicit DescribeNetworkRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeNetworkRuleRequest() = default;
};
class DescribeNetworkRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourcePrivateIp{};
  shared_ptr<string> type{};

  DescribeNetworkRuleResponseBody() {}

  explicit DescribeNetworkRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourcePrivateIp) {
      res["SourcePrivateIp"] = boost::any(*sourcePrivateIp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourcePrivateIp") != m.end() && !m["SourcePrivateIp"].empty()) {
      sourcePrivateIp = make_shared<string>(boost::any_cast<string>(m["SourcePrivateIp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeNetworkRuleResponseBody() = default;
};
class DescribeNetworkRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNetworkRuleResponseBody> body{};

  DescribeNetworkRuleResponse() {}

  explicit DescribeNetworkRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNetworkRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNetworkRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNetworkRuleResponse() = default;
};
class DescribePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribePolicyRequest() {}

  explicit DescribePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribePolicyRequest() = default;
};
class DescribePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessControlRules{};
  shared_ptr<string> arn{};
  shared_ptr<string> description{};
  shared_ptr<string> kmsInstance{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> permissions{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resources{};

  DescribePolicyResponseBody() {}

  explicit DescribePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlRules) {
      res["AccessControlRules"] = boost::any(*accessControlRules);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (kmsInstance) {
      res["KmsInstance"] = boost::any(*kmsInstance);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlRules") != m.end() && !m["AccessControlRules"].empty()) {
      accessControlRules = make_shared<string>(boost::any_cast<string>(m["AccessControlRules"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KmsInstance") != m.end() && !m["KmsInstance"].empty()) {
      kmsInstance = make_shared<string>(boost::any_cast<string>(m["KmsInstance"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePolicyResponseBody() = default;
};
class DescribePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyResponseBody> body{};

  DescribePolicyResponse() {}

  explicit DescribePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyResponse() = default;
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
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> fetchTags{};
  shared_ptr<string> secretName{};

  DescribeSecretRequest() {}

  explicit DescribeSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchTags) {
      res["FetchTags"] = boost::any(*fetchTags);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchTags") != m.end() && !m["FetchTags"].empty()) {
      fetchTags = make_shared<string>(boost::any_cast<string>(m["FetchTags"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~DescribeSecretRequest() = default;
};
class DescribeSecretResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeSecretResponseBodyTagsTag() {}

  explicit DescribeSecretResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
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
  shared_ptr<string> arn{};
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> encryptionKeyId{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> plannedDeleteTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<DescribeSecretResponseBodyTags> tags{};
  shared_ptr<string> updateTime{};

  DescribeSecretResponseBody() {}

  explicit DescribeSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptionKeyId) {
      res["EncryptionKeyId"] = boost::any(*encryptionKeyId);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptionKeyId") != m.end() && !m["EncryptionKeyId"].empty()) {
      encryptionKeyId = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyId"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeSecretResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeSecretResponseBodyTags>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeSecretResponseBody() = default;
};
class DescribeSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecretResponseBody> body{};

  DescribeSecretResponse() {}

  explicit DescribeSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecretResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DisableKeyResponseBody> body{};

  DisableKeyResponse() {}

  explicit DisableKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<EnableKeyResponseBody> body{};

  EnableKeyResponse() {}

  explicit EnableKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> plaintext{};

  EncryptRequest() {}

  explicit EncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~EncryptRequest() = default;
};
class EncryptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> keyId{};
  shared_ptr<string> plaintext{};

  EncryptShrinkRequest() {}

  explicit EncryptShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~EncryptShrinkRequest() = default;
};
class EncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  EncryptResponseBody() {}

  explicit EncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EncryptResponseBody() = default;
};
class EncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EncryptResponseBody> body{};

  EncryptResponse() {}

  explicit EncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncryptResponseBody>(model1);
      }
    }
  }


  virtual ~EncryptResponse() = default;
};
class ExportDataKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingAlgorithm{};
  shared_ptr<string> wrappingKeySpec{};

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
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
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
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
  }


  virtual ~ExportDataKeyRequest() = default;
};
class ExportDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingAlgorithm{};
  shared_ptr<string> wrappingKeySpec{};

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
    if (wrappingAlgorithm) {
      res["WrappingAlgorithm"] = boost::any(*wrappingAlgorithm);
    }
    if (wrappingKeySpec) {
      res["WrappingKeySpec"] = boost::any(*wrappingKeySpec);
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
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
  }


  virtual ~ExportDataKeyShrinkRequest() = default;
};
class ExportDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportedDataKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  ExportDataKeyResponseBody() {}

  explicit ExportDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportedDataKey) {
      res["ExportedDataKey"] = boost::any(*exportedDataKey);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyVersionId) {
      res["KeyVersionId"] = boost::any(*keyVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportedDataKey") != m.end() && !m["ExportedDataKey"].empty()) {
      exportedDataKey = make_shared<string>(boost::any_cast<string>(m["ExportedDataKey"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportDataKeyResponseBody() = default;
};
class ExportDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportDataKeyResponseBody> body{};

  ExportDataKeyResponse() {}

  explicit ExportDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingAlgorithm{};
  shared_ptr<string> wrappingKeySpec{};

  GenerateAndExportDataKeyRequest() {}

  explicit GenerateAndExportDataKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
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
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
  }


  virtual ~GenerateAndExportDataKeyRequest() = default;
};
class GenerateAndExportDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};
  shared_ptr<string> publicKeyBlob{};
  shared_ptr<string> wrappingAlgorithm{};
  shared_ptr<string> wrappingKeySpec{};

  GenerateAndExportDataKeyShrinkRequest() {}

  explicit GenerateAndExportDataKeyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    if (publicKeyBlob) {
      res["PublicKeyBlob"] = boost::any(*publicKeyBlob);
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
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
    if (m.find("PublicKeyBlob") != m.end() && !m["PublicKeyBlob"].empty()) {
      publicKeyBlob = make_shared<string>(boost::any_cast<string>(m["PublicKeyBlob"]));
    }
    if (m.find("WrappingAlgorithm") != m.end() && !m["WrappingAlgorithm"].empty()) {
      wrappingAlgorithm = make_shared<string>(boost::any_cast<string>(m["WrappingAlgorithm"]));
    }
    if (m.find("WrappingKeySpec") != m.end() && !m["WrappingKeySpec"].empty()) {
      wrappingKeySpec = make_shared<string>(boost::any_cast<string>(m["WrappingKeySpec"]));
    }
  }


  virtual ~GenerateAndExportDataKeyShrinkRequest() = default;
};
class GenerateAndExportDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> exportedDataKey{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  GenerateAndExportDataKeyResponseBody() {}

  explicit GenerateAndExportDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateAndExportDataKeyResponseBody() = default;
};
class GenerateAndExportDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateAndExportDataKeyResponseBody> body{};

  GenerateAndExportDataKeyResponse() {}

  explicit GenerateAndExportDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};

  GenerateDataKeyRequest() {}

  explicit GenerateDataKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
  }


  virtual ~GenerateDataKeyRequest() = default;
};
class GenerateDataKeyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};

  GenerateDataKeyShrinkRequest() {}

  explicit GenerateDataKeyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
  }


  virtual ~GenerateDataKeyShrinkRequest() = default;
};
class GenerateDataKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> requestId{};

  GenerateDataKeyResponseBody() {}

  explicit GenerateDataKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateDataKeyResponseBody() = default;
};
class GenerateDataKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateDataKeyResponseBody> body{};

  GenerateDataKeyResponse() {}

  explicit GenerateDataKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> encryptionContext{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};

  GenerateDataKeyWithoutPlaintextRequest() {}

  explicit GenerateDataKeyWithoutPlaintextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContext) {
      res["EncryptionContext"] = boost::any(*encryptionContext);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextRequest() = default;
};
class GenerateDataKeyWithoutPlaintextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptionContextShrink{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keySpec{};
  shared_ptr<long> numberOfBytes{};

  GenerateDataKeyWithoutPlaintextShrinkRequest() {}

  explicit GenerateDataKeyWithoutPlaintextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionContextShrink) {
      res["EncryptionContext"] = boost::any(*encryptionContextShrink);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keySpec) {
      res["KeySpec"] = boost::any(*keySpec);
    }
    if (numberOfBytes) {
      res["NumberOfBytes"] = boost::any(*numberOfBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionContext") != m.end() && !m["EncryptionContext"].empty()) {
      encryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["EncryptionContext"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeySpec") != m.end() && !m["KeySpec"].empty()) {
      keySpec = make_shared<string>(boost::any_cast<string>(m["KeySpec"]));
    }
    if (m.find("NumberOfBytes") != m.end() && !m["NumberOfBytes"].empty()) {
      numberOfBytes = make_shared<long>(boost::any_cast<long>(m["NumberOfBytes"]));
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextShrinkRequest() = default;
};
class GenerateDataKeyWithoutPlaintextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  GenerateDataKeyWithoutPlaintextResponseBody() {}

  explicit GenerateDataKeyWithoutPlaintextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateDataKeyWithoutPlaintextResponseBody() = default;
};
class GenerateDataKeyWithoutPlaintextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateDataKeyWithoutPlaintextResponseBody> body{};

  GenerateDataKeyWithoutPlaintextResponse() {}

  explicit GenerateDataKeyWithoutPlaintextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> csr{};
  shared_ptr<string> requestId{};

  GetCertificateResponseBody() {}

  explicit GetCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCertificateResponseBody() = default;
};
class GetCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCertificateResponseBody> body{};

  GetCertificateResponse() {}

  explicit GetCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetCertificateResponse() = default;
};
class GetClientKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientKeyId{};

  GetClientKeyRequest() {}

  explicit GetClientKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientKeyId) {
      res["ClientKeyId"] = boost::any(*clientKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientKeyId") != m.end() && !m["ClientKeyId"].empty()) {
      clientKeyId = make_shared<string>(boost::any_cast<string>(m["ClientKeyId"]));
    }
  }


  virtual ~GetClientKeyRequest() = default;
};
class GetClientKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aapName{};
  shared_ptr<string> clientKeyId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> keyAlgorithm{};
  shared_ptr<string> keyOrigin{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> publicKeyData{};
  shared_ptr<string> requestId{};

  GetClientKeyResponseBody() {}

  explicit GetClientKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aapName) {
      res["AapName"] = boost::any(*aapName);
    }
    if (clientKeyId) {
      res["ClientKeyId"] = boost::any(*clientKeyId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (keyAlgorithm) {
      res["KeyAlgorithm"] = boost::any(*keyAlgorithm);
    }
    if (keyOrigin) {
      res["KeyOrigin"] = boost::any(*keyOrigin);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (publicKeyData) {
      res["PublicKeyData"] = boost::any(*publicKeyData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AapName") != m.end() && !m["AapName"].empty()) {
      aapName = make_shared<string>(boost::any_cast<string>(m["AapName"]));
    }
    if (m.find("ClientKeyId") != m.end() && !m["ClientKeyId"].empty()) {
      clientKeyId = make_shared<string>(boost::any_cast<string>(m["ClientKeyId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("KeyAlgorithm") != m.end() && !m["KeyAlgorithm"].empty()) {
      keyAlgorithm = make_shared<string>(boost::any_cast<string>(m["KeyAlgorithm"]));
    }
    if (m.find("KeyOrigin") != m.end() && !m["KeyOrigin"].empty()) {
      keyOrigin = make_shared<string>(boost::any_cast<string>(m["KeyOrigin"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("PublicKeyData") != m.end() && !m["PublicKeyData"].empty()) {
      publicKeyData = make_shared<string>(boost::any_cast<string>(m["PublicKeyData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetClientKeyResponseBody() = default;
};
class GetClientKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClientKeyResponseBody> body{};

  GetClientKeyResponse() {}

  explicit GetClientKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClientKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClientKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GetClientKeyResponse() = default;
};
class GetKmsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> kmsInstanceId{};

  GetKmsInstanceRequest() {}

  explicit GetKmsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsInstanceId) {
      res["KmsInstanceId"] = boost::any(*kmsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KmsInstanceId") != m.end() && !m["KmsInstanceId"].empty()) {
      kmsInstanceId = make_shared<string>(boost::any_cast<string>(m["KmsInstanceId"]));
    }
  }


  virtual ~GetKmsInstanceRequest() = default;
};
class GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcOwnerId{};

  GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc() {}

  explicit GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcOwnerId) {
      res["VpcOwnerId"] = boost::any(*vpcOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcOwnerId") != m.end() && !m["VpcOwnerId"].empty()) {
      vpcOwnerId = make_shared<string>(boost::any_cast<string>(m["VpcOwnerId"]));
    }
  }


  virtual ~GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc() = default;
};
class GetKmsInstanceResponseBodyKmsInstanceBindVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc>> bindVpc{};

  GetKmsInstanceResponseBodyKmsInstanceBindVpcs() {}

  explicit GetKmsInstanceResponseBodyKmsInstanceBindVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpc) {
      vector<boost::any> temp1;
      for(auto item1:*bindVpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BindVpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpc") != m.end() && !m["BindVpc"].empty()) {
      if (typeid(vector<boost::any>) == m["BindVpc"].type()) {
        vector<GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BindVpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindVpc = make_shared<vector<GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc>>(expect1);
      }
    }
  }


  virtual ~GetKmsInstanceResponseBodyKmsInstanceBindVpcs() = default;
};
class GetKmsInstanceResponseBodyKmsInstance : public Darabonba::Model {
public:
  shared_ptr<GetKmsInstanceResponseBodyKmsInstanceBindVpcs> bindVpcs{};
  shared_ptr<string> caCertificateChainPem{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> keyNum{};
  shared_ptr<string> secretNum{};
  shared_ptr<long> spec{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> vpcNum{};
  shared_ptr<string> vswitchIds{};
  shared_ptr<string> zoneIds{};

  GetKmsInstanceResponseBodyKmsInstance() {}

  explicit GetKmsInstanceResponseBodyKmsInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpcs) {
      res["BindVpcs"] = bindVpcs ? boost::any(bindVpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (caCertificateChainPem) {
      res["CaCertificateChainPem"] = boost::any(*caCertificateChainPem);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (keyNum) {
      res["KeyNum"] = boost::any(*keyNum);
    }
    if (secretNum) {
      res["SecretNum"] = boost::any(*secretNum);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcNum) {
      res["VpcNum"] = boost::any(*vpcNum);
    }
    if (vswitchIds) {
      res["VswitchIds"] = boost::any(*vswitchIds);
    }
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpcs") != m.end() && !m["BindVpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["BindVpcs"].type()) {
        GetKmsInstanceResponseBodyKmsInstanceBindVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BindVpcs"]));
        bindVpcs = make_shared<GetKmsInstanceResponseBodyKmsInstanceBindVpcs>(model1);
      }
    }
    if (m.find("CaCertificateChainPem") != m.end() && !m["CaCertificateChainPem"].empty()) {
      caCertificateChainPem = make_shared<string>(boost::any_cast<string>(m["CaCertificateChainPem"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("KeyNum") != m.end() && !m["KeyNum"].empty()) {
      keyNum = make_shared<long>(boost::any_cast<long>(m["KeyNum"]));
    }
    if (m.find("SecretNum") != m.end() && !m["SecretNum"].empty()) {
      secretNum = make_shared<string>(boost::any_cast<string>(m["SecretNum"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<long>(boost::any_cast<long>(m["Spec"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcNum") != m.end() && !m["VpcNum"].empty()) {
      vpcNum = make_shared<long>(boost::any_cast<long>(m["VpcNum"]));
    }
    if (m.find("VswitchIds") != m.end() && !m["VswitchIds"].empty()) {
      vswitchIds = make_shared<string>(boost::any_cast<string>(m["VswitchIds"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      zoneIds = make_shared<string>(boost::any_cast<string>(m["ZoneIds"]));
    }
  }


  virtual ~GetKmsInstanceResponseBodyKmsInstance() = default;
};
class GetKmsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetKmsInstanceResponseBodyKmsInstance> kmsInstance{};
  shared_ptr<string> requestId{};

  GetKmsInstanceResponseBody() {}

  explicit GetKmsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsInstance) {
      res["KmsInstance"] = kmsInstance ? boost::any(kmsInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KmsInstance") != m.end() && !m["KmsInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["KmsInstance"].type()) {
        GetKmsInstanceResponseBodyKmsInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KmsInstance"]));
        kmsInstance = make_shared<GetKmsInstanceResponseBodyKmsInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetKmsInstanceResponseBody() = default;
};
class GetKmsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKmsInstanceResponseBody> body{};

  GetKmsInstanceResponse() {}

  explicit GetKmsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKmsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKmsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetKmsInstanceResponse() = default;
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
  shared_ptr<string> importToken{};
  shared_ptr<string> keyId{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tokenExpireTime{};

  GetParametersForImportResponseBody() {}

  explicit GetParametersForImportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importToken) {
      res["ImportToken"] = boost::any(*importToken);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tokenExpireTime) {
      res["TokenExpireTime"] = boost::any(*tokenExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImportToken") != m.end() && !m["ImportToken"].empty()) {
      importToken = make_shared<string>(boost::any_cast<string>(m["ImportToken"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TokenExpireTime") != m.end() && !m["TokenExpireTime"].empty()) {
      tokenExpireTime = make_shared<string>(boost::any_cast<string>(m["TokenExpireTime"]));
    }
  }


  virtual ~GetParametersForImportResponseBody() = default;
};
class GetParametersForImportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParametersForImportResponseBody> body{};

  GetParametersForImportResponse() {}

  explicit GetParametersForImportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> requestId{};

  GetPublicKeyResponseBody() {}

  explicit GetPublicKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPublicKeyResponseBody() = default;
};
class GetPublicKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicKeyResponseBody> body{};

  GetPublicKeyResponse() {}

  explicit GetPublicKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> excludeCharacters{};
  shared_ptr<string> excludeLowercase{};
  shared_ptr<string> excludeNumbers{};
  shared_ptr<string> excludePunctuation{};
  shared_ptr<string> excludeUppercase{};
  shared_ptr<string> passwordLength{};
  shared_ptr<string> requireEachIncludedType{};

  GetRandomPasswordRequest() {}

  explicit GetRandomPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeCharacters) {
      res["ExcludeCharacters"] = boost::any(*excludeCharacters);
    }
    if (excludeLowercase) {
      res["ExcludeLowercase"] = boost::any(*excludeLowercase);
    }
    if (excludeNumbers) {
      res["ExcludeNumbers"] = boost::any(*excludeNumbers);
    }
    if (excludePunctuation) {
      res["ExcludePunctuation"] = boost::any(*excludePunctuation);
    }
    if (excludeUppercase) {
      res["ExcludeUppercase"] = boost::any(*excludeUppercase);
    }
    if (passwordLength) {
      res["PasswordLength"] = boost::any(*passwordLength);
    }
    if (requireEachIncludedType) {
      res["RequireEachIncludedType"] = boost::any(*requireEachIncludedType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeCharacters") != m.end() && !m["ExcludeCharacters"].empty()) {
      excludeCharacters = make_shared<string>(boost::any_cast<string>(m["ExcludeCharacters"]));
    }
    if (m.find("ExcludeLowercase") != m.end() && !m["ExcludeLowercase"].empty()) {
      excludeLowercase = make_shared<string>(boost::any_cast<string>(m["ExcludeLowercase"]));
    }
    if (m.find("ExcludeNumbers") != m.end() && !m["ExcludeNumbers"].empty()) {
      excludeNumbers = make_shared<string>(boost::any_cast<string>(m["ExcludeNumbers"]));
    }
    if (m.find("ExcludePunctuation") != m.end() && !m["ExcludePunctuation"].empty()) {
      excludePunctuation = make_shared<string>(boost::any_cast<string>(m["ExcludePunctuation"]));
    }
    if (m.find("ExcludeUppercase") != m.end() && !m["ExcludeUppercase"].empty()) {
      excludeUppercase = make_shared<string>(boost::any_cast<string>(m["ExcludeUppercase"]));
    }
    if (m.find("PasswordLength") != m.end() && !m["PasswordLength"].empty()) {
      passwordLength = make_shared<string>(boost::any_cast<string>(m["PasswordLength"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetRandomPasswordResponseBody> body{};

  GetRandomPasswordResponse() {}

  explicit GetRandomPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> fetchExtendedConfig{};
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> versionStage{};

  GetSecretValueRequest() {}

  explicit GetSecretValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchExtendedConfig) {
      res["FetchExtendedConfig"] = boost::any(*fetchExtendedConfig);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchExtendedConfig") != m.end() && !m["FetchExtendedConfig"].empty()) {
      fetchExtendedConfig = make_shared<bool>(boost::any_cast<bool>(m["FetchExtendedConfig"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      versionStage = make_shared<string>(boost::any_cast<string>(m["VersionStage"]));
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
  shared_ptr<string> automaticRotation{};
  shared_ptr<string> createTime{};
  shared_ptr<string> extendedConfig{};
  shared_ptr<string> lastRotationDate{};
  shared_ptr<string> nextRotationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<string> versionId{};
  shared_ptr<GetSecretValueResponseBodyVersionStages> versionStages{};

  GetSecretValueResponseBody() {}

  explicit GetSecretValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (automaticRotation) {
      res["AutomaticRotation"] = boost::any(*automaticRotation);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extendedConfig) {
      res["ExtendedConfig"] = boost::any(*extendedConfig);
    }
    if (lastRotationDate) {
      res["LastRotationDate"] = boost::any(*lastRotationDate);
    }
    if (nextRotationDate) {
      res["NextRotationDate"] = boost::any(*nextRotationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
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
    if (m.find("AutomaticRotation") != m.end() && !m["AutomaticRotation"].empty()) {
      automaticRotation = make_shared<string>(boost::any_cast<string>(m["AutomaticRotation"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      extendedConfig = make_shared<string>(boost::any_cast<string>(m["ExtendedConfig"]));
    }
    if (m.find("LastRotationDate") != m.end() && !m["LastRotationDate"].empty()) {
      lastRotationDate = make_shared<string>(boost::any_cast<string>(m["LastRotationDate"]));
    }
    if (m.find("NextRotationDate") != m.end() && !m["NextRotationDate"].empty()) {
      nextRotationDate = make_shared<string>(boost::any_cast<string>(m["NextRotationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionStages") != m.end() && !m["VersionStages"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionStages"].type()) {
        GetSecretValueResponseBodyVersionStages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionStages"]));
        versionStages = make_shared<GetSecretValueResponseBodyVersionStages>(model1);
      }
    }
  }


  virtual ~GetSecretValueResponseBody() = default;
};
class GetSecretValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretValueResponseBody> body{};

  GetSecretValueResponse() {}

  explicit GetSecretValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretValueResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretValueResponse() = default;
};
class ImportKeyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptedKeyMaterial{};
  shared_ptr<string> importToken{};
  shared_ptr<string> keyId{};
  shared_ptr<long> keyMaterialExpireUnix{};

  ImportKeyMaterialRequest() {}

  explicit ImportKeyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedKeyMaterial) {
      res["EncryptedKeyMaterial"] = boost::any(*encryptedKeyMaterial);
    }
    if (importToken) {
      res["ImportToken"] = boost::any(*importToken);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (keyMaterialExpireUnix) {
      res["KeyMaterialExpireUnix"] = boost::any(*keyMaterialExpireUnix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedKeyMaterial") != m.end() && !m["EncryptedKeyMaterial"].empty()) {
      encryptedKeyMaterial = make_shared<string>(boost::any_cast<string>(m["EncryptedKeyMaterial"]));
    }
    if (m.find("ImportToken") != m.end() && !m["ImportToken"].empty()) {
      importToken = make_shared<string>(boost::any_cast<string>(m["ImportToken"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ImportKeyMaterialResponseBody> body{};

  ImportKeyMaterialResponse() {}

  explicit ImportKeyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> aliasName{};
  shared_ptr<string> keyId{};

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
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasArn") != m.end() && !m["AliasArn"].empty()) {
      aliasArn = make_shared<string>(boost::any_cast<string>(m["AliasArn"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<ListAliasesResponseBodyAliases> aliases{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAliasesResponseBody() {}

  explicit ListAliasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliases) {
      res["Aliases"] = aliases ? boost::any(aliases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Aliases") != m.end() && !m["Aliases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Aliases"].type()) {
        ListAliasesResponseBodyAliases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Aliases"]));
        aliases = make_shared<ListAliasesResponseBodyAliases>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListAliasesResponseBody() = default;
};
class ListAliasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAliasesResponseBody> body{};

  ListAliasesResponse() {}

  explicit ListAliasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> aliasName{};
  shared_ptr<string> keyId{};

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
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasArn") != m.end() && !m["AliasArn"].empty()) {
      aliasArn = make_shared<string>(boost::any_cast<string>(m["AliasArn"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<ListAliasesByKeyIdResponseBodyAliases> aliases{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAliasesByKeyIdResponseBody() {}

  explicit ListAliasesByKeyIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliases) {
      res["Aliases"] = aliases ? boost::any(aliases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Aliases") != m.end() && !m["Aliases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Aliases"].type()) {
        ListAliasesByKeyIdResponseBodyAliases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Aliases"]));
        aliases = make_shared<ListAliasesByKeyIdResponseBodyAliases>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListAliasesByKeyIdResponseBody() = default;
};
class ListAliasesByKeyIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAliasesByKeyIdResponseBody> body{};

  ListAliasesByKeyIdResponse() {}

  explicit ListAliasesByKeyIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAliasesByKeyIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliasesByKeyIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAliasesByKeyIdResponse() = default;
};
class ListApplicationAccessPointsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListApplicationAccessPointsRequest() {}

  explicit ListApplicationAccessPointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListApplicationAccessPointsRequest() = default;
};
class ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint : public Darabonba::Model {
public:
  shared_ptr<string> authenticationMethod{};
  shared_ptr<string> name{};

  ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint() {}

  explicit ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationMethod) {
      res["AuthenticationMethod"] = boost::any(*authenticationMethod);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationMethod") != m.end() && !m["AuthenticationMethod"].empty()) {
      authenticationMethod = make_shared<string>(boost::any_cast<string>(m["AuthenticationMethod"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint() = default;
};
class ListApplicationAccessPointsResponseBodyApplicationAccessPoints : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint>> applicationAccessPoint{};

  ListApplicationAccessPointsResponseBodyApplicationAccessPoints() {}

  explicit ListApplicationAccessPointsResponseBodyApplicationAccessPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessPoint) {
      vector<boost::any> temp1;
      for(auto item1:*applicationAccessPoint){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationAccessPoint"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationAccessPoint") != m.end() && !m["ApplicationAccessPoint"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationAccessPoint"].type()) {
        vector<ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationAccessPoint"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationAccessPoint = make_shared<vector<ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint>>(expect1);
      }
    }
  }


  virtual ~ListApplicationAccessPointsResponseBodyApplicationAccessPoints() = default;
};
class ListApplicationAccessPointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListApplicationAccessPointsResponseBodyApplicationAccessPoints> applicationAccessPoints{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicationAccessPointsResponseBody() {}

  explicit ListApplicationAccessPointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessPoints) {
      res["ApplicationAccessPoints"] = applicationAccessPoints ? boost::any(applicationAccessPoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("ApplicationAccessPoints") != m.end() && !m["ApplicationAccessPoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationAccessPoints"].type()) {
        ListApplicationAccessPointsResponseBodyApplicationAccessPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationAccessPoints"]));
        applicationAccessPoints = make_shared<ListApplicationAccessPointsResponseBodyApplicationAccessPoints>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListApplicationAccessPointsResponseBody() = default;
};
class ListApplicationAccessPointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationAccessPointsResponseBody> body{};

  ListApplicationAccessPointsResponse() {}

  explicit ListApplicationAccessPointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationAccessPointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationAccessPointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationAccessPointsResponse() = default;
};
class ListClientKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> aapName{};

  ListClientKeysRequest() {}

  explicit ListClientKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aapName) {
      res["AapName"] = boost::any(*aapName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AapName") != m.end() && !m["AapName"].empty()) {
      aapName = make_shared<string>(boost::any_cast<string>(m["AapName"]));
    }
  }


  virtual ~ListClientKeysRequest() = default;
};
class ListClientKeysResponseBodyClientKeys : public Darabonba::Model {
public:
  shared_ptr<string> aapName{};
  shared_ptr<string> clientKeyId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> keyAlgorithm{};
  shared_ptr<string> keyOrigin{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> publicKeyData{};

  ListClientKeysResponseBodyClientKeys() {}

  explicit ListClientKeysResponseBodyClientKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aapName) {
      res["AapName"] = boost::any(*aapName);
    }
    if (clientKeyId) {
      res["ClientKeyId"] = boost::any(*clientKeyId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (keyAlgorithm) {
      res["KeyAlgorithm"] = boost::any(*keyAlgorithm);
    }
    if (keyOrigin) {
      res["KeyOrigin"] = boost::any(*keyOrigin);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (publicKeyData) {
      res["PublicKeyData"] = boost::any(*publicKeyData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AapName") != m.end() && !m["AapName"].empty()) {
      aapName = make_shared<string>(boost::any_cast<string>(m["AapName"]));
    }
    if (m.find("ClientKeyId") != m.end() && !m["ClientKeyId"].empty()) {
      clientKeyId = make_shared<string>(boost::any_cast<string>(m["ClientKeyId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("KeyAlgorithm") != m.end() && !m["KeyAlgorithm"].empty()) {
      keyAlgorithm = make_shared<string>(boost::any_cast<string>(m["KeyAlgorithm"]));
    }
    if (m.find("KeyOrigin") != m.end() && !m["KeyOrigin"].empty()) {
      keyOrigin = make_shared<string>(boost::any_cast<string>(m["KeyOrigin"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("PublicKeyData") != m.end() && !m["PublicKeyData"].empty()) {
      publicKeyData = make_shared<string>(boost::any_cast<string>(m["PublicKeyData"]));
    }
  }


  virtual ~ListClientKeysResponseBodyClientKeys() = default;
};
class ListClientKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClientKeysResponseBodyClientKeys>> clientKeys{};
  shared_ptr<string> requestId{};

  ListClientKeysResponseBody() {}

  explicit ListClientKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientKeys) {
      vector<boost::any> temp1;
      for(auto item1:*clientKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClientKeys"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientKeys") != m.end() && !m["ClientKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["ClientKeys"].type()) {
        vector<ListClientKeysResponseBodyClientKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClientKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClientKeysResponseBodyClientKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clientKeys = make_shared<vector<ListClientKeysResponseBodyClientKeys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClientKeysResponseBody() = default;
};
class ListClientKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClientKeysResponseBody> body{};

  ListClientKeysResponse() {}

  explicit ListClientKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClientKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClientKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListClientKeysResponse() = default;
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
  shared_ptr<string> creationDate{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};

  ListKeyVersionsResponseBodyKeyVersionsKeyVersion() {}

  explicit ListKeyVersionsResponseBodyKeyVersionsKeyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
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
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("KeyVersionId") != m.end() && !m["KeyVersionId"].empty()) {
      keyVersionId = make_shared<string>(boost::any_cast<string>(m["KeyVersionId"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("KeyVersions") != m.end() && !m["KeyVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyVersions"].type()) {
        ListKeyVersionsResponseBodyKeyVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyVersions"]));
        keyVersions = make_shared<ListKeyVersionsResponseBodyKeyVersions>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListKeyVersionsResponseBody() = default;
};
class ListKeyVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListKeyVersionsResponseBody> body{};

  ListKeyVersionsResponse() {}

  explicit ListKeyVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeyVersionsResponse() = default;
};
class ListKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListKeysRequest() {}

  explicit ListKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      res["Filters"] = boost::any(*filters);
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
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
  shared_ptr<ListKeysResponseBodyKeys> keys{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListKeysResponseBody() {}

  explicit ListKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        ListKeysResponseBodyKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<ListKeysResponseBodyKeys>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListKeysResponseBody() = default;
};
class ListKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListKeysResponseBody> body{};

  ListKeysResponse() {}

  explicit ListKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListKeysResponse() = default;
};
class ListKmsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListKmsInstancesRequest() {}

  explicit ListKmsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListKmsInstancesRequest() = default;
};
class ListKmsInstancesResponseBodyKmsInstancesKmsInstance : public Darabonba::Model {
public:
  shared_ptr<string> kmsInstanceArn{};
  shared_ptr<string> kmsInstanceId{};

  ListKmsInstancesResponseBodyKmsInstancesKmsInstance() {}

  explicit ListKmsInstancesResponseBodyKmsInstancesKmsInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsInstanceArn) {
      res["KmsInstanceArn"] = boost::any(*kmsInstanceArn);
    }
    if (kmsInstanceId) {
      res["KmsInstanceId"] = boost::any(*kmsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KmsInstanceArn") != m.end() && !m["KmsInstanceArn"].empty()) {
      kmsInstanceArn = make_shared<string>(boost::any_cast<string>(m["KmsInstanceArn"]));
    }
    if (m.find("KmsInstanceId") != m.end() && !m["KmsInstanceId"].empty()) {
      kmsInstanceId = make_shared<string>(boost::any_cast<string>(m["KmsInstanceId"]));
    }
  }


  virtual ~ListKmsInstancesResponseBodyKmsInstancesKmsInstance() = default;
};
class ListKmsInstancesResponseBodyKmsInstances : public Darabonba::Model {
public:
  shared_ptr<vector<ListKmsInstancesResponseBodyKmsInstancesKmsInstance>> kmsInstance{};

  ListKmsInstancesResponseBodyKmsInstances() {}

  explicit ListKmsInstancesResponseBodyKmsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsInstance) {
      vector<boost::any> temp1;
      for(auto item1:*kmsInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KmsInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KmsInstance") != m.end() && !m["KmsInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["KmsInstance"].type()) {
        vector<ListKmsInstancesResponseBodyKmsInstancesKmsInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KmsInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListKmsInstancesResponseBodyKmsInstancesKmsInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kmsInstance = make_shared<vector<ListKmsInstancesResponseBodyKmsInstancesKmsInstance>>(expect1);
      }
    }
  }


  virtual ~ListKmsInstancesResponseBodyKmsInstances() = default;
};
class ListKmsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListKmsInstancesResponseBodyKmsInstances> kmsInstances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListKmsInstancesResponseBody() {}

  explicit ListKmsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsInstances) {
      res["KmsInstances"] = kmsInstances ? boost::any(kmsInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("KmsInstances") != m.end() && !m["KmsInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["KmsInstances"].type()) {
        ListKmsInstancesResponseBodyKmsInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KmsInstances"]));
        kmsInstances = make_shared<ListKmsInstancesResponseBodyKmsInstances>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListKmsInstancesResponseBody() = default;
};
class ListKmsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListKmsInstancesResponseBody> body{};

  ListKmsInstancesResponse() {}

  explicit ListKmsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListKmsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListKmsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListKmsInstancesResponse() = default;
};
class ListNetworkRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListNetworkRulesRequest() {}

  explicit ListNetworkRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNetworkRulesRequest() = default;
};
class ListNetworkRulesResponseBodyNetworkRulesNetworkRule : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNetworkRulesResponseBodyNetworkRulesNetworkRule() {}

  explicit ListNetworkRulesResponseBodyNetworkRulesNetworkRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNetworkRulesResponseBodyNetworkRulesNetworkRule() = default;
};
class ListNetworkRulesResponseBodyNetworkRules : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetworkRulesResponseBodyNetworkRulesNetworkRule>> networkRule{};

  ListNetworkRulesResponseBodyNetworkRules() {}

  explicit ListNetworkRulesResponseBodyNetworkRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkRule) {
      vector<boost::any> temp1;
      for(auto item1:*networkRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkRule") != m.end() && !m["NetworkRule"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkRule"].type()) {
        vector<ListNetworkRulesResponseBodyNetworkRulesNetworkRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkRulesResponseBodyNetworkRulesNetworkRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkRule = make_shared<vector<ListNetworkRulesResponseBodyNetworkRulesNetworkRule>>(expect1);
      }
    }
  }


  virtual ~ListNetworkRulesResponseBodyNetworkRules() = default;
};
class ListNetworkRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNetworkRulesResponseBodyNetworkRules> networkRules{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNetworkRulesResponseBody() {}

  explicit ListNetworkRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkRules) {
      res["NetworkRules"] = networkRules ? boost::any(networkRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("NetworkRules") != m.end() && !m["NetworkRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkRules"].type()) {
        ListNetworkRulesResponseBodyNetworkRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkRules"]));
        networkRules = make_shared<ListNetworkRulesResponseBodyNetworkRules>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListNetworkRulesResponseBody() = default;
};
class ListNetworkRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkRulesResponseBody> body{};

  ListNetworkRulesResponse() {}

  explicit ListNetworkRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkRulesResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListPoliciesResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesResponseBodyPolicies() {}

  explicit ListPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListPoliciesResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
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
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

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
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceTagsResponseBody> body{};

  ListResourceTagsResponse() {}

  explicit ListResourceTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceTagsResponse() = default;
};
class ListSecretVersionIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> includeDeprecated{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> secretName{};

  ListSecretVersionIdsRequest() {}

  explicit ListSecretVersionIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeDeprecated) {
      res["IncludeDeprecated"] = boost::any(*includeDeprecated);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeDeprecated") != m.end() && !m["IncludeDeprecated"].empty()) {
      includeDeprecated = make_shared<string>(boost::any_cast<string>(m["IncludeDeprecated"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListSecretVersionIdsResponseBodyVersionIds> versionIds{};

  ListSecretVersionIdsResponseBody() {}

  explicit ListSecretVersionIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (versionIds) {
      res["VersionIds"] = versionIds ? boost::any(versionIds->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecretVersionIdsResponseBody> body{};

  ListSecretVersionIdsResponse() {}

  explicit ListSecretVersionIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretVersionIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretVersionIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretVersionIdsResponse() = default;
};
class ListSecretsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fetchTags{};
  shared_ptr<string> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

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
    if (filters) {
      res["Filters"] = boost::any(*filters);
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
    if (m.find("FetchTags") != m.end() && !m["FetchTags"].empty()) {
      fetchTags = make_shared<string>(boost::any_cast<string>(m["FetchTags"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSecretsRequest() = default;
};
class ListSecretsResponseBodySecretListSecretTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListSecretsResponseBodySecretListSecretTagsTag() {}

  explicit ListSecretsResponseBodySecretListSecretTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
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
  shared_ptr<string> createTime{};
  shared_ptr<string> plannedDeleteTime{};
  shared_ptr<string> secretName{};
  shared_ptr<string> secretType{};
  shared_ptr<ListSecretsResponseBodySecretListSecretTags> tags{};
  shared_ptr<string> updateTime{};

  ListSecretsResponseBodySecretListSecret() {}

  explicit ListSecretsResponseBodySecretListSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (plannedDeleteTime) {
      res["PlannedDeleteTime"] = boost::any(*plannedDeleteTime);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (secretType) {
      res["SecretType"] = boost::any(*secretType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PlannedDeleteTime") != m.end() && !m["PlannedDeleteTime"].empty()) {
      plannedDeleteTime = make_shared<string>(boost::any_cast<string>(m["PlannedDeleteTime"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("SecretType") != m.end() && !m["SecretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["SecretType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListSecretsResponseBodySecretListSecretTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListSecretsResponseBodySecretListSecretTags>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSecretsResponseBodySecretList> secretList{};
  shared_ptr<long> totalCount{};

  ListSecretsResponseBody() {}

  explicit ListSecretsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretList) {
      res["SecretList"] = secretList ? boost::any(secretList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSecretsResponseBody() = default;
};
class ListSecretsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecretsResponseBody> body{};

  ListSecretsResponse() {}

  explicit ListSecretsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretsResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<OpenKmsServiceResponseBody> body{};

  OpenKmsServiceResponse() {}

  explicit OpenKmsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> secretData{};
  shared_ptr<string> secretDataType{};
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<string> versionStages{};

  PutSecretValueRequest() {}

  explicit PutSecretValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretData) {
      res["SecretData"] = boost::any(*secretData);
    }
    if (secretDataType) {
      res["SecretDataType"] = boost::any(*secretDataType);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionStages) {
      res["VersionStages"] = boost::any(*versionStages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretData") != m.end() && !m["SecretData"].empty()) {
      secretData = make_shared<string>(boost::any_cast<string>(m["SecretData"]));
    }
    if (m.find("SecretDataType") != m.end() && !m["SecretDataType"].empty()) {
      secretDataType = make_shared<string>(boost::any_cast<string>(m["SecretDataType"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};
  shared_ptr<PutSecretValueResponseBodyVersionStages> versionStages{};

  PutSecretValueResponseBody() {}

  explicit PutSecretValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<PutSecretValueResponseBody> body{};

  PutSecretValueResponse() {}

  explicit PutSecretValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> destinationEncryptionContext{};
  shared_ptr<string> destinationKeyId{};
  shared_ptr<string> sourceEncryptionAlgorithm{};
  shared_ptr<map<string, boost::any>> sourceEncryptionContext{};
  shared_ptr<string> sourceKeyId{};
  shared_ptr<string> sourceKeyVersionId{};

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
    if (destinationEncryptionContext) {
      res["DestinationEncryptionContext"] = boost::any(*destinationEncryptionContext);
    }
    if (destinationKeyId) {
      res["DestinationKeyId"] = boost::any(*destinationKeyId);
    }
    if (sourceEncryptionAlgorithm) {
      res["SourceEncryptionAlgorithm"] = boost::any(*sourceEncryptionAlgorithm);
    }
    if (sourceEncryptionContext) {
      res["SourceEncryptionContext"] = boost::any(*sourceEncryptionContext);
    }
    if (sourceKeyId) {
      res["SourceKeyId"] = boost::any(*sourceKeyId);
    }
    if (sourceKeyVersionId) {
      res["SourceKeyVersionId"] = boost::any(*sourceKeyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("DestinationEncryptionContext") != m.end() && !m["DestinationEncryptionContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DestinationEncryptionContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      destinationEncryptionContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DestinationKeyId") != m.end() && !m["DestinationKeyId"].empty()) {
      destinationKeyId = make_shared<string>(boost::any_cast<string>(m["DestinationKeyId"]));
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
    if (m.find("SourceKeyId") != m.end() && !m["SourceKeyId"].empty()) {
      sourceKeyId = make_shared<string>(boost::any_cast<string>(m["SourceKeyId"]));
    }
    if (m.find("SourceKeyVersionId") != m.end() && !m["SourceKeyVersionId"].empty()) {
      sourceKeyVersionId = make_shared<string>(boost::any_cast<string>(m["SourceKeyVersionId"]));
    }
  }


  virtual ~ReEncryptRequest() = default;
};
class ReEncryptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> destinationEncryptionContextShrink{};
  shared_ptr<string> destinationKeyId{};
  shared_ptr<string> sourceEncryptionAlgorithm{};
  shared_ptr<string> sourceEncryptionContextShrink{};
  shared_ptr<string> sourceKeyId{};
  shared_ptr<string> sourceKeyVersionId{};

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
    if (destinationEncryptionContextShrink) {
      res["DestinationEncryptionContext"] = boost::any(*destinationEncryptionContextShrink);
    }
    if (destinationKeyId) {
      res["DestinationKeyId"] = boost::any(*destinationKeyId);
    }
    if (sourceEncryptionAlgorithm) {
      res["SourceEncryptionAlgorithm"] = boost::any(*sourceEncryptionAlgorithm);
    }
    if (sourceEncryptionContextShrink) {
      res["SourceEncryptionContext"] = boost::any(*sourceEncryptionContextShrink);
    }
    if (sourceKeyId) {
      res["SourceKeyId"] = boost::any(*sourceKeyId);
    }
    if (sourceKeyVersionId) {
      res["SourceKeyVersionId"] = boost::any(*sourceKeyVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("DestinationEncryptionContext") != m.end() && !m["DestinationEncryptionContext"].empty()) {
      destinationEncryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["DestinationEncryptionContext"]));
    }
    if (m.find("DestinationKeyId") != m.end() && !m["DestinationKeyId"].empty()) {
      destinationKeyId = make_shared<string>(boost::any_cast<string>(m["DestinationKeyId"]));
    }
    if (m.find("SourceEncryptionAlgorithm") != m.end() && !m["SourceEncryptionAlgorithm"].empty()) {
      sourceEncryptionAlgorithm = make_shared<string>(boost::any_cast<string>(m["SourceEncryptionAlgorithm"]));
    }
    if (m.find("SourceEncryptionContext") != m.end() && !m["SourceEncryptionContext"].empty()) {
      sourceEncryptionContextShrink = make_shared<string>(boost::any_cast<string>(m["SourceEncryptionContext"]));
    }
    if (m.find("SourceKeyId") != m.end() && !m["SourceKeyId"].empty()) {
      sourceKeyId = make_shared<string>(boost::any_cast<string>(m["SourceKeyId"]));
    }
    if (m.find("SourceKeyVersionId") != m.end() && !m["SourceKeyVersionId"].empty()) {
      sourceKeyVersionId = make_shared<string>(boost::any_cast<string>(m["SourceKeyVersionId"]));
    }
  }


  virtual ~ReEncryptShrinkRequest() = default;
};
class ReEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> keyId{};
  shared_ptr<string> keyVersionId{};
  shared_ptr<string> requestId{};

  ReEncryptResponseBody() {}

  explicit ReEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReEncryptResponseBody() = default;
};
class ReEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReEncryptResponseBody> body{};

  ReEncryptResponse() {}

  explicit ReEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};

  RestoreSecretResponseBody() {}

  explicit RestoreSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~RestoreSecretResponseBody() = default;
};
class RestoreSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestoreSecretResponseBody> body{};

  RestoreSecretResponse() {}

  explicit RestoreSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> arn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> versionId{};

  RotateSecretResponseBody() {}

  explicit RotateSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~RotateSecretResponseBody() = default;
};
class RotateSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RotateSecretResponseBody> body{};

  RotateSecretResponse() {}

  explicit RotateSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ScheduleKeyDeletionResponseBody> body{};

  ScheduleKeyDeletionResponse() {}

  explicit ScheduleKeyDeletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScheduleKeyDeletionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScheduleKeyDeletionResponseBody>(model1);
      }
    }
  }


  virtual ~ScheduleKeyDeletionResponse() = default;
};
class SetDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionProtectionDescription{};
  shared_ptr<bool> enableDeletionProtection{};
  shared_ptr<string> protectedResourceArn{};

  SetDeletionProtectionRequest() {}

  explicit SetDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionProtectionDescription) {
      res["DeletionProtectionDescription"] = boost::any(*deletionProtectionDescription);
    }
    if (enableDeletionProtection) {
      res["EnableDeletionProtection"] = boost::any(*enableDeletionProtection);
    }
    if (protectedResourceArn) {
      res["ProtectedResourceArn"] = boost::any(*protectedResourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionProtectionDescription") != m.end() && !m["DeletionProtectionDescription"].empty()) {
      deletionProtectionDescription = make_shared<string>(boost::any_cast<string>(m["DeletionProtectionDescription"]));
    }
    if (m.find("EnableDeletionProtection") != m.end() && !m["EnableDeletionProtection"].empty()) {
      enableDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["EnableDeletionProtection"]));
    }
    if (m.find("ProtectedResourceArn") != m.end() && !m["ProtectedResourceArn"].empty()) {
      protectedResourceArn = make_shared<string>(boost::any_cast<string>(m["ProtectedResourceArn"]));
    }
  }


  virtual ~SetDeletionProtectionRequest() = default;
};
class SetDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDeletionProtectionResponseBody() {}

  explicit SetDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDeletionProtectionResponseBody() = default;
};
class SetDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeletionProtectionResponseBody> body{};

  SetDeletionProtectionResponse() {}

  explicit SetDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeletionProtectionResponse() = default;
};
class TagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> keyId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> tags{};

  TagResourceRequest() {}

  explicit TagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourceResponseBody> body{};

  TagResourceResponse() {}

  explicit TagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourceResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourceResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> keyId{};
  shared_ptr<string> secretName{};
  shared_ptr<string> tagKeys{};

  UntagResourceRequest() {}

  explicit UntagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeys = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourceResponseBody> body{};

  UntagResourceResponse() {}

  explicit UntagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourceResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
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


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> keyId{};

  UpdateAliasRequest() {}

  explicit UpdateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAliasResponseBody> body{};

  UpdateAliasResponse() {}

  explicit UpdateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAliasResponse() = default;
};
class UpdateApplicationAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policies{};

  UpdateApplicationAccessPointRequest() {}

  explicit UpdateApplicationAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policies) {
      res["Policies"] = boost::any(*policies);
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
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<string>(boost::any_cast<string>(m["Policies"]));
    }
  }


  virtual ~UpdateApplicationAccessPointRequest() = default;
};
class UpdateApplicationAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateApplicationAccessPointResponseBody() {}

  explicit UpdateApplicationAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateApplicationAccessPointResponseBody() = default;
};
class UpdateApplicationAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationAccessPointResponseBody> body{};

  UpdateApplicationAccessPointResponse() {}

  explicit UpdateApplicationAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationAccessPointResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCertificateStatusResponseBody> body{};

  UpdateCertificateStatusResponse() {}

  explicit UpdateCertificateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> description{};
  shared_ptr<string> keyId{};

  UpdateKeyDescriptionRequest() {}

  explicit UpdateKeyDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateKeyDescriptionResponseBody> body{};

  UpdateKeyDescriptionResponse() {}

  explicit UpdateKeyDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKeyDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKeyDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKeyDescriptionResponse() = default;
};
class UpdateKmsInstanceBindVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindVpcs{};
  shared_ptr<string> kmsInstanceId{};

  UpdateKmsInstanceBindVpcRequest() {}

  explicit UpdateKmsInstanceBindVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpcs) {
      res["BindVpcs"] = boost::any(*bindVpcs);
    }
    if (kmsInstanceId) {
      res["KmsInstanceId"] = boost::any(*kmsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpcs") != m.end() && !m["BindVpcs"].empty()) {
      bindVpcs = make_shared<string>(boost::any_cast<string>(m["BindVpcs"]));
    }
    if (m.find("KmsInstanceId") != m.end() && !m["KmsInstanceId"].empty()) {
      kmsInstanceId = make_shared<string>(boost::any_cast<string>(m["KmsInstanceId"]));
    }
  }


  virtual ~UpdateKmsInstanceBindVpcRequest() = default;
};
class UpdateKmsInstanceBindVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateKmsInstanceBindVpcResponseBody() {}

  explicit UpdateKmsInstanceBindVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateKmsInstanceBindVpcResponseBody() = default;
};
class UpdateKmsInstanceBindVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateKmsInstanceBindVpcResponseBody> body{};

  UpdateKmsInstanceBindVpcResponse() {}

  explicit UpdateKmsInstanceBindVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKmsInstanceBindVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKmsInstanceBindVpcResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKmsInstanceBindVpcResponse() = default;
};
class UpdateNetworkRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> sourcePrivateIp{};

  UpdateNetworkRuleRequest() {}

  explicit UpdateNetworkRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sourcePrivateIp) {
      res["SourcePrivateIp"] = boost::any(*sourcePrivateIp);
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
    if (m.find("SourcePrivateIp") != m.end() && !m["SourcePrivateIp"].empty()) {
      sourcePrivateIp = make_shared<string>(boost::any_cast<string>(m["SourcePrivateIp"]));
    }
  }


  virtual ~UpdateNetworkRuleRequest() = default;
};
class UpdateNetworkRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateNetworkRuleResponseBody() {}

  explicit UpdateNetworkRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNetworkRuleResponseBody() = default;
};
class UpdateNetworkRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNetworkRuleResponseBody> body{};

  UpdateNetworkRuleResponse() {}

  explicit UpdateNetworkRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNetworkRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNetworkRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNetworkRuleResponse() = default;
};
class UpdatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessControlRules{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> permissions{};
  shared_ptr<string> resources{};

  UpdatePolicyRequest() {}

  explicit UpdatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlRules) {
      res["AccessControlRules"] = boost::any(*accessControlRules);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlRules") != m.end() && !m["AccessControlRules"].empty()) {
      accessControlRules = make_shared<string>(boost::any_cast<string>(m["AccessControlRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissions = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~UpdatePolicyRequest() = default;
};
class UpdatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePolicyResponseBody() {}

  explicit UpdatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePolicyResponseBody() = default;
};
class UpdatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolicyResponseBody> body{};

  UpdatePolicyResponse() {}

  explicit UpdatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolicyResponse() = default;
};
class UpdateRotationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> keyId{};
  shared_ptr<string> rotationInterval{};

  UpdateRotationPolicyRequest() {}

  explicit UpdateRotationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRotationPolicyResponseBody> body{};

  UpdateRotationPolicyResponse() {}

  explicit UpdateRotationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRotationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRotationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRotationPolicyResponse() = default;
};
class UpdateSecretRequestExtendedConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> customData{};

  UpdateSecretRequestExtendedConfig() {}

  explicit UpdateSecretRequestExtendedConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customData) {
      res["CustomData"] = boost::any(*customData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomData") != m.end() && !m["CustomData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customData = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateSecretRequestExtendedConfig() = default;
};
class UpdateSecretRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateSecretRequestExtendedConfig> extendedConfig{};
  shared_ptr<string> description{};
  shared_ptr<string> secretName{};

  UpdateSecretRequest() {}

  explicit UpdateSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendedConfig) {
      res["ExtendedConfig"] = extendedConfig ? boost::any(extendedConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendedConfig"].type()) {
        UpdateSecretRequestExtendedConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendedConfig"]));
        extendedConfig = make_shared<UpdateSecretRequestExtendedConfig>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretRequest() = default;
};
class UpdateSecretShrinkRequestExtendedConfig : public Darabonba::Model {
public:
  shared_ptr<string> customData{};

  UpdateSecretShrinkRequestExtendedConfig() {}

  explicit UpdateSecretShrinkRequestExtendedConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customData) {
      res["CustomData"] = boost::any(*customData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomData") != m.end() && !m["CustomData"].empty()) {
      customData = make_shared<string>(boost::any_cast<string>(m["CustomData"]));
    }
  }


  virtual ~UpdateSecretShrinkRequestExtendedConfig() = default;
};
class UpdateSecretShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateSecretShrinkRequestExtendedConfig> extendedConfig{};
  shared_ptr<string> description{};
  shared_ptr<string> secretName{};

  UpdateSecretShrinkRequest() {}

  explicit UpdateSecretShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendedConfig) {
      res["ExtendedConfig"] = extendedConfig ? boost::any(extendedConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendedConfig") != m.end() && !m["ExtendedConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendedConfig"].type()) {
        UpdateSecretShrinkRequestExtendedConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendedConfig"]));
        extendedConfig = make_shared<UpdateSecretShrinkRequestExtendedConfig>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretShrinkRequest() = default;
};
class UpdateSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};

  UpdateSecretResponseBody() {}

  explicit UpdateSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretResponseBody() = default;
};
class UpdateSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSecretResponseBody> body{};

  UpdateSecretResponse() {}

  explicit UpdateSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecretResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecretResponse() = default;
};
class UpdateSecretRotationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAutomaticRotation{};
  shared_ptr<string> rotationInterval{};
  shared_ptr<string> secretName{};

  UpdateSecretRotationPolicyRequest() {}

  explicit UpdateSecretRotationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAutomaticRotation) {
      res["EnableAutomaticRotation"] = boost::any(*enableAutomaticRotation);
    }
    if (rotationInterval) {
      res["RotationInterval"] = boost::any(*rotationInterval);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAutomaticRotation") != m.end() && !m["EnableAutomaticRotation"].empty()) {
      enableAutomaticRotation = make_shared<bool>(boost::any_cast<bool>(m["EnableAutomaticRotation"]));
    }
    if (m.find("RotationInterval") != m.end() && !m["RotationInterval"].empty()) {
      rotationInterval = make_shared<string>(boost::any_cast<string>(m["RotationInterval"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretRotationPolicyRequest() = default;
};
class UpdateSecretRotationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};

  UpdateSecretRotationPolicyResponseBody() {}

  explicit UpdateSecretRotationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretRotationPolicyResponseBody() = default;
};
class UpdateSecretRotationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSecretRotationPolicyResponseBody> body{};

  UpdateSecretRotationPolicyResponse() {}

  explicit UpdateSecretRotationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> moveToVersion{};
  shared_ptr<string> removeFromVersion{};
  shared_ptr<string> secretName{};
  shared_ptr<string> versionStage{};

  UpdateSecretVersionStageRequest() {}

  explicit UpdateSecretVersionStageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moveToVersion) {
      res["MoveToVersion"] = boost::any(*moveToVersion);
    }
    if (removeFromVersion) {
      res["RemoveFromVersion"] = boost::any(*removeFromVersion);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    if (versionStage) {
      res["VersionStage"] = boost::any(*versionStage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MoveToVersion") != m.end() && !m["MoveToVersion"].empty()) {
      moveToVersion = make_shared<string>(boost::any_cast<string>(m["MoveToVersion"]));
    }
    if (m.find("RemoveFromVersion") != m.end() && !m["RemoveFromVersion"].empty()) {
      removeFromVersion = make_shared<string>(boost::any_cast<string>(m["RemoveFromVersion"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
    if (m.find("VersionStage") != m.end() && !m["VersionStage"].empty()) {
      versionStage = make_shared<string>(boost::any_cast<string>(m["VersionStage"]));
    }
  }


  virtual ~UpdateSecretVersionStageRequest() = default;
};
class UpdateSecretVersionStageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> secretName{};

  UpdateSecretVersionStageResponseBody() {}

  explicit UpdateSecretVersionStageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretName) {
      res["SecretName"] = boost::any(*secretName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretName") != m.end() && !m["SecretName"].empty()) {
      secretName = make_shared<string>(boost::any_cast<string>(m["SecretName"]));
    }
  }


  virtual ~UpdateSecretVersionStageResponseBody() = default;
};
class UpdateSecretVersionStageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSecretVersionStageResponseBody> body{};

  UpdateSecretVersionStageResponse() {}

  explicit UpdateSecretVersionStageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> certificateId{};

  UploadCertificateRequest() {}

  explicit UploadCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UploadCertificateResponseBody> body{};

  UploadCertificateResponse() {}

  explicit UploadCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  ConnectKmsInstanceResponse connectKmsInstanceWithOptions(shared_ptr<ConnectKmsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConnectKmsInstanceResponse connectKmsInstance(shared_ptr<ConnectKmsInstanceRequest> request);
  CreateAliasResponse createAliasWithOptions(shared_ptr<CreateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAliasResponse createAlias(shared_ptr<CreateAliasRequest> request);
  CreateApplicationAccessPointResponse createApplicationAccessPointWithOptions(shared_ptr<CreateApplicationAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationAccessPointResponse createApplicationAccessPoint(shared_ptr<CreateApplicationAccessPointRequest> request);
  CreateCertificateResponse createCertificateWithOptions(shared_ptr<CreateCertificateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateResponse createCertificate(shared_ptr<CreateCertificateRequest> request);
  CreateClientKeyResponse createClientKeyWithOptions(shared_ptr<CreateClientKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClientKeyResponse createClientKey(shared_ptr<CreateClientKeyRequest> request);
  CreateKeyResponse createKeyWithOptions(shared_ptr<CreateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyResponse createKey(shared_ptr<CreateKeyRequest> request);
  CreateKeyVersionResponse createKeyVersionWithOptions(shared_ptr<CreateKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyVersionResponse createKeyVersion(shared_ptr<CreateKeyVersionRequest> request);
  CreateNetworkRuleResponse createNetworkRuleWithOptions(shared_ptr<CreateNetworkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetworkRuleResponse createNetworkRule(shared_ptr<CreateNetworkRuleRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreateSecretResponse createSecretWithOptions(shared_ptr<CreateSecretRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecretResponse createSecret(shared_ptr<CreateSecretRequest> request);
  DecryptResponse decryptWithOptions(shared_ptr<DecryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecryptResponse decrypt(shared_ptr<DecryptRequest> request);
  DeleteAliasResponse deleteAliasWithOptions(shared_ptr<DeleteAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAliasResponse deleteAlias(shared_ptr<DeleteAliasRequest> request);
  DeleteApplicationAccessPointResponse deleteApplicationAccessPointWithOptions(shared_ptr<DeleteApplicationAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationAccessPointResponse deleteApplicationAccessPoint(shared_ptr<DeleteApplicationAccessPointRequest> request);
  DeleteCertificateResponse deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertificateResponse deleteCertificate(shared_ptr<DeleteCertificateRequest> request);
  DeleteClientKeyResponse deleteClientKeyWithOptions(shared_ptr<DeleteClientKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClientKeyResponse deleteClientKey(shared_ptr<DeleteClientKeyRequest> request);
  DeleteKeyMaterialResponse deleteKeyMaterialWithOptions(shared_ptr<DeleteKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeyMaterialResponse deleteKeyMaterial(shared_ptr<DeleteKeyMaterialRequest> request);
  DeleteNetworkRuleResponse deleteNetworkRuleWithOptions(shared_ptr<DeleteNetworkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNetworkRuleResponse deleteNetworkRule(shared_ptr<DeleteNetworkRuleRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeleteSecretResponse deleteSecretWithOptions(shared_ptr<DeleteSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretResponse deleteSecret(shared_ptr<DeleteSecretRequest> request);
  DescribeAccountKmsStatusResponse describeAccountKmsStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountKmsStatusResponse describeAccountKmsStatus();
  DescribeApplicationAccessPointResponse describeApplicationAccessPointWithOptions(shared_ptr<DescribeApplicationAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationAccessPointResponse describeApplicationAccessPoint(shared_ptr<DescribeApplicationAccessPointRequest> request);
  DescribeCertificateResponse describeCertificateWithOptions(shared_ptr<DescribeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificateResponse describeCertificate(shared_ptr<DescribeCertificateRequest> request);
  DescribeKeyResponse describeKeyWithOptions(shared_ptr<DescribeKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyResponse describeKey(shared_ptr<DescribeKeyRequest> request);
  DescribeKeyVersionResponse describeKeyVersionWithOptions(shared_ptr<DescribeKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyVersionResponse describeKeyVersion(shared_ptr<DescribeKeyVersionRequest> request);
  DescribeNetworkRuleResponse describeNetworkRuleWithOptions(shared_ptr<DescribeNetworkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNetworkRuleResponse describeNetworkRule(shared_ptr<DescribeNetworkRuleRequest> request);
  DescribePolicyResponse describePolicyWithOptions(shared_ptr<DescribePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyResponse describePolicy(shared_ptr<DescribePolicyRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeSecretResponse describeSecretWithOptions(shared_ptr<DescribeSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecretResponse describeSecret(shared_ptr<DescribeSecretRequest> request);
  DisableKeyResponse disableKeyWithOptions(shared_ptr<DisableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableKeyResponse disableKey(shared_ptr<DisableKeyRequest> request);
  EnableKeyResponse enableKeyWithOptions(shared_ptr<EnableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableKeyResponse enableKey(shared_ptr<EnableKeyRequest> request);
  EncryptResponse encryptWithOptions(shared_ptr<EncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncryptResponse encrypt(shared_ptr<EncryptRequest> request);
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
  GetClientKeyResponse getClientKeyWithOptions(shared_ptr<GetClientKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClientKeyResponse getClientKey(shared_ptr<GetClientKeyRequest> request);
  GetKmsInstanceResponse getKmsInstanceWithOptions(shared_ptr<GetKmsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKmsInstanceResponse getKmsInstance(shared_ptr<GetKmsInstanceRequest> request);
  GetParametersForImportResponse getParametersForImportWithOptions(shared_ptr<GetParametersForImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParametersForImportResponse getParametersForImport(shared_ptr<GetParametersForImportRequest> request);
  GetPublicKeyResponse getPublicKeyWithOptions(shared_ptr<GetPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicKeyResponse getPublicKey(shared_ptr<GetPublicKeyRequest> request);
  GetRandomPasswordResponse getRandomPasswordWithOptions(shared_ptr<GetRandomPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRandomPasswordResponse getRandomPassword(shared_ptr<GetRandomPasswordRequest> request);
  GetSecretValueResponse getSecretValueWithOptions(shared_ptr<GetSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretValueResponse getSecretValue(shared_ptr<GetSecretValueRequest> request);
  ImportKeyMaterialResponse importKeyMaterialWithOptions(shared_ptr<ImportKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportKeyMaterialResponse importKeyMaterial(shared_ptr<ImportKeyMaterialRequest> request);
  ListAliasesResponse listAliasesWithOptions(shared_ptr<ListAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesResponse listAliases(shared_ptr<ListAliasesRequest> request);
  ListAliasesByKeyIdResponse listAliasesByKeyIdWithOptions(shared_ptr<ListAliasesByKeyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesByKeyIdResponse listAliasesByKeyId(shared_ptr<ListAliasesByKeyIdRequest> request);
  ListApplicationAccessPointsResponse listApplicationAccessPointsWithOptions(shared_ptr<ListApplicationAccessPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationAccessPointsResponse listApplicationAccessPoints(shared_ptr<ListApplicationAccessPointsRequest> request);
  ListClientKeysResponse listClientKeysWithOptions(shared_ptr<ListClientKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClientKeysResponse listClientKeys(shared_ptr<ListClientKeysRequest> request);
  ListKeyVersionsResponse listKeyVersionsWithOptions(shared_ptr<ListKeyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeyVersionsResponse listKeyVersions(shared_ptr<ListKeyVersionsRequest> request);
  ListKeysResponse listKeysWithOptions(shared_ptr<ListKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKeysResponse listKeys(shared_ptr<ListKeysRequest> request);
  ListKmsInstancesResponse listKmsInstancesWithOptions(shared_ptr<ListKmsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKmsInstancesResponse listKmsInstances(shared_ptr<ListKmsInstancesRequest> request);
  ListNetworkRulesResponse listNetworkRulesWithOptions(shared_ptr<ListNetworkRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkRulesResponse listNetworkRules(shared_ptr<ListNetworkRulesRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListResourceTagsResponse listResourceTagsWithOptions(shared_ptr<ListResourceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTagsResponse listResourceTags(shared_ptr<ListResourceTagsRequest> request);
  ListSecretVersionIdsResponse listSecretVersionIdsWithOptions(shared_ptr<ListSecretVersionIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretVersionIdsResponse listSecretVersionIds(shared_ptr<ListSecretVersionIdsRequest> request);
  ListSecretsResponse listSecretsWithOptions(shared_ptr<ListSecretsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretsResponse listSecrets(shared_ptr<ListSecretsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
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
  SetDeletionProtectionResponse setDeletionProtectionWithOptions(shared_ptr<SetDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeletionProtectionResponse setDeletionProtection(shared_ptr<SetDeletionProtectionRequest> request);
  TagResourceResponse tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourceResponse tagResource(shared_ptr<TagResourceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourceResponse untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourceResponse untagResource(shared_ptr<UntagResourceRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAliasResponse updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAliasResponse updateAlias(shared_ptr<UpdateAliasRequest> request);
  UpdateApplicationAccessPointResponse updateApplicationAccessPointWithOptions(shared_ptr<UpdateApplicationAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationAccessPointResponse updateApplicationAccessPoint(shared_ptr<UpdateApplicationAccessPointRequest> request);
  UpdateCertificateStatusResponse updateCertificateStatusWithOptions(shared_ptr<UpdateCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCertificateStatusResponse updateCertificateStatus(shared_ptr<UpdateCertificateStatusRequest> request);
  UpdateKeyDescriptionResponse updateKeyDescriptionWithOptions(shared_ptr<UpdateKeyDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKeyDescriptionResponse updateKeyDescription(shared_ptr<UpdateKeyDescriptionRequest> request);
  UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpcWithOptions(shared_ptr<UpdateKmsInstanceBindVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKmsInstanceBindVpcResponse updateKmsInstanceBindVpc(shared_ptr<UpdateKmsInstanceBindVpcRequest> request);
  UpdateNetworkRuleResponse updateNetworkRuleWithOptions(shared_ptr<UpdateNetworkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNetworkRuleResponse updateNetworkRule(shared_ptr<UpdateNetworkRuleRequest> request);
  UpdatePolicyResponse updatePolicyWithOptions(shared_ptr<UpdatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolicyResponse updatePolicy(shared_ptr<UpdatePolicyRequest> request);
  UpdateRotationPolicyResponse updateRotationPolicyWithOptions(shared_ptr<UpdateRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRotationPolicyResponse updateRotationPolicy(shared_ptr<UpdateRotationPolicyRequest> request);
  UpdateSecretResponse updateSecretWithOptions(shared_ptr<UpdateSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecretResponse updateSecret(shared_ptr<UpdateSecretRequest> request);
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
