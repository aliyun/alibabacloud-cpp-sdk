// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SAE20190506_H_
#define ALIBABACLOUD_SAE20190506_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sae20190506 {
class AbortAndRollbackChangeOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  AbortAndRollbackChangeOrderRequest() {}

  explicit AbortAndRollbackChangeOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~AbortAndRollbackChangeOrderRequest() = default;
};
class AbortAndRollbackChangeOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  AbortAndRollbackChangeOrderResponseBodyData() {}

  explicit AbortAndRollbackChangeOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~AbortAndRollbackChangeOrderResponseBodyData() = default;
};
class AbortAndRollbackChangeOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AbortAndRollbackChangeOrderResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  AbortAndRollbackChangeOrderResponseBody() {}

  explicit AbortAndRollbackChangeOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AbortAndRollbackChangeOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbortAndRollbackChangeOrderResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~AbortAndRollbackChangeOrderResponseBody() = default;
};
class AbortAndRollbackChangeOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortAndRollbackChangeOrderResponseBody> body{};

  AbortAndRollbackChangeOrderResponse() {}

  explicit AbortAndRollbackChangeOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortAndRollbackChangeOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortAndRollbackChangeOrderResponseBody>(model1);
      }
    }
  }


  virtual ~AbortAndRollbackChangeOrderResponse() = default;
};
class AbortChangeOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  AbortChangeOrderRequest() {}

  explicit AbortChangeOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~AbortChangeOrderRequest() = default;
};
class AbortChangeOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  AbortChangeOrderResponseBodyData() {}

  explicit AbortChangeOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~AbortChangeOrderResponseBodyData() = default;
};
class AbortChangeOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AbortChangeOrderResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  AbortChangeOrderResponseBody() {}

  explicit AbortChangeOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AbortChangeOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbortChangeOrderResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~AbortChangeOrderResponseBody() = default;
};
class AbortChangeOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortChangeOrderResponseBody> body{};

  AbortChangeOrderResponse() {}

  explicit AbortChangeOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortChangeOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortChangeOrderResponseBody>(model1);
      }
    }
  }


  virtual ~AbortChangeOrderResponse() = default;
};
class BatchStartApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appIds{};
  shared_ptr<string> namespaceId{};

  BatchStartApplicationsRequest() {}

  explicit BatchStartApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~BatchStartApplicationsRequest() = default;
};
class BatchStartApplicationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  BatchStartApplicationsResponseBodyData() {}

  explicit BatchStartApplicationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~BatchStartApplicationsResponseBodyData() = default;
};
class BatchStartApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchStartApplicationsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  BatchStartApplicationsResponseBody() {}

  explicit BatchStartApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchStartApplicationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchStartApplicationsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~BatchStartApplicationsResponseBody() = default;
};
class BatchStartApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchStartApplicationsResponseBody> body{};

  BatchStartApplicationsResponse() {}

  explicit BatchStartApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStartApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStartApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStartApplicationsResponse() = default;
};
class BatchStopApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appIds{};
  shared_ptr<string> namespaceId{};

  BatchStopApplicationsRequest() {}

  explicit BatchStopApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~BatchStopApplicationsRequest() = default;
};
class BatchStopApplicationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  BatchStopApplicationsResponseBodyData() {}

  explicit BatchStopApplicationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~BatchStopApplicationsResponseBodyData() = default;
};
class BatchStopApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchStopApplicationsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  BatchStopApplicationsResponseBody() {}

  explicit BatchStopApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchStopApplicationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchStopApplicationsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~BatchStopApplicationsResponseBody() = default;
};
class BatchStopApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchStopApplicationsResponseBody> body{};

  BatchStopApplicationsResponse() {}

  explicit BatchStopApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStopApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStopApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStopApplicationsResponse() = default;
};
class BindSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> internet{};
  shared_ptr<string> internetSlbId{};
  shared_ptr<string> intranet{};
  shared_ptr<string> intranetSlbId{};

  BindSlbRequest() {}

  explicit BindSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (internet) {
      res["Internet"] = boost::any(*internet);
    }
    if (internetSlbId) {
      res["InternetSlbId"] = boost::any(*internetSlbId);
    }
    if (intranet) {
      res["Intranet"] = boost::any(*intranet);
    }
    if (intranetSlbId) {
      res["IntranetSlbId"] = boost::any(*intranetSlbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Internet") != m.end() && !m["Internet"].empty()) {
      internet = make_shared<string>(boost::any_cast<string>(m["Internet"]));
    }
    if (m.find("InternetSlbId") != m.end() && !m["InternetSlbId"].empty()) {
      internetSlbId = make_shared<string>(boost::any_cast<string>(m["InternetSlbId"]));
    }
    if (m.find("Intranet") != m.end() && !m["Intranet"].empty()) {
      intranet = make_shared<string>(boost::any_cast<string>(m["Intranet"]));
    }
    if (m.find("IntranetSlbId") != m.end() && !m["IntranetSlbId"].empty()) {
      intranetSlbId = make_shared<string>(boost::any_cast<string>(m["IntranetSlbId"]));
    }
  }


  virtual ~BindSlbRequest() = default;
};
class BindSlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  BindSlbResponseBodyData() {}

  explicit BindSlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~BindSlbResponseBodyData() = default;
};
class BindSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BindSlbResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  BindSlbResponseBody() {}

  explicit BindSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BindSlbResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BindSlbResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~BindSlbResponseBody() = default;
};
class BindSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindSlbResponseBody> body{};

  BindSlbResponse() {}

  explicit BindSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindSlbResponseBody>(model1);
      }
    }
  }


  virtual ~BindSlbResponse() = default;
};
class ConfirmPipelineBatchRequest : public Darabonba::Model {
public:
  shared_ptr<bool> confirm{};
  shared_ptr<string> pipelineId{};

  ConfirmPipelineBatchRequest() {}

  explicit ConfirmPipelineBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confirm) {
      res["Confirm"] = boost::any(*confirm);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confirm") != m.end() && !m["Confirm"].empty()) {
      confirm = make_shared<bool>(boost::any_cast<bool>(m["Confirm"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
  }


  virtual ~ConfirmPipelineBatchRequest() = default;
};
class ConfirmPipelineBatchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> pipelineId{};

  ConfirmPipelineBatchResponseBodyData() {}

  explicit ConfirmPipelineBatchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
  }


  virtual ~ConfirmPipelineBatchResponseBodyData() = default;
};
class ConfirmPipelineBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ConfirmPipelineBatchResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ConfirmPipelineBatchResponseBody() {}

  explicit ConfirmPipelineBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ConfirmPipelineBatchResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConfirmPipelineBatchResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ConfirmPipelineBatchResponseBody() = default;
};
class ConfirmPipelineBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmPipelineBatchResponseBody> body{};

  ConfirmPipelineBatchResponse() {}

  explicit ConfirmPipelineBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmPipelineBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmPipelineBatchResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmPipelineBatchResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> acrAssumeRoleArn{};
  shared_ptr<string> acrInstanceId{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> appName{};
  shared_ptr<bool> associateEip{};
  shared_ptr<bool> autoConfig{};
  shared_ptr<string> command{};
  shared_ptr<string> commandArgs{};
  shared_ptr<string> configMapMountDesc{};
  shared_ptr<long> cpu{};
  shared_ptr<string> customHostAlias{};
  shared_ptr<bool> deploy{};
  shared_ptr<string> edasContainerVersion{};
  shared_ptr<string> envs{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> jarStartArgs{};
  shared_ptr<string> jarStartOptions{};
  shared_ptr<string> jdk{};
  shared_ptr<string> kafkaConfigs{};
  shared_ptr<string> liveness{};
  shared_ptr<long> memory{};
  shared_ptr<string> mountDesc{};
  shared_ptr<string> mountHost{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> nasId{};
  shared_ptr<string> ossAkId{};
  shared_ptr<string> ossAkSecret{};
  shared_ptr<string> ossMountDescs{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> phpArmsConfigLocation{};
  shared_ptr<string> phpConfig{};
  shared_ptr<string> phpConfigLocation{};
  shared_ptr<string> postStart{};
  shared_ptr<string> preStop{};
  shared_ptr<string> programmingLanguage{};
  shared_ptr<string> readiness{};
  shared_ptr<long> replicas{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> slsConfigs{};
  shared_ptr<long> terminationGracePeriodSeconds{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tomcatConfig{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> warStartOptions{};
  shared_ptr<string> webContainer{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrAssumeRoleArn) {
      res["AcrAssumeRoleArn"] = boost::any(*acrAssumeRoleArn);
    }
    if (acrInstanceId) {
      res["AcrInstanceId"] = boost::any(*acrInstanceId);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (associateEip) {
      res["AssociateEip"] = boost::any(*associateEip);
    }
    if (autoConfig) {
      res["AutoConfig"] = boost::any(*autoConfig);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (commandArgs) {
      res["CommandArgs"] = boost::any(*commandArgs);
    }
    if (configMapMountDesc) {
      res["ConfigMapMountDesc"] = boost::any(*configMapMountDesc);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (customHostAlias) {
      res["CustomHostAlias"] = boost::any(*customHostAlias);
    }
    if (deploy) {
      res["Deploy"] = boost::any(*deploy);
    }
    if (edasContainerVersion) {
      res["EdasContainerVersion"] = boost::any(*edasContainerVersion);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (jarStartArgs) {
      res["JarStartArgs"] = boost::any(*jarStartArgs);
    }
    if (jarStartOptions) {
      res["JarStartOptions"] = boost::any(*jarStartOptions);
    }
    if (jdk) {
      res["Jdk"] = boost::any(*jdk);
    }
    if (kafkaConfigs) {
      res["KafkaConfigs"] = boost::any(*kafkaConfigs);
    }
    if (liveness) {
      res["Liveness"] = boost::any(*liveness);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (mountDesc) {
      res["MountDesc"] = boost::any(*mountDesc);
    }
    if (mountHost) {
      res["MountHost"] = boost::any(*mountHost);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (nasId) {
      res["NasId"] = boost::any(*nasId);
    }
    if (ossAkId) {
      res["OssAkId"] = boost::any(*ossAkId);
    }
    if (ossAkSecret) {
      res["OssAkSecret"] = boost::any(*ossAkSecret);
    }
    if (ossMountDescs) {
      res["OssMountDescs"] = boost::any(*ossMountDescs);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (phpArmsConfigLocation) {
      res["PhpArmsConfigLocation"] = boost::any(*phpArmsConfigLocation);
    }
    if (phpConfig) {
      res["PhpConfig"] = boost::any(*phpConfig);
    }
    if (phpConfigLocation) {
      res["PhpConfigLocation"] = boost::any(*phpConfigLocation);
    }
    if (postStart) {
      res["PostStart"] = boost::any(*postStart);
    }
    if (preStop) {
      res["PreStop"] = boost::any(*preStop);
    }
    if (programmingLanguage) {
      res["ProgrammingLanguage"] = boost::any(*programmingLanguage);
    }
    if (readiness) {
      res["Readiness"] = boost::any(*readiness);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (slsConfigs) {
      res["SlsConfigs"] = boost::any(*slsConfigs);
    }
    if (terminationGracePeriodSeconds) {
      res["TerminationGracePeriodSeconds"] = boost::any(*terminationGracePeriodSeconds);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (tomcatConfig) {
      res["TomcatConfig"] = boost::any(*tomcatConfig);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (warStartOptions) {
      res["WarStartOptions"] = boost::any(*warStartOptions);
    }
    if (webContainer) {
      res["WebContainer"] = boost::any(*webContainer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcrAssumeRoleArn") != m.end() && !m["AcrAssumeRoleArn"].empty()) {
      acrAssumeRoleArn = make_shared<string>(boost::any_cast<string>(m["AcrAssumeRoleArn"]));
    }
    if (m.find("AcrInstanceId") != m.end() && !m["AcrInstanceId"].empty()) {
      acrInstanceId = make_shared<string>(boost::any_cast<string>(m["AcrInstanceId"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AssociateEip") != m.end() && !m["AssociateEip"].empty()) {
      associateEip = make_shared<bool>(boost::any_cast<bool>(m["AssociateEip"]));
    }
    if (m.find("AutoConfig") != m.end() && !m["AutoConfig"].empty()) {
      autoConfig = make_shared<bool>(boost::any_cast<bool>(m["AutoConfig"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("CommandArgs") != m.end() && !m["CommandArgs"].empty()) {
      commandArgs = make_shared<string>(boost::any_cast<string>(m["CommandArgs"]));
    }
    if (m.find("ConfigMapMountDesc") != m.end() && !m["ConfigMapMountDesc"].empty()) {
      configMapMountDesc = make_shared<string>(boost::any_cast<string>(m["ConfigMapMountDesc"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CustomHostAlias") != m.end() && !m["CustomHostAlias"].empty()) {
      customHostAlias = make_shared<string>(boost::any_cast<string>(m["CustomHostAlias"]));
    }
    if (m.find("Deploy") != m.end() && !m["Deploy"].empty()) {
      deploy = make_shared<bool>(boost::any_cast<bool>(m["Deploy"]));
    }
    if (m.find("EdasContainerVersion") != m.end() && !m["EdasContainerVersion"].empty()) {
      edasContainerVersion = make_shared<string>(boost::any_cast<string>(m["EdasContainerVersion"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      envs = make_shared<string>(boost::any_cast<string>(m["Envs"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("JarStartArgs") != m.end() && !m["JarStartArgs"].empty()) {
      jarStartArgs = make_shared<string>(boost::any_cast<string>(m["JarStartArgs"]));
    }
    if (m.find("JarStartOptions") != m.end() && !m["JarStartOptions"].empty()) {
      jarStartOptions = make_shared<string>(boost::any_cast<string>(m["JarStartOptions"]));
    }
    if (m.find("Jdk") != m.end() && !m["Jdk"].empty()) {
      jdk = make_shared<string>(boost::any_cast<string>(m["Jdk"]));
    }
    if (m.find("KafkaConfigs") != m.end() && !m["KafkaConfigs"].empty()) {
      kafkaConfigs = make_shared<string>(boost::any_cast<string>(m["KafkaConfigs"]));
    }
    if (m.find("Liveness") != m.end() && !m["Liveness"].empty()) {
      liveness = make_shared<string>(boost::any_cast<string>(m["Liveness"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("MountDesc") != m.end() && !m["MountDesc"].empty()) {
      mountDesc = make_shared<string>(boost::any_cast<string>(m["MountDesc"]));
    }
    if (m.find("MountHost") != m.end() && !m["MountHost"].empty()) {
      mountHost = make_shared<string>(boost::any_cast<string>(m["MountHost"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NasId") != m.end() && !m["NasId"].empty()) {
      nasId = make_shared<string>(boost::any_cast<string>(m["NasId"]));
    }
    if (m.find("OssAkId") != m.end() && !m["OssAkId"].empty()) {
      ossAkId = make_shared<string>(boost::any_cast<string>(m["OssAkId"]));
    }
    if (m.find("OssAkSecret") != m.end() && !m["OssAkSecret"].empty()) {
      ossAkSecret = make_shared<string>(boost::any_cast<string>(m["OssAkSecret"]));
    }
    if (m.find("OssMountDescs") != m.end() && !m["OssMountDescs"].empty()) {
      ossMountDescs = make_shared<string>(boost::any_cast<string>(m["OssMountDescs"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("PhpArmsConfigLocation") != m.end() && !m["PhpArmsConfigLocation"].empty()) {
      phpArmsConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpArmsConfigLocation"]));
    }
    if (m.find("PhpConfig") != m.end() && !m["PhpConfig"].empty()) {
      phpConfig = make_shared<string>(boost::any_cast<string>(m["PhpConfig"]));
    }
    if (m.find("PhpConfigLocation") != m.end() && !m["PhpConfigLocation"].empty()) {
      phpConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpConfigLocation"]));
    }
    if (m.find("PostStart") != m.end() && !m["PostStart"].empty()) {
      postStart = make_shared<string>(boost::any_cast<string>(m["PostStart"]));
    }
    if (m.find("PreStop") != m.end() && !m["PreStop"].empty()) {
      preStop = make_shared<string>(boost::any_cast<string>(m["PreStop"]));
    }
    if (m.find("ProgrammingLanguage") != m.end() && !m["ProgrammingLanguage"].empty()) {
      programmingLanguage = make_shared<string>(boost::any_cast<string>(m["ProgrammingLanguage"]));
    }
    if (m.find("Readiness") != m.end() && !m["Readiness"].empty()) {
      readiness = make_shared<string>(boost::any_cast<string>(m["Readiness"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SlsConfigs") != m.end() && !m["SlsConfigs"].empty()) {
      slsConfigs = make_shared<string>(boost::any_cast<string>(m["SlsConfigs"]));
    }
    if (m.find("TerminationGracePeriodSeconds") != m.end() && !m["TerminationGracePeriodSeconds"].empty()) {
      terminationGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["TerminationGracePeriodSeconds"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("TomcatConfig") != m.end() && !m["TomcatConfig"].empty()) {
      tomcatConfig = make_shared<string>(boost::any_cast<string>(m["TomcatConfig"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WarStartOptions") != m.end() && !m["WarStartOptions"].empty()) {
      warStartOptions = make_shared<string>(boost::any_cast<string>(m["WarStartOptions"]));
    }
    if (m.find("WebContainer") != m.end() && !m["WebContainer"].empty()) {
      webContainer = make_shared<string>(boost::any_cast<string>(m["WebContainer"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> changeOrderId{};

  CreateApplicationResponseBodyData() {}

  explicit CreateApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~CreateApplicationResponseBodyData() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<bool> scalingRuleEnable{};
  shared_ptr<string> scalingRuleMetric{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<string> scalingRuleTimer{};
  shared_ptr<string> scalingRuleType{};

  CreateApplicationScalingRuleRequest() {}

  explicit CreateApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (scalingRuleEnable) {
      res["ScalingRuleEnable"] = boost::any(*scalingRuleEnable);
    }
    if (scalingRuleMetric) {
      res["ScalingRuleMetric"] = boost::any(*scalingRuleMetric);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (scalingRuleTimer) {
      res["ScalingRuleTimer"] = boost::any(*scalingRuleTimer);
    }
    if (scalingRuleType) {
      res["ScalingRuleType"] = boost::any(*scalingRuleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("ScalingRuleEnable") != m.end() && !m["ScalingRuleEnable"].empty()) {
      scalingRuleEnable = make_shared<bool>(boost::any_cast<bool>(m["ScalingRuleEnable"]));
    }
    if (m.find("ScalingRuleMetric") != m.end() && !m["ScalingRuleMetric"].empty()) {
      scalingRuleMetric = make_shared<string>(boost::any_cast<string>(m["ScalingRuleMetric"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("ScalingRuleTimer") != m.end() && !m["ScalingRuleTimer"].empty()) {
      scalingRuleTimer = make_shared<string>(boost::any_cast<string>(m["ScalingRuleTimer"]));
    }
    if (m.find("ScalingRuleType") != m.end() && !m["ScalingRuleType"].empty()) {
      scalingRuleType = make_shared<string>(boost::any_cast<string>(m["ScalingRuleType"]));
    }
  }


  virtual ~CreateApplicationScalingRuleRequest() = default;
};
class CreateApplicationScalingRuleResponseBodyDataMetricMetrics : public Darabonba::Model {
public:
  shared_ptr<long> metricTargetAverageUtilization{};
  shared_ptr<string> metricType{};

  CreateApplicationScalingRuleResponseBodyDataMetricMetrics() {}

  explicit CreateApplicationScalingRuleResponseBodyDataMetricMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricTargetAverageUtilization) {
      res["MetricTargetAverageUtilization"] = boost::any(*metricTargetAverageUtilization);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricTargetAverageUtilization") != m.end() && !m["MetricTargetAverageUtilization"].empty()) {
      metricTargetAverageUtilization = make_shared<long>(boost::any_cast<long>(m["MetricTargetAverageUtilization"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBodyDataMetricMetrics() = default;
};
class CreateApplicationScalingRuleResponseBodyDataMetric : public Darabonba::Model {
public:
  shared_ptr<long> maxReplicas{};
  shared_ptr<vector<CreateApplicationScalingRuleResponseBodyDataMetricMetrics>> metrics{};
  shared_ptr<long> minReplicas{};

  CreateApplicationScalingRuleResponseBodyDataMetric() {}

  explicit CreateApplicationScalingRuleResponseBodyDataMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<CreateApplicationScalingRuleResponseBodyDataMetricMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateApplicationScalingRuleResponseBodyDataMetricMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<CreateApplicationScalingRuleResponseBodyDataMetricMetrics>>(expect1);
      }
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBodyDataMetric() = default;
};
class CreateApplicationScalingRuleResponseBodyDataTimerSchedules : public Darabonba::Model {
public:
  shared_ptr<string> atTime{};
  shared_ptr<long> targetReplicas{};

  CreateApplicationScalingRuleResponseBodyDataTimerSchedules() {}

  explicit CreateApplicationScalingRuleResponseBodyDataTimerSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atTime) {
      res["AtTime"] = boost::any(*atTime);
    }
    if (targetReplicas) {
      res["TargetReplicas"] = boost::any(*targetReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AtTime") != m.end() && !m["AtTime"].empty()) {
      atTime = make_shared<string>(boost::any_cast<string>(m["AtTime"]));
    }
    if (m.find("TargetReplicas") != m.end() && !m["TargetReplicas"].empty()) {
      targetReplicas = make_shared<long>(boost::any_cast<long>(m["TargetReplicas"]));
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBodyDataTimerSchedules() = default;
};
class CreateApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> period{};
  shared_ptr<vector<CreateApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules{};

  CreateApplicationScalingRuleResponseBodyDataTimer() {}

  explicit CreateApplicationScalingRuleResponseBodyDataTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<CreateApplicationScalingRuleResponseBodyDataTimerSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateApplicationScalingRuleResponseBodyDataTimerSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<CreateApplicationScalingRuleResponseBodyDataTimerSchedules>>(expect1);
      }
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBodyDataTimer() = default;
};
class CreateApplicationScalingRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> lastDisableTime{};
  shared_ptr<CreateApplicationScalingRuleResponseBodyDataMetric> metric{};
  shared_ptr<bool> scaleRuleEnabled{};
  shared_ptr<string> scaleRuleName{};
  shared_ptr<string> scaleRuleType{};
  shared_ptr<CreateApplicationScalingRuleResponseBodyDataTimer> timer{};
  shared_ptr<long> updateTime{};

  CreateApplicationScalingRuleResponseBodyData() {}

  explicit CreateApplicationScalingRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastDisableTime) {
      res["LastDisableTime"] = boost::any(*lastDisableTime);
    }
    if (metric) {
      res["Metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleRuleEnabled) {
      res["ScaleRuleEnabled"] = boost::any(*scaleRuleEnabled);
    }
    if (scaleRuleName) {
      res["ScaleRuleName"] = boost::any(*scaleRuleName);
    }
    if (scaleRuleType) {
      res["ScaleRuleType"] = boost::any(*scaleRuleType);
    }
    if (timer) {
      res["Timer"] = timer ? boost::any(timer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastDisableTime") != m.end() && !m["LastDisableTime"].empty()) {
      lastDisableTime = make_shared<long>(boost::any_cast<long>(m["LastDisableTime"]));
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metric"].type()) {
        CreateApplicationScalingRuleResponseBodyDataMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metric"]));
        metric = make_shared<CreateApplicationScalingRuleResponseBodyDataMetric>(model1);
      }
    }
    if (m.find("ScaleRuleEnabled") != m.end() && !m["ScaleRuleEnabled"].empty()) {
      scaleRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["ScaleRuleEnabled"]));
    }
    if (m.find("ScaleRuleName") != m.end() && !m["ScaleRuleName"].empty()) {
      scaleRuleName = make_shared<string>(boost::any_cast<string>(m["ScaleRuleName"]));
    }
    if (m.find("ScaleRuleType") != m.end() && !m["ScaleRuleType"].empty()) {
      scaleRuleType = make_shared<string>(boost::any_cast<string>(m["ScaleRuleType"]));
    }
    if (m.find("Timer") != m.end() && !m["Timer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Timer"].type()) {
        CreateApplicationScalingRuleResponseBodyDataTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Timer"]));
        timer = make_shared<CreateApplicationScalingRuleResponseBodyDataTimer>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBodyData() = default;
};
class CreateApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationScalingRuleResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  CreateApplicationScalingRuleResponseBody() {}

  explicit CreateApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateApplicationScalingRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateApplicationScalingRuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateApplicationScalingRuleResponseBody() = default;
};
class CreateApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationScalingRuleResponseBody> body{};

  CreateApplicationScalingRuleResponse() {}

  explicit CreateApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationScalingRuleResponse() = default;
};
class CreateConfigMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};

  CreateConfigMapRequest() {}

  explicit CreateConfigMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~CreateConfigMapRequest() = default;
};
class CreateConfigMapResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};

  CreateConfigMapResponseBodyData() {}

  explicit CreateConfigMapResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
  }


  virtual ~CreateConfigMapResponseBodyData() = default;
};
class CreateConfigMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateConfigMapResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateConfigMapResponseBody() {}

  explicit CreateConfigMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateConfigMapResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateConfigMapResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateConfigMapResponseBody() = default;
};
class CreateConfigMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConfigMapResponseBody> body{};

  CreateConfigMapResponse() {}

  explicit CreateConfigMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConfigMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConfigMapResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConfigMapResponse() = default;
};
class CreateGreyTagRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> dubboRules{};
  shared_ptr<string> name{};
  shared_ptr<string> scRules{};

  CreateGreyTagRouteRequest() {}

  explicit CreateGreyTagRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dubboRules) {
      res["DubboRules"] = boost::any(*dubboRules);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scRules) {
      res["ScRules"] = boost::any(*scRules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DubboRules") != m.end() && !m["DubboRules"].empty()) {
      dubboRules = make_shared<string>(boost::any_cast<string>(m["DubboRules"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScRules") != m.end() && !m["ScRules"].empty()) {
      scRules = make_shared<string>(boost::any_cast<string>(m["ScRules"]));
    }
  }


  virtual ~CreateGreyTagRouteRequest() = default;
};
class CreateGreyTagRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> greyTagRouteId{};

  CreateGreyTagRouteResponseBodyData() {}

  explicit CreateGreyTagRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
  }


  virtual ~CreateGreyTagRouteResponseBodyData() = default;
};
class CreateGreyTagRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateGreyTagRouteResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateGreyTagRouteResponseBody() {}

  explicit CreateGreyTagRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateGreyTagRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateGreyTagRouteResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateGreyTagRouteResponseBody() = default;
};
class CreateGreyTagRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGreyTagRouteResponseBody> body{};

  CreateGreyTagRouteResponse() {}

  explicit CreateGreyTagRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGreyTagRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGreyTagRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGreyTagRouteResponse() = default;
};
class CreateIngressRequest : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<string> defaultRule{};
  shared_ptr<string> description{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalanceType{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> rules{};
  shared_ptr<string> slbId{};

  CreateIngressRequest() {}

  explicit CreateIngressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (defaultRule) {
      res["DefaultRule"] = boost::any(*defaultRule);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalanceType) {
      res["LoadBalanceType"] = boost::any(*loadBalanceType);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("DefaultRule") != m.end() && !m["DefaultRule"].empty()) {
      defaultRule = make_shared<string>(boost::any_cast<string>(m["DefaultRule"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalanceType") != m.end() && !m["LoadBalanceType"].empty()) {
      loadBalanceType = make_shared<string>(boost::any_cast<string>(m["LoadBalanceType"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
  }


  virtual ~CreateIngressRequest() = default;
};
class CreateIngressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ingressId{};

  CreateIngressResponseBodyData() {}

  explicit CreateIngressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
  }


  virtual ~CreateIngressResponseBodyData() = default;
};
class CreateIngressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateIngressResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateIngressResponseBody() {}

  explicit CreateIngressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateIngressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateIngressResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateIngressResponseBody() = default;
};
class CreateIngressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIngressResponseBody> body{};

  CreateIngressResponse() {}

  explicit CreateIngressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIngressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIngressResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIngressResponse() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~CreateNamespaceRequest() = default;
};
class CreateNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> regionId{};

  CreateNamespaceResponseBodyData() {}

  explicit CreateNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateNamespaceResponseBodyData() = default;
};
class CreateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  CreateNamespaceResponseBody() {}

  explicit CreateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~CreateNamespaceResponseBody() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  DeleteApplicationResponseBodyData() {}

  explicit DeleteApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~DeleteApplicationResponseBodyData() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> scalingRuleName{};

  DeleteApplicationScalingRuleRequest() {}

  explicit DeleteApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~DeleteApplicationScalingRuleRequest() = default;
};
class DeleteApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  DeleteApplicationScalingRuleResponseBody() {}

  explicit DeleteApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteApplicationScalingRuleResponseBody() = default;
};
class DeleteApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationScalingRuleResponseBody> body{};

  DeleteApplicationScalingRuleResponse() {}

  explicit DeleteApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationScalingRuleResponse() = default;
};
class DeleteConfigMapRequest : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};

  DeleteConfigMapRequest() {}

  explicit DeleteConfigMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
  }


  virtual ~DeleteConfigMapRequest() = default;
};
class DeleteConfigMapResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};

  DeleteConfigMapResponseBodyData() {}

  explicit DeleteConfigMapResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
  }


  virtual ~DeleteConfigMapResponseBodyData() = default;
};
class DeleteConfigMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteConfigMapResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteConfigMapResponseBody() {}

  explicit DeleteConfigMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteConfigMapResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteConfigMapResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteConfigMapResponseBody() = default;
};
class DeleteConfigMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConfigMapResponseBody> body{};

  DeleteConfigMapResponse() {}

  explicit DeleteConfigMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConfigMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConfigMapResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConfigMapResponse() = default;
};
class DeleteGreyTagRouteRequest : public Darabonba::Model {
public:
  shared_ptr<long> greyTagRouteId{};

  DeleteGreyTagRouteRequest() {}

  explicit DeleteGreyTagRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
  }


  virtual ~DeleteGreyTagRouteRequest() = default;
};
class DeleteGreyTagRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> greyTagRouteId{};

  DeleteGreyTagRouteResponseBodyData() {}

  explicit DeleteGreyTagRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
  }


  virtual ~DeleteGreyTagRouteResponseBodyData() = default;
};
class DeleteGreyTagRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteGreyTagRouteResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteGreyTagRouteResponseBody() {}

  explicit DeleteGreyTagRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteGreyTagRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteGreyTagRouteResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteGreyTagRouteResponseBody() = default;
};
class DeleteGreyTagRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGreyTagRouteResponseBody> body{};

  DeleteGreyTagRouteResponse() {}

  explicit DeleteGreyTagRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGreyTagRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGreyTagRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGreyTagRouteResponse() = default;
};
class DeleteIngressRequest : public Darabonba::Model {
public:
  shared_ptr<long> ingressId{};

  DeleteIngressRequest() {}

  explicit DeleteIngressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
  }


  virtual ~DeleteIngressRequest() = default;
};
class DeleteIngressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ingressId{};

  DeleteIngressResponseBodyData() {}

  explicit DeleteIngressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
  }


  virtual ~DeleteIngressResponseBodyData() = default;
};
class DeleteIngressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteIngressResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteIngressResponseBody() {}

  explicit DeleteIngressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteIngressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteIngressResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteIngressResponseBody() = default;
};
class DeleteIngressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIngressResponseBody> body{};

  DeleteIngressResponse() {}

  explicit DeleteIngressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIngressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIngressResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIngressResponse() = default;
};
class DeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};

  DeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNamespaceRequest() = default;
};
class DeleteNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeleteNamespaceResponseBody() {}

  explicit DeleteNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeleteNamespaceResponseBody() = default;
};
class DeleteNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNamespaceResponseBody> body{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DeployApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> acrAssumeRoleArn{};
  shared_ptr<string> acrInstanceId{};
  shared_ptr<string> appId{};
  shared_ptr<bool> associateEip{};
  shared_ptr<bool> autoEnableApplicationScalingRule{};
  shared_ptr<long> batchWaitTime{};
  shared_ptr<string> changeOrderDesc{};
  shared_ptr<string> command{};
  shared_ptr<string> commandArgs{};
  shared_ptr<string> configMapMountDesc{};
  shared_ptr<string> customHostAlias{};
  shared_ptr<string> edasContainerVersion{};
  shared_ptr<string> enableAhas{};
  shared_ptr<bool> enableGreyTagRoute{};
  shared_ptr<string> envs{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> jarStartArgs{};
  shared_ptr<string> jarStartOptions{};
  shared_ptr<string> jdk{};
  shared_ptr<string> kafkaConfigs{};
  shared_ptr<string> liveness{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<string> mountDesc{};
  shared_ptr<string> mountHost{};
  shared_ptr<string> nasId{};
  shared_ptr<string> ossAkId{};
  shared_ptr<string> ossAkSecret{};
  shared_ptr<string> ossMountDescs{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> phpArmsConfigLocation{};
  shared_ptr<string> phpConfig{};
  shared_ptr<string> phpConfigLocation{};
  shared_ptr<string> postStart{};
  shared_ptr<string> preStop{};
  shared_ptr<string> readiness{};
  shared_ptr<string> slsConfigs{};
  shared_ptr<long> terminationGracePeriodSeconds{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tomcatConfig{};
  shared_ptr<string> updateStrategy{};
  shared_ptr<string> warStartOptions{};
  shared_ptr<string> webContainer{};

  DeployApplicationRequest() {}

  explicit DeployApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrAssumeRoleArn) {
      res["AcrAssumeRoleArn"] = boost::any(*acrAssumeRoleArn);
    }
    if (acrInstanceId) {
      res["AcrInstanceId"] = boost::any(*acrInstanceId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (associateEip) {
      res["AssociateEip"] = boost::any(*associateEip);
    }
    if (autoEnableApplicationScalingRule) {
      res["AutoEnableApplicationScalingRule"] = boost::any(*autoEnableApplicationScalingRule);
    }
    if (batchWaitTime) {
      res["BatchWaitTime"] = boost::any(*batchWaitTime);
    }
    if (changeOrderDesc) {
      res["ChangeOrderDesc"] = boost::any(*changeOrderDesc);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (commandArgs) {
      res["CommandArgs"] = boost::any(*commandArgs);
    }
    if (configMapMountDesc) {
      res["ConfigMapMountDesc"] = boost::any(*configMapMountDesc);
    }
    if (customHostAlias) {
      res["CustomHostAlias"] = boost::any(*customHostAlias);
    }
    if (edasContainerVersion) {
      res["EdasContainerVersion"] = boost::any(*edasContainerVersion);
    }
    if (enableAhas) {
      res["EnableAhas"] = boost::any(*enableAhas);
    }
    if (enableGreyTagRoute) {
      res["EnableGreyTagRoute"] = boost::any(*enableGreyTagRoute);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (jarStartArgs) {
      res["JarStartArgs"] = boost::any(*jarStartArgs);
    }
    if (jarStartOptions) {
      res["JarStartOptions"] = boost::any(*jarStartOptions);
    }
    if (jdk) {
      res["Jdk"] = boost::any(*jdk);
    }
    if (kafkaConfigs) {
      res["KafkaConfigs"] = boost::any(*kafkaConfigs);
    }
    if (liveness) {
      res["Liveness"] = boost::any(*liveness);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (mountDesc) {
      res["MountDesc"] = boost::any(*mountDesc);
    }
    if (mountHost) {
      res["MountHost"] = boost::any(*mountHost);
    }
    if (nasId) {
      res["NasId"] = boost::any(*nasId);
    }
    if (ossAkId) {
      res["OssAkId"] = boost::any(*ossAkId);
    }
    if (ossAkSecret) {
      res["OssAkSecret"] = boost::any(*ossAkSecret);
    }
    if (ossMountDescs) {
      res["OssMountDescs"] = boost::any(*ossMountDescs);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (phpArmsConfigLocation) {
      res["PhpArmsConfigLocation"] = boost::any(*phpArmsConfigLocation);
    }
    if (phpConfig) {
      res["PhpConfig"] = boost::any(*phpConfig);
    }
    if (phpConfigLocation) {
      res["PhpConfigLocation"] = boost::any(*phpConfigLocation);
    }
    if (postStart) {
      res["PostStart"] = boost::any(*postStart);
    }
    if (preStop) {
      res["PreStop"] = boost::any(*preStop);
    }
    if (readiness) {
      res["Readiness"] = boost::any(*readiness);
    }
    if (slsConfigs) {
      res["SlsConfigs"] = boost::any(*slsConfigs);
    }
    if (terminationGracePeriodSeconds) {
      res["TerminationGracePeriodSeconds"] = boost::any(*terminationGracePeriodSeconds);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (tomcatConfig) {
      res["TomcatConfig"] = boost::any(*tomcatConfig);
    }
    if (updateStrategy) {
      res["UpdateStrategy"] = boost::any(*updateStrategy);
    }
    if (warStartOptions) {
      res["WarStartOptions"] = boost::any(*warStartOptions);
    }
    if (webContainer) {
      res["WebContainer"] = boost::any(*webContainer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcrAssumeRoleArn") != m.end() && !m["AcrAssumeRoleArn"].empty()) {
      acrAssumeRoleArn = make_shared<string>(boost::any_cast<string>(m["AcrAssumeRoleArn"]));
    }
    if (m.find("AcrInstanceId") != m.end() && !m["AcrInstanceId"].empty()) {
      acrInstanceId = make_shared<string>(boost::any_cast<string>(m["AcrInstanceId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AssociateEip") != m.end() && !m["AssociateEip"].empty()) {
      associateEip = make_shared<bool>(boost::any_cast<bool>(m["AssociateEip"]));
    }
    if (m.find("AutoEnableApplicationScalingRule") != m.end() && !m["AutoEnableApplicationScalingRule"].empty()) {
      autoEnableApplicationScalingRule = make_shared<bool>(boost::any_cast<bool>(m["AutoEnableApplicationScalingRule"]));
    }
    if (m.find("BatchWaitTime") != m.end() && !m["BatchWaitTime"].empty()) {
      batchWaitTime = make_shared<long>(boost::any_cast<long>(m["BatchWaitTime"]));
    }
    if (m.find("ChangeOrderDesc") != m.end() && !m["ChangeOrderDesc"].empty()) {
      changeOrderDesc = make_shared<string>(boost::any_cast<string>(m["ChangeOrderDesc"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("CommandArgs") != m.end() && !m["CommandArgs"].empty()) {
      commandArgs = make_shared<string>(boost::any_cast<string>(m["CommandArgs"]));
    }
    if (m.find("ConfigMapMountDesc") != m.end() && !m["ConfigMapMountDesc"].empty()) {
      configMapMountDesc = make_shared<string>(boost::any_cast<string>(m["ConfigMapMountDesc"]));
    }
    if (m.find("CustomHostAlias") != m.end() && !m["CustomHostAlias"].empty()) {
      customHostAlias = make_shared<string>(boost::any_cast<string>(m["CustomHostAlias"]));
    }
    if (m.find("EdasContainerVersion") != m.end() && !m["EdasContainerVersion"].empty()) {
      edasContainerVersion = make_shared<string>(boost::any_cast<string>(m["EdasContainerVersion"]));
    }
    if (m.find("EnableAhas") != m.end() && !m["EnableAhas"].empty()) {
      enableAhas = make_shared<string>(boost::any_cast<string>(m["EnableAhas"]));
    }
    if (m.find("EnableGreyTagRoute") != m.end() && !m["EnableGreyTagRoute"].empty()) {
      enableGreyTagRoute = make_shared<bool>(boost::any_cast<bool>(m["EnableGreyTagRoute"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      envs = make_shared<string>(boost::any_cast<string>(m["Envs"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("JarStartArgs") != m.end() && !m["JarStartArgs"].empty()) {
      jarStartArgs = make_shared<string>(boost::any_cast<string>(m["JarStartArgs"]));
    }
    if (m.find("JarStartOptions") != m.end() && !m["JarStartOptions"].empty()) {
      jarStartOptions = make_shared<string>(boost::any_cast<string>(m["JarStartOptions"]));
    }
    if (m.find("Jdk") != m.end() && !m["Jdk"].empty()) {
      jdk = make_shared<string>(boost::any_cast<string>(m["Jdk"]));
    }
    if (m.find("KafkaConfigs") != m.end() && !m["KafkaConfigs"].empty()) {
      kafkaConfigs = make_shared<string>(boost::any_cast<string>(m["KafkaConfigs"]));
    }
    if (m.find("Liveness") != m.end() && !m["Liveness"].empty()) {
      liveness = make_shared<string>(boost::any_cast<string>(m["Liveness"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("MountDesc") != m.end() && !m["MountDesc"].empty()) {
      mountDesc = make_shared<string>(boost::any_cast<string>(m["MountDesc"]));
    }
    if (m.find("MountHost") != m.end() && !m["MountHost"].empty()) {
      mountHost = make_shared<string>(boost::any_cast<string>(m["MountHost"]));
    }
    if (m.find("NasId") != m.end() && !m["NasId"].empty()) {
      nasId = make_shared<string>(boost::any_cast<string>(m["NasId"]));
    }
    if (m.find("OssAkId") != m.end() && !m["OssAkId"].empty()) {
      ossAkId = make_shared<string>(boost::any_cast<string>(m["OssAkId"]));
    }
    if (m.find("OssAkSecret") != m.end() && !m["OssAkSecret"].empty()) {
      ossAkSecret = make_shared<string>(boost::any_cast<string>(m["OssAkSecret"]));
    }
    if (m.find("OssMountDescs") != m.end() && !m["OssMountDescs"].empty()) {
      ossMountDescs = make_shared<string>(boost::any_cast<string>(m["OssMountDescs"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("PhpArmsConfigLocation") != m.end() && !m["PhpArmsConfigLocation"].empty()) {
      phpArmsConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpArmsConfigLocation"]));
    }
    if (m.find("PhpConfig") != m.end() && !m["PhpConfig"].empty()) {
      phpConfig = make_shared<string>(boost::any_cast<string>(m["PhpConfig"]));
    }
    if (m.find("PhpConfigLocation") != m.end() && !m["PhpConfigLocation"].empty()) {
      phpConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpConfigLocation"]));
    }
    if (m.find("PostStart") != m.end() && !m["PostStart"].empty()) {
      postStart = make_shared<string>(boost::any_cast<string>(m["PostStart"]));
    }
    if (m.find("PreStop") != m.end() && !m["PreStop"].empty()) {
      preStop = make_shared<string>(boost::any_cast<string>(m["PreStop"]));
    }
    if (m.find("Readiness") != m.end() && !m["Readiness"].empty()) {
      readiness = make_shared<string>(boost::any_cast<string>(m["Readiness"]));
    }
    if (m.find("SlsConfigs") != m.end() && !m["SlsConfigs"].empty()) {
      slsConfigs = make_shared<string>(boost::any_cast<string>(m["SlsConfigs"]));
    }
    if (m.find("TerminationGracePeriodSeconds") != m.end() && !m["TerminationGracePeriodSeconds"].empty()) {
      terminationGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["TerminationGracePeriodSeconds"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("TomcatConfig") != m.end() && !m["TomcatConfig"].empty()) {
      tomcatConfig = make_shared<string>(boost::any_cast<string>(m["TomcatConfig"]));
    }
    if (m.find("UpdateStrategy") != m.end() && !m["UpdateStrategy"].empty()) {
      updateStrategy = make_shared<string>(boost::any_cast<string>(m["UpdateStrategy"]));
    }
    if (m.find("WarStartOptions") != m.end() && !m["WarStartOptions"].empty()) {
      warStartOptions = make_shared<string>(boost::any_cast<string>(m["WarStartOptions"]));
    }
    if (m.find("WebContainer") != m.end() && !m["WebContainer"].empty()) {
      webContainer = make_shared<string>(boost::any_cast<string>(m["WebContainer"]));
    }
  }


  virtual ~DeployApplicationRequest() = default;
};
class DeployApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> changeOrderId{};
  shared_ptr<bool> isNeedApproval{};

  DeployApplicationResponseBodyData() {}

  explicit DeployApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    if (isNeedApproval) {
      res["IsNeedApproval"] = boost::any(*isNeedApproval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
    if (m.find("IsNeedApproval") != m.end() && !m["IsNeedApproval"].empty()) {
      isNeedApproval = make_shared<bool>(boost::any_cast<bool>(m["IsNeedApproval"]));
    }
  }


  virtual ~DeployApplicationResponseBodyData() = default;
};
class DeployApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeployApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DeployApplicationResponseBody() {}

  explicit DeployApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeployApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeployApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DeployApplicationResponseBody() = default;
};
class DeployApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployApplicationResponseBody> body{};

  DeployApplicationResponse() {}

  explicit DeployApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeployApplicationResponse() = default;
};
class DescribeAppServiceDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> serviceGroup{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceVersion{};

  DescribeAppServiceDetailRequest() {}

  explicit DescribeAppServiceDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (serviceGroup) {
      res["ServiceGroup"] = boost::any(*serviceGroup);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ServiceGroup") != m.end() && !m["ServiceGroup"].empty()) {
      serviceGroup = make_shared<string>(boost::any_cast<string>(m["ServiceGroup"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~DescribeAppServiceDetailRequest() = default;
};
class DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions() {}

  explicit DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions() = default;
};
class DescribeAppServiceDetailResponseBodyDataMethods : public Darabonba::Model {
public:
  shared_ptr<string> methodController{};
  shared_ptr<string> name{};
  shared_ptr<string> nameDetail{};
  shared_ptr<vector<DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions>> parameterDefinitions{};
  shared_ptr<vector<string>> parameterDetails{};
  shared_ptr<vector<string>> parameterTypes{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<vector<string>> requestMethods{};
  shared_ptr<string> returnDetails{};
  shared_ptr<string> returnType{};

  DescribeAppServiceDetailResponseBodyDataMethods() {}

  explicit DescribeAppServiceDetailResponseBodyDataMethods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (methodController) {
      res["MethodController"] = boost::any(*methodController);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nameDetail) {
      res["NameDetail"] = boost::any(*nameDetail);
    }
    if (parameterDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*parameterDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterDefinitions"] = boost::any(temp1);
    }
    if (parameterDetails) {
      res["ParameterDetails"] = boost::any(*parameterDetails);
    }
    if (parameterTypes) {
      res["ParameterTypes"] = boost::any(*parameterTypes);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (requestMethods) {
      res["RequestMethods"] = boost::any(*requestMethods);
    }
    if (returnDetails) {
      res["ReturnDetails"] = boost::any(*returnDetails);
    }
    if (returnType) {
      res["ReturnType"] = boost::any(*returnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MethodController") != m.end() && !m["MethodController"].empty()) {
      methodController = make_shared<string>(boost::any_cast<string>(m["MethodController"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NameDetail") != m.end() && !m["NameDetail"].empty()) {
      nameDetail = make_shared<string>(boost::any_cast<string>(m["NameDetail"]));
    }
    if (m.find("ParameterDefinitions") != m.end() && !m["ParameterDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterDefinitions"].type()) {
        vector<DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterDefinitions = make_shared<vector<DescribeAppServiceDetailResponseBodyDataMethodsParameterDefinitions>>(expect1);
      }
    }
    if (m.find("ParameterDetails") != m.end() && !m["ParameterDetails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParameterDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParameterDetails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parameterDetails = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParameterTypes") != m.end() && !m["ParameterTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParameterTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParameterTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parameterTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestMethods") != m.end() && !m["RequestMethods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RequestMethods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RequestMethods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      requestMethods = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReturnDetails") != m.end() && !m["ReturnDetails"].empty()) {
      returnDetails = make_shared<string>(boost::any_cast<string>(m["ReturnDetails"]));
    }
    if (m.find("ReturnType") != m.end() && !m["ReturnType"].empty()) {
      returnType = make_shared<string>(boost::any_cast<string>(m["ReturnType"]));
    }
  }


  virtual ~DescribeAppServiceDetailResponseBodyDataMethods() = default;
};
class DescribeAppServiceDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dubboApplicationName{};
  shared_ptr<string> edasAppName{};
  shared_ptr<string> group{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<vector<DescribeAppServiceDetailResponseBodyDataMethods>> methods{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> springApplicationName{};
  shared_ptr<string> version{};

  DescribeAppServiceDetailResponseBodyData() {}

  explicit DescribeAppServiceDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboApplicationName) {
      res["DubboApplicationName"] = boost::any(*dubboApplicationName);
    }
    if (edasAppName) {
      res["EdasAppName"] = boost::any(*edasAppName);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (methods) {
      vector<boost::any> temp1;
      for(auto item1:*methods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Methods"] = boost::any(temp1);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (springApplicationName) {
      res["SpringApplicationName"] = boost::any(*springApplicationName);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DubboApplicationName") != m.end() && !m["DubboApplicationName"].empty()) {
      dubboApplicationName = make_shared<string>(boost::any_cast<string>(m["DubboApplicationName"]));
    }
    if (m.find("EdasAppName") != m.end() && !m["EdasAppName"].empty()) {
      edasAppName = make_shared<string>(boost::any_cast<string>(m["EdasAppName"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Methods") != m.end() && !m["Methods"].empty()) {
      if (typeid(vector<boost::any>) == m["Methods"].type()) {
        vector<DescribeAppServiceDetailResponseBodyDataMethods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Methods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppServiceDetailResponseBodyDataMethods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        methods = make_shared<vector<DescribeAppServiceDetailResponseBodyDataMethods>>(expect1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SpringApplicationName") != m.end() && !m["SpringApplicationName"].empty()) {
      springApplicationName = make_shared<string>(boost::any_cast<string>(m["SpringApplicationName"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppServiceDetailResponseBodyData() = default;
};
class DescribeAppServiceDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAppServiceDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeAppServiceDetailResponseBody() {}

  explicit DescribeAppServiceDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeAppServiceDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAppServiceDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeAppServiceDetailResponseBody() = default;
};
class DescribeAppServiceDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppServiceDetailResponseBody> body{};

  DescribeAppServiceDetailResponse() {}

  explicit DescribeAppServiceDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppServiceDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppServiceDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppServiceDetailResponse() = default;
};
class DescribeApplicationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> versionId{};

  DescribeApplicationConfigRequest() {}

  explicit DescribeApplicationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~DescribeApplicationConfigRequest() = default;
};
class DescribeApplicationConfigResponseBodyDataConfigMapMountDesc : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};
  shared_ptr<string> configMapName{};
  shared_ptr<string> key{};
  shared_ptr<string> mountPath{};

  DescribeApplicationConfigResponseBodyDataConfigMapMountDesc() {}

  explicit DescribeApplicationConfigResponseBodyDataConfigMapMountDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    if (configMapName) {
      res["ConfigMapName"] = boost::any(*configMapName);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
    if (m.find("ConfigMapName") != m.end() && !m["ConfigMapName"].empty()) {
      configMapName = make_shared<string>(boost::any_cast<string>(m["ConfigMapName"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~DescribeApplicationConfigResponseBodyDataConfigMapMountDesc() = default;
};
class DescribeApplicationConfigResponseBodyDataMountDesc : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> nasPath{};

  DescribeApplicationConfigResponseBodyDataMountDesc() {}

  explicit DescribeApplicationConfigResponseBodyDataMountDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (nasPath) {
      res["NasPath"] = boost::any(*nasPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("NasPath") != m.end() && !m["NasPath"].empty()) {
      nasPath = make_shared<string>(boost::any_cast<string>(m["NasPath"]));
    }
  }


  virtual ~DescribeApplicationConfigResponseBodyDataMountDesc() = default;
};
class DescribeApplicationConfigResponseBodyDataOssMountDescs : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPath{};
  shared_ptr<string> mountPath{};
  shared_ptr<bool> readOnly{};

  DescribeApplicationConfigResponseBodyDataOssMountDescs() {}

  explicit DescribeApplicationConfigResponseBodyDataOssMountDescs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (bucketPath) {
      res["bucketPath"] = boost::any(*bucketPath);
    }
    if (mountPath) {
      res["mountPath"] = boost::any(*mountPath);
    }
    if (readOnly) {
      res["readOnly"] = boost::any(*readOnly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("bucketPath") != m.end() && !m["bucketPath"].empty()) {
      bucketPath = make_shared<string>(boost::any_cast<string>(m["bucketPath"]));
    }
    if (m.find("mountPath") != m.end() && !m["mountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["mountPath"]));
    }
    if (m.find("readOnly") != m.end() && !m["readOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["readOnly"]));
    }
  }


  virtual ~DescribeApplicationConfigResponseBodyDataOssMountDescs() = default;
};
class DescribeApplicationConfigResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeApplicationConfigResponseBodyDataTags() {}

  explicit DescribeApplicationConfigResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeApplicationConfigResponseBodyDataTags() = default;
};
class DescribeApplicationConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> acrAssumeRoleArn{};
  shared_ptr<string> acrInstanceId{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<bool> associateEip{};
  shared_ptr<long> batchWaitTime{};
  shared_ptr<string> command{};
  shared_ptr<string> commandArgs{};
  shared_ptr<vector<DescribeApplicationConfigResponseBodyDataConfigMapMountDesc>> configMapMountDesc{};
  shared_ptr<long> cpu{};
  shared_ptr<string> customHostAlias{};
  shared_ptr<string> edasContainerVersion{};
  shared_ptr<string> enableAhas{};
  shared_ptr<bool> enableGreyTagRoute{};
  shared_ptr<string> envs{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> jarStartArgs{};
  shared_ptr<string> jarStartOptions{};
  shared_ptr<string> jdk{};
  shared_ptr<string> kafkaConfigs{};
  shared_ptr<string> liveness{};
  shared_ptr<long> memory{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<vector<DescribeApplicationConfigResponseBodyDataMountDesc>> mountDesc{};
  shared_ptr<string> mountHost{};
  shared_ptr<string> mseApplicationId{};
  shared_ptr<string> mseFeatureConfig{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> nasId{};
  shared_ptr<string> ossAkId{};
  shared_ptr<string> ossAkSecret{};
  shared_ptr<vector<DescribeApplicationConfigResponseBodyDataOssMountDescs>> ossMountDescs{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> phpArmsConfigLocation{};
  shared_ptr<string> phpConfig{};
  shared_ptr<string> phpConfigLocation{};
  shared_ptr<string> postStart{};
  shared_ptr<string> preStop{};
  shared_ptr<string> programmingLanguage{};
  shared_ptr<string> readiness{};
  shared_ptr<string> regionId{};
  shared_ptr<long> replicas{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> slsConfigs{};
  shared_ptr<vector<DescribeApplicationConfigResponseBodyDataTags>> tags{};
  shared_ptr<long> terminationGracePeriodSeconds{};
  shared_ptr<string> timezone{};
  shared_ptr<string> tomcatConfig{};
  shared_ptr<string> updateStrategy{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> warStartOptions{};
  shared_ptr<string> webContainer{};

  DescribeApplicationConfigResponseBodyData() {}

  explicit DescribeApplicationConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrAssumeRoleArn) {
      res["AcrAssumeRoleArn"] = boost::any(*acrAssumeRoleArn);
    }
    if (acrInstanceId) {
      res["AcrInstanceId"] = boost::any(*acrInstanceId);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (associateEip) {
      res["AssociateEip"] = boost::any(*associateEip);
    }
    if (batchWaitTime) {
      res["BatchWaitTime"] = boost::any(*batchWaitTime);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (commandArgs) {
      res["CommandArgs"] = boost::any(*commandArgs);
    }
    if (configMapMountDesc) {
      vector<boost::any> temp1;
      for(auto item1:*configMapMountDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigMapMountDesc"] = boost::any(temp1);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (customHostAlias) {
      res["CustomHostAlias"] = boost::any(*customHostAlias);
    }
    if (edasContainerVersion) {
      res["EdasContainerVersion"] = boost::any(*edasContainerVersion);
    }
    if (enableAhas) {
      res["EnableAhas"] = boost::any(*enableAhas);
    }
    if (enableGreyTagRoute) {
      res["EnableGreyTagRoute"] = boost::any(*enableGreyTagRoute);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (jarStartArgs) {
      res["JarStartArgs"] = boost::any(*jarStartArgs);
    }
    if (jarStartOptions) {
      res["JarStartOptions"] = boost::any(*jarStartOptions);
    }
    if (jdk) {
      res["Jdk"] = boost::any(*jdk);
    }
    if (kafkaConfigs) {
      res["KafkaConfigs"] = boost::any(*kafkaConfigs);
    }
    if (liveness) {
      res["Liveness"] = boost::any(*liveness);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (mountDesc) {
      vector<boost::any> temp1;
      for(auto item1:*mountDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountDesc"] = boost::any(temp1);
    }
    if (mountHost) {
      res["MountHost"] = boost::any(*mountHost);
    }
    if (mseApplicationId) {
      res["MseApplicationId"] = boost::any(*mseApplicationId);
    }
    if (mseFeatureConfig) {
      res["MseFeatureConfig"] = boost::any(*mseFeatureConfig);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (nasId) {
      res["NasId"] = boost::any(*nasId);
    }
    if (ossAkId) {
      res["OssAkId"] = boost::any(*ossAkId);
    }
    if (ossAkSecret) {
      res["OssAkSecret"] = boost::any(*ossAkSecret);
    }
    if (ossMountDescs) {
      vector<boost::any> temp1;
      for(auto item1:*ossMountDescs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OssMountDescs"] = boost::any(temp1);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (phpArmsConfigLocation) {
      res["PhpArmsConfigLocation"] = boost::any(*phpArmsConfigLocation);
    }
    if (phpConfig) {
      res["PhpConfig"] = boost::any(*phpConfig);
    }
    if (phpConfigLocation) {
      res["PhpConfigLocation"] = boost::any(*phpConfigLocation);
    }
    if (postStart) {
      res["PostStart"] = boost::any(*postStart);
    }
    if (preStop) {
      res["PreStop"] = boost::any(*preStop);
    }
    if (programmingLanguage) {
      res["ProgrammingLanguage"] = boost::any(*programmingLanguage);
    }
    if (readiness) {
      res["Readiness"] = boost::any(*readiness);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (slsConfigs) {
      res["SlsConfigs"] = boost::any(*slsConfigs);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (terminationGracePeriodSeconds) {
      res["TerminationGracePeriodSeconds"] = boost::any(*terminationGracePeriodSeconds);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (tomcatConfig) {
      res["TomcatConfig"] = boost::any(*tomcatConfig);
    }
    if (updateStrategy) {
      res["UpdateStrategy"] = boost::any(*updateStrategy);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (warStartOptions) {
      res["WarStartOptions"] = boost::any(*warStartOptions);
    }
    if (webContainer) {
      res["WebContainer"] = boost::any(*webContainer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcrAssumeRoleArn") != m.end() && !m["AcrAssumeRoleArn"].empty()) {
      acrAssumeRoleArn = make_shared<string>(boost::any_cast<string>(m["AcrAssumeRoleArn"]));
    }
    if (m.find("AcrInstanceId") != m.end() && !m["AcrInstanceId"].empty()) {
      acrInstanceId = make_shared<string>(boost::any_cast<string>(m["AcrInstanceId"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AssociateEip") != m.end() && !m["AssociateEip"].empty()) {
      associateEip = make_shared<bool>(boost::any_cast<bool>(m["AssociateEip"]));
    }
    if (m.find("BatchWaitTime") != m.end() && !m["BatchWaitTime"].empty()) {
      batchWaitTime = make_shared<long>(boost::any_cast<long>(m["BatchWaitTime"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("CommandArgs") != m.end() && !m["CommandArgs"].empty()) {
      commandArgs = make_shared<string>(boost::any_cast<string>(m["CommandArgs"]));
    }
    if (m.find("ConfigMapMountDesc") != m.end() && !m["ConfigMapMountDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigMapMountDesc"].type()) {
        vector<DescribeApplicationConfigResponseBodyDataConfigMapMountDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigMapMountDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationConfigResponseBodyDataConfigMapMountDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configMapMountDesc = make_shared<vector<DescribeApplicationConfigResponseBodyDataConfigMapMountDesc>>(expect1);
      }
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CustomHostAlias") != m.end() && !m["CustomHostAlias"].empty()) {
      customHostAlias = make_shared<string>(boost::any_cast<string>(m["CustomHostAlias"]));
    }
    if (m.find("EdasContainerVersion") != m.end() && !m["EdasContainerVersion"].empty()) {
      edasContainerVersion = make_shared<string>(boost::any_cast<string>(m["EdasContainerVersion"]));
    }
    if (m.find("EnableAhas") != m.end() && !m["EnableAhas"].empty()) {
      enableAhas = make_shared<string>(boost::any_cast<string>(m["EnableAhas"]));
    }
    if (m.find("EnableGreyTagRoute") != m.end() && !m["EnableGreyTagRoute"].empty()) {
      enableGreyTagRoute = make_shared<bool>(boost::any_cast<bool>(m["EnableGreyTagRoute"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      envs = make_shared<string>(boost::any_cast<string>(m["Envs"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("JarStartArgs") != m.end() && !m["JarStartArgs"].empty()) {
      jarStartArgs = make_shared<string>(boost::any_cast<string>(m["JarStartArgs"]));
    }
    if (m.find("JarStartOptions") != m.end() && !m["JarStartOptions"].empty()) {
      jarStartOptions = make_shared<string>(boost::any_cast<string>(m["JarStartOptions"]));
    }
    if (m.find("Jdk") != m.end() && !m["Jdk"].empty()) {
      jdk = make_shared<string>(boost::any_cast<string>(m["Jdk"]));
    }
    if (m.find("KafkaConfigs") != m.end() && !m["KafkaConfigs"].empty()) {
      kafkaConfigs = make_shared<string>(boost::any_cast<string>(m["KafkaConfigs"]));
    }
    if (m.find("Liveness") != m.end() && !m["Liveness"].empty()) {
      liveness = make_shared<string>(boost::any_cast<string>(m["Liveness"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("MountDesc") != m.end() && !m["MountDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["MountDesc"].type()) {
        vector<DescribeApplicationConfigResponseBodyDataMountDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationConfigResponseBodyDataMountDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountDesc = make_shared<vector<DescribeApplicationConfigResponseBodyDataMountDesc>>(expect1);
      }
    }
    if (m.find("MountHost") != m.end() && !m["MountHost"].empty()) {
      mountHost = make_shared<string>(boost::any_cast<string>(m["MountHost"]));
    }
    if (m.find("MseApplicationId") != m.end() && !m["MseApplicationId"].empty()) {
      mseApplicationId = make_shared<string>(boost::any_cast<string>(m["MseApplicationId"]));
    }
    if (m.find("MseFeatureConfig") != m.end() && !m["MseFeatureConfig"].empty()) {
      mseFeatureConfig = make_shared<string>(boost::any_cast<string>(m["MseFeatureConfig"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NasId") != m.end() && !m["NasId"].empty()) {
      nasId = make_shared<string>(boost::any_cast<string>(m["NasId"]));
    }
    if (m.find("OssAkId") != m.end() && !m["OssAkId"].empty()) {
      ossAkId = make_shared<string>(boost::any_cast<string>(m["OssAkId"]));
    }
    if (m.find("OssAkSecret") != m.end() && !m["OssAkSecret"].empty()) {
      ossAkSecret = make_shared<string>(boost::any_cast<string>(m["OssAkSecret"]));
    }
    if (m.find("OssMountDescs") != m.end() && !m["OssMountDescs"].empty()) {
      if (typeid(vector<boost::any>) == m["OssMountDescs"].type()) {
        vector<DescribeApplicationConfigResponseBodyDataOssMountDescs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OssMountDescs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationConfigResponseBodyDataOssMountDescs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ossMountDescs = make_shared<vector<DescribeApplicationConfigResponseBodyDataOssMountDescs>>(expect1);
      }
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("PhpArmsConfigLocation") != m.end() && !m["PhpArmsConfigLocation"].empty()) {
      phpArmsConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpArmsConfigLocation"]));
    }
    if (m.find("PhpConfig") != m.end() && !m["PhpConfig"].empty()) {
      phpConfig = make_shared<string>(boost::any_cast<string>(m["PhpConfig"]));
    }
    if (m.find("PhpConfigLocation") != m.end() && !m["PhpConfigLocation"].empty()) {
      phpConfigLocation = make_shared<string>(boost::any_cast<string>(m["PhpConfigLocation"]));
    }
    if (m.find("PostStart") != m.end() && !m["PostStart"].empty()) {
      postStart = make_shared<string>(boost::any_cast<string>(m["PostStart"]));
    }
    if (m.find("PreStop") != m.end() && !m["PreStop"].empty()) {
      preStop = make_shared<string>(boost::any_cast<string>(m["PreStop"]));
    }
    if (m.find("ProgrammingLanguage") != m.end() && !m["ProgrammingLanguage"].empty()) {
      programmingLanguage = make_shared<string>(boost::any_cast<string>(m["ProgrammingLanguage"]));
    }
    if (m.find("Readiness") != m.end() && !m["Readiness"].empty()) {
      readiness = make_shared<string>(boost::any_cast<string>(m["Readiness"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SlsConfigs") != m.end() && !m["SlsConfigs"].empty()) {
      slsConfigs = make_shared<string>(boost::any_cast<string>(m["SlsConfigs"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeApplicationConfigResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationConfigResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeApplicationConfigResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TerminationGracePeriodSeconds") != m.end() && !m["TerminationGracePeriodSeconds"].empty()) {
      terminationGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["TerminationGracePeriodSeconds"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("TomcatConfig") != m.end() && !m["TomcatConfig"].empty()) {
      tomcatConfig = make_shared<string>(boost::any_cast<string>(m["TomcatConfig"]));
    }
    if (m.find("UpdateStrategy") != m.end() && !m["UpdateStrategy"].empty()) {
      updateStrategy = make_shared<string>(boost::any_cast<string>(m["UpdateStrategy"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WarStartOptions") != m.end() && !m["WarStartOptions"].empty()) {
      warStartOptions = make_shared<string>(boost::any_cast<string>(m["WarStartOptions"]));
    }
    if (m.find("WebContainer") != m.end() && !m["WebContainer"].empty()) {
      webContainer = make_shared<string>(boost::any_cast<string>(m["WebContainer"]));
    }
  }


  virtual ~DescribeApplicationConfigResponseBodyData() = default;
};
class DescribeApplicationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeApplicationConfigResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationConfigResponseBody() {}

  explicit DescribeApplicationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationConfigResponseBody() = default;
};
class DescribeApplicationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationConfigResponseBody> body{};

  DescribeApplicationConfigResponse() {}

  explicit DescribeApplicationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationConfigResponse() = default;
};
class DescribeApplicationGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeApplicationGroupsRequest() {}

  explicit DescribeApplicationGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeApplicationGroupsRequest() = default;
};
class DescribeApplicationGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> edasContainerVersion{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> groupType{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> jdk{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> packageVersion{};
  shared_ptr<long> replicas{};
  shared_ptr<long> runningInstances{};
  shared_ptr<string> webContainer{};

  DescribeApplicationGroupsResponseBodyData() {}

  explicit DescribeApplicationGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edasContainerVersion) {
      res["EdasContainerVersion"] = boost::any(*edasContainerVersion);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (jdk) {
      res["Jdk"] = boost::any(*jdk);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (runningInstances) {
      res["RunningInstances"] = boost::any(*runningInstances);
    }
    if (webContainer) {
      res["WebContainer"] = boost::any(*webContainer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EdasContainerVersion") != m.end() && !m["EdasContainerVersion"].empty()) {
      edasContainerVersion = make_shared<string>(boost::any_cast<string>(m["EdasContainerVersion"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<long>(boost::any_cast<long>(m["GroupType"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Jdk") != m.end() && !m["Jdk"].empty()) {
      jdk = make_shared<string>(boost::any_cast<string>(m["Jdk"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("RunningInstances") != m.end() && !m["RunningInstances"].empty()) {
      runningInstances = make_shared<long>(boost::any_cast<long>(m["RunningInstances"]));
    }
    if (m.find("WebContainer") != m.end() && !m["WebContainer"].empty()) {
      webContainer = make_shared<string>(boost::any_cast<string>(m["WebContainer"]));
    }
  }


  virtual ~DescribeApplicationGroupsResponseBodyData() = default;
};
class DescribeApplicationGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeApplicationGroupsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationGroupsResponseBody() {}

  explicit DescribeApplicationGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeApplicationGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeApplicationGroupsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationGroupsResponseBody() = default;
};
class DescribeApplicationGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationGroupsResponseBody> body{};

  DescribeApplicationGroupsResponse() {}

  explicit DescribeApplicationGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationGroupsResponse() = default;
};
class DescribeApplicationImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> imageUrl{};

  DescribeApplicationImageRequest() {}

  explicit DescribeApplicationImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~DescribeApplicationImageRequest() = default;
};
class DescribeApplicationImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> crUrl{};
  shared_ptr<string> logo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespace{};
  shared_ptr<string> repoOriginType{};
  shared_ptr<string> repoTag{};
  shared_ptr<string> repoType{};

  DescribeApplicationImageResponseBodyData() {}

  explicit DescribeApplicationImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crUrl) {
      res["CrUrl"] = boost::any(*crUrl);
    }
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespace) {
      res["RepoNamespace"] = boost::any(*repoNamespace);
    }
    if (repoOriginType) {
      res["RepoOriginType"] = boost::any(*repoOriginType);
    }
    if (repoTag) {
      res["RepoTag"] = boost::any(*repoTag);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrUrl") != m.end() && !m["CrUrl"].empty()) {
      crUrl = make_shared<string>(boost::any_cast<string>(m["CrUrl"]));
    }
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespace") != m.end() && !m["RepoNamespace"].empty()) {
      repoNamespace = make_shared<string>(boost::any_cast<string>(m["RepoNamespace"]));
    }
    if (m.find("RepoOriginType") != m.end() && !m["RepoOriginType"].empty()) {
      repoOriginType = make_shared<string>(boost::any_cast<string>(m["RepoOriginType"]));
    }
    if (m.find("RepoTag") != m.end() && !m["RepoTag"].empty()) {
      repoTag = make_shared<string>(boost::any_cast<string>(m["RepoTag"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
  }


  virtual ~DescribeApplicationImageResponseBodyData() = default;
};
class DescribeApplicationImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeApplicationImageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationImageResponseBody() {}

  explicit DescribeApplicationImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationImageResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationImageResponseBody() = default;
};
class DescribeApplicationImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationImageResponseBody> body{};

  DescribeApplicationImageResponse() {}

  explicit DescribeApplicationImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationImageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationImageResponse() = default;
};
class DescribeApplicationInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};

  DescribeApplicationInstancesRequest() {}

  explicit DescribeApplicationInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
  }


  virtual ~DescribeApplicationInstancesRequest() = default;
};
class DescribeApplicationInstancesResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<long> createTimeStamp{};
  shared_ptr<bool> debugStatus{};
  shared_ptr<string> eip{};
  shared_ptr<long> finishTimeStamp{};
  shared_ptr<string> groupId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceContainerIp{};
  shared_ptr<long> instanceContainerRestarts{};
  shared_ptr<string> instanceContainerStatus{};
  shared_ptr<string> instanceHealthStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> vSwitchId{};

  DescribeApplicationInstancesResponseBodyDataInstances() {}

  explicit DescribeApplicationInstancesResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (debugStatus) {
      res["DebugStatus"] = boost::any(*debugStatus);
    }
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (finishTimeStamp) {
      res["FinishTimeStamp"] = boost::any(*finishTimeStamp);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceContainerIp) {
      res["InstanceContainerIp"] = boost::any(*instanceContainerIp);
    }
    if (instanceContainerRestarts) {
      res["InstanceContainerRestarts"] = boost::any(*instanceContainerRestarts);
    }
    if (instanceContainerStatus) {
      res["InstanceContainerStatus"] = boost::any(*instanceContainerStatus);
    }
    if (instanceHealthStatus) {
      res["InstanceHealthStatus"] = boost::any(*instanceHealthStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("DebugStatus") != m.end() && !m["DebugStatus"].empty()) {
      debugStatus = make_shared<bool>(boost::any_cast<bool>(m["DebugStatus"]));
    }
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("FinishTimeStamp") != m.end() && !m["FinishTimeStamp"].empty()) {
      finishTimeStamp = make_shared<long>(boost::any_cast<long>(m["FinishTimeStamp"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceContainerIp") != m.end() && !m["InstanceContainerIp"].empty()) {
      instanceContainerIp = make_shared<string>(boost::any_cast<string>(m["InstanceContainerIp"]));
    }
    if (m.find("InstanceContainerRestarts") != m.end() && !m["InstanceContainerRestarts"].empty()) {
      instanceContainerRestarts = make_shared<long>(boost::any_cast<long>(m["InstanceContainerRestarts"]));
    }
    if (m.find("InstanceContainerStatus") != m.end() && !m["InstanceContainerStatus"].empty()) {
      instanceContainerStatus = make_shared<string>(boost::any_cast<string>(m["InstanceContainerStatus"]));
    }
    if (m.find("InstanceHealthStatus") != m.end() && !m["InstanceHealthStatus"].empty()) {
      instanceHealthStatus = make_shared<string>(boost::any_cast<string>(m["InstanceHealthStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeApplicationInstancesResponseBodyDataInstances() = default;
};
class DescribeApplicationInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeApplicationInstancesResponseBodyDataInstances>> instances{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  DescribeApplicationInstancesResponseBodyData() {}

  explicit DescribeApplicationInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeApplicationInstancesResponseBodyDataInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationInstancesResponseBodyDataInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeApplicationInstancesResponseBodyDataInstances>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~DescribeApplicationInstancesResponseBodyData() = default;
};
class DescribeApplicationInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeApplicationInstancesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationInstancesResponseBody() {}

  explicit DescribeApplicationInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationInstancesResponseBody() = default;
};
class DescribeApplicationInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationInstancesResponseBody> body{};

  DescribeApplicationInstancesResponse() {}

  explicit DescribeApplicationInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationInstancesResponse() = default;
};
class DescribeApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> scalingRuleName{};

  DescribeApplicationScalingRuleRequest() {}

  explicit DescribeApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleRequest() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricMetrics : public Darabonba::Model {
public:
  shared_ptr<long> metricTargetAverageUtilization{};
  shared_ptr<string> metricType{};

  DescribeApplicationScalingRuleResponseBodyDataMetricMetrics() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricTargetAverageUtilization) {
      res["MetricTargetAverageUtilization"] = boost::any(*metricTargetAverageUtilization);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricTargetAverageUtilization") != m.end() && !m["MetricTargetAverageUtilization"].empty()) {
      metricTargetAverageUtilization = make_shared<long>(boost::any_cast<long>(m["MetricTargetAverageUtilization"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetrics() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics : public Darabonba::Model {
public:
  shared_ptr<long> currentValue{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentValue) {
      res["CurrentValue"] = boost::any(*currentValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentValue") != m.end() && !m["CurrentValue"].empty()) {
      currentValue = make_shared<long>(boost::any_cast<long>(m["CurrentValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> nextScaleInAverageUtilization{};
  shared_ptr<long> nextScaleOutAverageUtilization{};

  DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextScaleInAverageUtilization) {
      res["NextScaleInAverageUtilization"] = boost::any(*nextScaleInAverageUtilization);
    }
    if (nextScaleOutAverageUtilization) {
      res["NextScaleOutAverageUtilization"] = boost::any(*nextScaleOutAverageUtilization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextScaleInAverageUtilization") != m.end() && !m["NextScaleInAverageUtilization"].empty()) {
      nextScaleInAverageUtilization = make_shared<long>(boost::any_cast<long>(m["NextScaleInAverageUtilization"]));
    }
    if (m.find("NextScaleOutAverageUtilization") != m.end() && !m["NextScaleOutAverageUtilization"].empty()) {
      nextScaleOutAverageUtilization = make_shared<long>(boost::any_cast<long>(m["NextScaleOutAverageUtilization"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics>> currentMetrics{};
  shared_ptr<long> currentReplicas{};
  shared_ptr<long> desiredReplicas{};
  shared_ptr<string> lastScaleTime{};
  shared_ptr<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics>> nextScaleMetrics{};
  shared_ptr<long> nextScaleTimePeriod{};

  DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*currentMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentMetrics"] = boost::any(temp1);
    }
    if (currentReplicas) {
      res["CurrentReplicas"] = boost::any(*currentReplicas);
    }
    if (desiredReplicas) {
      res["DesiredReplicas"] = boost::any(*desiredReplicas);
    }
    if (lastScaleTime) {
      res["LastScaleTime"] = boost::any(*lastScaleTime);
    }
    if (nextScaleMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*nextScaleMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NextScaleMetrics"] = boost::any(temp1);
    }
    if (nextScaleTimePeriod) {
      res["NextScaleTimePeriod"] = boost::any(*nextScaleTimePeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentMetrics") != m.end() && !m["CurrentMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentMetrics"].type()) {
        vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentMetrics = make_shared<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics>>(expect1);
      }
    }
    if (m.find("CurrentReplicas") != m.end() && !m["CurrentReplicas"].empty()) {
      currentReplicas = make_shared<long>(boost::any_cast<long>(m["CurrentReplicas"]));
    }
    if (m.find("DesiredReplicas") != m.end() && !m["DesiredReplicas"].empty()) {
      desiredReplicas = make_shared<long>(boost::any_cast<long>(m["DesiredReplicas"]));
    }
    if (m.find("LastScaleTime") != m.end() && !m["LastScaleTime"].empty()) {
      lastScaleTime = make_shared<string>(boost::any_cast<string>(m["LastScaleTime"]));
    }
    if (m.find("NextScaleMetrics") != m.end() && !m["NextScaleMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["NextScaleMetrics"].type()) {
        vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NextScaleMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nextScaleMetrics = make_shared<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics>>(expect1);
      }
    }
    if (m.find("NextScaleTimePeriod") != m.end() && !m["NextScaleTimePeriod"].empty()) {
      nextScaleTimePeriod = make_shared<long>(boost::any_cast<long>(m["NextScaleTimePeriod"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules : public Darabonba::Model {
public:
  shared_ptr<bool> disabled{};
  shared_ptr<long> stabilizationWindowSeconds{};
  shared_ptr<long> step{};

  DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (stabilizationWindowSeconds) {
      res["StabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("StabilizationWindowSeconds") != m.end() && !m["StabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["StabilizationWindowSeconds"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules : public Darabonba::Model {
public:
  shared_ptr<bool> disabled{};
  shared_ptr<long> stabilizationWindowSeconds{};
  shared_ptr<long> step{};

  DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (stabilizationWindowSeconds) {
      res["StabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("StabilizationWindowSeconds") != m.end() && !m["StabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["StabilizationWindowSeconds"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataMetric : public Darabonba::Model {
public:
  shared_ptr<long> maxReplicas{};
  shared_ptr<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetrics>> metrics{};
  shared_ptr<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus> metricsStatus{};
  shared_ptr<long> minReplicas{};
  shared_ptr<DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules> scaleDownRules{};
  shared_ptr<DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules> scaleUpRules{};

  DescribeApplicationScalingRuleResponseBodyDataMetric() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (metricsStatus) {
      res["MetricsStatus"] = metricsStatus ? boost::any(metricsStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    if (scaleDownRules) {
      res["ScaleDownRules"] = scaleDownRules ? boost::any(scaleDownRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleUpRules) {
      res["ScaleUpRules"] = scaleUpRules ? boost::any(scaleUpRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRuleResponseBodyDataMetricMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<DescribeApplicationScalingRuleResponseBodyDataMetricMetrics>>(expect1);
      }
    }
    if (m.find("MetricsStatus") != m.end() && !m["MetricsStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricsStatus"].type()) {
        DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricsStatus"]));
        metricsStatus = make_shared<DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus>(model1);
      }
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
    if (m.find("ScaleDownRules") != m.end() && !m["ScaleDownRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleDownRules"].type()) {
        DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleDownRules"]));
        scaleDownRules = make_shared<DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules>(model1);
      }
    }
    if (m.find("ScaleUpRules") != m.end() && !m["ScaleUpRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleUpRules"].type()) {
        DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleUpRules"]));
        scaleUpRules = make_shared<DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules>(model1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataMetric() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataTimerSchedules : public Darabonba::Model {
public:
  shared_ptr<string> atTime{};
  shared_ptr<long> targetReplicas{};

  DescribeApplicationScalingRuleResponseBodyDataTimerSchedules() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataTimerSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atTime) {
      res["AtTime"] = boost::any(*atTime);
    }
    if (targetReplicas) {
      res["TargetReplicas"] = boost::any(*targetReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AtTime") != m.end() && !m["AtTime"].empty()) {
      atTime = make_shared<string>(boost::any_cast<string>(m["AtTime"]));
    }
    if (m.find("TargetReplicas") != m.end() && !m["TargetReplicas"].empty()) {
      targetReplicas = make_shared<long>(boost::any_cast<long>(m["TargetReplicas"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataTimerSchedules() = default;
};
class DescribeApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> period{};
  shared_ptr<vector<DescribeApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules{};

  DescribeApplicationScalingRuleResponseBodyDataTimer() {}

  explicit DescribeApplicationScalingRuleResponseBodyDataTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<DescribeApplicationScalingRuleResponseBodyDataTimerSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRuleResponseBodyDataTimerSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<DescribeApplicationScalingRuleResponseBodyDataTimerSchedules>>(expect1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyDataTimer() = default;
};
class DescribeApplicationScalingRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> lastDisableTime{};
  shared_ptr<DescribeApplicationScalingRuleResponseBodyDataMetric> metric{};
  shared_ptr<bool> scaleRuleEnabled{};
  shared_ptr<string> scaleRuleName{};
  shared_ptr<string> scaleRuleType{};
  shared_ptr<DescribeApplicationScalingRuleResponseBodyDataTimer> timer{};
  shared_ptr<long> updateTime{};

  DescribeApplicationScalingRuleResponseBodyData() {}

  explicit DescribeApplicationScalingRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastDisableTime) {
      res["LastDisableTime"] = boost::any(*lastDisableTime);
    }
    if (metric) {
      res["Metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleRuleEnabled) {
      res["ScaleRuleEnabled"] = boost::any(*scaleRuleEnabled);
    }
    if (scaleRuleName) {
      res["ScaleRuleName"] = boost::any(*scaleRuleName);
    }
    if (scaleRuleType) {
      res["ScaleRuleType"] = boost::any(*scaleRuleType);
    }
    if (timer) {
      res["Timer"] = timer ? boost::any(timer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastDisableTime") != m.end() && !m["LastDisableTime"].empty()) {
      lastDisableTime = make_shared<long>(boost::any_cast<long>(m["LastDisableTime"]));
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metric"].type()) {
        DescribeApplicationScalingRuleResponseBodyDataMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metric"]));
        metric = make_shared<DescribeApplicationScalingRuleResponseBodyDataMetric>(model1);
      }
    }
    if (m.find("ScaleRuleEnabled") != m.end() && !m["ScaleRuleEnabled"].empty()) {
      scaleRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["ScaleRuleEnabled"]));
    }
    if (m.find("ScaleRuleName") != m.end() && !m["ScaleRuleName"].empty()) {
      scaleRuleName = make_shared<string>(boost::any_cast<string>(m["ScaleRuleName"]));
    }
    if (m.find("ScaleRuleType") != m.end() && !m["ScaleRuleType"].empty()) {
      scaleRuleType = make_shared<string>(boost::any_cast<string>(m["ScaleRuleType"]));
    }
    if (m.find("Timer") != m.end() && !m["Timer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Timer"].type()) {
        DescribeApplicationScalingRuleResponseBodyDataTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Timer"]));
        timer = make_shared<DescribeApplicationScalingRuleResponseBodyDataTimer>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBodyData() = default;
};
class DescribeApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApplicationScalingRuleResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  DescribeApplicationScalingRuleResponseBody() {}

  explicit DescribeApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationScalingRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationScalingRuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationScalingRuleResponseBody() = default;
};
class DescribeApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationScalingRuleResponseBody> body{};

  DescribeApplicationScalingRuleResponse() {}

  explicit DescribeApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRuleResponse() = default;
};
class DescribeApplicationScalingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeApplicationScalingRulesRequest() {}

  explicit DescribeApplicationScalingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesRequest() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics : public Darabonba::Model {
public:
  shared_ptr<long> metricTargetAverageUtilization{};
  shared_ptr<string> metricType{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricTargetAverageUtilization) {
      res["MetricTargetAverageUtilization"] = boost::any(*metricTargetAverageUtilization);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricTargetAverageUtilization") != m.end() && !m["MetricTargetAverageUtilization"].empty()) {
      metricTargetAverageUtilization = make_shared<long>(boost::any_cast<long>(m["MetricTargetAverageUtilization"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics : public Darabonba::Model {
public:
  shared_ptr<long> currentValue{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentValue) {
      res["CurrentValue"] = boost::any(*currentValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentValue") != m.end() && !m["CurrentValue"].empty()) {
      currentValue = make_shared<long>(boost::any_cast<long>(m["CurrentValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> nextScaleInAverageUtilization{};
  shared_ptr<long> nextScaleOutAverageUtilization{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextScaleInAverageUtilization) {
      res["NextScaleInAverageUtilization"] = boost::any(*nextScaleInAverageUtilization);
    }
    if (nextScaleOutAverageUtilization) {
      res["NextScaleOutAverageUtilization"] = boost::any(*nextScaleOutAverageUtilization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextScaleInAverageUtilization") != m.end() && !m["NextScaleInAverageUtilization"].empty()) {
      nextScaleInAverageUtilization = make_shared<long>(boost::any_cast<long>(m["NextScaleInAverageUtilization"]));
    }
    if (m.find("NextScaleOutAverageUtilization") != m.end() && !m["NextScaleOutAverageUtilization"].empty()) {
      nextScaleOutAverageUtilization = make_shared<long>(boost::any_cast<long>(m["NextScaleOutAverageUtilization"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics>> currentMetrics{};
  shared_ptr<long> currentReplicas{};
  shared_ptr<long> desiredReplicas{};
  shared_ptr<string> lastScaleTime{};
  shared_ptr<long> maxReplicas{};
  shared_ptr<long> minReplicas{};
  shared_ptr<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics>> nextScaleMetrics{};
  shared_ptr<long> nextScaleTimePeriod{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*currentMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentMetrics"] = boost::any(temp1);
    }
    if (currentReplicas) {
      res["CurrentReplicas"] = boost::any(*currentReplicas);
    }
    if (desiredReplicas) {
      res["DesiredReplicas"] = boost::any(*desiredReplicas);
    }
    if (lastScaleTime) {
      res["LastScaleTime"] = boost::any(*lastScaleTime);
    }
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    if (nextScaleMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*nextScaleMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NextScaleMetrics"] = boost::any(temp1);
    }
    if (nextScaleTimePeriod) {
      res["NextScaleTimePeriod"] = boost::any(*nextScaleTimePeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentMetrics") != m.end() && !m["CurrentMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentMetrics"].type()) {
        vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentMetrics = make_shared<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics>>(expect1);
      }
    }
    if (m.find("CurrentReplicas") != m.end() && !m["CurrentReplicas"].empty()) {
      currentReplicas = make_shared<long>(boost::any_cast<long>(m["CurrentReplicas"]));
    }
    if (m.find("DesiredReplicas") != m.end() && !m["DesiredReplicas"].empty()) {
      desiredReplicas = make_shared<long>(boost::any_cast<long>(m["DesiredReplicas"]));
    }
    if (m.find("LastScaleTime") != m.end() && !m["LastScaleTime"].empty()) {
      lastScaleTime = make_shared<string>(boost::any_cast<string>(m["LastScaleTime"]));
    }
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
    if (m.find("NextScaleMetrics") != m.end() && !m["NextScaleMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["NextScaleMetrics"].type()) {
        vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NextScaleMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nextScaleMetrics = make_shared<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics>>(expect1);
      }
    }
    if (m.find("NextScaleTimePeriod") != m.end() && !m["NextScaleTimePeriod"].empty()) {
      nextScaleTimePeriod = make_shared<long>(boost::any_cast<long>(m["NextScaleTimePeriod"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules : public Darabonba::Model {
public:
  shared_ptr<bool> disabled{};
  shared_ptr<long> stabilizationWindowSeconds{};
  shared_ptr<long> step{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (stabilizationWindowSeconds) {
      res["StabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("StabilizationWindowSeconds") != m.end() && !m["StabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["StabilizationWindowSeconds"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules : public Darabonba::Model {
public:
  shared_ptr<bool> disabled{};
  shared_ptr<long> stabilizationWindowSeconds{};
  shared_ptr<long> step{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (stabilizationWindowSeconds) {
      res["StabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("StabilizationWindowSeconds") != m.end() && !m["StabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["StabilizationWindowSeconds"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric : public Darabonba::Model {
public:
  shared_ptr<long> maxReplicas{};
  shared_ptr<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics>> metrics{};
  shared_ptr<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus> metricsStatus{};
  shared_ptr<long> minReplicas{};
  shared_ptr<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules> scaleDownRules{};
  shared_ptr<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules> scaleUpRules{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (metricsStatus) {
      res["MetricsStatus"] = metricsStatus ? boost::any(metricsStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    if (scaleDownRules) {
      res["ScaleDownRules"] = scaleDownRules ? boost::any(scaleDownRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleUpRules) {
      res["ScaleUpRules"] = scaleUpRules ? boost::any(scaleUpRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics>>(expect1);
      }
    }
    if (m.find("MetricsStatus") != m.end() && !m["MetricsStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricsStatus"].type()) {
        DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricsStatus"]));
        metricsStatus = make_shared<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus>(model1);
      }
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
    if (m.find("ScaleDownRules") != m.end() && !m["ScaleDownRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleDownRules"].type()) {
        DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleDownRules"]));
        scaleDownRules = make_shared<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules>(model1);
      }
    }
    if (m.find("ScaleUpRules") != m.end() && !m["ScaleUpRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleUpRules"].type()) {
        DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleUpRules"]));
        scaleUpRules = make_shared<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules>(model1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules : public Darabonba::Model {
public:
  shared_ptr<string> atTime{};
  shared_ptr<long> maxReplicas{};
  shared_ptr<long> minReplicas{};
  shared_ptr<long> targetReplicas{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atTime) {
      res["AtTime"] = boost::any(*atTime);
    }
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    if (targetReplicas) {
      res["TargetReplicas"] = boost::any(*targetReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AtTime") != m.end() && !m["AtTime"].empty()) {
      atTime = make_shared<string>(boost::any_cast<string>(m["AtTime"]));
    }
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
    if (m.find("TargetReplicas") != m.end() && !m["TargetReplicas"].empty()) {
      targetReplicas = make_shared<long>(boost::any_cast<long>(m["TargetReplicas"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> period{};
  shared_ptr<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules>> schedules{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimerSchedules>>(expect1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer() = default;
};
class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> lastDisableTime{};
  shared_ptr<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric> metric{};
  shared_ptr<bool> scaleRuleEnabled{};
  shared_ptr<string> scaleRuleName{};
  shared_ptr<string> scaleRuleType{};
  shared_ptr<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer> timer{};
  shared_ptr<long> updateTime{};

  DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules() {}

  explicit DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastDisableTime) {
      res["LastDisableTime"] = boost::any(*lastDisableTime);
    }
    if (metric) {
      res["Metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleRuleEnabled) {
      res["ScaleRuleEnabled"] = boost::any(*scaleRuleEnabled);
    }
    if (scaleRuleName) {
      res["ScaleRuleName"] = boost::any(*scaleRuleName);
    }
    if (scaleRuleType) {
      res["ScaleRuleType"] = boost::any(*scaleRuleType);
    }
    if (timer) {
      res["Timer"] = timer ? boost::any(timer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastDisableTime") != m.end() && !m["LastDisableTime"].empty()) {
      lastDisableTime = make_shared<long>(boost::any_cast<long>(m["LastDisableTime"]));
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metric"].type()) {
        DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metric"]));
        metric = make_shared<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric>(model1);
      }
    }
    if (m.find("ScaleRuleEnabled") != m.end() && !m["ScaleRuleEnabled"].empty()) {
      scaleRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["ScaleRuleEnabled"]));
    }
    if (m.find("ScaleRuleName") != m.end() && !m["ScaleRuleName"].empty()) {
      scaleRuleName = make_shared<string>(boost::any_cast<string>(m["ScaleRuleName"]));
    }
    if (m.find("ScaleRuleType") != m.end() && !m["ScaleRuleType"].empty()) {
      scaleRuleType = make_shared<string>(boost::any_cast<string>(m["ScaleRuleType"]));
    }
    if (m.find("Timer") != m.end() && !m["Timer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Timer"].type()) {
        DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Timer"]));
        timer = make_shared<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules() = default;
};
class DescribeApplicationScalingRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules>> applicationScalingRules{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  DescribeApplicationScalingRulesResponseBodyData() {}

  explicit DescribeApplicationScalingRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationScalingRules) {
      vector<boost::any> temp1;
      for(auto item1:*applicationScalingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationScalingRules"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationScalingRules") != m.end() && !m["ApplicationScalingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationScalingRules"].type()) {
        vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationScalingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationScalingRules = make_shared<vector<DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBodyData() = default;
};
class DescribeApplicationScalingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApplicationScalingRulesResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  DescribeApplicationScalingRulesResponseBody() {}

  explicit DescribeApplicationScalingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationScalingRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationScalingRulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationScalingRulesResponseBody() = default;
};
class DescribeApplicationScalingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationScalingRulesResponseBody> body{};

  DescribeApplicationScalingRulesResponse() {}

  explicit DescribeApplicationScalingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationScalingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationScalingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationScalingRulesResponse() = default;
};
class DescribeApplicationSlbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeApplicationSlbsRequest() {}

  explicit DescribeApplicationSlbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeApplicationSlbsRequest() = default;
};
class DescribeApplicationSlbsResponseBodyDataInternet : public Darabonba::Model {
public:
  shared_ptr<string> httpsCertId{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> targetPort{};

  DescribeApplicationSlbsResponseBodyDataInternet() {}

  explicit DescribeApplicationSlbsResponseBodyDataInternet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpsCertId) {
      res["HttpsCertId"] = boost::any(*httpsCertId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpsCertId") != m.end() && !m["HttpsCertId"].empty()) {
      httpsCertId = make_shared<string>(boost::any_cast<string>(m["HttpsCertId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
  }


  virtual ~DescribeApplicationSlbsResponseBodyDataInternet() = default;
};
class DescribeApplicationSlbsResponseBodyDataIntranet : public Darabonba::Model {
public:
  shared_ptr<string> httpsCertId{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> targetPort{};

  DescribeApplicationSlbsResponseBodyDataIntranet() {}

  explicit DescribeApplicationSlbsResponseBodyDataIntranet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpsCertId) {
      res["HttpsCertId"] = boost::any(*httpsCertId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpsCertId") != m.end() && !m["HttpsCertId"].empty()) {
      httpsCertId = make_shared<string>(boost::any_cast<string>(m["HttpsCertId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
  }


  virtual ~DescribeApplicationSlbsResponseBodyDataIntranet() = default;
};
class DescribeApplicationSlbsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationSlbsResponseBodyDataInternet>> internet{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> internetSlbId{};
  shared_ptr<vector<DescribeApplicationSlbsResponseBodyDataIntranet>> intranet{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> intranetSlbId{};

  DescribeApplicationSlbsResponseBodyData() {}

  explicit DescribeApplicationSlbsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internet) {
      vector<boost::any> temp1;
      for(auto item1:*internet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Internet"] = boost::any(temp1);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (internetSlbId) {
      res["InternetSlbId"] = boost::any(*internetSlbId);
    }
    if (intranet) {
      vector<boost::any> temp1;
      for(auto item1:*intranet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Intranet"] = boost::any(temp1);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (intranetSlbId) {
      res["IntranetSlbId"] = boost::any(*intranetSlbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Internet") != m.end() && !m["Internet"].empty()) {
      if (typeid(vector<boost::any>) == m["Internet"].type()) {
        vector<DescribeApplicationSlbsResponseBodyDataInternet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Internet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationSlbsResponseBodyDataInternet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        internet = make_shared<vector<DescribeApplicationSlbsResponseBodyDataInternet>>(expect1);
      }
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("InternetSlbId") != m.end() && !m["InternetSlbId"].empty()) {
      internetSlbId = make_shared<string>(boost::any_cast<string>(m["InternetSlbId"]));
    }
    if (m.find("Intranet") != m.end() && !m["Intranet"].empty()) {
      if (typeid(vector<boost::any>) == m["Intranet"].type()) {
        vector<DescribeApplicationSlbsResponseBodyDataIntranet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Intranet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationSlbsResponseBodyDataIntranet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intranet = make_shared<vector<DescribeApplicationSlbsResponseBodyDataIntranet>>(expect1);
      }
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("IntranetSlbId") != m.end() && !m["IntranetSlbId"].empty()) {
      intranetSlbId = make_shared<string>(boost::any_cast<string>(m["IntranetSlbId"]));
    }
  }


  virtual ~DescribeApplicationSlbsResponseBodyData() = default;
};
class DescribeApplicationSlbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeApplicationSlbsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationSlbsResponseBody() {}

  explicit DescribeApplicationSlbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationSlbsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationSlbsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationSlbsResponseBody() = default;
};
class DescribeApplicationSlbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationSlbsResponseBody> body{};

  DescribeApplicationSlbsResponse() {}

  explicit DescribeApplicationSlbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationSlbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationSlbsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationSlbsResponse() = default;
};
class DescribeApplicationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeApplicationStatusRequest() {}

  explicit DescribeApplicationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeApplicationStatusRequest() = default;
};
class DescribeApplicationStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> armsAdvancedEnabled{};
  shared_ptr<string> armsApmInfo{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentStatus{};
  shared_ptr<bool> enableAgent{};
  shared_ptr<long> fileSizeLimit{};
  shared_ptr<string> lastChangeOrderId{};
  shared_ptr<bool> lastChangeOrderRunning{};
  shared_ptr<string> lastChangeOrderStatus{};
  shared_ptr<long> runningInstances{};
  shared_ptr<string> subStatus{};

  DescribeApplicationStatusResponseBodyData() {}

  explicit DescribeApplicationStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (armsAdvancedEnabled) {
      res["ArmsAdvancedEnabled"] = boost::any(*armsAdvancedEnabled);
    }
    if (armsApmInfo) {
      res["ArmsApmInfo"] = boost::any(*armsApmInfo);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentStatus) {
      res["CurrentStatus"] = boost::any(*currentStatus);
    }
    if (enableAgent) {
      res["EnableAgent"] = boost::any(*enableAgent);
    }
    if (fileSizeLimit) {
      res["FileSizeLimit"] = boost::any(*fileSizeLimit);
    }
    if (lastChangeOrderId) {
      res["LastChangeOrderId"] = boost::any(*lastChangeOrderId);
    }
    if (lastChangeOrderRunning) {
      res["LastChangeOrderRunning"] = boost::any(*lastChangeOrderRunning);
    }
    if (lastChangeOrderStatus) {
      res["LastChangeOrderStatus"] = boost::any(*lastChangeOrderStatus);
    }
    if (runningInstances) {
      res["RunningInstances"] = boost::any(*runningInstances);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArmsAdvancedEnabled") != m.end() && !m["ArmsAdvancedEnabled"].empty()) {
      armsAdvancedEnabled = make_shared<string>(boost::any_cast<string>(m["ArmsAdvancedEnabled"]));
    }
    if (m.find("ArmsApmInfo") != m.end() && !m["ArmsApmInfo"].empty()) {
      armsApmInfo = make_shared<string>(boost::any_cast<string>(m["ArmsApmInfo"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentStatus") != m.end() && !m["CurrentStatus"].empty()) {
      currentStatus = make_shared<string>(boost::any_cast<string>(m["CurrentStatus"]));
    }
    if (m.find("EnableAgent") != m.end() && !m["EnableAgent"].empty()) {
      enableAgent = make_shared<bool>(boost::any_cast<bool>(m["EnableAgent"]));
    }
    if (m.find("FileSizeLimit") != m.end() && !m["FileSizeLimit"].empty()) {
      fileSizeLimit = make_shared<long>(boost::any_cast<long>(m["FileSizeLimit"]));
    }
    if (m.find("LastChangeOrderId") != m.end() && !m["LastChangeOrderId"].empty()) {
      lastChangeOrderId = make_shared<string>(boost::any_cast<string>(m["LastChangeOrderId"]));
    }
    if (m.find("LastChangeOrderRunning") != m.end() && !m["LastChangeOrderRunning"].empty()) {
      lastChangeOrderRunning = make_shared<bool>(boost::any_cast<bool>(m["LastChangeOrderRunning"]));
    }
    if (m.find("LastChangeOrderStatus") != m.end() && !m["LastChangeOrderStatus"].empty()) {
      lastChangeOrderStatus = make_shared<string>(boost::any_cast<string>(m["LastChangeOrderStatus"]));
    }
    if (m.find("RunningInstances") != m.end() && !m["RunningInstances"].empty()) {
      runningInstances = make_shared<long>(boost::any_cast<long>(m["RunningInstances"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
  }


  virtual ~DescribeApplicationStatusResponseBodyData() = default;
};
class DescribeApplicationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeApplicationStatusResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeApplicationStatusResponseBody() {}

  explicit DescribeApplicationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeApplicationStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeApplicationStatusResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeApplicationStatusResponseBody() = default;
};
class DescribeApplicationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationStatusResponseBody> body{};

  DescribeApplicationStatusResponse() {}

  explicit DescribeApplicationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationStatusResponse() = default;
};
class DescribeChangeOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  DescribeChangeOrderRequest() {}

  explicit DescribeChangeOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~DescribeChangeOrderRequest() = default;
};
class DescribeChangeOrderResponseBodyDataPipelines : public Darabonba::Model {
public:
  shared_ptr<long> batchType{};
  shared_ptr<long> parallelCount{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> pipelineName{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> updateTime{};

  DescribeChangeOrderResponseBodyDataPipelines() {}

  explicit DescribeChangeOrderResponseBodyDataPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchType) {
      res["BatchType"] = boost::any(*batchType);
    }
    if (parallelCount) {
      res["ParallelCount"] = boost::any(*parallelCount);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineName) {
      res["PipelineName"] = boost::any(*pipelineName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchType") != m.end() && !m["BatchType"].empty()) {
      batchType = make_shared<long>(boost::any_cast<long>(m["BatchType"]));
    }
    if (m.find("ParallelCount") != m.end() && !m["ParallelCount"].empty()) {
      parallelCount = make_shared<long>(boost::any_cast<long>(m["ParallelCount"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("PipelineName") != m.end() && !m["PipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["PipelineName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeChangeOrderResponseBodyDataPipelines() = default;
};
class DescribeChangeOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> approvalId{};
  shared_ptr<bool> auto_{};
  shared_ptr<long> batchCount{};
  shared_ptr<string> batchType{};
  shared_ptr<long> batchWaitTime{};
  shared_ptr<string> changeOrderId{};
  shared_ptr<string> coType{};
  shared_ptr<string> coTypeCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentPipelineId{};
  shared_ptr<string> description{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<DescribeChangeOrderResponseBodyDataPipelines>> pipelines{};
  shared_ptr<long> status{};
  shared_ptr<long> subStatus{};
  shared_ptr<bool> supportRollback{};

  DescribeChangeOrderResponseBodyData() {}

  explicit DescribeChangeOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (approvalId) {
      res["ApprovalId"] = boost::any(*approvalId);
    }
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (batchCount) {
      res["BatchCount"] = boost::any(*batchCount);
    }
    if (batchType) {
      res["BatchType"] = boost::any(*batchType);
    }
    if (batchWaitTime) {
      res["BatchWaitTime"] = boost::any(*batchWaitTime);
    }
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    if (coType) {
      res["CoType"] = boost::any(*coType);
    }
    if (coTypeCode) {
      res["CoTypeCode"] = boost::any(*coTypeCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentPipelineId) {
      res["CurrentPipelineId"] = boost::any(*currentPipelineId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (pipelines) {
      vector<boost::any> temp1;
      for(auto item1:*pipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pipelines"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (supportRollback) {
      res["SupportRollback"] = boost::any(*supportRollback);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ApprovalId") != m.end() && !m["ApprovalId"].empty()) {
      approvalId = make_shared<string>(boost::any_cast<string>(m["ApprovalId"]));
    }
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("BatchCount") != m.end() && !m["BatchCount"].empty()) {
      batchCount = make_shared<long>(boost::any_cast<long>(m["BatchCount"]));
    }
    if (m.find("BatchType") != m.end() && !m["BatchType"].empty()) {
      batchType = make_shared<string>(boost::any_cast<string>(m["BatchType"]));
    }
    if (m.find("BatchWaitTime") != m.end() && !m["BatchWaitTime"].empty()) {
      batchWaitTime = make_shared<long>(boost::any_cast<long>(m["BatchWaitTime"]));
    }
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
    if (m.find("CoType") != m.end() && !m["CoType"].empty()) {
      coType = make_shared<string>(boost::any_cast<string>(m["CoType"]));
    }
    if (m.find("CoTypeCode") != m.end() && !m["CoTypeCode"].empty()) {
      coTypeCode = make_shared<string>(boost::any_cast<string>(m["CoTypeCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentPipelineId") != m.end() && !m["CurrentPipelineId"].empty()) {
      currentPipelineId = make_shared<string>(boost::any_cast<string>(m["CurrentPipelineId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Pipelines") != m.end() && !m["Pipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["Pipelines"].type()) {
        vector<DescribeChangeOrderResponseBodyDataPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChangeOrderResponseBodyDataPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelines = make_shared<vector<DescribeChangeOrderResponseBodyDataPipelines>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<long>(boost::any_cast<long>(m["SubStatus"]));
    }
    if (m.find("SupportRollback") != m.end() && !m["SupportRollback"].empty()) {
      supportRollback = make_shared<bool>(boost::any_cast<bool>(m["SupportRollback"]));
    }
  }


  virtual ~DescribeChangeOrderResponseBodyData() = default;
};
class DescribeChangeOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeChangeOrderResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeChangeOrderResponseBody() {}

  explicit DescribeChangeOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeChangeOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeChangeOrderResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeChangeOrderResponseBody() = default;
};
class DescribeChangeOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChangeOrderResponseBody> body{};

  DescribeChangeOrderResponse() {}

  explicit DescribeChangeOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChangeOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChangeOrderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChangeOrderResponse() = default;
};
class DescribeComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> type{};

  DescribeComponentsRequest() {}

  explicit DescribeComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeComponentsRequest() = default;
};
class DescribeComponentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> componentDescription{};
  shared_ptr<string> componentKey{};
  shared_ptr<bool> expired{};
  shared_ptr<string> type{};

  DescribeComponentsResponseBodyData() {}

  explicit DescribeComponentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentDescription) {
      res["ComponentDescription"] = boost::any(*componentDescription);
    }
    if (componentKey) {
      res["ComponentKey"] = boost::any(*componentKey);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentDescription") != m.end() && !m["ComponentDescription"].empty()) {
      componentDescription = make_shared<string>(boost::any_cast<string>(m["ComponentDescription"]));
    }
    if (m.find("ComponentKey") != m.end() && !m["ComponentKey"].empty()) {
      componentKey = make_shared<string>(boost::any_cast<string>(m["ComponentKey"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeComponentsResponseBodyData() = default;
};
class DescribeComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeComponentsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeComponentsResponseBody() {}

  explicit DescribeComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeComponentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeComponentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeComponentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeComponentsResponseBody() = default;
};
class DescribeComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentsResponseBody> body{};

  DescribeComponentsResponse() {}

  explicit DescribeComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentsResponse() = default;
};
class DescribeConfigMapRequest : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};

  DescribeConfigMapRequest() {}

  explicit DescribeConfigMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
  }


  virtual ~DescribeConfigMapRequest() = default;
};
class DescribeConfigMapResponseBodyDataRelateApps : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};

  DescribeConfigMapResponseBodyDataRelateApps() {}

  explicit DescribeConfigMapResponseBodyDataRelateApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~DescribeConfigMapResponseBodyDataRelateApps() = default;
};
class DescribeConfigMapResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};
  shared_ptr<vector<DescribeConfigMapResponseBodyDataRelateApps>> relateApps{};
  shared_ptr<long> updateTime{};

  DescribeConfigMapResponseBodyData() {}

  explicit DescribeConfigMapResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (relateApps) {
      vector<boost::any> temp1;
      for(auto item1:*relateApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelateApps"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("RelateApps") != m.end() && !m["RelateApps"].empty()) {
      if (typeid(vector<boost::any>) == m["RelateApps"].type()) {
        vector<DescribeConfigMapResponseBodyDataRelateApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelateApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigMapResponseBodyDataRelateApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relateApps = make_shared<vector<DescribeConfigMapResponseBodyDataRelateApps>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeConfigMapResponseBodyData() = default;
};
class DescribeConfigMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeConfigMapResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeConfigMapResponseBody() {}

  explicit DescribeConfigMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeConfigMapResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeConfigMapResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeConfigMapResponseBody() = default;
};
class DescribeConfigMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConfigMapResponseBody> body{};

  DescribeConfigMapResponse() {}

  explicit DescribeConfigMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigMapResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigMapResponse() = default;
};
class DescribeConfigurationPriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memory{};
  shared_ptr<string> workload{};

  DescribeConfigurationPriceRequest() {}

  explicit DescribeConfigurationPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (workload) {
      res["Workload"] = boost::any(*workload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Workload") != m.end() && !m["Workload"].empty()) {
      workload = make_shared<string>(boost::any_cast<string>(m["Workload"]));
    }
  }


  virtual ~DescribeConfigurationPriceRequest() = default;
};
class DescribeConfigurationPriceResponseBodyDataBagUsage : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<double> mem{};

  DescribeConfigurationPriceResponseBodyDataBagUsage() {}

  explicit DescribeConfigurationPriceResponseBodyDataBagUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<double>(boost::any_cast<double>(m["Mem"]));
    }
  }


  virtual ~DescribeConfigurationPriceResponseBodyDataBagUsage() = default;
};
class DescribeConfigurationPriceResponseBodyDataOrder : public Darabonba::Model {
public:
  shared_ptr<double> discountAmount{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<string>> ruleIds{};
  shared_ptr<double> tradeAmount{};

  DescribeConfigurationPriceResponseBodyDataOrder() {}

  explicit DescribeConfigurationPriceResponseBodyDataOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~DescribeConfigurationPriceResponseBodyDataOrder() = default;
};
class DescribeConfigurationPriceResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ruleDescId{};

  DescribeConfigurationPriceResponseBodyDataRules() {}

  explicit DescribeConfigurationPriceResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleDescId) {
      res["RuleDescId"] = boost::any(*ruleDescId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleDescId") != m.end() && !m["RuleDescId"].empty()) {
      ruleDescId = make_shared<long>(boost::any_cast<long>(m["RuleDescId"]));
    }
  }


  virtual ~DescribeConfigurationPriceResponseBodyDataRules() = default;
};
class DescribeConfigurationPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeConfigurationPriceResponseBodyDataBagUsage> bagUsage{};
  shared_ptr<DescribeConfigurationPriceResponseBodyDataOrder> order{};
  shared_ptr<vector<DescribeConfigurationPriceResponseBodyDataRules>> rules{};

  DescribeConfigurationPriceResponseBodyData() {}

  explicit DescribeConfigurationPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bagUsage) {
      res["BagUsage"] = bagUsage ? boost::any(bagUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BagUsage") != m.end() && !m["BagUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["BagUsage"].type()) {
        DescribeConfigurationPriceResponseBodyDataBagUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BagUsage"]));
        bagUsage = make_shared<DescribeConfigurationPriceResponseBodyDataBagUsage>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        DescribeConfigurationPriceResponseBodyDataOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<DescribeConfigurationPriceResponseBodyDataOrder>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeConfigurationPriceResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigurationPriceResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeConfigurationPriceResponseBodyDataRules>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigurationPriceResponseBodyData() = default;
};
class DescribeConfigurationPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeConfigurationPriceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeConfigurationPriceResponseBody() {}

  explicit DescribeConfigurationPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeConfigurationPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeConfigurationPriceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeConfigurationPriceResponseBody() = default;
};
class DescribeConfigurationPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConfigurationPriceResponseBody> body{};

  DescribeConfigurationPriceResponse() {}

  explicit DescribeConfigurationPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigurationPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigurationPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigurationPriceResponse() = default;
};
class DescribeEdasContainersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> disabled{};
  shared_ptr<string> edasContainerVersion{};

  DescribeEdasContainersResponseBodyData() {}

  explicit DescribeEdasContainersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (edasContainerVersion) {
      res["EdasContainerVersion"] = boost::any(*edasContainerVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("EdasContainerVersion") != m.end() && !m["EdasContainerVersion"].empty()) {
      edasContainerVersion = make_shared<string>(boost::any_cast<string>(m["EdasContainerVersion"]));
    }
  }


  virtual ~DescribeEdasContainersResponseBodyData() = default;
};
class DescribeEdasContainersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeEdasContainersResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeEdasContainersResponseBody() {}

  explicit DescribeEdasContainersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeEdasContainersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEdasContainersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeEdasContainersResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeEdasContainersResponseBody() = default;
};
class DescribeEdasContainersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEdasContainersResponseBody> body{};

  DescribeEdasContainersResponse() {}

  explicit DescribeEdasContainersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEdasContainersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEdasContainersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEdasContainersResponse() = default;
};
class DescribeGreyTagRouteRequest : public Darabonba::Model {
public:
  shared_ptr<long> greyTagRouteId{};

  DescribeGreyTagRouteRequest() {}

  explicit DescribeGreyTagRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
  }


  virtual ~DescribeGreyTagRouteRequest() = default;
};
class DescribeGreyTagRouteResponseBodyDataDubboRulesItems : public Darabonba::Model {
public:
  shared_ptr<string> cond{};
  shared_ptr<string> expr{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeGreyTagRouteResponseBodyDataDubboRulesItems() {}

  explicit DescribeGreyTagRouteResponseBodyDataDubboRulesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cond) {
      res["cond"] = boost::any(*cond);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cond") != m.end() && !m["cond"].empty()) {
      cond = make_shared<string>(boost::any_cast<string>(m["cond"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBodyDataDubboRulesItems() = default;
};
class DescribeGreyTagRouteResponseBodyDataDubboRules : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> group{};
  shared_ptr<vector<DescribeGreyTagRouteResponseBodyDataDubboRulesItems>> items{};
  shared_ptr<string> methodName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> version{};

  DescribeGreyTagRouteResponseBodyDataDubboRules() {}

  explicit DescribeGreyTagRouteResponseBodyDataDubboRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (methodName) {
      res["methodName"] = boost::any(*methodName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<DescribeGreyTagRouteResponseBodyDataDubboRulesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGreyTagRouteResponseBodyDataDubboRulesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeGreyTagRouteResponseBodyDataDubboRulesItems>>(expect1);
      }
    }
    if (m.find("methodName") != m.end() && !m["methodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["methodName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBodyDataDubboRules() = default;
};
class DescribeGreyTagRouteResponseBodyDataScRulesItems : public Darabonba::Model {
public:
  shared_ptr<string> cond{};
  shared_ptr<string> expr{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeGreyTagRouteResponseBodyDataScRulesItems() {}

  explicit DescribeGreyTagRouteResponseBodyDataScRulesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cond) {
      res["cond"] = boost::any(*cond);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cond") != m.end() && !m["cond"].empty()) {
      cond = make_shared<string>(boost::any_cast<string>(m["cond"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBodyDataScRulesItems() = default;
};
class DescribeGreyTagRouteResponseBodyDataScRules : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<vector<DescribeGreyTagRouteResponseBodyDataScRulesItems>> items{};
  shared_ptr<string> path{};

  DescribeGreyTagRouteResponseBodyDataScRules() {}

  explicit DescribeGreyTagRouteResponseBodyDataScRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<DescribeGreyTagRouteResponseBodyDataScRulesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGreyTagRouteResponseBodyDataScRulesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeGreyTagRouteResponseBodyDataScRulesItems>>(expect1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBodyDataScRules() = default;
};
class DescribeGreyTagRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<DescribeGreyTagRouteResponseBodyDataDubboRules>> dubboRules{};
  shared_ptr<long> greyTagRouteId{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeGreyTagRouteResponseBodyDataScRules>> scRules{};
  shared_ptr<long> updateTime{};

  DescribeGreyTagRouteResponseBodyData() {}

  explicit DescribeGreyTagRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dubboRules) {
      vector<boost::any> temp1;
      for(auto item1:*dubboRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DubboRules"] = boost::any(temp1);
    }
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scRules) {
      vector<boost::any> temp1;
      for(auto item1:*scRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScRules"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DubboRules") != m.end() && !m["DubboRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DubboRules"].type()) {
        vector<DescribeGreyTagRouteResponseBodyDataDubboRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DubboRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGreyTagRouteResponseBodyDataDubboRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dubboRules = make_shared<vector<DescribeGreyTagRouteResponseBodyDataDubboRules>>(expect1);
      }
    }
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScRules") != m.end() && !m["ScRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ScRules"].type()) {
        vector<DescribeGreyTagRouteResponseBodyDataScRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGreyTagRouteResponseBodyDataScRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scRules = make_shared<vector<DescribeGreyTagRouteResponseBodyDataScRules>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBodyData() = default;
};
class DescribeGreyTagRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGreyTagRouteResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeGreyTagRouteResponseBody() {}

  explicit DescribeGreyTagRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeGreyTagRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeGreyTagRouteResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeGreyTagRouteResponseBody() = default;
};
class DescribeGreyTagRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGreyTagRouteResponseBody> body{};

  DescribeGreyTagRouteResponse() {}

  explicit DescribeGreyTagRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGreyTagRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGreyTagRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGreyTagRouteResponse() = default;
};
class DescribeIngressRequest : public Darabonba::Model {
public:
  shared_ptr<long> ingressId{};

  DescribeIngressRequest() {}

  explicit DescribeIngressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
  }


  virtual ~DescribeIngressRequest() = default;
};
class DescribeIngressResponseBodyDataDefaultRule : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> backendProtocol{};
  shared_ptr<long> containerPort{};

  DescribeIngressResponseBodyDataDefaultRule() {}

  explicit DescribeIngressResponseBodyDataDefaultRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (backendProtocol) {
      res["BackendProtocol"] = boost::any(*backendProtocol);
    }
    if (containerPort) {
      res["ContainerPort"] = boost::any(*containerPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BackendProtocol") != m.end() && !m["BackendProtocol"].empty()) {
      backendProtocol = make_shared<string>(boost::any_cast<string>(m["BackendProtocol"]));
    }
    if (m.find("ContainerPort") != m.end() && !m["ContainerPort"].empty()) {
      containerPort = make_shared<long>(boost::any_cast<long>(m["ContainerPort"]));
    }
  }


  virtual ~DescribeIngressResponseBodyDataDefaultRule() = default;
};
class DescribeIngressResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> backendProtocol{};
  shared_ptr<long> containerPort{};
  shared_ptr<string> domain{};
  shared_ptr<string> path{};

  DescribeIngressResponseBodyDataRules() {}

  explicit DescribeIngressResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (backendProtocol) {
      res["BackendProtocol"] = boost::any(*backendProtocol);
    }
    if (containerPort) {
      res["ContainerPort"] = boost::any(*containerPort);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BackendProtocol") != m.end() && !m["BackendProtocol"].empty()) {
      backendProtocol = make_shared<string>(boost::any_cast<string>(m["BackendProtocol"]));
    }
    if (m.find("ContainerPort") != m.end() && !m["ContainerPort"].empty()) {
      containerPort = make_shared<long>(boost::any_cast<long>(m["ContainerPort"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DescribeIngressResponseBodyDataRules() = default;
};
class DescribeIngressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<DescribeIngressResponseBodyDataDefaultRule> defaultRule{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalanceType{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};
  shared_ptr<vector<DescribeIngressResponseBodyDataRules>> rules{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbType{};

  DescribeIngressResponseBodyData() {}

  explicit DescribeIngressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (defaultRule) {
      res["DefaultRule"] = defaultRule ? boost::any(defaultRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalanceType) {
      res["LoadBalanceType"] = boost::any(*loadBalanceType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbType) {
      res["SlbType"] = boost::any(*slbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("DefaultRule") != m.end() && !m["DefaultRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultRule"].type()) {
        DescribeIngressResponseBodyDataDefaultRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultRule"]));
        defaultRule = make_shared<DescribeIngressResponseBodyDataDefaultRule>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalanceType") != m.end() && !m["LoadBalanceType"].empty()) {
      loadBalanceType = make_shared<string>(boost::any_cast<string>(m["LoadBalanceType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeIngressResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIngressResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeIngressResponseBodyDataRules>>(expect1);
      }
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbType") != m.end() && !m["SlbType"].empty()) {
      slbType = make_shared<string>(boost::any_cast<string>(m["SlbType"]));
    }
  }


  virtual ~DescribeIngressResponseBodyData() = default;
};
class DescribeIngressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeIngressResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeIngressResponseBody() {}

  explicit DescribeIngressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeIngressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeIngressResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeIngressResponseBody() = default;
};
class DescribeIngressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIngressResponseBody> body{};

  DescribeIngressResponse() {}

  explicit DescribeIngressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIngressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIngressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIngressResponse() = default;
};
class DescribeInstanceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeInstanceLogRequest() {}

  explicit DescribeInstanceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceLogRequest() = default;
};
class DescribeInstanceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeInstanceLogResponseBody() {}

  explicit DescribeInstanceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeInstanceLogResponseBody() = default;
};
class DescribeInstanceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceLogResponseBody> body{};

  DescribeInstanceLogResponse() {}

  explicit DescribeInstanceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceLogResponse() = default;
};
class DescribeInstanceSpecificationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<bool> enable{};
  shared_ptr<long> id{};
  shared_ptr<long> memory{};
  shared_ptr<string> specInfo{};
  shared_ptr<long> version{};

  DescribeInstanceSpecificationsResponseBodyData() {}

  explicit DescribeInstanceSpecificationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (specInfo) {
      res["SpecInfo"] = boost::any(*specInfo);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("SpecInfo") != m.end() && !m["SpecInfo"].empty()) {
      specInfo = make_shared<string>(boost::any_cast<string>(m["SpecInfo"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~DescribeInstanceSpecificationsResponseBodyData() = default;
};
class DescribeInstanceSpecificationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeInstanceSpecificationsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeInstanceSpecificationsResponseBody() {}

  explicit DescribeInstanceSpecificationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeInstanceSpecificationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSpecificationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeInstanceSpecificationsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeInstanceSpecificationsResponseBody() = default;
};
class DescribeInstanceSpecificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceSpecificationsResponseBody> body{};

  DescribeInstanceSpecificationsResponse() {}

  explicit DescribeInstanceSpecificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSpecificationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSpecificationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSpecificationsResponse() = default;
};
class DescribeJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> jobId{};

  DescribeJobStatusRequest() {}

  explicit DescribeJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DescribeJobStatusRequest() = default;
};
class DescribeJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<long> completionTime{};
  shared_ptr<long> failed{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<long> startTime{};
  shared_ptr<string> state{};
  shared_ptr<long> succeeded{};

  DescribeJobStatusResponseBodyData() {}

  explicit DescribeJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (completionTime) {
      res["CompletionTime"] = boost::any(*completionTime);
    }
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("CompletionTime") != m.end() && !m["CompletionTime"].empty()) {
      completionTime = make_shared<long>(boost::any_cast<long>(m["CompletionTime"]));
    }
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<long>(boost::any_cast<long>(m["Succeeded"]));
    }
  }


  virtual ~DescribeJobStatusResponseBodyData() = default;
};
class DescribeJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeJobStatusResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeJobStatusResponseBody() {}

  explicit DescribeJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeJobStatusResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeJobStatusResponseBody() = default;
};
class DescribeJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeJobStatusResponseBody> body{};

  DescribeJobStatusResponse() {}

  explicit DescribeJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobStatusResponse() = default;
};
class DescribeNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};

  DescribeNamespaceRequest() {}

  explicit DescribeNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DescribeNamespaceRequest() = default;
};
class DescribeNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> regionId{};

  DescribeNamespaceResponseBodyData() {}

  explicit DescribeNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeNamespaceResponseBodyData() = default;
};
class DescribeNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeNamespaceResponseBody() {}

  explicit DescribeNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeNamespaceResponseBody() = default;
};
class DescribeNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespaceResponseBody> body{};

  DescribeNamespaceResponse() {}

  explicit DescribeNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespaceResponse() = default;
};
class DescribeNamespaceListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> containCustom{};
  shared_ptr<bool> hybridCloudExclude{};

  DescribeNamespaceListRequest() {}

  explicit DescribeNamespaceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containCustom) {
      res["ContainCustom"] = boost::any(*containCustom);
    }
    if (hybridCloudExclude) {
      res["HybridCloudExclude"] = boost::any(*hybridCloudExclude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainCustom") != m.end() && !m["ContainCustom"].empty()) {
      containCustom = make_shared<bool>(boost::any_cast<bool>(m["ContainCustom"]));
    }
    if (m.find("HybridCloudExclude") != m.end() && !m["HybridCloudExclude"].empty()) {
      hybridCloudExclude = make_shared<bool>(boost::any_cast<bool>(m["HybridCloudExclude"]));
    }
  }


  virtual ~DescribeNamespaceListRequest() = default;
};
class DescribeNamespaceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agentInstall{};
  shared_ptr<bool> current{};
  shared_ptr<bool> custom{};
  shared_ptr<bool> hybridCloudEnable{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeNamespaceListResponseBodyData() {}

  explicit DescribeNamespaceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentInstall) {
      res["AgentInstall"] = boost::any(*agentInstall);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (custom) {
      res["Custom"] = boost::any(*custom);
    }
    if (hybridCloudEnable) {
      res["HybridCloudEnable"] = boost::any(*hybridCloudEnable);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentInstall") != m.end() && !m["AgentInstall"].empty()) {
      agentInstall = make_shared<string>(boost::any_cast<string>(m["AgentInstall"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<bool>(boost::any_cast<bool>(m["Current"]));
    }
    if (m.find("Custom") != m.end() && !m["Custom"].empty()) {
      custom = make_shared<bool>(boost::any_cast<bool>(m["Custom"]));
    }
    if (m.find("HybridCloudEnable") != m.end() && !m["HybridCloudEnable"].empty()) {
      hybridCloudEnable = make_shared<bool>(boost::any_cast<bool>(m["HybridCloudEnable"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeNamespaceListResponseBodyData() = default;
};
class DescribeNamespaceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeNamespaceListResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeNamespaceListResponseBody() {}

  explicit DescribeNamespaceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeNamespaceListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNamespaceListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeNamespaceListResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeNamespaceListResponseBody() = default;
};
class DescribeNamespaceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespaceListResponseBody> body{};

  DescribeNamespaceListResponse() {}

  explicit DescribeNamespaceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespaceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespaceListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespaceListResponse() = default;
};
class DescribeNamespaceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};

  DescribeNamespaceResourcesRequest() {}

  explicit DescribeNamespaceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DescribeNamespaceResourcesRequest() = default;
};
class DescribeNamespaceResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> appCount{};
  shared_ptr<string> belongRegion{};
  shared_ptr<string> description{};
  shared_ptr<string> jumpServerAppId{};
  shared_ptr<string> jumpServerIp{};
  shared_ptr<string> lastChangeOrderId{};
  shared_ptr<bool> lastChangeOrderRunning{};
  shared_ptr<string> lastChangeOrderStatus{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> notificationExpired{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeNamespaceResourcesResponseBodyData() {}

  explicit DescribeNamespaceResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCount) {
      res["AppCount"] = boost::any(*appCount);
    }
    if (belongRegion) {
      res["BelongRegion"] = boost::any(*belongRegion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jumpServerAppId) {
      res["JumpServerAppId"] = boost::any(*jumpServerAppId);
    }
    if (jumpServerIp) {
      res["JumpServerIp"] = boost::any(*jumpServerIp);
    }
    if (lastChangeOrderId) {
      res["LastChangeOrderId"] = boost::any(*lastChangeOrderId);
    }
    if (lastChangeOrderRunning) {
      res["LastChangeOrderRunning"] = boost::any(*lastChangeOrderRunning);
    }
    if (lastChangeOrderStatus) {
      res["LastChangeOrderStatus"] = boost::any(*lastChangeOrderStatus);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (notificationExpired) {
      res["NotificationExpired"] = boost::any(*notificationExpired);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCount") != m.end() && !m["AppCount"].empty()) {
      appCount = make_shared<long>(boost::any_cast<long>(m["AppCount"]));
    }
    if (m.find("BelongRegion") != m.end() && !m["BelongRegion"].empty()) {
      belongRegion = make_shared<string>(boost::any_cast<string>(m["BelongRegion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JumpServerAppId") != m.end() && !m["JumpServerAppId"].empty()) {
      jumpServerAppId = make_shared<string>(boost::any_cast<string>(m["JumpServerAppId"]));
    }
    if (m.find("JumpServerIp") != m.end() && !m["JumpServerIp"].empty()) {
      jumpServerIp = make_shared<string>(boost::any_cast<string>(m["JumpServerIp"]));
    }
    if (m.find("LastChangeOrderId") != m.end() && !m["LastChangeOrderId"].empty()) {
      lastChangeOrderId = make_shared<string>(boost::any_cast<string>(m["LastChangeOrderId"]));
    }
    if (m.find("LastChangeOrderRunning") != m.end() && !m["LastChangeOrderRunning"].empty()) {
      lastChangeOrderRunning = make_shared<bool>(boost::any_cast<bool>(m["LastChangeOrderRunning"]));
    }
    if (m.find("LastChangeOrderStatus") != m.end() && !m["LastChangeOrderStatus"].empty()) {
      lastChangeOrderStatus = make_shared<string>(boost::any_cast<string>(m["LastChangeOrderStatus"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NotificationExpired") != m.end() && !m["NotificationExpired"].empty()) {
      notificationExpired = make_shared<bool>(boost::any_cast<bool>(m["NotificationExpired"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeNamespaceResourcesResponseBodyData() = default;
};
class DescribeNamespaceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeNamespaceResourcesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeNamespaceResourcesResponseBody() {}

  explicit DescribeNamespaceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeNamespaceResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeNamespaceResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeNamespaceResourcesResponseBody() = default;
};
class DescribeNamespaceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespaceResourcesResponseBody> body{};

  DescribeNamespaceResourcesResponse() {}

  explicit DescribeNamespaceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespaceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespaceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespaceResourcesResponse() = default;
};
class DescribeNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeNamespacesRequest() {}

  explicit DescribeNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeNamespacesRequest() = default;
};
class DescribeNamespacesResponseBodyDataNamespaces : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> secretKey{};
  shared_ptr<string> tenantId{};

  DescribeNamespacesResponseBodyDataNamespaces() {}

  explicit DescribeNamespacesResponseBodyDataNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyDataNamespaces() = default;
};
class DescribeNamespacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeNamespacesResponseBodyDataNamespaces>> namespaces{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  DescribeNamespacesResponseBodyData() {}

  explicit DescribeNamespacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<DescribeNamespacesResponseBodyDataNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNamespacesResponseBodyDataNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<DescribeNamespacesResponseBodyDataNamespaces>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyData() = default;
};
class DescribeNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeNamespacesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribeNamespacesResponseBody() {}

  explicit DescribeNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeNamespacesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeNamespacesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribeNamespacesResponseBody() = default;
};
class DescribeNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespacesResponseBody> body{};

  DescribeNamespacesResponse() {}

  explicit DescribeNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespacesResponse() = default;
};
class DescribePipelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> pipelineId{};

  DescribePipelineRequest() {}

  explicit DescribePipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
  }


  virtual ~DescribePipelineRequest() = default;
};
class DescribePipelineResponseBodyDataStageListTaskList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> errorIgnore{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<bool> showManualIgnore{};
  shared_ptr<string> stageId{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  DescribePipelineResponseBodyDataStageListTaskList() {}

  explicit DescribePipelineResponseBodyDataStageListTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorIgnore) {
      res["ErrorIgnore"] = boost::any(*errorIgnore);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (showManualIgnore) {
      res["ShowManualIgnore"] = boost::any(*showManualIgnore);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorIgnore") != m.end() && !m["ErrorIgnore"].empty()) {
      errorIgnore = make_shared<long>(boost::any_cast<long>(m["ErrorIgnore"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ShowManualIgnore") != m.end() && !m["ShowManualIgnore"].empty()) {
      showManualIgnore = make_shared<bool>(boost::any_cast<bool>(m["ShowManualIgnore"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DescribePipelineResponseBodyDataStageListTaskList() = default;
};
class DescribePipelineResponseBodyDataStageList : public Darabonba::Model {
public:
  shared_ptr<long> executorType{};
  shared_ptr<string> stageId{};
  shared_ptr<string> stageName{};
  shared_ptr<long> status{};
  shared_ptr<vector<DescribePipelineResponseBodyDataStageListTaskList>> taskList{};

  DescribePipelineResponseBodyDataStageList() {}

  explicit DescribePipelineResponseBodyDataStageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorType) {
      res["ExecutorType"] = boost::any(*executorType);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorType") != m.end() && !m["ExecutorType"].empty()) {
      executorType = make_shared<long>(boost::any_cast<long>(m["ExecutorType"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<DescribePipelineResponseBodyDataStageListTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePipelineResponseBodyDataStageListTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<DescribePipelineResponseBodyDataStageListTaskList>>(expect1);
      }
    }
  }


  virtual ~DescribePipelineResponseBodyDataStageList() = default;
};
class DescribePipelineResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coStatus{};
  shared_ptr<string> currentStageId{};
  shared_ptr<string> nextPipelineId{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> pipelineName{};
  shared_ptr<long> pipelineStatus{};
  shared_ptr<bool> showBatch{};
  shared_ptr<vector<DescribePipelineResponseBodyDataStageList>> stageList{};

  DescribePipelineResponseBodyData() {}

  explicit DescribePipelineResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coStatus) {
      res["CoStatus"] = boost::any(*coStatus);
    }
    if (currentStageId) {
      res["CurrentStageId"] = boost::any(*currentStageId);
    }
    if (nextPipelineId) {
      res["NextPipelineId"] = boost::any(*nextPipelineId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineName) {
      res["PipelineName"] = boost::any(*pipelineName);
    }
    if (pipelineStatus) {
      res["PipelineStatus"] = boost::any(*pipelineStatus);
    }
    if (showBatch) {
      res["ShowBatch"] = boost::any(*showBatch);
    }
    if (stageList) {
      vector<boost::any> temp1;
      for(auto item1:*stageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoStatus") != m.end() && !m["CoStatus"].empty()) {
      coStatus = make_shared<string>(boost::any_cast<string>(m["CoStatus"]));
    }
    if (m.find("CurrentStageId") != m.end() && !m["CurrentStageId"].empty()) {
      currentStageId = make_shared<string>(boost::any_cast<string>(m["CurrentStageId"]));
    }
    if (m.find("NextPipelineId") != m.end() && !m["NextPipelineId"].empty()) {
      nextPipelineId = make_shared<string>(boost::any_cast<string>(m["NextPipelineId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("PipelineName") != m.end() && !m["PipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["PipelineName"]));
    }
    if (m.find("PipelineStatus") != m.end() && !m["PipelineStatus"].empty()) {
      pipelineStatus = make_shared<long>(boost::any_cast<long>(m["PipelineStatus"]));
    }
    if (m.find("ShowBatch") != m.end() && !m["ShowBatch"].empty()) {
      showBatch = make_shared<bool>(boost::any_cast<bool>(m["ShowBatch"]));
    }
    if (m.find("StageList") != m.end() && !m["StageList"].empty()) {
      if (typeid(vector<boost::any>) == m["StageList"].type()) {
        vector<DescribePipelineResponseBodyDataStageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePipelineResponseBodyDataStageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stageList = make_shared<vector<DescribePipelineResponseBodyDataStageList>>(expect1);
      }
    }
  }


  virtual ~DescribePipelineResponseBodyData() = default;
};
class DescribePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePipelineResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  DescribePipelineResponseBody() {}

  explicit DescribePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePipelineResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePipelineResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribePipelineResponseBody() = default;
};
class DescribePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePipelineResponseBody> body{};

  DescribePipelineResponse() {}

  explicit DescribePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePipelineResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePipelineResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegionRecommendZones : public Darabonba::Model {
public:
  shared_ptr<vector<string>> recommendZone{};

  DescribeRegionsResponseBodyRegionsRegionRecommendZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionRecommendZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recommendZone) {
      res["RecommendZone"] = boost::any(*recommendZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecommendZone") != m.end() && !m["RecommendZone"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecommendZone"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecommendZone"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recommendZone = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionRecommendZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionRecommendZones> recommendZones{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (recommendZones) {
      res["RecommendZones"] = recommendZones ? boost::any(recommendZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RecommendZones") != m.end() && !m["RecommendZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecommendZones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionRecommendZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecommendZones"]));
        recommendZones = make_shared<DescribeRegionsResponseBodyRegionsRegionRecommendZones>(model1);
      }
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
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
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DisableApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> scalingRuleName{};

  DisableApplicationScalingRuleRequest() {}

  explicit DisableApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~DisableApplicationScalingRuleRequest() = default;
};
class DisableApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  DisableApplicationScalingRuleResponseBody() {}

  explicit DisableApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DisableApplicationScalingRuleResponseBody() = default;
};
class DisableApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationScalingRuleResponseBody> body{};

  DisableApplicationScalingRuleResponse() {}

  explicit DisableApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationScalingRuleResponse() = default;
};
class EnableApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> scalingRuleName{};

  EnableApplicationScalingRuleRequest() {}

  explicit EnableApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~EnableApplicationScalingRuleRequest() = default;
};
class EnableApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  EnableApplicationScalingRuleResponseBody() {}

  explicit EnableApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~EnableApplicationScalingRuleResponseBody() = default;
};
class EnableApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationScalingRuleResponseBody> body{};

  EnableApplicationScalingRuleResponse() {}

  explicit EnableApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationScalingRuleResponse() = default;
};
class ExecJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> command{};
  shared_ptr<string> commandArgs{};
  shared_ptr<string> envs{};
  shared_ptr<string> eventId{};
  shared_ptr<string> jarStartArgs{};
  shared_ptr<string> jarStartOptions{};
  shared_ptr<string> warStartOptions{};

  ExecJobRequest() {}

  explicit ExecJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (commandArgs) {
      res["CommandArgs"] = boost::any(*commandArgs);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (jarStartArgs) {
      res["JarStartArgs"] = boost::any(*jarStartArgs);
    }
    if (jarStartOptions) {
      res["JarStartOptions"] = boost::any(*jarStartOptions);
    }
    if (warStartOptions) {
      res["WarStartOptions"] = boost::any(*warStartOptions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("CommandArgs") != m.end() && !m["CommandArgs"].empty()) {
      commandArgs = make_shared<string>(boost::any_cast<string>(m["CommandArgs"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      envs = make_shared<string>(boost::any_cast<string>(m["Envs"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("JarStartArgs") != m.end() && !m["JarStartArgs"].empty()) {
      jarStartArgs = make_shared<string>(boost::any_cast<string>(m["JarStartArgs"]));
    }
    if (m.find("JarStartOptions") != m.end() && !m["JarStartOptions"].empty()) {
      jarStartOptions = make_shared<string>(boost::any_cast<string>(m["JarStartOptions"]));
    }
    if (m.find("WarStartOptions") != m.end() && !m["WarStartOptions"].empty()) {
      warStartOptions = make_shared<string>(boost::any_cast<string>(m["WarStartOptions"]));
    }
  }


  virtual ~ExecJobRequest() = default;
};
class ExecJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> success{};

  ExecJobResponseBodyData() {}

  explicit ExecJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ExecJobResponseBodyData() = default;
};
class ExecJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExecJobResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ExecJobResponseBody() {}

  explicit ExecJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ExecJobResponseBody() = default;
};
class ExecJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecJobResponseBody> body{};

  ExecJobResponse() {}

  explicit ExecJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecJobResponseBody>(model1);
      }
    }
  }


  virtual ~ExecJobResponse() = default;
};
class ListAppEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> eventType{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> objectKind{};
  shared_ptr<string> objectName{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reason{};

  ListAppEventsRequest() {}

  explicit ListAppEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (objectKind) {
      res["ObjectKind"] = boost::any(*objectKind);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ObjectKind") != m.end() && !m["ObjectKind"].empty()) {
      objectKind = make_shared<string>(boost::any_cast<string>(m["ObjectKind"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ListAppEventsRequest() = default;
};
class ListAppEventsResponseBodyDataAppEventEntity : public Darabonba::Model {
public:
  shared_ptr<string> eventType{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> objectKind{};
  shared_ptr<string> objectName{};
  shared_ptr<string> reason{};

  ListAppEventsResponseBodyDataAppEventEntity() {}

  explicit ListAppEventsResponseBodyDataAppEventEntity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (objectKind) {
      res["ObjectKind"] = boost::any(*objectKind);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ObjectKind") != m.end() && !m["ObjectKind"].empty()) {
      objectKind = make_shared<string>(boost::any_cast<string>(m["ObjectKind"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ListAppEventsResponseBodyDataAppEventEntity() = default;
};
class ListAppEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppEventsResponseBodyDataAppEventEntity>> appEventEntity{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListAppEventsResponseBodyData() {}

  explicit ListAppEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appEventEntity) {
      vector<boost::any> temp1;
      for(auto item1:*appEventEntity){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppEventEntity"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppEventEntity") != m.end() && !m["AppEventEntity"].empty()) {
      if (typeid(vector<boost::any>) == m["AppEventEntity"].type()) {
        vector<ListAppEventsResponseBodyDataAppEventEntity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppEventEntity"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppEventsResponseBodyDataAppEventEntity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appEventEntity = make_shared<vector<ListAppEventsResponseBodyDataAppEventEntity>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListAppEventsResponseBodyData() = default;
};
class ListAppEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListAppEventsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAppEventsResponseBody() {}

  explicit ListAppEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
        ListAppEventsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppEventsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~ListAppEventsResponseBody() = default;
};
class ListAppEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppEventsResponseBody> body{};

  ListAppEventsResponse() {}

  explicit ListAppEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppEventsResponse() = default;
};
class ListAppServicesPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serviceType{};

  ListAppServicesPageRequest() {}

  explicit ListAppServicesPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~ListAppServicesPageRequest() = default;
};
class ListAppServicesPageResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> edasAppId{};
  shared_ptr<string> edasAppName{};
  shared_ptr<string> group{};
  shared_ptr<long> instanceNum{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> version{};

  ListAppServicesPageResponseBodyDataResult() {}

  explicit ListAppServicesPageResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edasAppId) {
      res["EdasAppId"] = boost::any(*edasAppId);
    }
    if (edasAppName) {
      res["EdasAppName"] = boost::any(*edasAppName);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceNum) {
      res["InstanceNum"] = boost::any(*instanceNum);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EdasAppId") != m.end() && !m["EdasAppId"].empty()) {
      edasAppId = make_shared<string>(boost::any_cast<string>(m["EdasAppId"]));
    }
    if (m.find("EdasAppName") != m.end() && !m["EdasAppName"].empty()) {
      edasAppName = make_shared<string>(boost::any_cast<string>(m["EdasAppName"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceNum") != m.end() && !m["InstanceNum"].empty()) {
      instanceNum = make_shared<long>(boost::any_cast<long>(m["InstanceNum"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAppServicesPageResponseBodyDataResult() = default;
};
class ListAppServicesPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<ListAppServicesPageResponseBodyDataResult>> result{};
  shared_ptr<string> totalSize{};

  ListAppServicesPageResponseBodyData() {}

  explicit ListAppServicesPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListAppServicesPageResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppServicesPageResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAppServicesPageResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<string>(boost::any_cast<string>(m["TotalSize"]));
    }
  }


  virtual ~ListAppServicesPageResponseBodyData() = default;
};
class ListAppServicesPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAppServicesPageResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListAppServicesPageResponseBody() {}

  explicit ListAppServicesPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAppServicesPageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppServicesPageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAppServicesPageResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListAppServicesPageResponseBody() = default;
};
class ListAppServicesPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppServicesPageResponseBody> body{};

  ListAppServicesPageResponse() {}

  explicit ListAppServicesPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppServicesPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppServicesPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppServicesPageResponse() = default;
};
class ListAppVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ListAppVersionsRequest() {}

  explicit ListAppVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~ListAppVersionsRequest() = default;
};
class ListAppVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> buildPackageUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<string> warUrl{};

  ListAppVersionsResponseBodyData() {}

  explicit ListAppVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildPackageUrl) {
      res["BuildPackageUrl"] = boost::any(*buildPackageUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (warUrl) {
      res["WarUrl"] = boost::any(*warUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildPackageUrl") != m.end() && !m["BuildPackageUrl"].empty()) {
      buildPackageUrl = make_shared<string>(boost::any_cast<string>(m["BuildPackageUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WarUrl") != m.end() && !m["WarUrl"].empty()) {
      warUrl = make_shared<string>(boost::any_cast<string>(m["WarUrl"]));
    }
  }


  virtual ~ListAppVersionsResponseBodyData() = default;
};
class ListAppVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAppVersionsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAppVersionsResponseBody() {}

  explicit ListAppVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAppVersionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppVersionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAppVersionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~ListAppVersionsResponseBody() = default;
};
class ListAppVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppVersionsResponseBody> body{};

  ListAppVersionsResponse() {}

  explicit ListAppVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppVersionsResponse() = default;
};
class ListApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> fieldType{};
  shared_ptr<string> fieldValue{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> tags{};

  ListApplicationsRequest() {}

  explicit ListApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (fieldType) {
      res["FieldType"] = boost::any(*fieldType);
    }
    if (fieldValue) {
      res["FieldValue"] = boost::any(*fieldValue);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FieldType") != m.end() && !m["FieldType"].empty()) {
      fieldType = make_shared<string>(boost::any_cast<string>(m["FieldType"]));
    }
    if (m.find("FieldValue") != m.end() && !m["FieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["FieldValue"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListApplicationsRequest() = default;
};
class ListApplicationsResponseBodyDataApplicationsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListApplicationsResponseBodyDataApplicationsTags() {}

  explicit ListApplicationsResponseBodyDataApplicationsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListApplicationsResponseBodyDataApplicationsTags() = default;
};
class ListApplicationsResponseBodyDataApplications : public Darabonba::Model {
public:
  shared_ptr<bool> appDeletingStatus{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> instances{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> runningInstances{};
  shared_ptr<vector<ListApplicationsResponseBodyDataApplicationsTags>> tags{};

  ListApplicationsResponseBodyDataApplications() {}

  explicit ListApplicationsResponseBodyDataApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDeletingStatus) {
      res["AppDeletingStatus"] = boost::any(*appDeletingStatus);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (instances) {
      res["Instances"] = boost::any(*instances);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runningInstances) {
      res["RunningInstances"] = boost::any(*runningInstances);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDeletingStatus") != m.end() && !m["AppDeletingStatus"].empty()) {
      appDeletingStatus = make_shared<bool>(boost::any_cast<bool>(m["AppDeletingStatus"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      instances = make_shared<long>(boost::any_cast<long>(m["Instances"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunningInstances") != m.end() && !m["RunningInstances"].empty()) {
      runningInstances = make_shared<long>(boost::any_cast<long>(m["RunningInstances"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListApplicationsResponseBodyDataApplicationsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyDataApplicationsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListApplicationsResponseBodyDataApplicationsTags>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyDataApplications() = default;
};
class ListApplicationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyDataApplications>> applications{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListApplicationsResponseBodyData() {}

  explicit ListApplicationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsResponseBodyDataApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyDataApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsResponseBodyDataApplications>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListApplicationsResponseBodyData() = default;
};
class ListApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<ListApplicationsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListApplicationsResponseBody() {}

  explicit ListApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListApplicationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListApplicationsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListApplicationsResponseBody() = default;
};
class ListApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsResponseBody> body{};

  ListApplicationsResponse() {}

  explicit ListApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponse() = default;
};
class ListChangeOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> coStatus{};
  shared_ptr<string> coType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> key{};
  shared_ptr<long> pageSize{};

  ListChangeOrdersRequest() {}

  explicit ListChangeOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (coStatus) {
      res["CoStatus"] = boost::any(*coStatus);
    }
    if (coType) {
      res["CoType"] = boost::any(*coType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CoStatus") != m.end() && !m["CoStatus"].empty()) {
      coStatus = make_shared<string>(boost::any_cast<string>(m["CoStatus"]));
    }
    if (m.find("CoType") != m.end() && !m["CoType"].empty()) {
      coType = make_shared<string>(boost::any_cast<string>(m["CoType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListChangeOrdersRequest() = default;
};
class ListChangeOrdersResponseBodyDataChangeOrderList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> batchCount{};
  shared_ptr<string> batchType{};
  shared_ptr<string> changeOrderId{};
  shared_ptr<string> coType{};
  shared_ptr<string> coTypeCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> description{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> source{};
  shared_ptr<long> status{};
  shared_ptr<string> userId{};

  ListChangeOrdersResponseBodyDataChangeOrderList() {}

  explicit ListChangeOrdersResponseBodyDataChangeOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (batchCount) {
      res["BatchCount"] = boost::any(*batchCount);
    }
    if (batchType) {
      res["BatchType"] = boost::any(*batchType);
    }
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    if (coType) {
      res["CoType"] = boost::any(*coType);
    }
    if (coTypeCode) {
      res["CoTypeCode"] = boost::any(*coTypeCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BatchCount") != m.end() && !m["BatchCount"].empty()) {
      batchCount = make_shared<long>(boost::any_cast<long>(m["BatchCount"]));
    }
    if (m.find("BatchType") != m.end() && !m["BatchType"].empty()) {
      batchType = make_shared<string>(boost::any_cast<string>(m["BatchType"]));
    }
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
    if (m.find("CoType") != m.end() && !m["CoType"].empty()) {
      coType = make_shared<string>(boost::any_cast<string>(m["CoType"]));
    }
    if (m.find("CoTypeCode") != m.end() && !m["CoTypeCode"].empty()) {
      coTypeCode = make_shared<string>(boost::any_cast<string>(m["CoTypeCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListChangeOrdersResponseBodyDataChangeOrderList() = default;
};
class ListChangeOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChangeOrdersResponseBodyDataChangeOrderList>> changeOrderList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListChangeOrdersResponseBodyData() {}

  explicit ListChangeOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*changeOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeOrderList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderList") != m.end() && !m["ChangeOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeOrderList"].type()) {
        vector<ListChangeOrdersResponseBodyDataChangeOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChangeOrdersResponseBodyDataChangeOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeOrderList = make_shared<vector<ListChangeOrdersResponseBodyDataChangeOrderList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListChangeOrdersResponseBodyData() = default;
};
class ListChangeOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListChangeOrdersResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListChangeOrdersResponseBody() {}

  explicit ListChangeOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListChangeOrdersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChangeOrdersResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListChangeOrdersResponseBody() = default;
};
class ListChangeOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChangeOrdersResponseBody> body{};

  ListChangeOrdersResponse() {}

  explicit ListChangeOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChangeOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChangeOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~ListChangeOrdersResponse() = default;
};
class ListConsumedServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ListConsumedServicesRequest() {}

  explicit ListConsumedServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~ListConsumedServicesRequest() = default;
};
class ListConsumedServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> group2Ip{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListConsumedServicesResponseBodyData() {}

  explicit ListConsumedServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (group2Ip) {
      res["Group2Ip"] = boost::any(*group2Ip);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Group2Ip") != m.end() && !m["Group2Ip"].empty()) {
      group2Ip = make_shared<string>(boost::any_cast<string>(m["Group2Ip"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListConsumedServicesResponseBodyData() = default;
};
class ListConsumedServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListConsumedServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListConsumedServicesResponseBody() {}

  explicit ListConsumedServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListConsumedServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConsumedServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListConsumedServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListConsumedServicesResponseBody() = default;
};
class ListConsumedServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConsumedServicesResponseBody> body{};

  ListConsumedServicesResponse() {}

  explicit ListConsumedServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsumedServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsumedServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsumedServicesResponse() = default;
};
class ListGreyTagRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ListGreyTagRouteRequest() {}

  explicit ListGreyTagRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~ListGreyTagRouteRequest() = default;
};
class ListGreyTagRouteResponseBodyDataResultDubboRulesItems : public Darabonba::Model {
public:
  shared_ptr<string> cond{};
  shared_ptr<string> expr{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListGreyTagRouteResponseBodyDataResultDubboRulesItems() {}

  explicit ListGreyTagRouteResponseBodyDataResultDubboRulesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cond) {
      res["cond"] = boost::any(*cond);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cond") != m.end() && !m["cond"].empty()) {
      cond = make_shared<string>(boost::any_cast<string>(m["cond"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyDataResultDubboRulesItems() = default;
};
class ListGreyTagRouteResponseBodyDataResultDubboRules : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> group{};
  shared_ptr<vector<ListGreyTagRouteResponseBodyDataResultDubboRulesItems>> items{};
  shared_ptr<string> methodName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> version{};

  ListGreyTagRouteResponseBodyDataResultDubboRules() {}

  explicit ListGreyTagRouteResponseBodyDataResultDubboRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (methodName) {
      res["methodName"] = boost::any(*methodName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListGreyTagRouteResponseBodyDataResultDubboRulesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGreyTagRouteResponseBodyDataResultDubboRulesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListGreyTagRouteResponseBodyDataResultDubboRulesItems>>(expect1);
      }
    }
    if (m.find("methodName") != m.end() && !m["methodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["methodName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyDataResultDubboRules() = default;
};
class ListGreyTagRouteResponseBodyDataResultScRulesItems : public Darabonba::Model {
public:
  shared_ptr<string> cond{};
  shared_ptr<string> expr{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListGreyTagRouteResponseBodyDataResultScRulesItems() {}

  explicit ListGreyTagRouteResponseBodyDataResultScRulesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cond) {
      res["cond"] = boost::any(*cond);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cond") != m.end() && !m["cond"].empty()) {
      cond = make_shared<string>(boost::any_cast<string>(m["cond"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyDataResultScRulesItems() = default;
};
class ListGreyTagRouteResponseBodyDataResultScRules : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<vector<ListGreyTagRouteResponseBodyDataResultScRulesItems>> items{};
  shared_ptr<string> path{};

  ListGreyTagRouteResponseBodyDataResultScRules() {}

  explicit ListGreyTagRouteResponseBodyDataResultScRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListGreyTagRouteResponseBodyDataResultScRulesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGreyTagRouteResponseBodyDataResultScRulesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListGreyTagRouteResponseBodyDataResultScRulesItems>>(expect1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyDataResultScRules() = default;
};
class ListGreyTagRouteResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListGreyTagRouteResponseBodyDataResultDubboRules>> dubboRules{};
  shared_ptr<long> greyTagRouteId{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListGreyTagRouteResponseBodyDataResultScRules>> scRules{};
  shared_ptr<long> updateTime{};

  ListGreyTagRouteResponseBodyDataResult() {}

  explicit ListGreyTagRouteResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dubboRules) {
      vector<boost::any> temp1;
      for(auto item1:*dubboRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DubboRules"] = boost::any(temp1);
    }
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scRules) {
      vector<boost::any> temp1;
      for(auto item1:*scRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScRules"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DubboRules") != m.end() && !m["DubboRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DubboRules"].type()) {
        vector<ListGreyTagRouteResponseBodyDataResultDubboRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DubboRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGreyTagRouteResponseBodyDataResultDubboRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dubboRules = make_shared<vector<ListGreyTagRouteResponseBodyDataResultDubboRules>>(expect1);
      }
    }
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScRules") != m.end() && !m["ScRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ScRules"].type()) {
        vector<ListGreyTagRouteResponseBodyDataResultScRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGreyTagRouteResponseBodyDataResultScRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scRules = make_shared<vector<ListGreyTagRouteResponseBodyDataResultScRules>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyDataResult() = default;
};
class ListGreyTagRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGreyTagRouteResponseBodyDataResult>> result{};
  shared_ptr<long> totalSize{};

  ListGreyTagRouteResponseBodyData() {}

  explicit ListGreyTagRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGreyTagRouteResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGreyTagRouteResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGreyTagRouteResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBodyData() = default;
};
class ListGreyTagRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListGreyTagRouteResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListGreyTagRouteResponseBody() {}

  explicit ListGreyTagRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGreyTagRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGreyTagRouteResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListGreyTagRouteResponseBody() = default;
};
class ListGreyTagRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGreyTagRouteResponseBody> body{};

  ListGreyTagRouteResponse() {}

  explicit ListGreyTagRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGreyTagRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGreyTagRouteResponseBody>(model1);
      }
    }
  }


  virtual ~ListGreyTagRouteResponse() = default;
};
class ListIngressesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> namespaceId{};

  ListIngressesRequest() {}

  explicit ListIngressesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListIngressesRequest() = default;
};
class ListIngressesResponseBodyDataIngressList : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalanceType{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbType{};

  ListIngressesResponseBodyDataIngressList() {}

  explicit ListIngressesResponseBodyDataIngressList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalanceType) {
      res["LoadBalanceType"] = boost::any(*loadBalanceType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbType) {
      res["SlbType"] = boost::any(*slbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<string>(boost::any_cast<string>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalanceType") != m.end() && !m["LoadBalanceType"].empty()) {
      loadBalanceType = make_shared<string>(boost::any_cast<string>(m["LoadBalanceType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbType") != m.end() && !m["SlbType"].empty()) {
      slbType = make_shared<string>(boost::any_cast<string>(m["SlbType"]));
    }
  }


  virtual ~ListIngressesResponseBodyDataIngressList() = default;
};
class ListIngressesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListIngressesResponseBodyDataIngressList>> ingressList{};

  ListIngressesResponseBodyData() {}

  explicit ListIngressesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressList) {
      vector<boost::any> temp1;
      for(auto item1:*ingressList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IngressList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressList") != m.end() && !m["IngressList"].empty()) {
      if (typeid(vector<boost::any>) == m["IngressList"].type()) {
        vector<ListIngressesResponseBodyDataIngressList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IngressList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIngressesResponseBodyDataIngressList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ingressList = make_shared<vector<ListIngressesResponseBodyDataIngressList>>(expect1);
      }
    }
  }


  virtual ~ListIngressesResponseBodyData() = default;
};
class ListIngressesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListIngressesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListIngressesResponseBody() {}

  explicit ListIngressesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListIngressesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListIngressesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListIngressesResponseBody() = default;
};
class ListIngressesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIngressesResponseBody> body{};

  ListIngressesResponse() {}

  explicit ListIngressesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIngressesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIngressesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIngressesResponse() = default;
};
class ListLogConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  ListLogConfigsRequest() {}

  explicit ListLogConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListLogConfigsRequest() = default;
};
class ListLogConfigsResponseBodyDataLogConfigs : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> logDir{};
  shared_ptr<string> logType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> slsLogStore{};
  shared_ptr<string> slsProject{};
  shared_ptr<string> storeType{};

  ListLogConfigsResponseBodyDataLogConfigs() {}

  explicit ListLogConfigsResponseBodyDataLogConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (logDir) {
      res["LogDir"] = boost::any(*logDir);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (slsLogStore) {
      res["SlsLogStore"] = boost::any(*slsLogStore);
    }
    if (slsProject) {
      res["SlsProject"] = boost::any(*slsProject);
    }
    if (storeType) {
      res["StoreType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LogDir") != m.end() && !m["LogDir"].empty()) {
      logDir = make_shared<string>(boost::any_cast<string>(m["LogDir"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SlsLogStore") != m.end() && !m["SlsLogStore"].empty()) {
      slsLogStore = make_shared<string>(boost::any_cast<string>(m["SlsLogStore"]));
    }
    if (m.find("SlsProject") != m.end() && !m["SlsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["SlsProject"]));
    }
    if (m.find("StoreType") != m.end() && !m["StoreType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["StoreType"]));
    }
  }


  virtual ~ListLogConfigsResponseBodyDataLogConfigs() = default;
};
class ListLogConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListLogConfigsResponseBodyDataLogConfigs>> logConfigs{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListLogConfigsResponseBodyData() {}

  explicit ListLogConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (logConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*logConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogConfigs"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("LogConfigs") != m.end() && !m["LogConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["LogConfigs"].type()) {
        vector<ListLogConfigsResponseBodyDataLogConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLogConfigsResponseBodyDataLogConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logConfigs = make_shared<vector<ListLogConfigsResponseBodyDataLogConfigs>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListLogConfigsResponseBodyData() = default;
};
class ListLogConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListLogConfigsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListLogConfigsResponseBody() {}

  explicit ListLogConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListLogConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListLogConfigsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListLogConfigsResponseBody() = default;
};
class ListLogConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogConfigsResponseBody> body{};

  ListLogConfigsResponse() {}

  explicit ListLogConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogConfigsResponse() = default;
};
class ListNamespaceChangeOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> coStatus{};
  shared_ptr<string> coType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> key{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageSize{};

  ListNamespaceChangeOrdersRequest() {}

  explicit ListNamespaceChangeOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coStatus) {
      res["CoStatus"] = boost::any(*coStatus);
    }
    if (coType) {
      res["CoType"] = boost::any(*coType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoStatus") != m.end() && !m["CoStatus"].empty()) {
      coStatus = make_shared<string>(boost::any_cast<string>(m["CoStatus"]));
    }
    if (m.find("CoType") != m.end() && !m["CoType"].empty()) {
      coType = make_shared<string>(boost::any_cast<string>(m["CoType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListNamespaceChangeOrdersRequest() = default;
};
class ListNamespaceChangeOrdersResponseBodyDataChangeOrderList : public Darabonba::Model {
public:
  shared_ptr<long> batchCount{};
  shared_ptr<string> batchType{};
  shared_ptr<string> changeOrderId{};
  shared_ptr<string> coType{};
  shared_ptr<string> coTypeCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> description{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> pipelines{};
  shared_ptr<string> source{};
  shared_ptr<long> status{};
  shared_ptr<string> userId{};

  ListNamespaceChangeOrdersResponseBodyDataChangeOrderList() {}

  explicit ListNamespaceChangeOrdersResponseBodyDataChangeOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchCount) {
      res["BatchCount"] = boost::any(*batchCount);
    }
    if (batchType) {
      res["BatchType"] = boost::any(*batchType);
    }
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    if (coType) {
      res["CoType"] = boost::any(*coType);
    }
    if (coTypeCode) {
      res["CoTypeCode"] = boost::any(*coTypeCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pipelines) {
      res["Pipelines"] = boost::any(*pipelines);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchCount") != m.end() && !m["BatchCount"].empty()) {
      batchCount = make_shared<long>(boost::any_cast<long>(m["BatchCount"]));
    }
    if (m.find("BatchType") != m.end() && !m["BatchType"].empty()) {
      batchType = make_shared<string>(boost::any_cast<string>(m["BatchType"]));
    }
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
    if (m.find("CoType") != m.end() && !m["CoType"].empty()) {
      coType = make_shared<string>(boost::any_cast<string>(m["CoType"]));
    }
    if (m.find("CoTypeCode") != m.end() && !m["CoTypeCode"].empty()) {
      coTypeCode = make_shared<string>(boost::any_cast<string>(m["CoTypeCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Pipelines") != m.end() && !m["Pipelines"].empty()) {
      pipelines = make_shared<string>(boost::any_cast<string>(m["Pipelines"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListNamespaceChangeOrdersResponseBodyDataChangeOrderList() = default;
};
class ListNamespaceChangeOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListNamespaceChangeOrdersResponseBodyDataChangeOrderList>> changeOrderList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListNamespaceChangeOrdersResponseBodyData() {}

  explicit ListNamespaceChangeOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*changeOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeOrderList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderList") != m.end() && !m["ChangeOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeOrderList"].type()) {
        vector<ListNamespaceChangeOrdersResponseBodyDataChangeOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNamespaceChangeOrdersResponseBodyDataChangeOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeOrderList = make_shared<vector<ListNamespaceChangeOrdersResponseBodyDataChangeOrderList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListNamespaceChangeOrdersResponseBodyData() = default;
};
class ListNamespaceChangeOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListNamespaceChangeOrdersResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListNamespaceChangeOrdersResponseBody() {}

  explicit ListNamespaceChangeOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListNamespaceChangeOrdersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListNamespaceChangeOrdersResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListNamespaceChangeOrdersResponseBody() = default;
};
class ListNamespaceChangeOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNamespaceChangeOrdersResponseBody> body{};

  ListNamespaceChangeOrdersResponse() {}

  explicit ListNamespaceChangeOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNamespaceChangeOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespaceChangeOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespaceChangeOrdersResponse() = default;
};
class ListNamespacedConfigMapsRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};

  ListNamespacedConfigMapsRequest() {}

  explicit ListNamespacedConfigMapsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListNamespacedConfigMapsRequest() = default;
};
class ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};

  ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps() {}

  explicit ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps() = default;
};
class ListNamespacedConfigMapsResponseBodyDataConfigMaps : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};
  shared_ptr<vector<ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps>> relateApps{};
  shared_ptr<long> updateTime{};

  ListNamespacedConfigMapsResponseBodyDataConfigMaps() {}

  explicit ListNamespacedConfigMapsResponseBodyDataConfigMaps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (relateApps) {
      vector<boost::any> temp1;
      for(auto item1:*relateApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelateApps"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("RelateApps") != m.end() && !m["RelateApps"].empty()) {
      if (typeid(vector<boost::any>) == m["RelateApps"].type()) {
        vector<ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelateApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relateApps = make_shared<vector<ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListNamespacedConfigMapsResponseBodyDataConfigMaps() = default;
};
class ListNamespacedConfigMapsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListNamespacedConfigMapsResponseBodyDataConfigMaps>> configMaps{};

  ListNamespacedConfigMapsResponseBodyData() {}

  explicit ListNamespacedConfigMapsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMaps) {
      vector<boost::any> temp1;
      for(auto item1:*configMaps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigMaps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMaps") != m.end() && !m["ConfigMaps"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigMaps"].type()) {
        vector<ListNamespacedConfigMapsResponseBodyDataConfigMaps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigMaps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNamespacedConfigMapsResponseBodyDataConfigMaps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configMaps = make_shared<vector<ListNamespacedConfigMapsResponseBodyDataConfigMaps>>(expect1);
      }
    }
  }


  virtual ~ListNamespacedConfigMapsResponseBodyData() = default;
};
class ListNamespacedConfigMapsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListNamespacedConfigMapsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListNamespacedConfigMapsResponseBody() {}

  explicit ListNamespacedConfigMapsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListNamespacedConfigMapsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListNamespacedConfigMapsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListNamespacedConfigMapsResponseBody() = default;
};
class ListNamespacedConfigMapsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNamespacedConfigMapsResponseBody> body{};

  ListNamespacedConfigMapsResponse() {}

  explicit ListNamespacedConfigMapsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNamespacedConfigMapsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespacedConfigMapsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespacedConfigMapsResponse() = default;
};
class ListPublishedServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ListPublishedServicesRequest() {}

  explicit ListPublishedServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~ListPublishedServicesRequest() = default;
};
class ListPublishedServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> group2Ip{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListPublishedServicesResponseBodyData() {}

  explicit ListPublishedServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (group2Ip) {
      res["Group2Ip"] = boost::any(*group2Ip);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Group2Ip") != m.end() && !m["Group2Ip"].empty()) {
      group2Ip = make_shared<string>(boost::any_cast<string>(m["Group2Ip"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListPublishedServicesResponseBodyData() = default;
};
class ListPublishedServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListPublishedServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListPublishedServicesResponseBody() {}

  explicit ListPublishedServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPublishedServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPublishedServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ListPublishedServicesResponseBody() = default;
};
class ListPublishedServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishedServicesResponseBody> body{};

  ListPublishedServicesResponse() {}

  explicit ListPublishedServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishedServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishedServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishedServicesResponse() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyDataTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyDataTagResources() {}

  explicit ListTagResourcesResponseBodyDataTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyDataTagResources() = default;
};
class ListTagResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTagResourcesResponseBodyDataTagResources>> tagResources{};

  ListTagResourcesResponseBodyData() {}

  explicit ListTagResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyDataTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyDataTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyDataTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyData() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTagResourcesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTagResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTagResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class OpenSaeServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenSaeServiceResponseBody() {}

  explicit OpenSaeServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenSaeServiceResponseBody() = default;
};
class OpenSaeServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenSaeServiceResponseBody> body{};

  OpenSaeServiceResponse() {}

  explicit OpenSaeServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenSaeServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenSaeServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenSaeServiceResponse() = default;
};
class QueryResourceStaticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  QueryResourceStaticsRequest() {}

  explicit QueryResourceStaticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~QueryResourceStaticsRequest() = default;
};
class QueryResourceStaticsResponseBodyDataRealTimeRes : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<double> memory{};

  QueryResourceStaticsResponseBodyDataRealTimeRes() {}

  explicit QueryResourceStaticsResponseBodyDataRealTimeRes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
  }


  virtual ~QueryResourceStaticsResponseBodyDataRealTimeRes() = default;
};
class QueryResourceStaticsResponseBodyDataSummary : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<double> memory{};

  QueryResourceStaticsResponseBodyDataSummary() {}

  explicit QueryResourceStaticsResponseBodyDataSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
  }


  virtual ~QueryResourceStaticsResponseBodyDataSummary() = default;
};
class QueryResourceStaticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryResourceStaticsResponseBodyDataRealTimeRes> realTimeRes{};
  shared_ptr<QueryResourceStaticsResponseBodyDataSummary> summary{};

  QueryResourceStaticsResponseBodyData() {}

  explicit QueryResourceStaticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (realTimeRes) {
      res["RealTimeRes"] = realTimeRes ? boost::any(realTimeRes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (summary) {
      res["Summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RealTimeRes") != m.end() && !m["RealTimeRes"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTimeRes"].type()) {
        QueryResourceStaticsResponseBodyDataRealTimeRes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTimeRes"]));
        realTimeRes = make_shared<QueryResourceStaticsResponseBodyDataRealTimeRes>(model1);
      }
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Summary"].type()) {
        QueryResourceStaticsResponseBodyDataSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Summary"]));
        summary = make_shared<QueryResourceStaticsResponseBodyDataSummary>(model1);
      }
    }
  }


  virtual ~QueryResourceStaticsResponseBodyData() = default;
};
class QueryResourceStaticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryResourceStaticsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  QueryResourceStaticsResponseBody() {}

  explicit QueryResourceStaticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryResourceStaticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryResourceStaticsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~QueryResourceStaticsResponseBody() = default;
};
class QueryResourceStaticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResourceStaticsResponseBody> body{};

  QueryResourceStaticsResponse() {}

  explicit QueryResourceStaticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResourceStaticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResourceStaticsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResourceStaticsResponse() = default;
};
class ReduceApplicationCapacityByInstanceIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> instanceIds{};

  ReduceApplicationCapacityByInstanceIdsRequest() {}

  explicit ReduceApplicationCapacityByInstanceIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~ReduceApplicationCapacityByInstanceIdsRequest() = default;
};
class ReduceApplicationCapacityByInstanceIdsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  ReduceApplicationCapacityByInstanceIdsResponseBodyData() {}

  explicit ReduceApplicationCapacityByInstanceIdsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~ReduceApplicationCapacityByInstanceIdsResponseBodyData() = default;
};
class ReduceApplicationCapacityByInstanceIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReduceApplicationCapacityByInstanceIdsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  ReduceApplicationCapacityByInstanceIdsResponseBody() {}

  explicit ReduceApplicationCapacityByInstanceIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReduceApplicationCapacityByInstanceIdsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReduceApplicationCapacityByInstanceIdsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~ReduceApplicationCapacityByInstanceIdsResponseBody() = default;
};
class ReduceApplicationCapacityByInstanceIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReduceApplicationCapacityByInstanceIdsResponseBody> body{};

  ReduceApplicationCapacityByInstanceIdsResponse() {}

  explicit ReduceApplicationCapacityByInstanceIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReduceApplicationCapacityByInstanceIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReduceApplicationCapacityByInstanceIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ReduceApplicationCapacityByInstanceIdsResponse() = default;
};
class RescaleApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> autoEnableApplicationScalingRule{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<long> replicas{};

  RescaleApplicationRequest() {}

  explicit RescaleApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (autoEnableApplicationScalingRule) {
      res["AutoEnableApplicationScalingRule"] = boost::any(*autoEnableApplicationScalingRule);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AutoEnableApplicationScalingRule") != m.end() && !m["AutoEnableApplicationScalingRule"].empty()) {
      autoEnableApplicationScalingRule = make_shared<bool>(boost::any_cast<bool>(m["AutoEnableApplicationScalingRule"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
  }


  virtual ~RescaleApplicationRequest() = default;
};
class RescaleApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  RescaleApplicationResponseBodyData() {}

  explicit RescaleApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~RescaleApplicationResponseBodyData() = default;
};
class RescaleApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RescaleApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RescaleApplicationResponseBody() {}

  explicit RescaleApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
        RescaleApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RescaleApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~RescaleApplicationResponseBody() = default;
};
class RescaleApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RescaleApplicationResponseBody> body{};

  RescaleApplicationResponse() {}

  explicit RescaleApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RescaleApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RescaleApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~RescaleApplicationResponse() = default;
};
class RescaleApplicationVerticallyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> cpu{};
  shared_ptr<string> memory{};

  RescaleApplicationVerticallyRequest() {}

  explicit RescaleApplicationVerticallyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
  }


  virtual ~RescaleApplicationVerticallyRequest() = default;
};
class RescaleApplicationVerticallyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  RescaleApplicationVerticallyResponseBodyData() {}

  explicit RescaleApplicationVerticallyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~RescaleApplicationVerticallyResponseBodyData() = default;
};
class RescaleApplicationVerticallyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RescaleApplicationVerticallyResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  RescaleApplicationVerticallyResponseBody() {}

  explicit RescaleApplicationVerticallyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RescaleApplicationVerticallyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RescaleApplicationVerticallyResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RescaleApplicationVerticallyResponseBody() = default;
};
class RescaleApplicationVerticallyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RescaleApplicationVerticallyResponseBody> body{};

  RescaleApplicationVerticallyResponse() {}

  explicit RescaleApplicationVerticallyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RescaleApplicationVerticallyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RescaleApplicationVerticallyResponseBody>(model1);
      }
    }
  }


  virtual ~RescaleApplicationVerticallyResponse() = default;
};
class RestartApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};

  RestartApplicationRequest() {}

  explicit RestartApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
  }


  virtual ~RestartApplicationRequest() = default;
};
class RestartApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  RestartApplicationResponseBodyData() {}

  explicit RestartApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~RestartApplicationResponseBodyData() = default;
};
class RestartApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RestartApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  RestartApplicationResponseBody() {}

  explicit RestartApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RestartApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestartApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RestartApplicationResponseBody() = default;
};
class RestartApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartApplicationResponseBody> body{};

  RestartApplicationResponse() {}

  explicit RestartApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~RestartApplicationResponse() = default;
};
class RestartInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> instanceIds{};

  RestartInstancesRequest() {}

  explicit RestartInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~RestartInstancesRequest() = default;
};
class RestartInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  RestartInstancesResponseBodyData() {}

  explicit RestartInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~RestartInstancesResponseBodyData() = default;
};
class RestartInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RestartInstancesResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  RestartInstancesResponseBody() {}

  explicit RestartInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RestartInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestartInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RestartInstancesResponseBody() = default;
};
class RestartInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartInstancesResponseBody> body{};

  RestartInstancesResponse() {}

  explicit RestartInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~RestartInstancesResponse() = default;
};
class RollbackApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> autoEnableApplicationScalingRule{};
  shared_ptr<long> batchWaitTime{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<string> updateStrategy{};
  shared_ptr<string> versionId{};

  RollbackApplicationRequest() {}

  explicit RollbackApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (autoEnableApplicationScalingRule) {
      res["AutoEnableApplicationScalingRule"] = boost::any(*autoEnableApplicationScalingRule);
    }
    if (batchWaitTime) {
      res["BatchWaitTime"] = boost::any(*batchWaitTime);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (updateStrategy) {
      res["UpdateStrategy"] = boost::any(*updateStrategy);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AutoEnableApplicationScalingRule") != m.end() && !m["AutoEnableApplicationScalingRule"].empty()) {
      autoEnableApplicationScalingRule = make_shared<string>(boost::any_cast<string>(m["AutoEnableApplicationScalingRule"]));
    }
    if (m.find("BatchWaitTime") != m.end() && !m["BatchWaitTime"].empty()) {
      batchWaitTime = make_shared<long>(boost::any_cast<long>(m["BatchWaitTime"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("UpdateStrategy") != m.end() && !m["UpdateStrategy"].empty()) {
      updateStrategy = make_shared<string>(boost::any_cast<string>(m["UpdateStrategy"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~RollbackApplicationRequest() = default;
};
class RollbackApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};
  shared_ptr<bool> isNeedApproval{};

  RollbackApplicationResponseBodyData() {}

  explicit RollbackApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    if (isNeedApproval) {
      res["IsNeedApproval"] = boost::any(*isNeedApproval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
    if (m.find("IsNeedApproval") != m.end() && !m["IsNeedApproval"].empty()) {
      isNeedApproval = make_shared<bool>(boost::any_cast<bool>(m["IsNeedApproval"]));
    }
  }


  virtual ~RollbackApplicationResponseBodyData() = default;
};
class RollbackApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RollbackApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  RollbackApplicationResponseBody() {}

  explicit RollbackApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RollbackApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RollbackApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RollbackApplicationResponseBody() = default;
};
class RollbackApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RollbackApplicationResponseBody> body{};

  RollbackApplicationResponse() {}

  explicit RollbackApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RollbackApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackApplicationResponse() = default;
};
class StartApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  StartApplicationRequest() {}

  explicit StartApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~StartApplicationRequest() = default;
};
class StartApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  StartApplicationResponseBodyData() {}

  explicit StartApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~StartApplicationResponseBodyData() = default;
};
class StartApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StartApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  StartApplicationResponseBody() {}

  explicit StartApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StartApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StartApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~StartApplicationResponseBody() = default;
};
class StartApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartApplicationResponseBody> body{};

  StartApplicationResponse() {}

  explicit StartApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~StartApplicationResponse() = default;
};
class StopApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  StopApplicationRequest() {}

  explicit StopApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~StopApplicationRequest() = default;
};
class StopApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  StopApplicationResponseBodyData() {}

  explicit StopApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~StopApplicationResponseBodyData() = default;
};
class StopApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StopApplicationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  StopApplicationResponseBody() {}

  explicit StopApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StopApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StopApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~StopApplicationResponseBody() = default;
};
class StopApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopApplicationResponseBody> body{};

  StopApplicationResponse() {}

  explicit StopApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~StopApplicationResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnbindSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> internet{};
  shared_ptr<bool> intranet{};

  UnbindSlbRequest() {}

  explicit UnbindSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (internet) {
      res["Internet"] = boost::any(*internet);
    }
    if (intranet) {
      res["Intranet"] = boost::any(*intranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Internet") != m.end() && !m["Internet"].empty()) {
      internet = make_shared<bool>(boost::any_cast<bool>(m["Internet"]));
    }
    if (m.find("Intranet") != m.end() && !m["Intranet"].empty()) {
      intranet = make_shared<bool>(boost::any_cast<bool>(m["Intranet"]));
    }
  }


  virtual ~UnbindSlbRequest() = default;
};
class UnbindSlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> changeOrderId{};

  UnbindSlbResponseBodyData() {}

  explicit UnbindSlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderId) {
      res["ChangeOrderId"] = boost::any(*changeOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeOrderId") != m.end() && !m["ChangeOrderId"].empty()) {
      changeOrderId = make_shared<string>(boost::any_cast<string>(m["ChangeOrderId"]));
    }
  }


  virtual ~UnbindSlbResponseBodyData() = default;
};
class UnbindSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UnbindSlbResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UnbindSlbResponseBody() {}

  explicit UnbindSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UnbindSlbResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnbindSlbResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UnbindSlbResponseBody() = default;
};
class UnbindSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindSlbResponseBody> body{};

  UnbindSlbResponse() {}

  explicit UnbindSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindSlbResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindSlbResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> deleteAll{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKeys{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteAll) {
      res["DeleteAll"] = boost::any(*deleteAll);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteAll") != m.end() && !m["DeleteAll"].empty()) {
      deleteAll = make_shared<bool>(boost::any_cast<bool>(m["DeleteAll"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeys = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAppSecurityGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> securityGroupId{};

  UpdateAppSecurityGroupRequest() {}

  explicit UpdateAppSecurityGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~UpdateAppSecurityGroupRequest() = default;
};
class UpdateAppSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateAppSecurityGroupResponseBody() {}

  explicit UpdateAppSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateAppSecurityGroupResponseBody() = default;
};
class UpdateAppSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppSecurityGroupResponseBody> body{};

  UpdateAppSecurityGroupResponse() {}

  explicit UpdateAppSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppSecurityGroupResponse() = default;
};
class UpdateApplicationDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appDescription{};
  shared_ptr<string> appId{};

  UpdateApplicationDescriptionRequest() {}

  explicit UpdateApplicationDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~UpdateApplicationDescriptionRequest() = default;
};
class UpdateApplicationDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateApplicationDescriptionResponseBody() {}

  explicit UpdateApplicationDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateApplicationDescriptionResponseBody() = default;
};
class UpdateApplicationDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationDescriptionResponseBody> body{};

  UpdateApplicationDescriptionResponse() {}

  explicit UpdateApplicationDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationDescriptionResponse() = default;
};
class UpdateApplicationScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> minReadyInstanceRatio{};
  shared_ptr<long> minReadyInstances{};
  shared_ptr<string> scalingRuleMetric{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<string> scalingRuleTimer{};

  UpdateApplicationScalingRuleRequest() {}

  explicit UpdateApplicationScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (minReadyInstanceRatio) {
      res["MinReadyInstanceRatio"] = boost::any(*minReadyInstanceRatio);
    }
    if (minReadyInstances) {
      res["MinReadyInstances"] = boost::any(*minReadyInstances);
    }
    if (scalingRuleMetric) {
      res["ScalingRuleMetric"] = boost::any(*scalingRuleMetric);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (scalingRuleTimer) {
      res["ScalingRuleTimer"] = boost::any(*scalingRuleTimer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("MinReadyInstanceRatio") != m.end() && !m["MinReadyInstanceRatio"].empty()) {
      minReadyInstanceRatio = make_shared<long>(boost::any_cast<long>(m["MinReadyInstanceRatio"]));
    }
    if (m.find("MinReadyInstances") != m.end() && !m["MinReadyInstances"].empty()) {
      minReadyInstances = make_shared<long>(boost::any_cast<long>(m["MinReadyInstances"]));
    }
    if (m.find("ScalingRuleMetric") != m.end() && !m["ScalingRuleMetric"].empty()) {
      scalingRuleMetric = make_shared<string>(boost::any_cast<string>(m["ScalingRuleMetric"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("ScalingRuleTimer") != m.end() && !m["ScalingRuleTimer"].empty()) {
      scalingRuleTimer = make_shared<string>(boost::any_cast<string>(m["ScalingRuleTimer"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleRequest() = default;
};
class UpdateApplicationScalingRuleResponseBodyDataMetricMetrics : public Darabonba::Model {
public:
  shared_ptr<long> metricTargetAverageUtilization{};
  shared_ptr<string> metricType{};

  UpdateApplicationScalingRuleResponseBodyDataMetricMetrics() {}

  explicit UpdateApplicationScalingRuleResponseBodyDataMetricMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricTargetAverageUtilization) {
      res["MetricTargetAverageUtilization"] = boost::any(*metricTargetAverageUtilization);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricTargetAverageUtilization") != m.end() && !m["MetricTargetAverageUtilization"].empty()) {
      metricTargetAverageUtilization = make_shared<long>(boost::any_cast<long>(m["MetricTargetAverageUtilization"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBodyDataMetricMetrics() = default;
};
class UpdateApplicationScalingRuleResponseBodyDataMetric : public Darabonba::Model {
public:
  shared_ptr<long> maxReplicas{};
  shared_ptr<vector<UpdateApplicationScalingRuleResponseBodyDataMetricMetrics>> metrics{};
  shared_ptr<long> minReplicas{};

  UpdateApplicationScalingRuleResponseBodyDataMetric() {}

  explicit UpdateApplicationScalingRuleResponseBodyDataMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxReplicas) {
      res["MaxReplicas"] = boost::any(*maxReplicas);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (minReplicas) {
      res["MinReplicas"] = boost::any(*minReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxReplicas") != m.end() && !m["MaxReplicas"].empty()) {
      maxReplicas = make_shared<long>(boost::any_cast<long>(m["MaxReplicas"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<UpdateApplicationScalingRuleResponseBodyDataMetricMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateApplicationScalingRuleResponseBodyDataMetricMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<UpdateApplicationScalingRuleResponseBodyDataMetricMetrics>>(expect1);
      }
    }
    if (m.find("MinReplicas") != m.end() && !m["MinReplicas"].empty()) {
      minReplicas = make_shared<long>(boost::any_cast<long>(m["MinReplicas"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBodyDataMetric() = default;
};
class UpdateApplicationScalingRuleResponseBodyDataTimerSchedules : public Darabonba::Model {
public:
  shared_ptr<string> atTime{};
  shared_ptr<long> targetReplicas{};

  UpdateApplicationScalingRuleResponseBodyDataTimerSchedules() {}

  explicit UpdateApplicationScalingRuleResponseBodyDataTimerSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atTime) {
      res["AtTime"] = boost::any(*atTime);
    }
    if (targetReplicas) {
      res["TargetReplicas"] = boost::any(*targetReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AtTime") != m.end() && !m["AtTime"].empty()) {
      atTime = make_shared<string>(boost::any_cast<string>(m["AtTime"]));
    }
    if (m.find("TargetReplicas") != m.end() && !m["TargetReplicas"].empty()) {
      targetReplicas = make_shared<long>(boost::any_cast<long>(m["TargetReplicas"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBodyDataTimerSchedules() = default;
};
class UpdateApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> period{};
  shared_ptr<vector<UpdateApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules{};

  UpdateApplicationScalingRuleResponseBodyDataTimer() {}

  explicit UpdateApplicationScalingRuleResponseBodyDataTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<UpdateApplicationScalingRuleResponseBodyDataTimerSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateApplicationScalingRuleResponseBodyDataTimerSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<UpdateApplicationScalingRuleResponseBodyDataTimerSchedules>>(expect1);
      }
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBodyDataTimer() = default;
};
class UpdateApplicationScalingRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> lastDisableTime{};
  shared_ptr<UpdateApplicationScalingRuleResponseBodyDataMetric> metric{};
  shared_ptr<bool> scaleRuleEnabled{};
  shared_ptr<string> scaleRuleName{};
  shared_ptr<string> scaleRuleType{};
  shared_ptr<UpdateApplicationScalingRuleResponseBodyDataTimer> timer{};
  shared_ptr<long> updateTime{};

  UpdateApplicationScalingRuleResponseBodyData() {}

  explicit UpdateApplicationScalingRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastDisableTime) {
      res["LastDisableTime"] = boost::any(*lastDisableTime);
    }
    if (metric) {
      res["Metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleRuleEnabled) {
      res["ScaleRuleEnabled"] = boost::any(*scaleRuleEnabled);
    }
    if (scaleRuleName) {
      res["ScaleRuleName"] = boost::any(*scaleRuleName);
    }
    if (scaleRuleType) {
      res["ScaleRuleType"] = boost::any(*scaleRuleType);
    }
    if (timer) {
      res["Timer"] = timer ? boost::any(timer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastDisableTime") != m.end() && !m["LastDisableTime"].empty()) {
      lastDisableTime = make_shared<long>(boost::any_cast<long>(m["LastDisableTime"]));
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metric"].type()) {
        UpdateApplicationScalingRuleResponseBodyDataMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metric"]));
        metric = make_shared<UpdateApplicationScalingRuleResponseBodyDataMetric>(model1);
      }
    }
    if (m.find("ScaleRuleEnabled") != m.end() && !m["ScaleRuleEnabled"].empty()) {
      scaleRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["ScaleRuleEnabled"]));
    }
    if (m.find("ScaleRuleName") != m.end() && !m["ScaleRuleName"].empty()) {
      scaleRuleName = make_shared<string>(boost::any_cast<string>(m["ScaleRuleName"]));
    }
    if (m.find("ScaleRuleType") != m.end() && !m["ScaleRuleType"].empty()) {
      scaleRuleType = make_shared<string>(boost::any_cast<string>(m["ScaleRuleType"]));
    }
    if (m.find("Timer") != m.end() && !m["Timer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Timer"].type()) {
        UpdateApplicationScalingRuleResponseBodyDataTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Timer"]));
        timer = make_shared<UpdateApplicationScalingRuleResponseBodyDataTimer>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBodyData() = default;
};
class UpdateApplicationScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationScalingRuleResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> traceId{};

  UpdateApplicationScalingRuleResponseBody() {}

  explicit UpdateApplicationScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateApplicationScalingRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateApplicationScalingRuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateApplicationScalingRuleResponseBody() = default;
};
class UpdateApplicationScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationScalingRuleResponseBody> body{};

  UpdateApplicationScalingRuleResponse() {}

  explicit UpdateApplicationScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationScalingRuleResponse() = default;
};
class UpdateApplicationVswitchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> vSwitchId{};

  UpdateApplicationVswitchesRequest() {}

  explicit UpdateApplicationVswitchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~UpdateApplicationVswitchesRequest() = default;
};
class UpdateApplicationVswitchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateApplicationVswitchesResponseBody() {}

  explicit UpdateApplicationVswitchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateApplicationVswitchesResponseBody() = default;
};
class UpdateApplicationVswitchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationVswitchesResponseBody> body{};

  UpdateApplicationVswitchesResponse() {}

  explicit UpdateApplicationVswitchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationVswitchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationVswitchesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationVswitchesResponse() = default;
};
class UpdateConfigMapRequest : public Darabonba::Model {
public:
  shared_ptr<long> configMapId{};
  shared_ptr<string> data{};
  shared_ptr<string> description{};

  UpdateConfigMapRequest() {}

  explicit UpdateConfigMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<long>(boost::any_cast<long>(m["ConfigMapId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateConfigMapRequest() = default;
};
class UpdateConfigMapResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configMapId{};

  UpdateConfigMapResponseBodyData() {}

  explicit UpdateConfigMapResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMapId) {
      res["ConfigMapId"] = boost::any(*configMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigMapId") != m.end() && !m["ConfigMapId"].empty()) {
      configMapId = make_shared<string>(boost::any_cast<string>(m["ConfigMapId"]));
    }
  }


  virtual ~UpdateConfigMapResponseBodyData() = default;
};
class UpdateConfigMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateConfigMapResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateConfigMapResponseBody() {}

  explicit UpdateConfigMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateConfigMapResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateConfigMapResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateConfigMapResponseBody() = default;
};
class UpdateConfigMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConfigMapResponseBody> body{};

  UpdateConfigMapResponse() {}

  explicit UpdateConfigMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConfigMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigMapResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigMapResponse() = default;
};
class UpdateGreyTagRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> dubboRules{};
  shared_ptr<long> greyTagRouteId{};
  shared_ptr<string> scRules{};

  UpdateGreyTagRouteRequest() {}

  explicit UpdateGreyTagRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dubboRules) {
      res["DubboRules"] = boost::any(*dubboRules);
    }
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    if (scRules) {
      res["ScRules"] = boost::any(*scRules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DubboRules") != m.end() && !m["DubboRules"].empty()) {
      dubboRules = make_shared<string>(boost::any_cast<string>(m["DubboRules"]));
    }
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
    if (m.find("ScRules") != m.end() && !m["ScRules"].empty()) {
      scRules = make_shared<string>(boost::any_cast<string>(m["ScRules"]));
    }
  }


  virtual ~UpdateGreyTagRouteRequest() = default;
};
class UpdateGreyTagRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> greyTagRouteId{};

  UpdateGreyTagRouteResponseBodyData() {}

  explicit UpdateGreyTagRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greyTagRouteId) {
      res["GreyTagRouteId"] = boost::any(*greyTagRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreyTagRouteId") != m.end() && !m["GreyTagRouteId"].empty()) {
      greyTagRouteId = make_shared<long>(boost::any_cast<long>(m["GreyTagRouteId"]));
    }
  }


  virtual ~UpdateGreyTagRouteResponseBodyData() = default;
};
class UpdateGreyTagRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateGreyTagRouteResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateGreyTagRouteResponseBody() {}

  explicit UpdateGreyTagRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateGreyTagRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateGreyTagRouteResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateGreyTagRouteResponseBody() = default;
};
class UpdateGreyTagRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGreyTagRouteResponseBody> body{};

  UpdateGreyTagRouteResponse() {}

  explicit UpdateGreyTagRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGreyTagRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGreyTagRouteResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGreyTagRouteResponse() = default;
};
class UpdateIngressRequest : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<string> defaultRule{};
  shared_ptr<string> description{};
  shared_ptr<long> ingressId{};
  shared_ptr<string> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalanceType{};
  shared_ptr<string> rules{};

  UpdateIngressRequest() {}

  explicit UpdateIngressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (defaultRule) {
      res["DefaultRule"] = boost::any(*defaultRule);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalanceType) {
      res["LoadBalanceType"] = boost::any(*loadBalanceType);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("DefaultRule") != m.end() && !m["DefaultRule"].empty()) {
      defaultRule = make_shared<string>(boost::any_cast<string>(m["DefaultRule"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<string>(boost::any_cast<string>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalanceType") != m.end() && !m["LoadBalanceType"].empty()) {
      loadBalanceType = make_shared<string>(boost::any_cast<string>(m["LoadBalanceType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
  }


  virtual ~UpdateIngressRequest() = default;
};
class UpdateIngressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ingressId{};

  UpdateIngressResponseBodyData() {}

  explicit UpdateIngressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressId) {
      res["IngressId"] = boost::any(*ingressId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressId") != m.end() && !m["IngressId"].empty()) {
      ingressId = make_shared<long>(boost::any_cast<long>(m["IngressId"]));
    }
  }


  virtual ~UpdateIngressResponseBodyData() = default;
};
class UpdateIngressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateIngressResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateIngressResponseBody() {}

  explicit UpdateIngressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateIngressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateIngressResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateIngressResponseBody() = default;
};
class UpdateIngressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIngressResponseBody> body{};

  UpdateIngressResponse() {}

  explicit UpdateIngressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateIngressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIngressResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIngressResponse() = default;
};
class UpdateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};

  UpdateNamespaceRequest() {}

  explicit UpdateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~UpdateNamespaceRequest() = default;
};
class UpdateNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> namespaceDescription{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> regionId{};

  UpdateNamespaceResponseBodyData() {}

  explicit UpdateNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceDescription) {
      res["NamespaceDescription"] = boost::any(*namespaceDescription);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceDescription") != m.end() && !m["NamespaceDescription"].empty()) {
      namespaceDescription = make_shared<string>(boost::any_cast<string>(m["NamespaceDescription"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateNamespaceResponseBodyData() = default;
};
class UpdateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateNamespaceResponseBody() {}

  explicit UpdateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateNamespaceResponseBody() = default;
};
class UpdateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNamespaceResponseBody> body{};

  UpdateNamespaceResponse() {}

  explicit UpdateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNamespaceResponse() = default;
};
class UpdateNamespaceVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};
  shared_ptr<string> vpcId{};

  UpdateNamespaceVpcRequest() {}

  explicit UpdateNamespaceVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~UpdateNamespaceVpcRequest() = default;
};
class UpdateNamespaceVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> traceId{};

  UpdateNamespaceVpcResponseBody() {}

  explicit UpdateNamespaceVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~UpdateNamespaceVpcResponseBody() = default;
};
class UpdateNamespaceVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNamespaceVpcResponseBody> body{};

  UpdateNamespaceVpcResponse() {}

  explicit UpdateNamespaceVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNamespaceVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNamespaceVpcResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNamespaceVpcResponse() = default;
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
  AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrder(shared_ptr<AbortAndRollbackChangeOrderRequest> request);
  AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrderWithOptions(shared_ptr<AbortAndRollbackChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbortChangeOrderResponse abortChangeOrder(shared_ptr<AbortChangeOrderRequest> request);
  AbortChangeOrderResponse abortChangeOrderWithOptions(shared_ptr<AbortChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStartApplicationsResponse batchStartApplications(shared_ptr<BatchStartApplicationsRequest> request);
  BatchStartApplicationsResponse batchStartApplicationsWithOptions(shared_ptr<BatchStartApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStopApplicationsResponse batchStopApplications(shared_ptr<BatchStopApplicationsRequest> request);
  BatchStopApplicationsResponse batchStopApplicationsWithOptions(shared_ptr<BatchStopApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindSlbResponse bindSlb(shared_ptr<BindSlbRequest> request);
  BindSlbResponse bindSlbWithOptions(shared_ptr<BindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmPipelineBatchResponse confirmPipelineBatch(shared_ptr<ConfirmPipelineBatchRequest> request);
  ConfirmPipelineBatchResponse confirmPipelineBatchWithOptions(shared_ptr<ConfirmPipelineBatchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationScalingRuleResponse createApplicationScalingRule(shared_ptr<CreateApplicationScalingRuleRequest> request);
  CreateApplicationScalingRuleResponse createApplicationScalingRuleWithOptions(shared_ptr<CreateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigMapResponse createConfigMap(shared_ptr<CreateConfigMapRequest> request);
  CreateConfigMapResponse createConfigMapWithOptions(shared_ptr<CreateConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGreyTagRouteResponse createGreyTagRoute(shared_ptr<CreateGreyTagRouteRequest> request);
  CreateGreyTagRouteResponse createGreyTagRouteWithOptions(shared_ptr<CreateGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIngressResponse createIngress(shared_ptr<CreateIngressRequest> request);
  CreateIngressResponse createIngressWithOptions(shared_ptr<CreateIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationScalingRuleResponse deleteApplicationScalingRule(shared_ptr<DeleteApplicationScalingRuleRequest> request);
  DeleteApplicationScalingRuleResponse deleteApplicationScalingRuleWithOptions(shared_ptr<DeleteApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigMapResponse deleteConfigMap(shared_ptr<DeleteConfigMapRequest> request);
  DeleteConfigMapResponse deleteConfigMapWithOptions(shared_ptr<DeleteConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGreyTagRouteResponse deleteGreyTagRoute(shared_ptr<DeleteGreyTagRouteRequest> request);
  DeleteGreyTagRouteResponse deleteGreyTagRouteWithOptions(shared_ptr<DeleteGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIngressResponse deleteIngress(shared_ptr<DeleteIngressRequest> request);
  DeleteIngressResponse deleteIngressWithOptions(shared_ptr<DeleteIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<DeleteNamespaceRequest> request);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployApplicationResponse deployApplication(shared_ptr<DeployApplicationRequest> request);
  DeployApplicationResponse deployApplicationWithOptions(shared_ptr<DeployApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppServiceDetailResponse describeAppServiceDetail(shared_ptr<DescribeAppServiceDetailRequest> request);
  DescribeAppServiceDetailResponse describeAppServiceDetailWithOptions(shared_ptr<DescribeAppServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationConfigResponse describeApplicationConfig(shared_ptr<DescribeApplicationConfigRequest> request);
  DescribeApplicationConfigResponse describeApplicationConfigWithOptions(shared_ptr<DescribeApplicationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationGroupsResponse describeApplicationGroups(shared_ptr<DescribeApplicationGroupsRequest> request);
  DescribeApplicationGroupsResponse describeApplicationGroupsWithOptions(shared_ptr<DescribeApplicationGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationImageResponse describeApplicationImage(shared_ptr<DescribeApplicationImageRequest> request);
  DescribeApplicationImageResponse describeApplicationImageWithOptions(shared_ptr<DescribeApplicationImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationInstancesResponse describeApplicationInstances(shared_ptr<DescribeApplicationInstancesRequest> request);
  DescribeApplicationInstancesResponse describeApplicationInstancesWithOptions(shared_ptr<DescribeApplicationInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationScalingRuleResponse describeApplicationScalingRule(shared_ptr<DescribeApplicationScalingRuleRequest> request);
  DescribeApplicationScalingRuleResponse describeApplicationScalingRuleWithOptions(shared_ptr<DescribeApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationScalingRulesResponse describeApplicationScalingRules(shared_ptr<DescribeApplicationScalingRulesRequest> request);
  DescribeApplicationScalingRulesResponse describeApplicationScalingRulesWithOptions(shared_ptr<DescribeApplicationScalingRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationSlbsResponse describeApplicationSlbs(shared_ptr<DescribeApplicationSlbsRequest> request);
  DescribeApplicationSlbsResponse describeApplicationSlbsWithOptions(shared_ptr<DescribeApplicationSlbsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationStatusResponse describeApplicationStatus(shared_ptr<DescribeApplicationStatusRequest> request);
  DescribeApplicationStatusResponse describeApplicationStatusWithOptions(shared_ptr<DescribeApplicationStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChangeOrderResponse describeChangeOrder(shared_ptr<DescribeChangeOrderRequest> request);
  DescribeChangeOrderResponse describeChangeOrderWithOptions(shared_ptr<DescribeChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentsResponse describeComponents(shared_ptr<DescribeComponentsRequest> request);
  DescribeComponentsResponse describeComponentsWithOptions(shared_ptr<DescribeComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigMapResponse describeConfigMap(shared_ptr<DescribeConfigMapRequest> request);
  DescribeConfigMapResponse describeConfigMapWithOptions(shared_ptr<DescribeConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigurationPriceResponse describeConfigurationPrice(shared_ptr<DescribeConfigurationPriceRequest> request);
  DescribeConfigurationPriceResponse describeConfigurationPriceWithOptions(shared_ptr<DescribeConfigurationPriceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEdasContainersResponse describeEdasContainers();
  DescribeEdasContainersResponse describeEdasContainersWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGreyTagRouteResponse describeGreyTagRoute(shared_ptr<DescribeGreyTagRouteRequest> request);
  DescribeGreyTagRouteResponse describeGreyTagRouteWithOptions(shared_ptr<DescribeGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIngressResponse describeIngress(shared_ptr<DescribeIngressRequest> request);
  DescribeIngressResponse describeIngressWithOptions(shared_ptr<DescribeIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceLogResponse describeInstanceLog(shared_ptr<DescribeInstanceLogRequest> request);
  DescribeInstanceLogResponse describeInstanceLogWithOptions(shared_ptr<DescribeInstanceLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSpecificationsResponse describeInstanceSpecifications();
  DescribeInstanceSpecificationsResponse describeInstanceSpecificationsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobStatusResponse describeJobStatus(shared_ptr<DescribeJobStatusRequest> request);
  DescribeJobStatusResponse describeJobStatusWithOptions(shared_ptr<DescribeJobStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespaceResponse describeNamespace(shared_ptr<DescribeNamespaceRequest> request);
  DescribeNamespaceResponse describeNamespaceWithOptions(shared_ptr<DescribeNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespaceListResponse describeNamespaceList(shared_ptr<DescribeNamespaceListRequest> request);
  DescribeNamespaceListResponse describeNamespaceListWithOptions(shared_ptr<DescribeNamespaceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespaceResourcesResponse describeNamespaceResources(shared_ptr<DescribeNamespaceResourcesRequest> request);
  DescribeNamespaceResourcesResponse describeNamespaceResourcesWithOptions(shared_ptr<DescribeNamespaceResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespacesResponse describeNamespaces(shared_ptr<DescribeNamespacesRequest> request);
  DescribeNamespacesResponse describeNamespacesWithOptions(shared_ptr<DescribeNamespacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePipelineResponse describePipeline(shared_ptr<DescribePipelineRequest> request);
  DescribePipelineResponse describePipelineWithOptions(shared_ptr<DescribePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationScalingRuleResponse disableApplicationScalingRule(shared_ptr<DisableApplicationScalingRuleRequest> request);
  DisableApplicationScalingRuleResponse disableApplicationScalingRuleWithOptions(shared_ptr<DisableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationScalingRuleResponse enableApplicationScalingRule(shared_ptr<EnableApplicationScalingRuleRequest> request);
  EnableApplicationScalingRuleResponse enableApplicationScalingRuleWithOptions(shared_ptr<EnableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecJobResponse execJob(shared_ptr<ExecJobRequest> request);
  ExecJobResponse execJobWithOptions(shared_ptr<ExecJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppEventsResponse listAppEvents(shared_ptr<ListAppEventsRequest> request);
  ListAppEventsResponse listAppEventsWithOptions(shared_ptr<ListAppEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppServicesPageResponse listAppServicesPage(shared_ptr<ListAppServicesPageRequest> request);
  ListAppServicesPageResponse listAppServicesPageWithOptions(shared_ptr<ListAppServicesPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppVersionsResponse listAppVersions(shared_ptr<ListAppVersionsRequest> request);
  ListAppVersionsResponse listAppVersionsWithOptions(shared_ptr<ListAppVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsResponse listApplications(shared_ptr<ListApplicationsRequest> request);
  ListApplicationsResponse listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChangeOrdersResponse listChangeOrders(shared_ptr<ListChangeOrdersRequest> request);
  ListChangeOrdersResponse listChangeOrdersWithOptions(shared_ptr<ListChangeOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumedServicesResponse listConsumedServices(shared_ptr<ListConsumedServicesRequest> request);
  ListConsumedServicesResponse listConsumedServicesWithOptions(shared_ptr<ListConsumedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGreyTagRouteResponse listGreyTagRoute(shared_ptr<ListGreyTagRouteRequest> request);
  ListGreyTagRouteResponse listGreyTagRouteWithOptions(shared_ptr<ListGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIngressesResponse listIngresses(shared_ptr<ListIngressesRequest> request);
  ListIngressesResponse listIngressesWithOptions(shared_ptr<ListIngressesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogConfigsResponse listLogConfigs(shared_ptr<ListLogConfigsRequest> request);
  ListLogConfigsResponse listLogConfigsWithOptions(shared_ptr<ListLogConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespaceChangeOrdersResponse listNamespaceChangeOrders(shared_ptr<ListNamespaceChangeOrdersRequest> request);
  ListNamespaceChangeOrdersResponse listNamespaceChangeOrdersWithOptions(shared_ptr<ListNamespaceChangeOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespacedConfigMapsResponse listNamespacedConfigMaps(shared_ptr<ListNamespacedConfigMapsRequest> request);
  ListNamespacedConfigMapsResponse listNamespacedConfigMapsWithOptions(shared_ptr<ListNamespacedConfigMapsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishedServicesResponse listPublishedServices(shared_ptr<ListPublishedServicesRequest> request);
  ListPublishedServicesResponse listPublishedServicesWithOptions(shared_ptr<ListPublishedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenSaeServiceResponse openSaeService();
  OpenSaeServiceResponse openSaeServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResourceStaticsResponse queryResourceStatics(shared_ptr<QueryResourceStaticsRequest> request);
  QueryResourceStaticsResponse queryResourceStaticsWithOptions(shared_ptr<QueryResourceStaticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReduceApplicationCapacityByInstanceIdsResponse reduceApplicationCapacityByInstanceIds(shared_ptr<ReduceApplicationCapacityByInstanceIdsRequest> request);
  ReduceApplicationCapacityByInstanceIdsResponse reduceApplicationCapacityByInstanceIdsWithOptions(shared_ptr<ReduceApplicationCapacityByInstanceIdsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RescaleApplicationResponse rescaleApplication(shared_ptr<RescaleApplicationRequest> request);
  RescaleApplicationResponse rescaleApplicationWithOptions(shared_ptr<RescaleApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RescaleApplicationVerticallyResponse rescaleApplicationVertically(shared_ptr<RescaleApplicationVerticallyRequest> request);
  RescaleApplicationVerticallyResponse rescaleApplicationVerticallyWithOptions(shared_ptr<RescaleApplicationVerticallyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartApplicationResponse restartApplication(shared_ptr<RestartApplicationRequest> request);
  RestartApplicationResponse restartApplicationWithOptions(shared_ptr<RestartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstancesResponse restartInstances(shared_ptr<RestartInstancesRequest> request);
  RestartInstancesResponse restartInstancesWithOptions(shared_ptr<RestartInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackApplicationResponse rollbackApplication(shared_ptr<RollbackApplicationRequest> request);
  RollbackApplicationResponse rollbackApplicationWithOptions(shared_ptr<RollbackApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartApplicationResponse startApplication(shared_ptr<StartApplicationRequest> request);
  StartApplicationResponse startApplicationWithOptions(shared_ptr<StartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopApplicationResponse stopApplication(shared_ptr<StopApplicationRequest> request);
  StopApplicationResponse stopApplicationWithOptions(shared_ptr<StopApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindSlbResponse unbindSlb(shared_ptr<UnbindSlbRequest> request);
  UnbindSlbResponse unbindSlbWithOptions(shared_ptr<UnbindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppSecurityGroupResponse updateAppSecurityGroup(shared_ptr<UpdateAppSecurityGroupRequest> request);
  UpdateAppSecurityGroupResponse updateAppSecurityGroupWithOptions(shared_ptr<UpdateAppSecurityGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationDescriptionResponse updateApplicationDescription(shared_ptr<UpdateApplicationDescriptionRequest> request);
  UpdateApplicationDescriptionResponse updateApplicationDescriptionWithOptions(shared_ptr<UpdateApplicationDescriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationScalingRuleResponse updateApplicationScalingRule(shared_ptr<UpdateApplicationScalingRuleRequest> request);
  UpdateApplicationScalingRuleResponse updateApplicationScalingRuleWithOptions(shared_ptr<UpdateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationVswitchesResponse updateApplicationVswitches(shared_ptr<UpdateApplicationVswitchesRequest> request);
  UpdateApplicationVswitchesResponse updateApplicationVswitchesWithOptions(shared_ptr<UpdateApplicationVswitchesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigMapResponse updateConfigMap(shared_ptr<UpdateConfigMapRequest> request);
  UpdateConfigMapResponse updateConfigMapWithOptions(shared_ptr<UpdateConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGreyTagRouteResponse updateGreyTagRoute(shared_ptr<UpdateGreyTagRouteRequest> request);
  UpdateGreyTagRouteResponse updateGreyTagRouteWithOptions(shared_ptr<UpdateGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIngressResponse updateIngress(shared_ptr<UpdateIngressRequest> request);
  UpdateIngressResponse updateIngressWithOptions(shared_ptr<UpdateIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNamespaceResponse updateNamespace(shared_ptr<UpdateNamespaceRequest> request);
  UpdateNamespaceResponse updateNamespaceWithOptions(shared_ptr<UpdateNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNamespaceVpcResponse updateNamespaceVpc(shared_ptr<UpdateNamespaceVpcRequest> request);
  UpdateNamespaceVpcResponse updateNamespaceVpcWithOptions(shared_ptr<UpdateNamespaceVpcRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sae20190506

#endif
