// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADDRESS-PURIFICATION20191118_H_
#define ALIBABACLOUD_ADDRESS-PURIFICATION20191118_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Address-purification20191118 {
class CorrectAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  CorrectAddressRequest() {}

  explicit CorrectAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~CorrectAddressRequest() = default;
};
class CorrectAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CorrectAddressResponseBody() {}

  explicit CorrectAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CorrectAddressResponseBody() = default;
};
class CorrectAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CorrectAddressResponseBody> body{};

  CorrectAddressResponse() {}

  explicit CorrectAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CorrectAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CorrectAddressResponseBody>(model1);
      }
    }
  }


  virtual ~CorrectAddressResponse() = default;
};
class ExtractAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  ExtractAddressRequest() {}

  explicit ExtractAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ExtractAddressRequest() = default;
};
class ExtractAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExtractAddressResponseBody() {}

  explicit ExtractAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtractAddressResponseBody() = default;
};
class ExtractAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractAddressResponseBody> body{};

  ExtractAddressResponse() {}

  explicit ExtractAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractAddressResponse() = default;
};
class ExtractNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  ExtractNameRequest() {}

  explicit ExtractNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ExtractNameRequest() = default;
};
class ExtractNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExtractNameResponseBody() {}

  explicit ExtractNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtractNameResponseBody() = default;
};
class ExtractNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractNameResponseBody> body{};

  ExtractNameResponse() {}

  explicit ExtractNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractNameResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractNameResponse() = default;
};
class ExtractPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  ExtractPhoneRequest() {}

  explicit ExtractPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ExtractPhoneRequest() = default;
};
class ExtractPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExtractPhoneResponseBody() {}

  explicit ExtractPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtractPhoneResponseBody() = default;
};
class ExtractPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractPhoneResponseBody> body{};

  ExtractPhoneResponse() {}

  explicit ExtractPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractPhoneResponse() = default;
};
class GetAddressDivisionCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetAddressDivisionCodeRequest() {}

  explicit GetAddressDivisionCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetAddressDivisionCodeRequest() = default;
};
class GetAddressDivisionCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetAddressDivisionCodeResponseBody() {}

  explicit GetAddressDivisionCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAddressDivisionCodeResponseBody() = default;
};
class GetAddressDivisionCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressDivisionCodeResponseBody> body{};

  GetAddressDivisionCodeResponse() {}

  explicit GetAddressDivisionCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressDivisionCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressDivisionCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressDivisionCodeResponse() = default;
};
class GetAddressSimilarityRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetAddressSimilarityRequest() {}

  explicit GetAddressSimilarityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetAddressSimilarityRequest() = default;
};
class GetAddressSimilarityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetAddressSimilarityResponseBody() {}

  explicit GetAddressSimilarityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAddressSimilarityResponseBody() = default;
};
class GetAddressSimilarityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressSimilarityResponseBody> body{};

  GetAddressSimilarityResponse() {}

  explicit GetAddressSimilarityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressSimilarityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressSimilarityResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressSimilarityResponse() = default;
};
class GetZipcodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetZipcodeRequest() {}

  explicit GetZipcodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetZipcodeRequest() = default;
};
class GetZipcodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetZipcodeResponseBody() {}

  explicit GetZipcodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetZipcodeResponseBody() = default;
};
class GetZipcodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetZipcodeResponseBody> body{};

  GetZipcodeResponse() {}

  explicit GetZipcodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetZipcodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetZipcodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetZipcodeResponse() = default;
};
class StructureAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  StructureAddressRequest() {}

  explicit StructureAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~StructureAddressRequest() = default;
};
class StructureAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  StructureAddressResponseBody() {}

  explicit StructureAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StructureAddressResponseBody() = default;
};
class StructureAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StructureAddressResponseBody> body{};

  StructureAddressResponse() {}

  explicit StructureAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StructureAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StructureAddressResponseBody>(model1);
      }
    }
  }


  virtual ~StructureAddressResponse() = default;
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
  CorrectAddressResponse correctAddressWithOptions(shared_ptr<CorrectAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CorrectAddressResponse correctAddress(shared_ptr<CorrectAddressRequest> request);
  ExtractAddressResponse extractAddressWithOptions(shared_ptr<ExtractAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractAddressResponse extractAddress(shared_ptr<ExtractAddressRequest> request);
  ExtractNameResponse extractNameWithOptions(shared_ptr<ExtractNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractNameResponse extractName(shared_ptr<ExtractNameRequest> request);
  ExtractPhoneResponse extractPhoneWithOptions(shared_ptr<ExtractPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractPhoneResponse extractPhone(shared_ptr<ExtractPhoneRequest> request);
  GetAddressDivisionCodeResponse getAddressDivisionCodeWithOptions(shared_ptr<GetAddressDivisionCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressDivisionCodeResponse getAddressDivisionCode(shared_ptr<GetAddressDivisionCodeRequest> request);
  GetAddressSimilarityResponse getAddressSimilarityWithOptions(shared_ptr<GetAddressSimilarityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressSimilarityResponse getAddressSimilarity(shared_ptr<GetAddressSimilarityRequest> request);
  GetZipcodeResponse getZipcodeWithOptions(shared_ptr<GetZipcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetZipcodeResponse getZipcode(shared_ptr<GetZipcodeRequest> request);
  StructureAddressResponse structureAddressWithOptions(shared_ptr<StructureAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StructureAddressResponse structureAddress(shared_ptr<StructureAddressRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Address-purification20191118

#endif
