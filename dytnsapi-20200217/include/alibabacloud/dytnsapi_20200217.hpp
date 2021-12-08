// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYTNSAPI20200217_H_
#define ALIBABACLOUD_DYTNSAPI20200217_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dytnsapi20200217 {
class DescribeEmptyNumberDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phone{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeEmptyNumberDetectRequest() {}

  explicit DescribeEmptyNumberDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectRequest() = default;
};
class DescribeEmptyNumberDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> status{};

  DescribeEmptyNumberDetectResponseBodyData() {}

  explicit DescribeEmptyNumberDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectResponseBodyData() = default;
};
class DescribeEmptyNumberDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeEmptyNumberDetectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeEmptyNumberDetectResponseBody() {}

  explicit DescribeEmptyNumberDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeEmptyNumberDetectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEmptyNumberDetectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeEmptyNumberDetectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEmptyNumberDetectResponseBody() = default;
};
class DescribeEmptyNumberDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEmptyNumberDetectResponseBody> body{};

  DescribeEmptyNumberDetectResponse() {}

  explicit DescribeEmptyNumberDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEmptyNumberDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEmptyNumberDetectResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEmptyNumberDetectResponse() = default;
};
class DescribePhoneNumberAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> numberType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> rate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisRequest() {}

  explicit DescribePhoneNumberAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (numberType) {
      res["NumberType"] = boost::any(*numberType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NumberType") != m.end() && !m["NumberType"].empty()) {
      numberType = make_shared<long>(boost::any_cast<long>(m["NumberType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisRequest() = default;
};
class DescribePhoneNumberAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> number{};

  DescribePhoneNumberAnalysisResponseBodyData() {}

  explicit DescribePhoneNumberAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBodyData() = default;
};
class DescribePhoneNumberAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribePhoneNumberAnalysisResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisResponseBody() {}

  explicit DescribePhoneNumberAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribePhoneNumberAnalysisResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePhoneNumberAnalysisResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribePhoneNumberAnalysisResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBody() = default;
};
class DescribePhoneNumberAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePhoneNumberAnalysisResponseBody> body{};

  DescribePhoneNumberAnalysisResponse() {}

  explicit DescribePhoneNumberAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponse() = default;
};
class DescribePhoneNumberAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAttributeRequest() {}

  explicit DescribePhoneNumberAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeRequest() = default;
};
class DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() {}

  explicit DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() = default;
};
class DescribePhoneNumberAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute> phoneNumberAttribute{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAttributeResponseBody() {}

  explicit DescribePhoneNumberAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumberAttribute) {
      res["PhoneNumberAttribute"] = phoneNumberAttribute ? boost::any(phoneNumberAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumberAttribute") != m.end() && !m["PhoneNumberAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneNumberAttribute"].type()) {
        DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneNumberAttribute"]));
        phoneNumberAttribute = make_shared<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBody() = default;
};
class DescribePhoneNumberAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePhoneNumberAttributeResponseBody> body{};

  DescribePhoneNumberAttributeResponse() {}

  explicit DescribePhoneNumberAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAttributeResponse() = default;
};
class DescribePhoneNumberResaleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> since{};

  DescribePhoneNumberResaleRequest() {}

  explicit DescribePhoneNumberResaleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (since) {
      res["Since"] = boost::any(*since);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Since") != m.end() && !m["Since"].empty()) {
      since = make_shared<string>(boost::any_cast<string>(m["Since"]));
    }
  }


  virtual ~DescribePhoneNumberResaleRequest() = default;
};
class DescribePhoneNumberResaleResponseBodyTwiceTelVerify : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<long> verifyResult{};

  DescribePhoneNumberResaleResponseBodyTwiceTelVerify() {}

  explicit DescribePhoneNumberResaleResponseBodyTwiceTelVerify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<long>(boost::any_cast<long>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneNumberResaleResponseBodyTwiceTelVerify() = default;
};
class DescribePhoneNumberResaleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePhoneNumberResaleResponseBodyTwiceTelVerify> twiceTelVerify{};

  DescribePhoneNumberResaleResponseBody() {}

  explicit DescribePhoneNumberResaleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (twiceTelVerify) {
      res["TwiceTelVerify"] = twiceTelVerify ? boost::any(twiceTelVerify->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TwiceTelVerify") != m.end() && !m["TwiceTelVerify"].empty()) {
      if (typeid(map<string, boost::any>) == m["TwiceTelVerify"].type()) {
        DescribePhoneNumberResaleResponseBodyTwiceTelVerify model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TwiceTelVerify"]));
        twiceTelVerify = make_shared<DescribePhoneNumberResaleResponseBodyTwiceTelVerify>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberResaleResponseBody() = default;
};
class DescribePhoneNumberResaleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePhoneNumberResaleResponseBody> body{};

  DescribePhoneNumberResaleResponse() {}

  explicit DescribePhoneNumberResaleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberResaleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberResaleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberResaleResponse() = default;
};
class DescribePhoneNumberStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberStatusRequest() {}

  explicit DescribePhoneNumberStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberStatusRequest() = default;
};
class DescribePhoneNumberStatusResponseBodyPhoneStatus : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> serialId{};
  shared_ptr<string> status{};

  DescribePhoneNumberStatusResponseBodyPhoneStatus() {}

  explicit DescribePhoneNumberStatusResponseBodyPhoneStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (serialId) {
      res["SerialId"] = boost::any(*serialId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("SerialId") != m.end() && !m["SerialId"].empty()) {
      serialId = make_shared<string>(boost::any_cast<string>(m["SerialId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePhoneNumberStatusResponseBodyPhoneStatus() = default;
};
class DescribePhoneNumberStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePhoneNumberStatusResponseBodyPhoneStatus> phoneStatus{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberStatusResponseBody() {}

  explicit DescribePhoneNumberStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneStatus) {
      res["PhoneStatus"] = phoneStatus ? boost::any(phoneStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneStatus") != m.end() && !m["PhoneStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneStatus"].type()) {
        DescribePhoneNumberStatusResponseBodyPhoneStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneStatus"]));
        phoneStatus = make_shared<DescribePhoneNumberStatusResponseBodyPhoneStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberStatusResponseBody() = default;
};
class DescribePhoneNumberStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePhoneNumberStatusResponseBody> body{};

  DescribePhoneNumberStatusResponse() {}

  explicit DescribePhoneNumberStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberStatusResponse() = default;
};
class PvrCallbackFCUResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  PvrCallbackFCUResponse() {}

  explicit PvrCallbackFCUResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
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
  }


  virtual ~PvrCallbackFCUResponse() = default;
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
  DescribeEmptyNumberDetectResponse describeEmptyNumberDetectWithOptions(shared_ptr<DescribeEmptyNumberDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEmptyNumberDetectResponse describeEmptyNumberDetect(shared_ptr<DescribeEmptyNumberDetectRequest> request);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysisWithOptions(shared_ptr<DescribePhoneNumberAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysis(shared_ptr<DescribePhoneNumberAnalysisRequest> request);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttributeWithOptions(shared_ptr<DescribePhoneNumberAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttribute(shared_ptr<DescribePhoneNumberAttributeRequest> request);
  DescribePhoneNumberResaleResponse describePhoneNumberResaleWithOptions(shared_ptr<DescribePhoneNumberResaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberResaleResponse describePhoneNumberResale(shared_ptr<DescribePhoneNumberResaleRequest> request);
  DescribePhoneNumberStatusResponse describePhoneNumberStatusWithOptions(shared_ptr<DescribePhoneNumberStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberStatusResponse describePhoneNumberStatus(shared_ptr<DescribePhoneNumberStatusRequest> request);
  PvrCallbackFCUResponse pvrCallbackFCUWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PvrCallbackFCUResponse pvrCallbackFCU();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dytnsapi20200217

#endif
