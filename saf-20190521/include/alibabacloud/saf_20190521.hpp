// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SAF20190521_H_
#define ALIBABACLOUD_SAF20190521_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Saf20190521 {
class ExecuteExtendServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ExecuteExtendServiceRequest() {}

  explicit ExecuteExtendServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~ExecuteExtendServiceRequest() = default;
};
class ExecuteExtendServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> invokeResult{};

  ExecuteExtendServiceResponseBodyData() {}

  explicit ExecuteExtendServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeResult) {
      res["InvokeResult"] = boost::any(*invokeResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeResult") != m.end() && !m["InvokeResult"].empty()) {
      invokeResult = make_shared<string>(boost::any_cast<string>(m["InvokeResult"]));
    }
  }


  virtual ~ExecuteExtendServiceResponseBodyData() = default;
};
class ExecuteExtendServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExecuteExtendServiceResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteExtendServiceResponseBody() {}

  explicit ExecuteExtendServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecuteExtendServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecuteExtendServiceResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteExtendServiceResponseBody() = default;
};
class ExecuteExtendServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteExtendServiceResponseBody> body{};

  ExecuteExtendServiceResponse() {}

  explicit ExecuteExtendServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteExtendServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteExtendServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteExtendServiceResponse() = default;
};
class ExecuteRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ExecuteRequestRequest() {}

  explicit ExecuteRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~ExecuteRequestRequest() = default;
};
class ExecuteRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExecuteRequestResponseBody() {}

  explicit ExecuteRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteRequestResponseBody() = default;
};
class ExecuteRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteRequestResponseBody> body{};

  ExecuteRequestResponse() {}

  explicit ExecuteRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteRequestResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteRequestResponse() = default;
};
class ExecuteRequestMLRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ExecuteRequestMLRequest() {}

  explicit ExecuteRequestMLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~ExecuteRequestMLRequest() = default;
};
class ExecuteRequestMLResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExecuteRequestMLResponseBody() {}

  explicit ExecuteRequestMLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteRequestMLResponseBody() = default;
};
class ExecuteRequestMLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteRequestMLResponseBody> body{};

  ExecuteRequestMLResponse() {}

  explicit ExecuteRequestMLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteRequestMLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteRequestMLResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteRequestMLResponse() = default;
};
class ExecuteRequestSGRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> service{};
  shared_ptr<string> serviceParameters{};

  ExecuteRequestSGRequest() {}

  explicit ExecuteRequestSGRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~ExecuteRequestSGRequest() = default;
};
class ExecuteRequestSGResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExecuteRequestSGResponseBody() {}

  explicit ExecuteRequestSGResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteRequestSGResponseBody() = default;
};
class ExecuteRequestSGResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteRequestSGResponseBody> body{};

  ExecuteRequestSGResponse() {}

  explicit ExecuteRequestSGResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteRequestSGResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteRequestSGResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteRequestSGResponse() = default;
};
class RequestDecisionRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventCode{};
  shared_ptr<string> serviceParameters{};

  RequestDecisionRequest() {}

  explicit RequestDecisionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventCode) {
      res["EventCode"] = boost::any(*eventCode);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventCode") != m.end() && !m["EventCode"].empty()) {
      eventCode = make_shared<string>(boost::any_cast<string>(m["EventCode"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
  }


  virtual ~RequestDecisionRequest() = default;
};
class RequestDecisionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RequestDecisionResponseBody() {}

  explicit RequestDecisionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RequestDecisionResponseBody() = default;
};
class RequestDecisionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RequestDecisionResponseBody> body{};

  RequestDecisionResponse() {}

  explicit RequestDecisionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestDecisionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestDecisionResponseBody>(model1);
      }
    }
  }


  virtual ~RequestDecisionResponse() = default;
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
  ExecuteExtendServiceResponse executeExtendServiceWithOptions(shared_ptr<ExecuteExtendServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteExtendServiceResponse executeExtendService(shared_ptr<ExecuteExtendServiceRequest> request);
  ExecuteRequestResponse executeRequestWithOptions(shared_ptr<ExecuteRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteRequestResponse executeRequest(shared_ptr<ExecuteRequestRequest> request);
  ExecuteRequestMLResponse executeRequestMLWithOptions(shared_ptr<ExecuteRequestMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteRequestMLResponse executeRequestML(shared_ptr<ExecuteRequestMLRequest> request);
  ExecuteRequestSGResponse executeRequestSGWithOptions(shared_ptr<ExecuteRequestSGRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteRequestSGResponse executeRequestSG(shared_ptr<ExecuteRequestSGRequest> request);
  RequestDecisionResponse requestDecisionWithOptions(shared_ptr<RequestDecisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestDecisionResponse requestDecision(shared_ptr<RequestDecisionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Saf20190521

#endif
