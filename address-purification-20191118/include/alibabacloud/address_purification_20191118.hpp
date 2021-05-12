// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADDRESS-PURIFICATION20191118_H_
#define ALIBABACLOUD_ADDRESS-PURIFICATION20191118_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Address-purification20191118 {
class GetAddressDivisionCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressDivisionCodeRequest() {}

  explicit GetAddressDivisionCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressDivisionCodeRequest() = default;
};
class GetAddressDivisionCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressDivisionCodeResponseBody() {}

  explicit GetAddressDivisionCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class StructureAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  StructureAddressRequest() {}

  explicit StructureAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~StructureAddressRequest() = default;
};
class StructureAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  StructureAddressResponseBody() {}

  explicit StructureAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class ExtractExpressRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  ExtractExpressRequest() {}

  explicit ExtractExpressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ExtractExpressRequest() = default;
};
class ExtractExpressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  ExtractExpressResponseBody() {}

  explicit ExtractExpressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ExtractExpressResponseBody() = default;
};
class ExtractExpressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtractExpressResponseBody> body{};

  ExtractExpressResponse() {}

  explicit ExtractExpressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtractExpressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtractExpressResponseBody>(model1);
      }
    }
  }


  virtual ~ExtractExpressResponse() = default;
};
class ExtractNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  ExtractNameRequest() {}

  explicit ExtractNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ExtractNameRequest() = default;
};
class ExtractNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  ExtractNameResponseBody() {}

  explicit ExtractNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class GetAddressBlockMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressBlockMappingRequest() {}

  explicit GetAddressBlockMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressBlockMappingRequest() = default;
};
class GetAddressBlockMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressBlockMappingResponseBody() {}

  explicit GetAddressBlockMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetAddressBlockMappingResponseBody() = default;
};
class GetAddressBlockMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressBlockMappingResponseBody> body{};

  GetAddressBlockMappingResponse() {}

  explicit GetAddressBlockMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressBlockMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressBlockMappingResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressBlockMappingResponse() = default;
};
class GetAddressSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressSearchRequest() {}

  explicit GetAddressSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressSearchRequest() = default;
};
class GetAddressSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressSearchResponseBody() {}

  explicit GetAddressSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetAddressSearchResponseBody() = default;
};
class GetAddressSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressSearchResponseBody> body{};

  GetAddressSearchResponse() {}

  explicit GetAddressSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressSearchResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressSearchResponse() = default;
};
class PredictPOIRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  PredictPOIRequest() {}

  explicit PredictPOIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~PredictPOIRequest() = default;
};
class PredictPOIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  PredictPOIResponseBody() {}

  explicit PredictPOIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~PredictPOIResponseBody() = default;
};
class PredictPOIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PredictPOIResponseBody> body{};

  PredictPOIResponse() {}

  explicit PredictPOIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PredictPOIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredictPOIResponseBody>(model1);
      }
    }
  }


  virtual ~PredictPOIResponse() = default;
};
class ClassifyPOIRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  ClassifyPOIRequest() {}

  explicit ClassifyPOIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ClassifyPOIRequest() = default;
};
class ClassifyPOIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  ClassifyPOIResponseBody() {}

  explicit ClassifyPOIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ClassifyPOIResponseBody() = default;
};
class ClassifyPOIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClassifyPOIResponseBody> body{};

  ClassifyPOIResponse() {}

  explicit ClassifyPOIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyPOIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyPOIResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyPOIResponse() = default;
};
class CorrectAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  CorrectAddressRequest() {}

  explicit CorrectAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~CorrectAddressRequest() = default;
};
class CorrectAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  CorrectAddressResponseBody() {}

  explicit CorrectAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class GetZipcodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetZipcodeRequest() {}

  explicit GetZipcodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetZipcodeRequest() = default;
};
class GetZipcodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetZipcodeResponseBody() {}

  explicit GetZipcodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class CompleteAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  CompleteAddressRequest() {}

  explicit CompleteAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~CompleteAddressRequest() = default;
};
class CompleteAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  CompleteAddressResponseBody() {}

  explicit CompleteAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~CompleteAddressResponseBody() = default;
};
class CompleteAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompleteAddressResponseBody> body{};

  CompleteAddressResponse() {}

  explicit CompleteAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompleteAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompleteAddressResponseBody>(model1);
      }
    }
  }


  virtual ~CompleteAddressResponse() = default;
};
class GetAddressSimilarityRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressSimilarityRequest() {}

  explicit GetAddressSimilarityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressSimilarityRequest() = default;
};
class GetAddressSimilarityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressSimilarityResponseBody() {}

  explicit GetAddressSimilarityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class GetAddressGeocodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressGeocodeRequest() {}

  explicit GetAddressGeocodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressGeocodeRequest() = default;
};
class GetAddressGeocodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressGeocodeResponseBody() {}

  explicit GetAddressGeocodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetAddressGeocodeResponseBody() = default;
};
class GetAddressGeocodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressGeocodeResponseBody> body{};

  GetAddressGeocodeResponse() {}

  explicit GetAddressGeocodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressGeocodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressGeocodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressGeocodeResponse() = default;
};
class TransferCoordRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> srcCoord{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  TransferCoordRequest() {}

  explicit TransferCoordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (srcCoord) {
      res["SrcCoord"] = boost::any(*srcCoord);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("SrcCoord") != m.end() && !m["SrcCoord"].empty()) {
      srcCoord = make_shared<string>(boost::any_cast<string>(m["SrcCoord"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~TransferCoordRequest() = default;
};
class TransferCoordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  TransferCoordResponseBody() {}

  explicit TransferCoordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~TransferCoordResponseBody() = default;
};
class TransferCoordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferCoordResponseBody> body{};

  TransferCoordResponse() {}

  explicit TransferCoordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferCoordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferCoordResponseBody>(model1);
      }
    }
  }


  virtual ~TransferCoordResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<map<string, boost::any>> parameters{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> parametersShrink{};

  UpdateProjectShrinkRequest() {}

  explicit UpdateProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
  }


  virtual ~UpdateProjectShrinkRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class ExtractPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  ExtractPhoneRequest() {}

  explicit ExtractPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ExtractPhoneRequest() = default;
};
class ExtractPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  ExtractPhoneResponseBody() {}

  explicit ExtractPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class GetInputSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetInputSearchRequest() {}

  explicit GetInputSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetInputSearchRequest() = default;
};
class GetInputSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetInputSearchResponseBody() {}

  explicit GetInputSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetInputSearchResponseBody() = default;
};
class GetInputSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInputSearchResponseBody> body{};

  GetInputSearchResponse() {}

  explicit GetInputSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInputSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInputSearchResponseBody>(model1);
      }
    }
  }


  virtual ~GetInputSearchResponse() = default;
};
class GetAddressEvaluateRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  GetAddressEvaluateRequest() {}

  explicit GetAddressEvaluateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAddressEvaluateRequest() = default;
};
class GetAddressEvaluateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetAddressEvaluateResponseBody() {}

  explicit GetAddressEvaluateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetAddressEvaluateResponseBody() = default;
};
class GetAddressEvaluateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAddressEvaluateResponseBody> body{};

  GetAddressEvaluateResponse() {}

  explicit GetAddressEvaluateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddressEvaluateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddressEvaluateResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddressEvaluateResponse() = default;
};
class ExtractAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> appKey{};

  ExtractAddressRequest() {}

  explicit ExtractAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ExtractAddressRequest() = default;
};
class ExtractAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  ExtractAddressResponseBody() {}

  explicit ExtractAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  GetAddressDivisionCodeResponse getAddressDivisionCodeWithOptions(shared_ptr<GetAddressDivisionCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressDivisionCodeResponse getAddressDivisionCode(shared_ptr<GetAddressDivisionCodeRequest> request);
  StructureAddressResponse structureAddressWithOptions(shared_ptr<StructureAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StructureAddressResponse structureAddress(shared_ptr<StructureAddressRequest> request);
  ExtractExpressResponse extractExpressWithOptions(shared_ptr<ExtractExpressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractExpressResponse extractExpress(shared_ptr<ExtractExpressRequest> request);
  ExtractNameResponse extractNameWithOptions(shared_ptr<ExtractNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractNameResponse extractName(shared_ptr<ExtractNameRequest> request);
  GetAddressBlockMappingResponse getAddressBlockMappingWithOptions(shared_ptr<GetAddressBlockMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressBlockMappingResponse getAddressBlockMapping(shared_ptr<GetAddressBlockMappingRequest> request);
  GetAddressSearchResponse getAddressSearchWithOptions(shared_ptr<GetAddressSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressSearchResponse getAddressSearch(shared_ptr<GetAddressSearchRequest> request);
  PredictPOIResponse predictPOIWithOptions(shared_ptr<PredictPOIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredictPOIResponse predictPOI(shared_ptr<PredictPOIRequest> request);
  ClassifyPOIResponse classifyPOIWithOptions(shared_ptr<ClassifyPOIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyPOIResponse classifyPOI(shared_ptr<ClassifyPOIRequest> request);
  CorrectAddressResponse correctAddressWithOptions(shared_ptr<CorrectAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CorrectAddressResponse correctAddress(shared_ptr<CorrectAddressRequest> request);
  GetZipcodeResponse getZipcodeWithOptions(shared_ptr<GetZipcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetZipcodeResponse getZipcode(shared_ptr<GetZipcodeRequest> request);
  CompleteAddressResponse completeAddressWithOptions(shared_ptr<CompleteAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompleteAddressResponse completeAddress(shared_ptr<CompleteAddressRequest> request);
  GetAddressSimilarityResponse getAddressSimilarityWithOptions(shared_ptr<GetAddressSimilarityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressSimilarityResponse getAddressSimilarity(shared_ptr<GetAddressSimilarityRequest> request);
  GetAddressGeocodeResponse getAddressGeocodeWithOptions(shared_ptr<GetAddressGeocodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressGeocodeResponse getAddressGeocode(shared_ptr<GetAddressGeocodeRequest> request);
  TransferCoordResponse transferCoordWithOptions(shared_ptr<TransferCoordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferCoordResponse transferCoord(shared_ptr<TransferCoordRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  ExtractPhoneResponse extractPhoneWithOptions(shared_ptr<ExtractPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractPhoneResponse extractPhone(shared_ptr<ExtractPhoneRequest> request);
  GetInputSearchResponse getInputSearchWithOptions(shared_ptr<GetInputSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInputSearchResponse getInputSearch(shared_ptr<GetInputSearchRequest> request);
  GetAddressEvaluateResponse getAddressEvaluateWithOptions(shared_ptr<GetAddressEvaluateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddressEvaluateResponse getAddressEvaluate(shared_ptr<GetAddressEvaluateRequest> request);
  ExtractAddressResponse extractAddressWithOptions(shared_ptr<ExtractAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtractAddressResponse extractAddress(shared_ptr<ExtractAddressRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Address-purification20191118

#endif
