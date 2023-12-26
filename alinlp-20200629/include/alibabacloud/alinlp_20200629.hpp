// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALINLP20200629_H_
#define ALIBABACLOUD_ALINLP20200629_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alinlp20200629 {
class DataValue : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> status{};
  shared_ptr<long> code{};
  shared_ptr<string> message{};

  DataValue() {}

  explicit DataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DataValue() = default;
};
class ADClockRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  ADClockRequest() {}

  explicit ADClockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ADClockRequest() = default;
};
class ADClockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ADClockResponseBody() {}

  explicit ADClockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ADClockResponseBody() = default;
};
class ADClockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ADClockResponseBody> body{};

  ADClockResponse() {}

  explicit ADClockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ADClockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ADClockResponseBody>(model1);
      }
    }
  }


  virtual ~ADClockResponse() = default;
};
class ADMMURequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  ADMMURequest() {}

  explicit ADMMURequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ADMMURequest() = default;
};
class ADMMUResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ADMMUResponseBody() {}

  explicit ADMMUResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ADMMUResponseBody() = default;
};
class ADMMUResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ADMMUResponseBody> body{};

  ADMMUResponse() {}

  explicit ADMMUResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ADMMUResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ADMMUResponseBody>(model1);
      }
    }
  }


  virtual ~ADMMUResponse() = default;
};
class ADMiniCogRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  ADMiniCogRequest() {}

  explicit ADMiniCogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ADMiniCogRequest() = default;
};
class ADMiniCogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ADMiniCogResponseBody() {}

  explicit ADMiniCogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ADMiniCogResponseBody() = default;
};
class ADMiniCogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ADMiniCogResponseBody> body{};

  ADMiniCogResponse() {}

  explicit ADMiniCogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ADMiniCogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ADMiniCogResponseBody>(model1);
      }
    }
  }


  virtual ~ADMiniCogResponse() = default;
};
class ADMiniCogResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  ADMiniCogResultRequest() {}

  explicit ADMiniCogResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ADMiniCogResultRequest() = default;
};
class ADMiniCogResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ADMiniCogResultResponseBody() {}

  explicit ADMiniCogResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ADMiniCogResultResponseBody() = default;
};
class ADMiniCogResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ADMiniCogResultResponseBody> body{};

  ADMiniCogResultResponse() {}

  explicit ADMiniCogResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ADMiniCogResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ADMiniCogResultResponseBody>(model1);
      }
    }
  }


  virtual ~ADMiniCogResultResponse() = default;
};
class DeleteServiceDataByConditionsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> conditions{};
  shared_ptr<long> serviceId{};

  DeleteServiceDataByConditionsRequest() {}

  explicit DeleteServiceDataByConditionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      res["Conditions"] = boost::any(*conditions);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Conditions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      conditions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceDataByConditionsRequest() = default;
};
class DeleteServiceDataByConditionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> conditionsShrink{};
  shared_ptr<long> serviceId{};

  DeleteServiceDataByConditionsShrinkRequest() {}

  explicit DeleteServiceDataByConditionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionsShrink) {
      res["Conditions"] = boost::any(*conditionsShrink);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      conditionsShrink = make_shared<string>(boost::any_cast<string>(m["Conditions"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceDataByConditionsShrinkRequest() = default;
};
class DeleteServiceDataByConditionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteServiceDataByConditionsResponseBody() {}

  explicit DeleteServiceDataByConditionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteServiceDataByConditionsResponseBody() = default;
};
class DeleteServiceDataByConditionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceDataByConditionsResponseBody> body{};

  DeleteServiceDataByConditionsResponse() {}

  explicit DeleteServiceDataByConditionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceDataByConditionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceDataByConditionsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceDataByConditionsResponse() = default;
};
class DeleteServiceDataByIdsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ids{};
  shared_ptr<long> serviceId{};

  DeleteServiceDataByIdsRequest() {}

  explicit DeleteServiceDataByIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceDataByIdsRequest() = default;
};
class DeleteServiceDataByIdsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> idsShrink{};
  shared_ptr<long> serviceId{};

  DeleteServiceDataByIdsShrinkRequest() {}

  explicit DeleteServiceDataByIdsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idsShrink) {
      res["Ids"] = boost::any(*idsShrink);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      idsShrink = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceDataByIdsShrinkRequest() = default;
};
class DeleteServiceDataByIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteServiceDataByIdsResponseBody() {}

  explicit DeleteServiceDataByIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteServiceDataByIdsResponseBody() = default;
};
class DeleteServiceDataByIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceDataByIdsResponseBody> body{};

  DeleteServiceDataByIdsResponse() {}

  explicit DeleteServiceDataByIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceDataByIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceDataByIdsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceDataByIdsResponse() = default;
};
class GetBrandChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetBrandChEcomRequest() {}

  explicit GetBrandChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
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
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetBrandChEcomRequest() = default;
};
class GetBrandChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetBrandChEcomResponseBody() {}

  explicit GetBrandChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetBrandChEcomResponseBody() = default;
};
class GetBrandChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBrandChEcomResponseBody> body{};

  GetBrandChEcomResponse() {}

  explicit GetBrandChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBrandChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBrandChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetBrandChEcomResponse() = default;
};
class GetCateChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetCateChEcomRequest() {}

  explicit GetCateChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
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
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetCateChEcomRequest() = default;
};
class GetCateChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetCateChEcomResponseBody() {}

  explicit GetCateChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCateChEcomResponseBody() = default;
};
class GetCateChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCateChEcomResponseBody> body{};

  GetCateChEcomResponse() {}

  explicit GetCateChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCateChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCateChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetCateChEcomResponse() = default;
};
class GetCheckDuplicationChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> originQ{};
  shared_ptr<string> originT{};
  shared_ptr<string> serviceCode{};

  GetCheckDuplicationChMedicalRequest() {}

  explicit GetCheckDuplicationChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originQ) {
      res["OriginQ"] = boost::any(*originQ);
    }
    if (originT) {
      res["OriginT"] = boost::any(*originT);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginQ") != m.end() && !m["OriginQ"].empty()) {
      originQ = make_shared<string>(boost::any_cast<string>(m["OriginQ"]));
    }
    if (m.find("OriginT") != m.end() && !m["OriginT"].empty()) {
      originT = make_shared<string>(boost::any_cast<string>(m["OriginT"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetCheckDuplicationChMedicalRequest() = default;
};
class GetCheckDuplicationChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetCheckDuplicationChMedicalResponseBody() {}

  explicit GetCheckDuplicationChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCheckDuplicationChMedicalResponseBody() = default;
};
class GetCheckDuplicationChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCheckDuplicationChMedicalResponseBody> body{};

  GetCheckDuplicationChMedicalResponse() {}

  explicit GetCheckDuplicationChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCheckDuplicationChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCheckDuplicationChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetCheckDuplicationChMedicalResponse() = default;
};
class GetDiagnosisChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serviceCode{};

  GetDiagnosisChMedicalRequest() {}

  explicit GetDiagnosisChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetDiagnosisChMedicalRequest() = default;
};
class GetDiagnosisChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetDiagnosisChMedicalResponseBody() {}

  explicit GetDiagnosisChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDiagnosisChMedicalResponseBody() = default;
};
class GetDiagnosisChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDiagnosisChMedicalResponseBody> body{};

  GetDiagnosisChMedicalResponse() {}

  explicit GetDiagnosisChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiagnosisChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiagnosisChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiagnosisChMedicalResponse() = default;
};
class GetDpChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetDpChEcomRequest() {}

  explicit GetDpChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetDpChEcomRequest() = default;
};
class GetDpChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetDpChEcomResponseBody() {}

  explicit GetDpChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDpChEcomResponseBody() = default;
};
class GetDpChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDpChEcomResponseBody> body{};

  GetDpChEcomResponse() {}

  explicit GetDpChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDpChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDpChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetDpChEcomResponse() = default;
};
class GetDpChGeneralCTBRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetDpChGeneralCTBRequest() {}

  explicit GetDpChGeneralCTBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetDpChGeneralCTBRequest() = default;
};
class GetDpChGeneralCTBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetDpChGeneralCTBResponseBody() {}

  explicit GetDpChGeneralCTBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDpChGeneralCTBResponseBody() = default;
};
class GetDpChGeneralCTBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDpChGeneralCTBResponseBody> body{};

  GetDpChGeneralCTBResponse() {}

  explicit GetDpChGeneralCTBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDpChGeneralCTBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDpChGeneralCTBResponseBody>(model1);
      }
    }
  }


  virtual ~GetDpChGeneralCTBResponse() = default;
};
class GetDpChGeneralStanfordRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetDpChGeneralStanfordRequest() {}

  explicit GetDpChGeneralStanfordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetDpChGeneralStanfordRequest() = default;
};
class GetDpChGeneralStanfordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetDpChGeneralStanfordResponseBody() {}

  explicit GetDpChGeneralStanfordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDpChGeneralStanfordResponseBody() = default;
};
class GetDpChGeneralStanfordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDpChGeneralStanfordResponseBody> body{};

  GetDpChGeneralStanfordResponse() {}

  explicit GetDpChGeneralStanfordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDpChGeneralStanfordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDpChGeneralStanfordResponseBody>(model1);
      }
    }
  }


  virtual ~GetDpChGeneralStanfordResponse() = default;
};
class GetEcChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetEcChGeneralRequest() {}

  explicit GetEcChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetEcChGeneralRequest() = default;
};
class GetEcChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetEcChGeneralResponseBody() {}

  explicit GetEcChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEcChGeneralResponseBody() = default;
};
class GetEcChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEcChGeneralResponseBody> body{};

  GetEcChGeneralResponse() {}

  explicit GetEcChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEcChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEcChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetEcChGeneralResponse() = default;
};
class GetEcEnGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetEcEnGeneralRequest() {}

  explicit GetEcEnGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetEcEnGeneralRequest() = default;
};
class GetEcEnGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetEcEnGeneralResponseBody() {}

  explicit GetEcEnGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEcEnGeneralResponseBody() = default;
};
class GetEcEnGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEcEnGeneralResponseBody> body{};

  GetEcEnGeneralResponse() {}

  explicit GetEcEnGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEcEnGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEcEnGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetEcEnGeneralResponse() = default;
};
class GetEmbeddingRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> textType{};

  GetEmbeddingRequest() {}

  explicit GetEmbeddingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (textType) {
      res["TextType"] = boost::any(*textType);
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
    if (m.find("TextType") != m.end() && !m["TextType"].empty()) {
      textType = make_shared<string>(boost::any_cast<string>(m["TextType"]));
    }
  }


  virtual ~GetEmbeddingRequest() = default;
};
class GetEmbeddingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetEmbeddingResponseBody() {}

  explicit GetEmbeddingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEmbeddingResponseBody() = default;
};
class GetEmbeddingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEmbeddingResponseBody> body{};

  GetEmbeddingResponse() {}

  explicit GetEmbeddingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEmbeddingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEmbeddingResponseBody>(model1);
      }
    }
  }


  virtual ~GetEmbeddingResponse() = default;
};
class GetItemPubChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetItemPubChEcomRequest() {}

  explicit GetItemPubChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
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
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetItemPubChEcomRequest() = default;
};
class GetItemPubChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetItemPubChEcomResponseBody() {}

  explicit GetItemPubChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetItemPubChEcomResponseBody() = default;
};
class GetItemPubChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetItemPubChEcomResponseBody> body{};

  GetItemPubChEcomResponse() {}

  explicit GetItemPubChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetItemPubChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetItemPubChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetItemPubChEcomResponse() = default;
};
class GetKeywordChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetKeywordChEcomRequest() {}

  explicit GetKeywordChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
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
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetKeywordChEcomRequest() = default;
};
class GetKeywordChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetKeywordChEcomResponseBody() {}

  explicit GetKeywordChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetKeywordChEcomResponseBody() = default;
};
class GetKeywordChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKeywordChEcomResponseBody> body{};

  GetKeywordChEcomResponse() {}

  explicit GetKeywordChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKeywordChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKeywordChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetKeywordChEcomResponse() = default;
};
class GetKeywordEnEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetKeywordEnEcomRequest() {}

  explicit GetKeywordEnEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetKeywordEnEcomRequest() = default;
};
class GetKeywordEnEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetKeywordEnEcomResponseBody() {}

  explicit GetKeywordEnEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetKeywordEnEcomResponseBody() = default;
};
class GetKeywordEnEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKeywordEnEcomResponseBody> body{};

  GetKeywordEnEcomResponse() {}

  explicit GetKeywordEnEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKeywordEnEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKeywordEnEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetKeywordEnEcomResponse() = default;
};
class GetMedicineChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> factory{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> specification{};
  shared_ptr<string> unit{};

  GetMedicineChMedicalRequest() {}

  explicit GetMedicineChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factory) {
      res["Factory"] = boost::any(*factory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Factory") != m.end() && !m["Factory"].empty()) {
      factory = make_shared<string>(boost::any_cast<string>(m["Factory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~GetMedicineChMedicalRequest() = default;
};
class GetMedicineChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetMedicineChMedicalResponseBody() {}

  explicit GetMedicineChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMedicineChMedicalResponseBody() = default;
};
class GetMedicineChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMedicineChMedicalResponseBody> body{};

  GetMedicineChMedicalResponse() {}

  explicit GetMedicineChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMedicineChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMedicineChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetMedicineChMedicalResponse() = default;
};
class GetNerChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> lexerId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetNerChEcomRequest() {}

  explicit GetNerChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lexerId) {
      res["LexerId"] = boost::any(*lexerId);
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
    if (m.find("LexerId") != m.end() && !m["LexerId"].empty()) {
      lexerId = make_shared<string>(boost::any_cast<string>(m["LexerId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetNerChEcomRequest() = default;
};
class GetNerChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetNerChEcomResponseBody() {}

  explicit GetNerChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetNerChEcomResponseBody() = default;
};
class GetNerChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNerChEcomResponseBody> body{};

  GetNerChEcomResponse() {}

  explicit GetNerChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNerChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNerChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetNerChEcomResponse() = default;
};
class GetNerChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetNerChMedicalRequest() {}

  explicit GetNerChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetNerChMedicalRequest() = default;
};
class GetNerChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetNerChMedicalResponseBody() {}

  explicit GetNerChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetNerChMedicalResponseBody() = default;
};
class GetNerChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNerChMedicalResponseBody> body{};

  GetNerChMedicalResponse() {}

  explicit GetNerChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNerChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNerChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetNerChMedicalResponse() = default;
};
class GetNerCustomizedChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> lexerId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetNerCustomizedChEcomRequest() {}

  explicit GetNerCustomizedChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lexerId) {
      res["LexerId"] = boost::any(*lexerId);
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
    if (m.find("LexerId") != m.end() && !m["LexerId"].empty()) {
      lexerId = make_shared<string>(boost::any_cast<string>(m["LexerId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetNerCustomizedChEcomRequest() = default;
};
class GetNerCustomizedChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetNerCustomizedChEcomResponseBody() {}

  explicit GetNerCustomizedChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetNerCustomizedChEcomResponseBody() = default;
};
class GetNerCustomizedChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNerCustomizedChEcomResponseBody> body{};

  GetNerCustomizedChEcomResponse() {}

  explicit GetNerCustomizedChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNerCustomizedChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNerCustomizedChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetNerCustomizedChEcomResponse() = default;
};
class GetNerCustomizedSeaEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetNerCustomizedSeaEcomRequest() {}

  explicit GetNerCustomizedSeaEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetNerCustomizedSeaEcomRequest() = default;
};
class GetNerCustomizedSeaEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetNerCustomizedSeaEcomResponseBody() {}

  explicit GetNerCustomizedSeaEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetNerCustomizedSeaEcomResponseBody() = default;
};
class GetNerCustomizedSeaEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNerCustomizedSeaEcomResponseBody> body{};

  GetNerCustomizedSeaEcomResponse() {}

  explicit GetNerCustomizedSeaEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNerCustomizedSeaEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNerCustomizedSeaEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetNerCustomizedSeaEcomResponse() = default;
};
class GetOpenNLURequest : public Darabonba::Model {
public:
  shared_ptr<string> examples{};
  shared_ptr<string> labels{};
  shared_ptr<string> sentence{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> task{};

  GetOpenNLURequest() {}

  explicit GetOpenNLURequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (examples) {
      res["Examples"] = boost::any(*examples);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (sentence) {
      res["Sentence"] = boost::any(*sentence);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Examples") != m.end() && !m["Examples"].empty()) {
      examples = make_shared<string>(boost::any_cast<string>(m["Examples"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Sentence") != m.end() && !m["Sentence"].empty()) {
      sentence = make_shared<string>(boost::any_cast<string>(m["Sentence"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
  }


  virtual ~GetOpenNLURequest() = default;
};
class GetOpenNLUResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetOpenNLUResponseBody() {}

  explicit GetOpenNLUResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetOpenNLUResponseBody() = default;
};
class GetOpenNLUResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpenNLUResponseBody> body{};

  GetOpenNLUResponse() {}

  explicit GetOpenNLUResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpenNLUResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpenNLUResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpenNLUResponse() = default;
};
class GetOpenNLUHighRecallRequest : public Darabonba::Model {
public:
  shared_ptr<string> examples{};
  shared_ptr<string> labels{};
  shared_ptr<string> sentence{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> task{};

  GetOpenNLUHighRecallRequest() {}

  explicit GetOpenNLUHighRecallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (examples) {
      res["Examples"] = boost::any(*examples);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (sentence) {
      res["Sentence"] = boost::any(*sentence);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Examples") != m.end() && !m["Examples"].empty()) {
      examples = make_shared<string>(boost::any_cast<string>(m["Examples"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Sentence") != m.end() && !m["Sentence"].empty()) {
      sentence = make_shared<string>(boost::any_cast<string>(m["Sentence"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
  }


  virtual ~GetOpenNLUHighRecallRequest() = default;
};
class GetOpenNLUHighRecallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetOpenNLUHighRecallResponseBody() {}

  explicit GetOpenNLUHighRecallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetOpenNLUHighRecallResponseBody() = default;
};
class GetOpenNLUHighRecallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpenNLUHighRecallResponseBody> body{};

  GetOpenNLUHighRecallResponse() {}

  explicit GetOpenNLUHighRecallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpenNLUHighRecallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpenNLUHighRecallResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpenNLUHighRecallResponse() = default;
};
class GetOperationChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serviceCode{};

  GetOperationChMedicalRequest() {}

  explicit GetOperationChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetOperationChMedicalRequest() = default;
};
class GetOperationChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetOperationChMedicalResponseBody() {}

  explicit GetOperationChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetOperationChMedicalResponseBody() = default;
};
class GetOperationChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOperationChMedicalResponseBody> body{};

  GetOperationChMedicalResponse() {}

  explicit GetOperationChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOperationChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOperationChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetOperationChMedicalResponse() = default;
};
class GetPosChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetPosChEcomRequest() {}

  explicit GetPosChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetPosChEcomRequest() = default;
};
class GetPosChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetPosChEcomResponseBody() {}

  explicit GetPosChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPosChEcomResponseBody() = default;
};
class GetPosChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPosChEcomResponseBody> body{};

  GetPosChEcomResponse() {}

  explicit GetPosChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPosChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPosChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetPosChEcomResponse() = default;
};
class GetPosChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetPosChGeneralRequest() {}

  explicit GetPosChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetPosChGeneralRequest() = default;
};
class GetPosChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetPosChGeneralResponseBody() {}

  explicit GetPosChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPosChGeneralResponseBody() = default;
};
class GetPosChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPosChGeneralResponseBody> body{};

  GetPosChGeneralResponse() {}

  explicit GetPosChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPosChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPosChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetPosChGeneralResponse() = default;
};
class GetPriceChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetPriceChEcomRequest() {}

  explicit GetPriceChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetPriceChEcomRequest() = default;
};
class GetPriceChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetPriceChEcomResponseBody() {}

  explicit GetPriceChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPriceChEcomResponseBody() = default;
};
class GetPriceChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPriceChEcomResponseBody> body{};

  GetPriceChEcomResponse() {}

  explicit GetPriceChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPriceChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPriceChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetPriceChEcomResponse() = default;
};
class GetSSETestRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  GetSSETestRequest() {}

  explicit GetSSETestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetSSETestRequest() = default;
};
class GetSSETestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSSETestResponseBody() {}

  explicit GetSSETestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSSETestResponseBody() = default;
};
class GetSSETestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSSETestResponseBody> body{};

  GetSSETestResponse() {}

  explicit GetSSETestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSSETestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSSETestResponseBody>(model1);
      }
    }
  }


  virtual ~GetSSETestResponse() = default;
};
class GetSaChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetSaChGeneralRequest() {}

  explicit GetSaChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetSaChGeneralRequest() = default;
};
class GetSaChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSaChGeneralResponseBody() {}

  explicit GetSaChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSaChGeneralResponseBody() = default;
};
class GetSaChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSaChGeneralResponseBody> body{};

  GetSaChGeneralResponse() {}

  explicit GetSaChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSaChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSaChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetSaChGeneralResponse() = default;
};
class GetSaSeaEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetSaSeaEcomRequest() {}

  explicit GetSaSeaEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetSaSeaEcomRequest() = default;
};
class GetSaSeaEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSaSeaEcomResponseBody() {}

  explicit GetSaSeaEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSaSeaEcomResponseBody() = default;
};
class GetSaSeaEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSaSeaEcomResponseBody> body{};

  GetSaSeaEcomResponse() {}

  explicit GetSaSeaEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSaSeaEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSaSeaEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetSaSeaEcomResponse() = default;
};
class GetServiceDataImportStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dataImportIds{};

  GetServiceDataImportStatusRequest() {}

  explicit GetServiceDataImportStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataImportIds) {
      res["DataImportIds"] = boost::any(*dataImportIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataImportIds") != m.end() && !m["DataImportIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DataImportIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataImportIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dataImportIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetServiceDataImportStatusRequest() = default;
};
class GetServiceDataImportStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataImportIdsShrink{};

  GetServiceDataImportStatusShrinkRequest() {}

  explicit GetServiceDataImportStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataImportIdsShrink) {
      res["DataImportIds"] = boost::any(*dataImportIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataImportIds") != m.end() && !m["DataImportIds"].empty()) {
      dataImportIdsShrink = make_shared<string>(boost::any_cast<string>(m["DataImportIds"]));
    }
  }


  virtual ~GetServiceDataImportStatusShrinkRequest() = default;
};
class GetServiceDataImportStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, DataValue>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetServiceDataImportStatusResponseBody() {}

  explicit GetServiceDataImportStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      map<string, boost::any> temp1;
      for(auto item1:*data){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Data"] = boost::any(temp1);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        map<string, DataValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        data = make_shared<map<string, DataValue>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetServiceDataImportStatusResponseBody() = default;
};
class GetServiceDataImportStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceDataImportStatusResponseBody> body{};

  GetServiceDataImportStatusResponse() {}

  explicit GetServiceDataImportStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceDataImportStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceDataImportStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceDataImportStatusResponse() = default;
};
class GetSimilarityChMedicalRequest : public Darabonba::Model {
public:
  shared_ptr<string> originQ{};
  shared_ptr<string> originT{};
  shared_ptr<string> serviceCode{};

  GetSimilarityChMedicalRequest() {}

  explicit GetSimilarityChMedicalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originQ) {
      res["OriginQ"] = boost::any(*originQ);
    }
    if (originT) {
      res["OriginT"] = boost::any(*originT);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginQ") != m.end() && !m["OriginQ"].empty()) {
      originQ = make_shared<string>(boost::any_cast<string>(m["OriginQ"]));
    }
    if (m.find("OriginT") != m.end() && !m["OriginT"].empty()) {
      originT = make_shared<string>(boost::any_cast<string>(m["OriginT"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetSimilarityChMedicalRequest() = default;
};
class GetSimilarityChMedicalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSimilarityChMedicalResponseBody() {}

  explicit GetSimilarityChMedicalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSimilarityChMedicalResponseBody() = default;
};
class GetSimilarityChMedicalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSimilarityChMedicalResponseBody> body{};

  GetSimilarityChMedicalResponse() {}

  explicit GetSimilarityChMedicalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSimilarityChMedicalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSimilarityChMedicalResponseBody>(model1);
      }
    }
  }


  virtual ~GetSimilarityChMedicalResponse() = default;
};
class GetSummaryChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetSummaryChEcomRequest() {}

  explicit GetSummaryChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetSummaryChEcomRequest() = default;
};
class GetSummaryChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetSummaryChEcomResponseBody() {}

  explicit GetSummaryChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSummaryChEcomResponseBody() = default;
};
class GetSummaryChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSummaryChEcomResponseBody> body{};

  GetSummaryChEcomResponse() {}

  explicit GetSummaryChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSummaryChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSummaryChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetSummaryChEcomResponse() = default;
};
class GetTableQAServiceInfoByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceId{};

  GetTableQAServiceInfoByIdRequest() {}

  explicit GetTableQAServiceInfoByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~GetTableQAServiceInfoByIdRequest() = default;
};
class GetTableQAServiceInfoByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetTableQAServiceInfoByIdResponseBody() {}

  explicit GetTableQAServiceInfoByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTableQAServiceInfoByIdResponseBody() = default;
};
class GetTableQAServiceInfoByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableQAServiceInfoByIdResponseBody> body{};

  GetTableQAServiceInfoByIdResponse() {}

  explicit GetTableQAServiceInfoByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTableQAServiceInfoByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableQAServiceInfoByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableQAServiceInfoByIdResponse() = default;
};
class GetTcChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetTcChEcomRequest() {}

  explicit GetTcChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetTcChEcomRequest() = default;
};
class GetTcChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetTcChEcomResponseBody() {}

  explicit GetTcChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTcChEcomResponseBody() = default;
};
class GetTcChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTcChEcomResponseBody> body{};

  GetTcChEcomResponse() {}

  explicit GetTcChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTcChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTcChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetTcChEcomResponse() = default;
};
class GetTcChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetTcChGeneralRequest() {}

  explicit GetTcChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetTcChGeneralRequest() = default;
};
class GetTcChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetTcChGeneralResponseBody() {}

  explicit GetTcChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTcChGeneralResponseBody() = default;
};
class GetTcChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTcChGeneralResponseBody> body{};

  GetTcChGeneralResponse() {}

  explicit GetTcChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTcChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTcChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetTcChGeneralResponse() = default;
};
class GetTsChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> originQ{};
  shared_ptr<string> originT{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> type{};

  GetTsChEcomRequest() {}

  explicit GetTsChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originQ) {
      res["OriginQ"] = boost::any(*originQ);
    }
    if (originT) {
      res["OriginT"] = boost::any(*originT);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginQ") != m.end() && !m["OriginQ"].empty()) {
      originQ = make_shared<string>(boost::any_cast<string>(m["OriginQ"]));
    }
    if (m.find("OriginT") != m.end() && !m["OriginT"].empty()) {
      originT = make_shared<string>(boost::any_cast<string>(m["OriginT"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetTsChEcomRequest() = default;
};
class GetTsChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetTsChEcomResponseBody() {}

  explicit GetTsChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTsChEcomResponseBody() = default;
};
class GetTsChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTsChEcomResponseBody> body{};

  GetTsChEcomResponse() {}

  explicit GetTsChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTsChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTsChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetTsChEcomResponse() = default;
};
class GetUserUploadSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceCode{};

  GetUserUploadSignRequest() {}

  explicit GetUserUploadSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~GetUserUploadSignRequest() = default;
};
class GetUserUploadSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetUserUploadSignResponseBody() {}

  explicit GetUserUploadSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetUserUploadSignResponseBody() = default;
};
class GetUserUploadSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserUploadSignResponseBody> body{};

  GetUserUploadSignResponse() {}

  explicit GetUserUploadSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserUploadSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserUploadSignResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserUploadSignResponse() = default;
};
class GetWeChCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> size{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};
  shared_ptr<string> type{};

  GetWeChCommentRequest() {}

  explicit GetWeChCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetWeChCommentRequest() = default;
};
class GetWeChCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWeChCommentResponseBody() {}

  explicit GetWeChCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWeChCommentResponseBody() = default;
};
class GetWeChCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeChCommentResponseBody> body{};

  GetWeChCommentResponse() {}

  explicit GetWeChCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeChCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeChCommentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeChCommentResponse() = default;
};
class GetWeChEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> size{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};
  shared_ptr<string> type{};

  GetWeChEcomRequest() {}

  explicit GetWeChEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetWeChEcomRequest() = default;
};
class GetWeChEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWeChEcomResponseBody() {}

  explicit GetWeChEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWeChEcomResponseBody() = default;
};
class GetWeChEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeChEcomResponseBody> body{};

  GetWeChEcomResponse() {}

  explicit GetWeChEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeChEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeChEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeChEcomResponse() = default;
};
class GetWeChEntertainmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> size{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};
  shared_ptr<string> type{};

  GetWeChEntertainmentRequest() {}

  explicit GetWeChEntertainmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetWeChEntertainmentRequest() = default;
};
class GetWeChEntertainmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWeChEntertainmentResponseBody() {}

  explicit GetWeChEntertainmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWeChEntertainmentResponseBody() = default;
};
class GetWeChEntertainmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeChEntertainmentResponseBody> body{};

  GetWeChEntertainmentResponse() {}

  explicit GetWeChEntertainmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeChEntertainmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeChEntertainmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeChEntertainmentResponse() = default;
};
class GetWeChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> size{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};

  GetWeChGeneralRequest() {}

  explicit GetWeChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetWeChGeneralRequest() = default;
};
class GetWeChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWeChGeneralResponseBody() {}

  explicit GetWeChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWeChGeneralResponseBody() = default;
};
class GetWeChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeChGeneralResponseBody> body{};

  GetWeChGeneralResponse() {}

  explicit GetWeChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeChGeneralResponse() = default;
};
class GetWeChSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> size{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};
  shared_ptr<string> type{};

  GetWeChSearchRequest() {}

  explicit GetWeChSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetWeChSearchRequest() = default;
};
class GetWeChSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWeChSearchResponseBody() {}

  explicit GetWeChSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWeChSearchResponseBody() = default;
};
class GetWeChSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWeChSearchResponseBody> body{};

  GetWeChSearchResponse() {}

  explicit GetWeChSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWeChSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWeChSearchResponseBody>(model1);
      }
    }
  }


  virtual ~GetWeChSearchResponse() = default;
};
class GetWsChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsChGeneralRequest() {}

  explicit GetWsChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsChGeneralRequest() = default;
};
class GetWsChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsChGeneralResponseBody() {}

  explicit GetWsChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsChGeneralResponseBody() = default;
};
class GetWsChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsChGeneralResponseBody> body{};

  GetWsChGeneralResponse() {}

  explicit GetWsChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsChGeneralResponse() = default;
};
class GetWsCustomizedChEcomCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChEcomCommentRequest() {}

  explicit GetWsCustomizedChEcomCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChEcomCommentRequest() = default;
};
class GetWsCustomizedChEcomCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChEcomCommentResponseBody() {}

  explicit GetWsCustomizedChEcomCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChEcomCommentResponseBody() = default;
};
class GetWsCustomizedChEcomCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChEcomCommentResponseBody> body{};

  GetWsCustomizedChEcomCommentResponse() {}

  explicit GetWsCustomizedChEcomCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChEcomCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChEcomCommentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChEcomCommentResponse() = default;
};
class GetWsCustomizedChEcomContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChEcomContentRequest() {}

  explicit GetWsCustomizedChEcomContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChEcomContentRequest() = default;
};
class GetWsCustomizedChEcomContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChEcomContentResponseBody() {}

  explicit GetWsCustomizedChEcomContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChEcomContentResponseBody() = default;
};
class GetWsCustomizedChEcomContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChEcomContentResponseBody> body{};

  GetWsCustomizedChEcomContentResponse() {}

  explicit GetWsCustomizedChEcomContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChEcomContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChEcomContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChEcomContentResponse() = default;
};
class GetWsCustomizedChEcomTitleRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChEcomTitleRequest() {}

  explicit GetWsCustomizedChEcomTitleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChEcomTitleRequest() = default;
};
class GetWsCustomizedChEcomTitleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChEcomTitleResponseBody() {}

  explicit GetWsCustomizedChEcomTitleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChEcomTitleResponseBody() = default;
};
class GetWsCustomizedChEcomTitleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChEcomTitleResponseBody> body{};

  GetWsCustomizedChEcomTitleResponse() {}

  explicit GetWsCustomizedChEcomTitleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChEcomTitleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChEcomTitleResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChEcomTitleResponse() = default;
};
class GetWsCustomizedChEntertainmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChEntertainmentRequest() {}

  explicit GetWsCustomizedChEntertainmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChEntertainmentRequest() = default;
};
class GetWsCustomizedChEntertainmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChEntertainmentResponseBody() {}

  explicit GetWsCustomizedChEntertainmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChEntertainmentResponseBody() = default;
};
class GetWsCustomizedChEntertainmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChEntertainmentResponseBody> body{};

  GetWsCustomizedChEntertainmentResponse() {}

  explicit GetWsCustomizedChEntertainmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChEntertainmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChEntertainmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChEntertainmentResponse() = default;
};
class GetWsCustomizedChGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChGeneralRequest() {}

  explicit GetWsCustomizedChGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChGeneralRequest() = default;
};
class GetWsCustomizedChGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChGeneralResponseBody() {}

  explicit GetWsCustomizedChGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChGeneralResponseBody() = default;
};
class GetWsCustomizedChGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChGeneralResponseBody> body{};

  GetWsCustomizedChGeneralResponse() {}

  explicit GetWsCustomizedChGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChGeneralResponse() = default;
};
class GetWsCustomizedChO2ORequest : public Darabonba::Model {
public:
  shared_ptr<string> outType{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};
  shared_ptr<string> tokenizerId{};

  GetWsCustomizedChO2ORequest() {}

  explicit GetWsCustomizedChO2ORequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outType) {
      res["OutType"] = boost::any(*outType);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (tokenizerId) {
      res["TokenizerId"] = boost::any(*tokenizerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutType") != m.end() && !m["OutType"].empty()) {
      outType = make_shared<string>(boost::any_cast<string>(m["OutType"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TokenizerId") != m.end() && !m["TokenizerId"].empty()) {
      tokenizerId = make_shared<string>(boost::any_cast<string>(m["TokenizerId"]));
    }
  }


  virtual ~GetWsCustomizedChO2ORequest() = default;
};
class GetWsCustomizedChO2OResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedChO2OResponseBody() {}

  explicit GetWsCustomizedChO2OResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedChO2OResponseBody() = default;
};
class GetWsCustomizedChO2OResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedChO2OResponseBody> body{};

  GetWsCustomizedChO2OResponse() {}

  explicit GetWsCustomizedChO2OResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedChO2OResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedChO2OResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedChO2OResponse() = default;
};
class GetWsCustomizedSeaEcomRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetWsCustomizedSeaEcomRequest() {}

  explicit GetWsCustomizedSeaEcomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetWsCustomizedSeaEcomRequest() = default;
};
class GetWsCustomizedSeaEcomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedSeaEcomResponseBody() {}

  explicit GetWsCustomizedSeaEcomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedSeaEcomResponseBody() = default;
};
class GetWsCustomizedSeaEcomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedSeaEcomResponseBody> body{};

  GetWsCustomizedSeaEcomResponse() {}

  explicit GetWsCustomizedSeaEcomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedSeaEcomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedSeaEcomResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedSeaEcomResponse() = default;
};
class GetWsCustomizedSeaGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> text{};

  GetWsCustomizedSeaGeneralRequest() {}

  explicit GetWsCustomizedSeaGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetWsCustomizedSeaGeneralRequest() = default;
};
class GetWsCustomizedSeaGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetWsCustomizedSeaGeneralResponseBody() {}

  explicit GetWsCustomizedSeaGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWsCustomizedSeaGeneralResponseBody() = default;
};
class GetWsCustomizedSeaGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWsCustomizedSeaGeneralResponseBody> body{};

  GetWsCustomizedSeaGeneralResponse() {}

  explicit GetWsCustomizedSeaGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWsCustomizedSeaGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWsCustomizedSeaGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~GetWsCustomizedSeaGeneralResponse() = default;
};
class ImportServiceDataRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> partition{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> subPath{};
  shared_ptr<string> url{};

  ImportServiceDataRequest() {}

  explicit ImportServiceDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Partition"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Partition"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      partition = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ImportServiceDataRequest() = default;
};
class ImportServiceDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> partitionShrink{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> subPath{};
  shared_ptr<string> url{};

  ImportServiceDataShrinkRequest() {}

  explicit ImportServiceDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partitionShrink) {
      res["Partition"] = boost::any(*partitionShrink);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partitionShrink = make_shared<string>(boost::any_cast<string>(m["Partition"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ImportServiceDataShrinkRequest() = default;
};
class ImportServiceDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportServiceDataResponseBody() {}

  explicit ImportServiceDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ImportServiceDataResponseBody() = default;
};
class ImportServiceDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportServiceDataResponseBody> body{};

  ImportServiceDataResponse() {}

  explicit ImportServiceDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportServiceDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportServiceDataResponseBody>(model1);
      }
    }
  }


  virtual ~ImportServiceDataResponse() = default;
};
class InsertCustomRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiId{};
  shared_ptr<string> customFileName{};
  shared_ptr<string> customUrl{};
  shared_ptr<string> regFileName{};
  shared_ptr<string> regUrl{};
  shared_ptr<string> serviceCode{};

  InsertCustomRequest() {}

  explicit InsertCustomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (customFileName) {
      res["CustomFileName"] = boost::any(*customFileName);
    }
    if (customUrl) {
      res["CustomUrl"] = boost::any(*customUrl);
    }
    if (regFileName) {
      res["RegFileName"] = boost::any(*regFileName);
    }
    if (regUrl) {
      res["RegUrl"] = boost::any(*regUrl);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<long>(boost::any_cast<long>(m["ApiId"]));
    }
    if (m.find("CustomFileName") != m.end() && !m["CustomFileName"].empty()) {
      customFileName = make_shared<string>(boost::any_cast<string>(m["CustomFileName"]));
    }
    if (m.find("CustomUrl") != m.end() && !m["CustomUrl"].empty()) {
      customUrl = make_shared<string>(boost::any_cast<string>(m["CustomUrl"]));
    }
    if (m.find("RegFileName") != m.end() && !m["RegFileName"].empty()) {
      regFileName = make_shared<string>(boost::any_cast<string>(m["RegFileName"]));
    }
    if (m.find("RegUrl") != m.end() && !m["RegUrl"].empty()) {
      regUrl = make_shared<string>(boost::any_cast<string>(m["RegUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~InsertCustomRequest() = default;
};
class InsertCustomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  InsertCustomResponseBody() {}

  explicit InsertCustomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InsertCustomResponseBody() = default;
};
class InsertCustomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertCustomResponseBody> body{};

  InsertCustomResponse() {}

  explicit InsertCustomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertCustomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertCustomResponseBody>(model1);
      }
    }
  }


  virtual ~InsertCustomResponse() = default;
};
class OpenAlinlpServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenAlinlpServiceResponseBody() {}

  explicit OpenAlinlpServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenAlinlpServiceResponseBody() = default;
};
class OpenAlinlpServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenAlinlpServiceResponseBody> body{};

  OpenAlinlpServiceResponse() {}

  explicit OpenAlinlpServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenAlinlpServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenAlinlpServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenAlinlpServiceResponse() = default;
};
class PostMSConvSearchTokenGeneratedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostMSConvSearchTokenGeneratedResponseBody() {}

  explicit PostMSConvSearchTokenGeneratedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PostMSConvSearchTokenGeneratedResponseBody() = default;
};
class PostMSConvSearchTokenGeneratedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostMSConvSearchTokenGeneratedResponseBody> body{};

  PostMSConvSearchTokenGeneratedResponse() {}

  explicit PostMSConvSearchTokenGeneratedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostMSConvSearchTokenGeneratedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostMSConvSearchTokenGeneratedResponseBody>(model1);
      }
    }
  }


  virtual ~PostMSConvSearchTokenGeneratedResponse() = default;
};
class PostMSSearchEnhanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<map<string, boost::any>> customConfigInfo{};
  shared_ptr<bool> debug{};
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> filters{};
  shared_ptr<long> page{};
  shared_ptr<string> queries{};
  shared_ptr<map<string, boost::any>> rankModelInfo{};
  shared_ptr<long> rows{};
  shared_ptr<long> serviceId{};
  shared_ptr<vector<string>> sort{};
  shared_ptr<string> type{};
  shared_ptr<string> uq{};

  PostMSSearchEnhanceRequest() {}

  explicit PostMSSearchEnhanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (customConfigInfo) {
      res["CustomConfigInfo"] = boost::any(*customConfigInfo);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (queries) {
      res["Queries"] = boost::any(*queries);
    }
    if (rankModelInfo) {
      res["RankModelInfo"] = boost::any(*rankModelInfo);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uq) {
      res["Uq"] = boost::any(*uq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("CustomConfigInfo") != m.end() && !m["CustomConfigInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomConfigInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customConfigInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Queries") != m.end() && !m["Queries"].empty()) {
      queries = make_shared<string>(boost::any_cast<string>(m["Queries"]));
    }
    if (m.find("RankModelInfo") != m.end() && !m["RankModelInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RankModelInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      rankModelInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<long>(boost::any_cast<long>(m["Rows"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sort = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uq") != m.end() && !m["Uq"].empty()) {
      uq = make_shared<string>(boost::any_cast<string>(m["Uq"]));
    }
  }


  virtual ~PostMSSearchEnhanceRequest() = default;
};
class PostMSSearchEnhanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> customConfigInfoShrink{};
  shared_ptr<bool> debug{};
  shared_ptr<string> fieldsShrink{};
  shared_ptr<string> filters{};
  shared_ptr<long> page{};
  shared_ptr<string> queries{};
  shared_ptr<string> rankModelInfoShrink{};
  shared_ptr<long> rows{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> sortShrink{};
  shared_ptr<string> type{};
  shared_ptr<string> uq{};

  PostMSSearchEnhanceShrinkRequest() {}

  explicit PostMSSearchEnhanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (customConfigInfoShrink) {
      res["CustomConfigInfo"] = boost::any(*customConfigInfoShrink);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    if (fieldsShrink) {
      res["Fields"] = boost::any(*fieldsShrink);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (queries) {
      res["Queries"] = boost::any(*queries);
    }
    if (rankModelInfoShrink) {
      res["RankModelInfo"] = boost::any(*rankModelInfoShrink);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (sortShrink) {
      res["Sort"] = boost::any(*sortShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uq) {
      res["Uq"] = boost::any(*uq);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("CustomConfigInfo") != m.end() && !m["CustomConfigInfo"].empty()) {
      customConfigInfoShrink = make_shared<string>(boost::any_cast<string>(m["CustomConfigInfo"]));
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fieldsShrink = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Queries") != m.end() && !m["Queries"].empty()) {
      queries = make_shared<string>(boost::any_cast<string>(m["Queries"]));
    }
    if (m.find("RankModelInfo") != m.end() && !m["RankModelInfo"].empty()) {
      rankModelInfoShrink = make_shared<string>(boost::any_cast<string>(m["RankModelInfo"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<long>(boost::any_cast<long>(m["Rows"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sortShrink = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uq") != m.end() && !m["Uq"].empty()) {
      uq = make_shared<string>(boost::any_cast<string>(m["Uq"]));
    }
  }


  virtual ~PostMSSearchEnhanceShrinkRequest() = default;
};
class PostMSSearchEnhanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PostMSSearchEnhanceResponseBody() {}

  explicit PostMSSearchEnhanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PostMSSearchEnhanceResponseBody() = default;
};
class PostMSSearchEnhanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PostMSSearchEnhanceResponseBody> body{};

  PostMSSearchEnhanceResponse() {}

  explicit PostMSSearchEnhanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PostMSSearchEnhanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PostMSSearchEnhanceResponseBody>(model1);
      }
    }
  }


  virtual ~PostMSSearchEnhanceResponse() = default;
};
class RequestTableQARequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<string> serviceCode{};

  RequestTableQARequest() {}

  explicit RequestTableQARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~RequestTableQARequest() = default;
};
class RequestTableQAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  RequestTableQAResponseBody() {}

  explicit RequestTableQAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RequestTableQAResponseBody() = default;
};
class RequestTableQAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestTableQAResponseBody> body{};

  RequestTableQAResponse() {}

  explicit RequestTableQAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestTableQAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestTableQAResponseBody>(model1);
      }
    }
  }


  virtual ~RequestTableQAResponse() = default;
};
class RequestTableQAOnlineRequest : public Darabonba::Model {
public:
  shared_ptr<string> botId{};
  shared_ptr<string> params{};
  shared_ptr<string> question{};
  shared_ptr<string> serviceCode{};

  RequestTableQAOnlineRequest() {}

  explicit RequestTableQAOnlineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (botId) {
      res["BotId"] = boost::any(*botId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BotId") != m.end() && !m["BotId"].empty()) {
      botId = make_shared<string>(boost::any_cast<string>(m["BotId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~RequestTableQAOnlineRequest() = default;
};
class RequestTableQAOnlineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  RequestTableQAOnlineResponseBody() {}

  explicit RequestTableQAOnlineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RequestTableQAOnlineResponseBody() = default;
};
class RequestTableQAOnlineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestTableQAOnlineResponseBody> body{};

  RequestTableQAOnlineResponse() {}

  explicit RequestTableQAOnlineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestTableQAOnlineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestTableQAOnlineResponseBody>(model1);
      }
    }
  }


  virtual ~RequestTableQAOnlineResponse() = default;
};
class UpdateServiceDataRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> conditions{};
  shared_ptr<long> serviceId{};

  UpdateServiceDataRequest() {}

  explicit UpdateServiceDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      res["Conditions"] = boost::any(*conditions);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Conditions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      conditions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~UpdateServiceDataRequest() = default;
};
class UpdateServiceDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> conditionsShrink{};
  shared_ptr<long> serviceId{};

  UpdateServiceDataShrinkRequest() {}

  explicit UpdateServiceDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionsShrink) {
      res["Conditions"] = boost::any(*conditionsShrink);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      conditionsShrink = make_shared<string>(boost::any_cast<string>(m["Conditions"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~UpdateServiceDataShrinkRequest() = default;
};
class UpdateServiceDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateServiceDataResponseBody() {}

  explicit UpdateServiceDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateServiceDataResponseBody() = default;
};
class UpdateServiceDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceDataResponseBody> body{};

  UpdateServiceDataResponse() {}

  explicit UpdateServiceDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceDataResponse() = default;
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
  ADClockResponse aDClockWithOptions(shared_ptr<ADClockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ADClockResponse aDClock(shared_ptr<ADClockRequest> request);
  ADMMUResponse aDMMUWithOptions(shared_ptr<ADMMURequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ADMMUResponse aDMMU(shared_ptr<ADMMURequest> request);
  ADMiniCogResponse aDMiniCogWithOptions(shared_ptr<ADMiniCogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ADMiniCogResponse aDMiniCog(shared_ptr<ADMiniCogRequest> request);
  ADMiniCogResultResponse aDMiniCogResultWithOptions(shared_ptr<ADMiniCogResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ADMiniCogResultResponse aDMiniCogResult(shared_ptr<ADMiniCogResultRequest> request);
  DeleteServiceDataByConditionsResponse deleteServiceDataByConditionsWithOptions(shared_ptr<DeleteServiceDataByConditionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceDataByConditionsResponse deleteServiceDataByConditions(shared_ptr<DeleteServiceDataByConditionsRequest> request);
  DeleteServiceDataByIdsResponse deleteServiceDataByIdsWithOptions(shared_ptr<DeleteServiceDataByIdsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceDataByIdsResponse deleteServiceDataByIds(shared_ptr<DeleteServiceDataByIdsRequest> request);
  GetBrandChEcomResponse getBrandChEcomWithOptions(shared_ptr<GetBrandChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBrandChEcomResponse getBrandChEcom(shared_ptr<GetBrandChEcomRequest> request);
  GetCateChEcomResponse getCateChEcomWithOptions(shared_ptr<GetCateChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCateChEcomResponse getCateChEcom(shared_ptr<GetCateChEcomRequest> request);
  GetCheckDuplicationChMedicalResponse getCheckDuplicationChMedicalWithOptions(shared_ptr<GetCheckDuplicationChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCheckDuplicationChMedicalResponse getCheckDuplicationChMedical(shared_ptr<GetCheckDuplicationChMedicalRequest> request);
  GetDiagnosisChMedicalResponse getDiagnosisChMedicalWithOptions(shared_ptr<GetDiagnosisChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisChMedicalResponse getDiagnosisChMedical(shared_ptr<GetDiagnosisChMedicalRequest> request);
  GetDpChEcomResponse getDpChEcomWithOptions(shared_ptr<GetDpChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDpChEcomResponse getDpChEcom(shared_ptr<GetDpChEcomRequest> request);
  GetDpChGeneralCTBResponse getDpChGeneralCTBWithOptions(shared_ptr<GetDpChGeneralCTBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDpChGeneralCTBResponse getDpChGeneralCTB(shared_ptr<GetDpChGeneralCTBRequest> request);
  GetDpChGeneralStanfordResponse getDpChGeneralStanfordWithOptions(shared_ptr<GetDpChGeneralStanfordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDpChGeneralStanfordResponse getDpChGeneralStanford(shared_ptr<GetDpChGeneralStanfordRequest> request);
  GetEcChGeneralResponse getEcChGeneralWithOptions(shared_ptr<GetEcChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEcChGeneralResponse getEcChGeneral(shared_ptr<GetEcChGeneralRequest> request);
  GetEcEnGeneralResponse getEcEnGeneralWithOptions(shared_ptr<GetEcEnGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEcEnGeneralResponse getEcEnGeneral(shared_ptr<GetEcEnGeneralRequest> request);
  GetEmbeddingResponse getEmbeddingWithOptions(shared_ptr<GetEmbeddingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEmbeddingResponse getEmbedding(shared_ptr<GetEmbeddingRequest> request);
  GetItemPubChEcomResponse getItemPubChEcomWithOptions(shared_ptr<GetItemPubChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetItemPubChEcomResponse getItemPubChEcom(shared_ptr<GetItemPubChEcomRequest> request);
  GetKeywordChEcomResponse getKeywordChEcomWithOptions(shared_ptr<GetKeywordChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKeywordChEcomResponse getKeywordChEcom(shared_ptr<GetKeywordChEcomRequest> request);
  GetKeywordEnEcomResponse getKeywordEnEcomWithOptions(shared_ptr<GetKeywordEnEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKeywordEnEcomResponse getKeywordEnEcom(shared_ptr<GetKeywordEnEcomRequest> request);
  GetMedicineChMedicalResponse getMedicineChMedicalWithOptions(shared_ptr<GetMedicineChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMedicineChMedicalResponse getMedicineChMedical(shared_ptr<GetMedicineChMedicalRequest> request);
  GetNerChEcomResponse getNerChEcomWithOptions(shared_ptr<GetNerChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNerChEcomResponse getNerChEcom(shared_ptr<GetNerChEcomRequest> request);
  GetNerChMedicalResponse getNerChMedicalWithOptions(shared_ptr<GetNerChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNerChMedicalResponse getNerChMedical(shared_ptr<GetNerChMedicalRequest> request);
  GetNerCustomizedChEcomResponse getNerCustomizedChEcomWithOptions(shared_ptr<GetNerCustomizedChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNerCustomizedChEcomResponse getNerCustomizedChEcom(shared_ptr<GetNerCustomizedChEcomRequest> request);
  GetNerCustomizedSeaEcomResponse getNerCustomizedSeaEcomWithOptions(shared_ptr<GetNerCustomizedSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNerCustomizedSeaEcomResponse getNerCustomizedSeaEcom(shared_ptr<GetNerCustomizedSeaEcomRequest> request);
  GetOpenNLUResponse getOpenNLUWithOptions(shared_ptr<GetOpenNLURequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpenNLUResponse getOpenNLU(shared_ptr<GetOpenNLURequest> request);
  GetOpenNLUHighRecallResponse getOpenNLUHighRecallWithOptions(shared_ptr<GetOpenNLUHighRecallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpenNLUHighRecallResponse getOpenNLUHighRecall(shared_ptr<GetOpenNLUHighRecallRequest> request);
  GetOperationChMedicalResponse getOperationChMedicalWithOptions(shared_ptr<GetOperationChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOperationChMedicalResponse getOperationChMedical(shared_ptr<GetOperationChMedicalRequest> request);
  GetPosChEcomResponse getPosChEcomWithOptions(shared_ptr<GetPosChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPosChEcomResponse getPosChEcom(shared_ptr<GetPosChEcomRequest> request);
  GetPosChGeneralResponse getPosChGeneralWithOptions(shared_ptr<GetPosChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPosChGeneralResponse getPosChGeneral(shared_ptr<GetPosChGeneralRequest> request);
  GetPriceChEcomResponse getPriceChEcomWithOptions(shared_ptr<GetPriceChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPriceChEcomResponse getPriceChEcom(shared_ptr<GetPriceChEcomRequest> request);
  GetSSETestResponse getSSETestWithOptions(shared_ptr<GetSSETestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSSETestResponse getSSETest(shared_ptr<GetSSETestRequest> request);
  GetSaChGeneralResponse getSaChGeneralWithOptions(shared_ptr<GetSaChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSaChGeneralResponse getSaChGeneral(shared_ptr<GetSaChGeneralRequest> request);
  GetSaSeaEcomResponse getSaSeaEcomWithOptions(shared_ptr<GetSaSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSaSeaEcomResponse getSaSeaEcom(shared_ptr<GetSaSeaEcomRequest> request);
  GetServiceDataImportStatusResponse getServiceDataImportStatusWithOptions(shared_ptr<GetServiceDataImportStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceDataImportStatusResponse getServiceDataImportStatus(shared_ptr<GetServiceDataImportStatusRequest> request);
  GetSimilarityChMedicalResponse getSimilarityChMedicalWithOptions(shared_ptr<GetSimilarityChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSimilarityChMedicalResponse getSimilarityChMedical(shared_ptr<GetSimilarityChMedicalRequest> request);
  GetSummaryChEcomResponse getSummaryChEcomWithOptions(shared_ptr<GetSummaryChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSummaryChEcomResponse getSummaryChEcom(shared_ptr<GetSummaryChEcomRequest> request);
  GetTableQAServiceInfoByIdResponse getTableQAServiceInfoByIdWithOptions(shared_ptr<GetTableQAServiceInfoByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableQAServiceInfoByIdResponse getTableQAServiceInfoById(shared_ptr<GetTableQAServiceInfoByIdRequest> request);
  GetTcChEcomResponse getTcChEcomWithOptions(shared_ptr<GetTcChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTcChEcomResponse getTcChEcom(shared_ptr<GetTcChEcomRequest> request);
  GetTcChGeneralResponse getTcChGeneralWithOptions(shared_ptr<GetTcChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTcChGeneralResponse getTcChGeneral(shared_ptr<GetTcChGeneralRequest> request);
  GetTsChEcomResponse getTsChEcomWithOptions(shared_ptr<GetTsChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTsChEcomResponse getTsChEcom(shared_ptr<GetTsChEcomRequest> request);
  GetUserUploadSignResponse getUserUploadSignWithOptions(shared_ptr<GetUserUploadSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserUploadSignResponse getUserUploadSign(shared_ptr<GetUserUploadSignRequest> request);
  GetWeChCommentResponse getWeChCommentWithOptions(shared_ptr<GetWeChCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeChCommentResponse getWeChComment(shared_ptr<GetWeChCommentRequest> request);
  GetWeChEcomResponse getWeChEcomWithOptions(shared_ptr<GetWeChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeChEcomResponse getWeChEcom(shared_ptr<GetWeChEcomRequest> request);
  GetWeChEntertainmentResponse getWeChEntertainmentWithOptions(shared_ptr<GetWeChEntertainmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeChEntertainmentResponse getWeChEntertainment(shared_ptr<GetWeChEntertainmentRequest> request);
  GetWeChGeneralResponse getWeChGeneralWithOptions(shared_ptr<GetWeChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeChGeneralResponse getWeChGeneral(shared_ptr<GetWeChGeneralRequest> request);
  GetWeChSearchResponse getWeChSearchWithOptions(shared_ptr<GetWeChSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWeChSearchResponse getWeChSearch(shared_ptr<GetWeChSearchRequest> request);
  GetWsChGeneralResponse getWsChGeneralWithOptions(shared_ptr<GetWsChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsChGeneralResponse getWsChGeneral(shared_ptr<GetWsChGeneralRequest> request);
  GetWsCustomizedChEcomCommentResponse getWsCustomizedChEcomCommentWithOptions(shared_ptr<GetWsCustomizedChEcomCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChEcomCommentResponse getWsCustomizedChEcomComment(shared_ptr<GetWsCustomizedChEcomCommentRequest> request);
  GetWsCustomizedChEcomContentResponse getWsCustomizedChEcomContentWithOptions(shared_ptr<GetWsCustomizedChEcomContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChEcomContentResponse getWsCustomizedChEcomContent(shared_ptr<GetWsCustomizedChEcomContentRequest> request);
  GetWsCustomizedChEcomTitleResponse getWsCustomizedChEcomTitleWithOptions(shared_ptr<GetWsCustomizedChEcomTitleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChEcomTitleResponse getWsCustomizedChEcomTitle(shared_ptr<GetWsCustomizedChEcomTitleRequest> request);
  GetWsCustomizedChEntertainmentResponse getWsCustomizedChEntertainmentWithOptions(shared_ptr<GetWsCustomizedChEntertainmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChEntertainmentResponse getWsCustomizedChEntertainment(shared_ptr<GetWsCustomizedChEntertainmentRequest> request);
  GetWsCustomizedChGeneralResponse getWsCustomizedChGeneralWithOptions(shared_ptr<GetWsCustomizedChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChGeneralResponse getWsCustomizedChGeneral(shared_ptr<GetWsCustomizedChGeneralRequest> request);
  GetWsCustomizedChO2OResponse getWsCustomizedChO2OWithOptions(shared_ptr<GetWsCustomizedChO2ORequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedChO2OResponse getWsCustomizedChO2O(shared_ptr<GetWsCustomizedChO2ORequest> request);
  GetWsCustomizedSeaEcomResponse getWsCustomizedSeaEcomWithOptions(shared_ptr<GetWsCustomizedSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedSeaEcomResponse getWsCustomizedSeaEcom(shared_ptr<GetWsCustomizedSeaEcomRequest> request);
  GetWsCustomizedSeaGeneralResponse getWsCustomizedSeaGeneralWithOptions(shared_ptr<GetWsCustomizedSeaGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWsCustomizedSeaGeneralResponse getWsCustomizedSeaGeneral(shared_ptr<GetWsCustomizedSeaGeneralRequest> request);
  ImportServiceDataResponse importServiceDataWithOptions(shared_ptr<ImportServiceDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportServiceDataResponse importServiceData(shared_ptr<ImportServiceDataRequest> request);
  InsertCustomResponse insertCustomWithOptions(shared_ptr<InsertCustomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertCustomResponse insertCustom(shared_ptr<InsertCustomRequest> request);
  OpenAlinlpServiceResponse openAlinlpServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenAlinlpServiceResponse openAlinlpService();
  PostMSConvSearchTokenGeneratedResponse postMSConvSearchTokenGeneratedWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostMSConvSearchTokenGeneratedResponse postMSConvSearchTokenGenerated();
  PostMSSearchEnhanceResponse postMSSearchEnhanceWithOptions(shared_ptr<PostMSSearchEnhanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PostMSSearchEnhanceResponse postMSSearchEnhance(shared_ptr<PostMSSearchEnhanceRequest> request);
  RequestTableQAResponse requestTableQAWithOptions(shared_ptr<RequestTableQARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestTableQAResponse requestTableQA(shared_ptr<RequestTableQARequest> request);
  RequestTableQAOnlineResponse requestTableQAOnlineWithOptions(shared_ptr<RequestTableQAOnlineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestTableQAOnlineResponse requestTableQAOnline(shared_ptr<RequestTableQAOnlineRequest> request);
  UpdateServiceDataResponse updateServiceDataWithOptions(shared_ptr<UpdateServiceDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceDataResponse updateServiceData(shared_ptr<UpdateServiceDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alinlp20200629

#endif
