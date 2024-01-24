// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMARKETING20220704_H_
#define ALIBABACLOUD_IMARKETING20220704_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imarketing20220704 {
class CancelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> tradeId{};

  CancelOrderRequest() {}

  explicit CancelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (tradeId) {
      res["TradeId"] = boost::any(*tradeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TradeId") != m.end() && !m["TradeId"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["TradeId"]));
    }
  }


  virtual ~CancelOrderRequest() = default;
};
class CancelOrderResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  CancelOrderResponseBodyHeader() {}

  explicit CancelOrderResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CancelOrderResponseBodyHeader() = default;
};
class CancelOrderResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelOrderResponseBodyResult() {}

  explicit CancelOrderResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelOrderResponseBodyResult() = default;
};
class CancelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<CancelOrderResponseBodyHeader> header{};
  shared_ptr<CancelOrderResponseBodyResult> result{};
  shared_ptr<bool> success{};

  CancelOrderResponseBody() {}

  explicit CancelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        CancelOrderResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<CancelOrderResponseBodyHeader>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CancelOrderResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CancelOrderResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelOrderResponseBody() = default;
};
class CancelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOrderResponseBody> body{};

  CancelOrderResponse() {}

  explicit CancelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderResponse() = default;
};
class ConfirmSampleReceivedRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> tradeId{};

  ConfirmSampleReceivedRequest() {}

  explicit ConfirmSampleReceivedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (tradeId) {
      res["TradeId"] = boost::any(*tradeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TradeId") != m.end() && !m["TradeId"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["TradeId"]));
    }
  }


  virtual ~ConfirmSampleReceivedRequest() = default;
};
class ConfirmSampleReceivedResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ConfirmSampleReceivedResponseBodyHeader() {}

  explicit ConfirmSampleReceivedResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ConfirmSampleReceivedResponseBodyHeader() = default;
};
class ConfirmSampleReceivedResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfirmSampleReceivedResponseBodyResult() {}

  explicit ConfirmSampleReceivedResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfirmSampleReceivedResponseBodyResult() = default;
};
class ConfirmSampleReceivedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<ConfirmSampleReceivedResponseBodyHeader> header{};
  shared_ptr<ConfirmSampleReceivedResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ConfirmSampleReceivedResponseBody() {}

  explicit ConfirmSampleReceivedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ConfirmSampleReceivedResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ConfirmSampleReceivedResponseBodyHeader>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ConfirmSampleReceivedResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ConfirmSampleReceivedResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfirmSampleReceivedResponseBody() = default;
};
class ConfirmSampleReceivedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmSampleReceivedResponseBody> body{};

  ConfirmSampleReceivedResponse() {}

  explicit ConfirmSampleReceivedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmSampleReceivedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmSampleReceivedResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmSampleReceivedResponse() = default;
};
class ConfirmSampleShippedRequest : public Darabonba::Model {
public:
  shared_ptr<string> buyerAddress{};
  shared_ptr<string> buyerName{};
  shared_ptr<string> buyerPhoneNumber{};
  shared_ptr<string> channelId{};
  shared_ptr<string> tradeId{};

  ConfirmSampleShippedRequest() {}

  explicit ConfirmSampleShippedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerAddress) {
      res["BuyerAddress"] = boost::any(*buyerAddress);
    }
    if (buyerName) {
      res["BuyerName"] = boost::any(*buyerName);
    }
    if (buyerPhoneNumber) {
      res["BuyerPhoneNumber"] = boost::any(*buyerPhoneNumber);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (tradeId) {
      res["TradeId"] = boost::any(*tradeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerAddress") != m.end() && !m["BuyerAddress"].empty()) {
      buyerAddress = make_shared<string>(boost::any_cast<string>(m["BuyerAddress"]));
    }
    if (m.find("BuyerName") != m.end() && !m["BuyerName"].empty()) {
      buyerName = make_shared<string>(boost::any_cast<string>(m["BuyerName"]));
    }
    if (m.find("BuyerPhoneNumber") != m.end() && !m["BuyerPhoneNumber"].empty()) {
      buyerPhoneNumber = make_shared<string>(boost::any_cast<string>(m["BuyerPhoneNumber"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TradeId") != m.end() && !m["TradeId"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["TradeId"]));
    }
  }


  virtual ~ConfirmSampleShippedRequest() = default;
};
class ConfirmSampleShippedResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ConfirmSampleShippedResponseBodyHeader() {}

  explicit ConfirmSampleShippedResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ConfirmSampleShippedResponseBodyHeader() = default;
};
class ConfirmSampleShippedResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfirmSampleShippedResponseBodyResult() {}

  explicit ConfirmSampleShippedResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfirmSampleShippedResponseBodyResult() = default;
};
class ConfirmSampleShippedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<ConfirmSampleShippedResponseBodyHeader> header{};
  shared_ptr<ConfirmSampleShippedResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ConfirmSampleShippedResponseBody() {}

  explicit ConfirmSampleShippedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ConfirmSampleShippedResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ConfirmSampleShippedResponseBodyHeader>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ConfirmSampleShippedResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ConfirmSampleShippedResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfirmSampleShippedResponseBody() = default;
};
class ConfirmSampleShippedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmSampleShippedResponseBody> body{};

  ConfirmSampleShippedResponse() {}

  explicit ConfirmSampleShippedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmSampleShippedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmSampleShippedResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmSampleShippedResponse() = default;
};
class CreateDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> city{};
  shared_ptr<string> deviceModelNumber{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> district{};
  shared_ptr<map<string, boost::any>> extraMap{};
  shared_ptr<string> firstScene{};
  shared_ptr<string> floor{};
  shared_ptr<string> locationName{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> outerCode{};
  shared_ptr<string> province{};
  shared_ptr<string> secondScene{};

  CreateDeviceRequest() {}

  explicit CreateDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (deviceModelNumber) {
      res["DeviceModelNumber"] = boost::any(*deviceModelNumber);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (extraMap) {
      res["ExtraMap"] = boost::any(*extraMap);
    }
    if (firstScene) {
      res["FirstScene"] = boost::any(*firstScene);
    }
    if (floor) {
      res["Floor"] = boost::any(*floor);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (outerCode) {
      res["OuterCode"] = boost::any(*outerCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (secondScene) {
      res["SecondScene"] = boost::any(*secondScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("DeviceModelNumber") != m.end() && !m["DeviceModelNumber"].empty()) {
      deviceModelNumber = make_shared<string>(boost::any_cast<string>(m["DeviceModelNumber"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("ExtraMap") != m.end() && !m["ExtraMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FirstScene") != m.end() && !m["FirstScene"].empty()) {
      firstScene = make_shared<string>(boost::any_cast<string>(m["FirstScene"]));
    }
    if (m.find("Floor") != m.end() && !m["Floor"].empty()) {
      floor = make_shared<string>(boost::any_cast<string>(m["Floor"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("OuterCode") != m.end() && !m["OuterCode"].empty()) {
      outerCode = make_shared<string>(boost::any_cast<string>(m["OuterCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("SecondScene") != m.end() && !m["SecondScene"].empty()) {
      secondScene = make_shared<string>(boost::any_cast<string>(m["SecondScene"]));
    }
  }


  virtual ~CreateDeviceRequest() = default;
};
class CreateDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> city{};
  shared_ptr<string> deviceModelNumber{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> district{};
  shared_ptr<string> extraMapShrink{};
  shared_ptr<string> firstScene{};
  shared_ptr<string> floor{};
  shared_ptr<string> locationName{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> outerCode{};
  shared_ptr<string> province{};
  shared_ptr<string> secondScene{};

  CreateDeviceShrinkRequest() {}

  explicit CreateDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (deviceModelNumber) {
      res["DeviceModelNumber"] = boost::any(*deviceModelNumber);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (extraMapShrink) {
      res["ExtraMap"] = boost::any(*extraMapShrink);
    }
    if (firstScene) {
      res["FirstScene"] = boost::any(*firstScene);
    }
    if (floor) {
      res["Floor"] = boost::any(*floor);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (outerCode) {
      res["OuterCode"] = boost::any(*outerCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (secondScene) {
      res["SecondScene"] = boost::any(*secondScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("DeviceModelNumber") != m.end() && !m["DeviceModelNumber"].empty()) {
      deviceModelNumber = make_shared<string>(boost::any_cast<string>(m["DeviceModelNumber"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("ExtraMap") != m.end() && !m["ExtraMap"].empty()) {
      extraMapShrink = make_shared<string>(boost::any_cast<string>(m["ExtraMap"]));
    }
    if (m.find("FirstScene") != m.end() && !m["FirstScene"].empty()) {
      firstScene = make_shared<string>(boost::any_cast<string>(m["FirstScene"]));
    }
    if (m.find("Floor") != m.end() && !m["Floor"].empty()) {
      floor = make_shared<string>(boost::any_cast<string>(m["Floor"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("OuterCode") != m.end() && !m["OuterCode"].empty()) {
      outerCode = make_shared<string>(boost::any_cast<string>(m["OuterCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("SecondScene") != m.end() && !m["SecondScene"].empty()) {
      secondScene = make_shared<string>(boost::any_cast<string>(m["SecondScene"]));
    }
  }


  virtual ~CreateDeviceShrinkRequest() = default;
};
class CreateDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDeviceResponseBody() {}

  explicit CreateDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDeviceResponseBody() = default;
};
class CreateDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeviceResponseBody> body{};

  CreateDeviceResponse() {}

  explicit CreateDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeviceResponse() = default;
};
class DeleteCreativeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> bizId{};
  shared_ptr<long> id{};
  shared_ptr<long> mainId{};
  shared_ptr<string> updateUser{};

  DeleteCreativeInfoRequest() {}

  explicit DeleteCreativeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
  }


  virtual ~DeleteCreativeInfoRequest() = default;
};
class DeleteCreativeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCreativeInfoResponseBody() {}

  explicit DeleteCreativeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCreativeInfoResponseBody() = default;
};
class DeleteCreativeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCreativeInfoResponseBody> body{};

  DeleteCreativeInfoResponse() {}

  explicit DeleteCreativeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCreativeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCreativeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCreativeInfoResponse() = default;
};
class GetAdvertisingForE2ResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  GetAdvertisingForE2ResponseBodyHeader() {}

  explicit GetAdvertisingForE2ResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetAdvertisingForE2ResponseBodyHeader() = default;
};
class GetAdvertisingForE2ResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> imgUrl{};
  shared_ptr<string> targetUrl{};

  GetAdvertisingForE2ResponseBodyResult() {}

  explicit GetAdvertisingForE2ResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgUrl) {
      res["ImgUrl"] = boost::any(*imgUrl);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgUrl") != m.end() && !m["ImgUrl"].empty()) {
      imgUrl = make_shared<string>(boost::any_cast<string>(m["ImgUrl"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
  }


  virtual ~GetAdvertisingForE2ResponseBodyResult() = default;
};
class GetAdvertisingForE2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<GetAdvertisingForE2ResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAdvertisingForE2ResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetAdvertisingForE2ResponseBody() {}

  explicit GetAdvertisingForE2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        GetAdvertisingForE2ResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<GetAdvertisingForE2ResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetAdvertisingForE2ResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetAdvertisingForE2ResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAdvertisingForE2ResponseBody() = default;
};
class GetAdvertisingForE2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdvertisingForE2ResponseBody> body{};

  GetAdvertisingForE2Response() {}

  explicit GetAdvertisingForE2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAdvertisingForE2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdvertisingForE2ResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdvertisingForE2Response() = default;
};
class GetBrandPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<long> mainId{};
  shared_ptr<string> mainName{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  GetBrandPageRequest() {}

  explicit GetBrandPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (mainName) {
      res["MainName"] = boost::any(*mainName);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("MainName") != m.end() && !m["MainName"].empty()) {
      mainName = make_shared<string>(boost::any_cast<string>(m["MainName"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetBrandPageRequest() = default;
};
class GetBrandPageResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> accountType{};
  shared_ptr<string> company{};
  shared_ptr<long> mainId{};
  shared_ptr<string> mainName{};
  shared_ptr<long> parentMainId{};

  GetBrandPageResponseBodyDataList() {}

  explicit GetBrandPageResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (company) {
      res["Company"] = boost::any(*company);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (mainName) {
      res["MainName"] = boost::any(*mainName);
    }
    if (parentMainId) {
      res["ParentMainId"] = boost::any(*parentMainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Company") != m.end() && !m["Company"].empty()) {
      company = make_shared<string>(boost::any_cast<string>(m["Company"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("MainName") != m.end() && !m["MainName"].empty()) {
      mainName = make_shared<string>(boost::any_cast<string>(m["MainName"]));
    }
    if (m.find("ParentMainId") != m.end() && !m["ParentMainId"].empty()) {
      parentMainId = make_shared<long>(boost::any_cast<long>(m["ParentMainId"]));
    }
  }


  virtual ~GetBrandPageResponseBodyDataList() = default;
};
class GetBrandPageResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  GetBrandPageResponseBodyDataPageInfo() {}

  explicit GetBrandPageResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~GetBrandPageResponseBodyDataPageInfo() = default;
};
class GetBrandPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetBrandPageResponseBodyDataList>> list{};
  shared_ptr<GetBrandPageResponseBodyDataPageInfo> pageInfo{};

  GetBrandPageResponseBodyData() {}

  explicit GetBrandPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetBrandPageResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBrandPageResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetBrandPageResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetBrandPageResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetBrandPageResponseBodyDataPageInfo>(model1);
      }
    }
  }


  virtual ~GetBrandPageResponseBodyData() = default;
};
class GetBrandPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetBrandPageResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBrandPageResponseBody() {}

  explicit GetBrandPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBrandPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBrandPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetBrandPageResponseBody() = default;
};
class GetBrandPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBrandPageResponseBody> body{};

  GetBrandPageResponse() {}

  explicit GetBrandPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBrandPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBrandPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetBrandPageResponse() = default;
};
class GetBusinessIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessId{};

  GetBusinessIdRequest() {}

  explicit GetBusinessIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
  }


  virtual ~GetBusinessIdRequest() = default;
};
class GetBusinessIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBusinessIdResponseBody() {}

  explicit GetBusinessIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetBusinessIdResponseBody() = default;
};
class GetBusinessIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBusinessIdResponseBody> body{};

  GetBusinessIdResponse() {}

  explicit GetBusinessIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBusinessIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBusinessIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetBusinessIdResponse() = default;
};
class GetCreativeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> bizId{};
  shared_ptr<long> id{};
  shared_ptr<long> mainId{};

  GetCreativeInfoRequest() {}

  explicit GetCreativeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
  }


  virtual ~GetCreativeInfoRequest() = default;
};
class GetCreativeInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> chainValue{};
  shared_ptr<string> componentIdList{};
  shared_ptr<long> id{};
  shared_ptr<long> mainId{};
  shared_ptr<string> name{};
  shared_ptr<string> pageId{};
  shared_ptr<long> status{};
  shared_ptr<long> taskCount{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  GetCreativeInfoResponseBodyData() {}

  explicit GetCreativeInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (chainValue) {
      res["ChainValue"] = boost::any(*chainValue);
    }
    if (componentIdList) {
      res["ComponentIdList"] = boost::any(*componentIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageId) {
      res["PageId"] = boost::any(*pageId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("ChainValue") != m.end() && !m["ChainValue"].empty()) {
      chainValue = make_shared<string>(boost::any_cast<string>(m["ChainValue"]));
    }
    if (m.find("ComponentIdList") != m.end() && !m["ComponentIdList"].empty()) {
      componentIdList = make_shared<string>(boost::any_cast<string>(m["ComponentIdList"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageId") != m.end() && !m["PageId"].empty()) {
      pageId = make_shared<string>(boost::any_cast<string>(m["PageId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~GetCreativeInfoResponseBodyData() = default;
};
class GetCreativeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetCreativeInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCreativeInfoResponseBody() {}

  explicit GetCreativeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
        GetCreativeInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCreativeInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCreativeInfoResponseBody() = default;
};
class GetCreativeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCreativeInfoResponseBody> body{};

  GetCreativeInfoResponse() {}

  explicit GetCreativeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCreativeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCreativeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCreativeInfoResponse() = default;
};
class GetLeadsListPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> componentId{};
  shared_ptr<long> contentId{};
  shared_ptr<long> creativeId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> mainId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<long> taskId{};

  GetLeadsListPageRequest() {}

  explicit GetLeadsListPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentId) {
      res["ComponentId"] = boost::any(*componentId);
    }
    if (contentId) {
      res["ContentId"] = boost::any(*contentId);
    }
    if (creativeId) {
      res["CreativeId"] = boost::any(*creativeId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentId") != m.end() && !m["ComponentId"].empty()) {
      componentId = make_shared<long>(boost::any_cast<long>(m["ComponentId"]));
    }
    if (m.find("ContentId") != m.end() && !m["ContentId"].empty()) {
      contentId = make_shared<long>(boost::any_cast<long>(m["ContentId"]));
    }
    if (m.find("CreativeId") != m.end() && !m["CreativeId"].empty()) {
      creativeId = make_shared<long>(boost::any_cast<long>(m["CreativeId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetLeadsListPageRequest() = default;
};
class GetLeadsListPageResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> componentId{};
  shared_ptr<long> contentId{};
  shared_ptr<long> creativeId{};
  shared_ptr<string> creativeName{};
  shared_ptr<string> leadsDetail{};
  shared_ptr<long> serialId{};
  shared_ptr<long> taskId{};

  GetLeadsListPageResponseBodyDataList() {}

  explicit GetLeadsListPageResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentId) {
      res["ComponentId"] = boost::any(*componentId);
    }
    if (contentId) {
      res["ContentId"] = boost::any(*contentId);
    }
    if (creativeId) {
      res["CreativeId"] = boost::any(*creativeId);
    }
    if (creativeName) {
      res["CreativeName"] = boost::any(*creativeName);
    }
    if (leadsDetail) {
      res["LeadsDetail"] = boost::any(*leadsDetail);
    }
    if (serialId) {
      res["SerialId"] = boost::any(*serialId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentId") != m.end() && !m["ComponentId"].empty()) {
      componentId = make_shared<string>(boost::any_cast<string>(m["ComponentId"]));
    }
    if (m.find("ContentId") != m.end() && !m["ContentId"].empty()) {
      contentId = make_shared<long>(boost::any_cast<long>(m["ContentId"]));
    }
    if (m.find("CreativeId") != m.end() && !m["CreativeId"].empty()) {
      creativeId = make_shared<long>(boost::any_cast<long>(m["CreativeId"]));
    }
    if (m.find("CreativeName") != m.end() && !m["CreativeName"].empty()) {
      creativeName = make_shared<string>(boost::any_cast<string>(m["CreativeName"]));
    }
    if (m.find("LeadsDetail") != m.end() && !m["LeadsDetail"].empty()) {
      leadsDetail = make_shared<string>(boost::any_cast<string>(m["LeadsDetail"]));
    }
    if (m.find("SerialId") != m.end() && !m["SerialId"].empty()) {
      serialId = make_shared<long>(boost::any_cast<long>(m["SerialId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetLeadsListPageResponseBodyDataList() = default;
};
class GetLeadsListPageResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  GetLeadsListPageResponseBodyDataPageInfo() {}

  explicit GetLeadsListPageResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~GetLeadsListPageResponseBodyDataPageInfo() = default;
};
class GetLeadsListPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetLeadsListPageResponseBodyDataList>> list{};
  shared_ptr<GetLeadsListPageResponseBodyDataPageInfo> pageInfo{};

  GetLeadsListPageResponseBodyData() {}

  explicit GetLeadsListPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetLeadsListPageResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLeadsListPageResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetLeadsListPageResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetLeadsListPageResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetLeadsListPageResponseBodyDataPageInfo>(model1);
      }
    }
  }


  virtual ~GetLeadsListPageResponseBodyData() = default;
};
class GetLeadsListPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetLeadsListPageResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetLeadsListPageResponseBody() {}

  explicit GetLeadsListPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
        GetLeadsListPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetLeadsListPageResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetLeadsListPageResponseBody() = default;
};
class GetLeadsListPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLeadsListPageResponseBody> body{};

  GetLeadsListPageResponse() {}

  explicit GetLeadsListPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLeadsListPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLeadsListPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetLeadsListPageResponse() = default;
};
class GetMainPartPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> mainId{};
  shared_ptr<string> mainName{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  GetMainPartPageRequest() {}

  explicit GetMainPartPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (mainName) {
      res["MainName"] = boost::any(*mainName);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("MainName") != m.end() && !m["MainName"].empty()) {
      mainName = make_shared<string>(boost::any_cast<string>(m["MainName"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetMainPartPageRequest() = default;
};
class GetMainPartPageResponseBodyDataListAccountTypeList : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> accountTypeDesc{};

  GetMainPartPageResponseBodyDataListAccountTypeList() {}

  explicit GetMainPartPageResponseBodyDataListAccountTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountTypeDesc) {
      res["AccountTypeDesc"] = boost::any(*accountTypeDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountTypeDesc") != m.end() && !m["AccountTypeDesc"].empty()) {
      accountTypeDesc = make_shared<string>(boost::any_cast<string>(m["AccountTypeDesc"]));
    }
  }


  virtual ~GetMainPartPageResponseBodyDataListAccountTypeList() = default;
};
class GetMainPartPageResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<vector<GetMainPartPageResponseBodyDataListAccountTypeList>> accountTypeList{};
  shared_ptr<string> company{};
  shared_ptr<long> mainId{};
  shared_ptr<string> mainName{};

  GetMainPartPageResponseBodyDataList() {}

  explicit GetMainPartPageResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*accountTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountTypeList"] = boost::any(temp1);
    }
    if (company) {
      res["Company"] = boost::any(*company);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (mainName) {
      res["MainName"] = boost::any(*mainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountTypeList") != m.end() && !m["AccountTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountTypeList"].type()) {
        vector<GetMainPartPageResponseBodyDataListAccountTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMainPartPageResponseBodyDataListAccountTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountTypeList = make_shared<vector<GetMainPartPageResponseBodyDataListAccountTypeList>>(expect1);
      }
    }
    if (m.find("Company") != m.end() && !m["Company"].empty()) {
      company = make_shared<string>(boost::any_cast<string>(m["Company"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("MainName") != m.end() && !m["MainName"].empty()) {
      mainName = make_shared<string>(boost::any_cast<string>(m["MainName"]));
    }
  }


  virtual ~GetMainPartPageResponseBodyDataList() = default;
};
class GetMainPartPageResponseBodyDataPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNumber{};

  GetMainPartPageResponseBodyDataPageInfo() {}

  explicit GetMainPartPageResponseBodyDataPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~GetMainPartPageResponseBodyDataPageInfo() = default;
};
class GetMainPartPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetMainPartPageResponseBodyDataList>> list{};
  shared_ptr<GetMainPartPageResponseBodyDataPageInfo> pageInfo{};

  GetMainPartPageResponseBodyData() {}

  explicit GetMainPartPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetMainPartPageResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMainPartPageResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetMainPartPageResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetMainPartPageResponseBodyDataPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetMainPartPageResponseBodyDataPageInfo>(model1);
      }
    }
  }


  virtual ~GetMainPartPageResponseBodyData() = default;
};
class GetMainPartPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetMainPartPageResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMainPartPageResponseBody() {}

  explicit GetMainPartPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMainPartPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMainPartPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMainPartPageResponseBody() = default;
};
class GetMainPartPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMainPartPageResponseBody> body{};

  GetMainPartPageResponse() {}

  explicit GetMainPartPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMainPartPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMainPartPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetMainPartPageResponse() = default;
};
class GetOssUploadSignatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};

  GetOssUploadSignatureRequest() {}

  explicit GetOssUploadSignatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~GetOssUploadSignatureRequest() = default;
};
class GetOssUploadSignatureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  GetOssUploadSignatureResponseBodyData() {}

  explicit GetOssUploadSignatureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GetOssUploadSignatureResponseBodyData() = default;
};
class GetOssUploadSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOssUploadSignatureResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOssUploadSignatureResponseBody() {}

  explicit GetOssUploadSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOssUploadSignatureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOssUploadSignatureResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOssUploadSignatureResponseBody() = default;
};
class GetOssUploadSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssUploadSignatureResponseBody> body{};

  GetOssUploadSignatureResponse() {}

  explicit GetOssUploadSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOssUploadSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssUploadSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssUploadSignatureResponse() = default;
};
class GetRelatedByCreativeIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetRelatedByCreativeIdRequest() {}

  explicit GetRelatedByCreativeIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetRelatedByCreativeIdRequest() = default;
};
class GetRelatedByCreativeIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> contentId{};
  shared_ptr<string> contentName{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskName{};

  GetRelatedByCreativeIdResponseBodyData() {}

  explicit GetRelatedByCreativeIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentId) {
      res["ContentId"] = boost::any(*contentId);
    }
    if (contentName) {
      res["ContentName"] = boost::any(*contentName);
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
    if (m.find("ContentId") != m.end() && !m["ContentId"].empty()) {
      contentId = make_shared<long>(boost::any_cast<long>(m["ContentId"]));
    }
    if (m.find("ContentName") != m.end() && !m["ContentName"].empty()) {
      contentName = make_shared<string>(boost::any_cast<string>(m["ContentName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~GetRelatedByCreativeIdResponseBodyData() = default;
};
class GetRelatedByCreativeIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetRelatedByCreativeIdResponseBodyData>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRelatedByCreativeIdResponseBody() {}

  explicit GetRelatedByCreativeIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetRelatedByCreativeIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRelatedByCreativeIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRelatedByCreativeIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRelatedByCreativeIdResponseBody() = default;
};
class GetRelatedByCreativeIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRelatedByCreativeIdResponseBody> body{};

  GetRelatedByCreativeIdResponse() {}

  explicit GetRelatedByCreativeIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRelatedByCreativeIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRelatedByCreativeIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetRelatedByCreativeIdResponse() = default;
};
class GetUserFinishedAdRequest : public Darabonba::Model {
public:
  shared_ptr<long> adid{};
  shared_ptr<string> clicklink{};
  shared_ptr<string> id{};
  shared_ptr<string> mediaid{};
  shared_ptr<string> tagid{};
  shared_ptr<string> uid{};

  GetUserFinishedAdRequest() {}

  explicit GetUserFinishedAdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adid) {
      res["Adid"] = boost::any(*adid);
    }
    if (clicklink) {
      res["Clicklink"] = boost::any(*clicklink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mediaid) {
      res["Mediaid"] = boost::any(*mediaid);
    }
    if (tagid) {
      res["Tagid"] = boost::any(*tagid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adid") != m.end() && !m["Adid"].empty()) {
      adid = make_shared<long>(boost::any_cast<long>(m["Adid"]));
    }
    if (m.find("Clicklink") != m.end() && !m["Clicklink"].empty()) {
      clicklink = make_shared<string>(boost::any_cast<string>(m["Clicklink"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mediaid") != m.end() && !m["Mediaid"].empty()) {
      mediaid = make_shared<string>(boost::any_cast<string>(m["Mediaid"]));
    }
    if (m.find("Tagid") != m.end() && !m["Tagid"].empty()) {
      tagid = make_shared<string>(boost::any_cast<string>(m["Tagid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetUserFinishedAdRequest() = default;
};
class GetUserFinishedAdResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  GetUserFinishedAdResponseBodyHeader() {}

  explicit GetUserFinishedAdResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetUserFinishedAdResponseBodyHeader() = default;
};
class GetUserFinishedAdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> commission{};
  shared_ptr<string> id{};
  shared_ptr<string> marketingType{};
  shared_ptr<string> objective{};
  shared_ptr<bool> success{};

  GetUserFinishedAdResponseBodyResult() {}

  explicit GetUserFinishedAdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commission) {
      res["Commission"] = boost::any(*commission);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (marketingType) {
      res["MarketingType"] = boost::any(*marketingType);
    }
    if (objective) {
      res["Objective"] = boost::any(*objective);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commission") != m.end() && !m["Commission"].empty()) {
      commission = make_shared<string>(boost::any_cast<string>(m["Commission"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MarketingType") != m.end() && !m["MarketingType"].empty()) {
      marketingType = make_shared<string>(boost::any_cast<string>(m["MarketingType"]));
    }
    if (m.find("Objective") != m.end() && !m["Objective"].empty()) {
      objective = make_shared<string>(boost::any_cast<string>(m["Objective"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserFinishedAdResponseBodyResult() = default;
};
class GetUserFinishedAdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<GetUserFinishedAdResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserFinishedAdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetUserFinishedAdResponseBody() {}

  explicit GetUserFinishedAdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        GetUserFinishedAdResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<GetUserFinishedAdResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetUserFinishedAdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetUserFinishedAdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserFinishedAdResponseBody() = default;
};
class GetUserFinishedAdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserFinishedAdResponseBody> body{};

  GetUserFinishedAdResponse() {}

  explicit GetUserFinishedAdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserFinishedAdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserFinishedAdResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserFinishedAdResponse() = default;
};
class ListAdvertisingRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appid{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> mediaid{};
  shared_ptr<string> sn{};

  ListAdvertisingRequestApp() {}

  explicit ListAdvertisingRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appid) {
      res["Appid"] = boost::any(*appid);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (mediaid) {
      res["Mediaid"] = boost::any(*mediaid);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Appid") != m.end() && !m["Appid"].empty()) {
      appid = make_shared<string>(boost::any_cast<string>(m["Appid"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Mediaid") != m.end() && !m["Mediaid"].empty()) {
      mediaid = make_shared<string>(boost::any_cast<string>(m["Mediaid"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~ListAdvertisingRequestApp() = default;
};
class ListAdvertisingRequestDeviceGeo : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> district{};
  shared_ptr<double> lat{};
  shared_ptr<double> lon{};
  shared_ptr<string> province{};

  ListAdvertisingRequestDeviceGeo() {}

  explicit ListAdvertisingRequestDeviceGeo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<double>(boost::any_cast<double>(m["Lat"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<double>(boost::any_cast<double>(m["Lon"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~ListAdvertisingRequestDeviceGeo() = default;
};
class ListAdvertisingRequestDevice : public Darabonba::Model {
public:
  shared_ptr<string> androidid{};
  shared_ptr<string> androidmd5{};
  shared_ptr<string> caid{};
  shared_ptr<string> carrier{};
  shared_ptr<long> connectiontype{};
  shared_ptr<long> devicetype{};
  shared_ptr<ListAdvertisingRequestDeviceGeo> geo{};
  shared_ptr<string> idfa{};
  shared_ptr<string> imei{};
  shared_ptr<string> imeimd5{};
  shared_ptr<string> ip{};
  shared_ptr<string> language{};
  shared_ptr<string> mac{};
  shared_ptr<string> macmd5{};
  shared_ptr<string> make{};
  shared_ptr<string> model{};
  shared_ptr<string> oaid{};
  shared_ptr<string> os{};
  shared_ptr<string> osv{};
  shared_ptr<string> ua{};
  shared_ptr<string> utdid{};

  ListAdvertisingRequestDevice() {}

  explicit ListAdvertisingRequestDevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidid) {
      res["Androidid"] = boost::any(*androidid);
    }
    if (androidmd5) {
      res["Androidmd5"] = boost::any(*androidmd5);
    }
    if (caid) {
      res["Caid"] = boost::any(*caid);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (connectiontype) {
      res["Connectiontype"] = boost::any(*connectiontype);
    }
    if (devicetype) {
      res["Devicetype"] = boost::any(*devicetype);
    }
    if (geo) {
      res["Geo"] = geo ? boost::any(geo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idfa) {
      res["Idfa"] = boost::any(*idfa);
    }
    if (imei) {
      res["Imei"] = boost::any(*imei);
    }
    if (imeimd5) {
      res["Imeimd5"] = boost::any(*imeimd5);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (macmd5) {
      res["Macmd5"] = boost::any(*macmd5);
    }
    if (make) {
      res["Make"] = boost::any(*make);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (oaid) {
      res["Oaid"] = boost::any(*oaid);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osv) {
      res["Osv"] = boost::any(*osv);
    }
    if (ua) {
      res["Ua"] = boost::any(*ua);
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Androidid") != m.end() && !m["Androidid"].empty()) {
      androidid = make_shared<string>(boost::any_cast<string>(m["Androidid"]));
    }
    if (m.find("Androidmd5") != m.end() && !m["Androidmd5"].empty()) {
      androidmd5 = make_shared<string>(boost::any_cast<string>(m["Androidmd5"]));
    }
    if (m.find("Caid") != m.end() && !m["Caid"].empty()) {
      caid = make_shared<string>(boost::any_cast<string>(m["Caid"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Connectiontype") != m.end() && !m["Connectiontype"].empty()) {
      connectiontype = make_shared<long>(boost::any_cast<long>(m["Connectiontype"]));
    }
    if (m.find("Devicetype") != m.end() && !m["Devicetype"].empty()) {
      devicetype = make_shared<long>(boost::any_cast<long>(m["Devicetype"]));
    }
    if (m.find("Geo") != m.end() && !m["Geo"].empty()) {
      if (typeid(map<string, boost::any>) == m["Geo"].type()) {
        ListAdvertisingRequestDeviceGeo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Geo"]));
        geo = make_shared<ListAdvertisingRequestDeviceGeo>(model1);
      }
    }
    if (m.find("Idfa") != m.end() && !m["Idfa"].empty()) {
      idfa = make_shared<string>(boost::any_cast<string>(m["Idfa"]));
    }
    if (m.find("Imei") != m.end() && !m["Imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["Imei"]));
    }
    if (m.find("Imeimd5") != m.end() && !m["Imeimd5"].empty()) {
      imeimd5 = make_shared<string>(boost::any_cast<string>(m["Imeimd5"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Macmd5") != m.end() && !m["Macmd5"].empty()) {
      macmd5 = make_shared<string>(boost::any_cast<string>(m["Macmd5"]));
    }
    if (m.find("Make") != m.end() && !m["Make"].empty()) {
      make = make_shared<string>(boost::any_cast<string>(m["Make"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Oaid") != m.end() && !m["Oaid"].empty()) {
      oaid = make_shared<string>(boost::any_cast<string>(m["Oaid"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Osv") != m.end() && !m["Osv"].empty()) {
      osv = make_shared<string>(boost::any_cast<string>(m["Osv"]));
    }
    if (m.find("Ua") != m.end() && !m["Ua"].empty()) {
      ua = make_shared<string>(boost::any_cast<string>(m["Ua"]));
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
  }


  virtual ~ListAdvertisingRequestDevice() = default;
};
class ListAdvertisingRequestImp : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> tagid{};

  ListAdvertisingRequestImp() {}

  explicit ListAdvertisingRequestImp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagid) {
      res["Tagid"] = boost::any(*tagid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Tagid") != m.end() && !m["Tagid"].empty()) {
      tagid = make_shared<string>(boost::any_cast<string>(m["Tagid"]));
    }
  }


  virtual ~ListAdvertisingRequestImp() = default;
};
class ListAdvertisingRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> usertype{};

  ListAdvertisingRequestUser() {}

  explicit ListAdvertisingRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (usertype) {
      res["Usertype"] = boost::any(*usertype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Usertype") != m.end() && !m["Usertype"].empty()) {
      usertype = make_shared<string>(boost::any_cast<string>(m["Usertype"]));
    }
  }


  virtual ~ListAdvertisingRequestUser() = default;
};
class ListAdvertisingRequest : public Darabonba::Model {
public:
  shared_ptr<ListAdvertisingRequestApp> app{};
  shared_ptr<long> dealtype{};
  shared_ptr<ListAdvertisingRequestDevice> device{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListAdvertisingRequestImp>> imp{};
  shared_ptr<long> test{};
  shared_ptr<ListAdvertisingRequestUser> user{};

  ListAdvertisingRequest() {}

  explicit ListAdvertisingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dealtype) {
      res["Dealtype"] = boost::any(*dealtype);
    }
    if (device) {
      res["Device"] = device ? boost::any(device->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imp) {
      vector<boost::any> temp1;
      for(auto item1:*imp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Imp"] = boost::any(temp1);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        ListAdvertisingRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<ListAdvertisingRequestApp>(model1);
      }
    }
    if (m.find("Dealtype") != m.end() && !m["Dealtype"].empty()) {
      dealtype = make_shared<long>(boost::any_cast<long>(m["Dealtype"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      if (typeid(map<string, boost::any>) == m["Device"].type()) {
        ListAdvertisingRequestDevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Device"]));
        device = make_shared<ListAdvertisingRequestDevice>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      if (typeid(vector<boost::any>) == m["Imp"].type()) {
        vector<ListAdvertisingRequestImp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Imp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvertisingRequestImp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imp = make_shared<vector<ListAdvertisingRequestImp>>(expect1);
      }
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<long>(boost::any_cast<long>(m["Test"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        ListAdvertisingRequestUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<ListAdvertisingRequestUser>(model1);
      }
    }
  }


  virtual ~ListAdvertisingRequest() = default;
};
class ListAdvertisingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<long> dealtype{};
  shared_ptr<string> deviceShrink{};
  shared_ptr<string> extShrink{};
  shared_ptr<string> id{};
  shared_ptr<string> impShrink{};
  shared_ptr<long> test{};
  shared_ptr<string> userShrink{};

  ListAdvertisingShrinkRequest() {}

  explicit ListAdvertisingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (dealtype) {
      res["Dealtype"] = boost::any(*dealtype);
    }
    if (deviceShrink) {
      res["Device"] = boost::any(*deviceShrink);
    }
    if (extShrink) {
      res["Ext"] = boost::any(*extShrink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impShrink) {
      res["Imp"] = boost::any(*impShrink);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Dealtype") != m.end() && !m["Dealtype"].empty()) {
      dealtype = make_shared<long>(boost::any_cast<long>(m["Dealtype"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      deviceShrink = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      extShrink = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      impShrink = make_shared<string>(boost::any_cast<string>(m["Imp"]));
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<long>(boost::any_cast<long>(m["Test"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~ListAdvertisingShrinkRequest() = default;
};
class ListAdvertisingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ListAdvertisingResponseBodyHeader() {}

  explicit ListAdvertisingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAdvertisingResponseBodyHeader() = default;
};
class ListAdvertisingResponseBodyResultSeatbidBidAdsIcon : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ListAdvertisingResponseBodyResultSeatbidBidAdsIcon() {}

  explicit ListAdvertisingResponseBodyResultSeatbidBidAdsIcon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbidBidAdsIcon() = default;
};
class ListAdvertisingResponseBodyResultSeatbidBidAdsImages : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> format{};
  shared_ptr<string> url{};

  ListAdvertisingResponseBodyResultSeatbidBidAdsImages() {}

  explicit ListAdvertisingResponseBodyResultSeatbidBidAdsImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbidBidAdsImages() = default;
};
class ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imps{};

  ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers() {}

  explicit ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imps) {
      res["Imps"] = boost::any(*imps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imps") != m.end() && !m["Imps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers() = default;
};
class ListAdvertisingResponseBodyResultSeatbidBidAds : public Darabonba::Model {
public:
  shared_ptr<string> crid{};
  shared_ptr<string> crurl{};
  shared_ptr<ListAdvertisingResponseBodyResultSeatbidBidAdsIcon> icon{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListAdvertisingResponseBodyResultSeatbidBidAdsImages>> images{};
  shared_ptr<long> interacttype{};
  shared_ptr<string> labeltype{};
  shared_ptr<vector<string>> landingurls{};
  shared_ptr<string> marketingtype{};
  shared_ptr<string> objective{};
  shared_ptr<string> price{};
  shared_ptr<string> seat{};
  shared_ptr<string> style{};
  shared_ptr<string> title{};
  shared_ptr<ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers> trackers{};
  shared_ptr<string> type{};

  ListAdvertisingResponseBodyResultSeatbidBidAds() {}

  explicit ListAdvertisingResponseBodyResultSeatbidBidAds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crid) {
      res["Crid"] = boost::any(*crid);
    }
    if (crurl) {
      res["Crurl"] = boost::any(*crurl);
    }
    if (icon) {
      res["Icon"] = icon ? boost::any(icon->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (interacttype) {
      res["Interacttype"] = boost::any(*interacttype);
    }
    if (labeltype) {
      res["Labeltype"] = boost::any(*labeltype);
    }
    if (landingurls) {
      res["Landingurls"] = boost::any(*landingurls);
    }
    if (marketingtype) {
      res["Marketingtype"] = boost::any(*marketingtype);
    }
    if (objective) {
      res["Objective"] = boost::any(*objective);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (trackers) {
      res["Trackers"] = trackers ? boost::any(trackers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crid") != m.end() && !m["Crid"].empty()) {
      crid = make_shared<string>(boost::any_cast<string>(m["Crid"]));
    }
    if (m.find("Crurl") != m.end() && !m["Crurl"].empty()) {
      crurl = make_shared<string>(boost::any_cast<string>(m["Crurl"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      if (typeid(map<string, boost::any>) == m["Icon"].type()) {
        ListAdvertisingResponseBodyResultSeatbidBidAdsIcon model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Icon"]));
        icon = make_shared<ListAdvertisingResponseBodyResultSeatbidBidAdsIcon>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListAdvertisingResponseBodyResultSeatbidBidAdsImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvertisingResponseBodyResultSeatbidBidAdsImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListAdvertisingResponseBodyResultSeatbidBidAdsImages>>(expect1);
      }
    }
    if (m.find("Interacttype") != m.end() && !m["Interacttype"].empty()) {
      interacttype = make_shared<long>(boost::any_cast<long>(m["Interacttype"]));
    }
    if (m.find("Labeltype") != m.end() && !m["Labeltype"].empty()) {
      labeltype = make_shared<string>(boost::any_cast<string>(m["Labeltype"]));
    }
    if (m.find("Landingurls") != m.end() && !m["Landingurls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Landingurls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Landingurls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      landingurls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Marketingtype") != m.end() && !m["Marketingtype"].empty()) {
      marketingtype = make_shared<string>(boost::any_cast<string>(m["Marketingtype"]));
    }
    if (m.find("Objective") != m.end() && !m["Objective"].empty()) {
      objective = make_shared<string>(boost::any_cast<string>(m["Objective"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Trackers") != m.end() && !m["Trackers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trackers"].type()) {
        ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trackers"]));
        trackers = make_shared<ListAdvertisingResponseBodyResultSeatbidBidAdsTrackers>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbidBidAds() = default;
};
class ListAdvertisingResponseBodyResultSeatbidBid : public Darabonba::Model {
public:
  shared_ptr<vector<ListAdvertisingResponseBodyResultSeatbidBidAds>> ads{};
  shared_ptr<string> impid{};

  ListAdvertisingResponseBodyResultSeatbidBid() {}

  explicit ListAdvertisingResponseBodyResultSeatbidBid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ads) {
      vector<boost::any> temp1;
      for(auto item1:*ads){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ads"] = boost::any(temp1);
    }
    if (impid) {
      res["Impid"] = boost::any(*impid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ads") != m.end() && !m["Ads"].empty()) {
      if (typeid(vector<boost::any>) == m["Ads"].type()) {
        vector<ListAdvertisingResponseBodyResultSeatbidBidAds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ads"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvertisingResponseBodyResultSeatbidBidAds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ads = make_shared<vector<ListAdvertisingResponseBodyResultSeatbidBidAds>>(expect1);
      }
    }
    if (m.find("Impid") != m.end() && !m["Impid"].empty()) {
      impid = make_shared<string>(boost::any_cast<string>(m["Impid"]));
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbidBid() = default;
};
class ListAdvertisingResponseBodyResultSeatbid : public Darabonba::Model {
public:
  shared_ptr<vector<ListAdvertisingResponseBodyResultSeatbidBid>> bid{};

  ListAdvertisingResponseBodyResultSeatbid() {}

  explicit ListAdvertisingResponseBodyResultSeatbid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      vector<boost::any> temp1;
      for(auto item1:*bid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      if (typeid(vector<boost::any>) == m["Bid"].type()) {
        vector<ListAdvertisingResponseBodyResultSeatbidBid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvertisingResponseBodyResultSeatbidBid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bid = make_shared<vector<ListAdvertisingResponseBodyResultSeatbidBid>>(expect1);
      }
    }
  }


  virtual ~ListAdvertisingResponseBodyResultSeatbid() = default;
};
class ListAdvertisingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bidid{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListAdvertisingResponseBodyResultSeatbid>> seatbid{};

  ListAdvertisingResponseBodyResult() {}

  explicit ListAdvertisingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidid) {
      res["Bidid"] = boost::any(*bidid);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (seatbid) {
      vector<boost::any> temp1;
      for(auto item1:*seatbid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Seatbid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bidid") != m.end() && !m["Bidid"].empty()) {
      bidid = make_shared<string>(boost::any_cast<string>(m["Bidid"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Seatbid") != m.end() && !m["Seatbid"].empty()) {
      if (typeid(vector<boost::any>) == m["Seatbid"].type()) {
        vector<ListAdvertisingResponseBodyResultSeatbid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Seatbid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvertisingResponseBodyResultSeatbid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seatbid = make_shared<vector<ListAdvertisingResponseBodyResultSeatbid>>(expect1);
      }
    }
  }


  virtual ~ListAdvertisingResponseBodyResult() = default;
};
class ListAdvertisingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorcode{};
  shared_ptr<string> errormsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<ListAdvertisingResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAdvertisingResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListAdvertisingResponseBody() {}

  explicit ListAdvertisingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorcode) {
      res["Errorcode"] = boost::any(*errorcode);
    }
    if (errormsg) {
      res["Errormsg"] = boost::any(*errormsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Errorcode") != m.end() && !m["Errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["Errorcode"]));
    }
    if (m.find("Errormsg") != m.end() && !m["Errormsg"].empty()) {
      errormsg = make_shared<string>(boost::any_cast<string>(m["Errormsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ListAdvertisingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ListAdvertisingResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListAdvertisingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListAdvertisingResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAdvertisingResponseBody() = default;
};
class ListAdvertisingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAdvertisingResponseBody> body{};

  ListAdvertisingResponse() {}

  explicit ListAdvertisingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAdvertisingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAdvertisingResponseBody>(model1);
      }
    }
  }


  virtual ~ListAdvertisingResponse() = default;
};
class ListSpecificAdRequestApp : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> mediaid{};
  shared_ptr<string> sn{};

  ListSpecificAdRequestApp() {}

  explicit ListSpecificAdRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (mediaid) {
      res["Mediaid"] = boost::any(*mediaid);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Mediaid") != m.end() && !m["Mediaid"].empty()) {
      mediaid = make_shared<string>(boost::any_cast<string>(m["Mediaid"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~ListSpecificAdRequestApp() = default;
};
class ListSpecificAdRequestImp : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> tagid{};

  ListSpecificAdRequestImp() {}

  explicit ListSpecificAdRequestImp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagid) {
      res["Tagid"] = boost::any(*tagid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Tagid") != m.end() && !m["Tagid"].empty()) {
      tagid = make_shared<string>(boost::any_cast<string>(m["Tagid"]));
    }
  }


  virtual ~ListSpecificAdRequestImp() = default;
};
class ListSpecificAdRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> usertype{};

  ListSpecificAdRequestUser() {}

  explicit ListSpecificAdRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (usertype) {
      res["Usertype"] = boost::any(*usertype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Usertype") != m.end() && !m["Usertype"].empty()) {
      usertype = make_shared<string>(boost::any_cast<string>(m["Usertype"]));
    }
  }


  virtual ~ListSpecificAdRequestUser() = default;
};
class ListSpecificAdRequestVerifyad : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> itemid{};
  shared_ptr<string> marketingtype{};
  shared_ptr<string> seat{};

  ListSpecificAdRequestVerifyad() {}

  explicit ListSpecificAdRequestVerifyad(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (itemid) {
      res["Itemid"] = boost::any(*itemid);
    }
    if (marketingtype) {
      res["Marketingtype"] = boost::any(*marketingtype);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Itemid") != m.end() && !m["Itemid"].empty()) {
      itemid = make_shared<string>(boost::any_cast<string>(m["Itemid"]));
    }
    if (m.find("Marketingtype") != m.end() && !m["Marketingtype"].empty()) {
      marketingtype = make_shared<string>(boost::any_cast<string>(m["Marketingtype"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
  }


  virtual ~ListSpecificAdRequestVerifyad() = default;
};
class ListSpecificAdRequest : public Darabonba::Model {
public:
  shared_ptr<ListSpecificAdRequestApp> app{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListSpecificAdRequestImp>> imp{};
  shared_ptr<ListSpecificAdRequestUser> user{};
  shared_ptr<vector<ListSpecificAdRequestVerifyad>> verifyad{};

  ListSpecificAdRequest() {}

  explicit ListSpecificAdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imp) {
      vector<boost::any> temp1;
      for(auto item1:*imp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Imp"] = boost::any(temp1);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (verifyad) {
      vector<boost::any> temp1;
      for(auto item1:*verifyad){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Verifyad"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        ListSpecificAdRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<ListSpecificAdRequestApp>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      if (typeid(vector<boost::any>) == m["Imp"].type()) {
        vector<ListSpecificAdRequestImp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Imp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecificAdRequestImp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imp = make_shared<vector<ListSpecificAdRequestImp>>(expect1);
      }
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        ListSpecificAdRequestUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<ListSpecificAdRequestUser>(model1);
      }
    }
    if (m.find("Verifyad") != m.end() && !m["Verifyad"].empty()) {
      if (typeid(vector<boost::any>) == m["Verifyad"].type()) {
        vector<ListSpecificAdRequestVerifyad> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Verifyad"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecificAdRequestVerifyad model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifyad = make_shared<vector<ListSpecificAdRequestVerifyad>>(expect1);
      }
    }
  }


  virtual ~ListSpecificAdRequest() = default;
};
class ListSpecificAdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> extShrink{};
  shared_ptr<string> id{};
  shared_ptr<string> impShrink{};
  shared_ptr<string> userShrink{};
  shared_ptr<string> verifyadShrink{};

  ListSpecificAdShrinkRequest() {}

  explicit ListSpecificAdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (extShrink) {
      res["Ext"] = boost::any(*extShrink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impShrink) {
      res["Imp"] = boost::any(*impShrink);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    if (verifyadShrink) {
      res["Verifyad"] = boost::any(*verifyadShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      extShrink = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      impShrink = make_shared<string>(boost::any_cast<string>(m["Imp"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Verifyad") != m.end() && !m["Verifyad"].empty()) {
      verifyadShrink = make_shared<string>(boost::any_cast<string>(m["Verifyad"]));
    }
  }


  virtual ~ListSpecificAdShrinkRequest() = default;
};
class ListSpecificAdResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ListSpecificAdResponseBodyHeader() {}

  explicit ListSpecificAdResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListSpecificAdResponseBodyHeader() = default;
};
class ListSpecificAdResponseBodyResultSeatbidBidAdsIcon : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ListSpecificAdResponseBodyResultSeatbidBidAdsIcon() {}

  explicit ListSpecificAdResponseBodyResultSeatbidBidAdsIcon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListSpecificAdResponseBodyResultSeatbidBidAdsIcon() = default;
};
class ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imps{};

  ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers() {}

  explicit ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imps) {
      res["Imps"] = boost::any(*imps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imps") != m.end() && !m["Imps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers() = default;
};
class ListSpecificAdResponseBodyResultSeatbidBidAds : public Darabonba::Model {
public:
  shared_ptr<string> crid{};
  shared_ptr<string> crurl{};
  shared_ptr<ListSpecificAdResponseBodyResultSeatbidBidAdsIcon> icon{};
  shared_ptr<string> id{};
  shared_ptr<long> interacttype{};
  shared_ptr<string> itemid{};
  shared_ptr<string> labeltype{};
  shared_ptr<vector<string>> landingurls{};
  shared_ptr<string> marketingtype{};
  shared_ptr<string> objective{};
  shared_ptr<string> price{};
  shared_ptr<string> seat{};
  shared_ptr<string> title{};
  shared_ptr<ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers> trackers{};

  ListSpecificAdResponseBodyResultSeatbidBidAds() {}

  explicit ListSpecificAdResponseBodyResultSeatbidBidAds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crid) {
      res["Crid"] = boost::any(*crid);
    }
    if (crurl) {
      res["Crurl"] = boost::any(*crurl);
    }
    if (icon) {
      res["Icon"] = icon ? boost::any(icon->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (interacttype) {
      res["Interacttype"] = boost::any(*interacttype);
    }
    if (itemid) {
      res["Itemid"] = boost::any(*itemid);
    }
    if (labeltype) {
      res["Labeltype"] = boost::any(*labeltype);
    }
    if (landingurls) {
      res["Landingurls"] = boost::any(*landingurls);
    }
    if (marketingtype) {
      res["Marketingtype"] = boost::any(*marketingtype);
    }
    if (objective) {
      res["Objective"] = boost::any(*objective);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (trackers) {
      res["Trackers"] = trackers ? boost::any(trackers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crid") != m.end() && !m["Crid"].empty()) {
      crid = make_shared<string>(boost::any_cast<string>(m["Crid"]));
    }
    if (m.find("Crurl") != m.end() && !m["Crurl"].empty()) {
      crurl = make_shared<string>(boost::any_cast<string>(m["Crurl"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      if (typeid(map<string, boost::any>) == m["Icon"].type()) {
        ListSpecificAdResponseBodyResultSeatbidBidAdsIcon model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Icon"]));
        icon = make_shared<ListSpecificAdResponseBodyResultSeatbidBidAdsIcon>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Interacttype") != m.end() && !m["Interacttype"].empty()) {
      interacttype = make_shared<long>(boost::any_cast<long>(m["Interacttype"]));
    }
    if (m.find("Itemid") != m.end() && !m["Itemid"].empty()) {
      itemid = make_shared<string>(boost::any_cast<string>(m["Itemid"]));
    }
    if (m.find("Labeltype") != m.end() && !m["Labeltype"].empty()) {
      labeltype = make_shared<string>(boost::any_cast<string>(m["Labeltype"]));
    }
    if (m.find("Landingurls") != m.end() && !m["Landingurls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Landingurls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Landingurls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      landingurls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Marketingtype") != m.end() && !m["Marketingtype"].empty()) {
      marketingtype = make_shared<string>(boost::any_cast<string>(m["Marketingtype"]));
    }
    if (m.find("Objective") != m.end() && !m["Objective"].empty()) {
      objective = make_shared<string>(boost::any_cast<string>(m["Objective"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Trackers") != m.end() && !m["Trackers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trackers"].type()) {
        ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trackers"]));
        trackers = make_shared<ListSpecificAdResponseBodyResultSeatbidBidAdsTrackers>(model1);
      }
    }
  }


  virtual ~ListSpecificAdResponseBodyResultSeatbidBidAds() = default;
};
class ListSpecificAdResponseBodyResultSeatbidBid : public Darabonba::Model {
public:
  shared_ptr<vector<ListSpecificAdResponseBodyResultSeatbidBidAds>> ads{};
  shared_ptr<string> impid{};

  ListSpecificAdResponseBodyResultSeatbidBid() {}

  explicit ListSpecificAdResponseBodyResultSeatbidBid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ads) {
      vector<boost::any> temp1;
      for(auto item1:*ads){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ads"] = boost::any(temp1);
    }
    if (impid) {
      res["Impid"] = boost::any(*impid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ads") != m.end() && !m["Ads"].empty()) {
      if (typeid(vector<boost::any>) == m["Ads"].type()) {
        vector<ListSpecificAdResponseBodyResultSeatbidBidAds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ads"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecificAdResponseBodyResultSeatbidBidAds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ads = make_shared<vector<ListSpecificAdResponseBodyResultSeatbidBidAds>>(expect1);
      }
    }
    if (m.find("Impid") != m.end() && !m["Impid"].empty()) {
      impid = make_shared<string>(boost::any_cast<string>(m["Impid"]));
    }
  }


  virtual ~ListSpecificAdResponseBodyResultSeatbidBid() = default;
};
class ListSpecificAdResponseBodyResultSeatbid : public Darabonba::Model {
public:
  shared_ptr<vector<ListSpecificAdResponseBodyResultSeatbidBid>> bid{};

  ListSpecificAdResponseBodyResultSeatbid() {}

  explicit ListSpecificAdResponseBodyResultSeatbid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      vector<boost::any> temp1;
      for(auto item1:*bid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      if (typeid(vector<boost::any>) == m["Bid"].type()) {
        vector<ListSpecificAdResponseBodyResultSeatbidBid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecificAdResponseBodyResultSeatbidBid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bid = make_shared<vector<ListSpecificAdResponseBodyResultSeatbidBid>>(expect1);
      }
    }
  }


  virtual ~ListSpecificAdResponseBodyResultSeatbid() = default;
};
class ListSpecificAdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bidid{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListSpecificAdResponseBodyResultSeatbid>> seatbid{};

  ListSpecificAdResponseBodyResult() {}

  explicit ListSpecificAdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidid) {
      res["Bidid"] = boost::any(*bidid);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (seatbid) {
      vector<boost::any> temp1;
      for(auto item1:*seatbid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Seatbid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bidid") != m.end() && !m["Bidid"].empty()) {
      bidid = make_shared<string>(boost::any_cast<string>(m["Bidid"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Seatbid") != m.end() && !m["Seatbid"].empty()) {
      if (typeid(vector<boost::any>) == m["Seatbid"].type()) {
        vector<ListSpecificAdResponseBodyResultSeatbid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Seatbid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecificAdResponseBodyResultSeatbid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seatbid = make_shared<vector<ListSpecificAdResponseBodyResultSeatbid>>(expect1);
      }
    }
  }


  virtual ~ListSpecificAdResponseBodyResult() = default;
};
class ListSpecificAdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorcode{};
  shared_ptr<string> errormsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<ListSpecificAdResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSpecificAdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListSpecificAdResponseBody() {}

  explicit ListSpecificAdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorcode) {
      res["Errorcode"] = boost::any(*errorcode);
    }
    if (errormsg) {
      res["Errormsg"] = boost::any(*errormsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Errorcode") != m.end() && !m["Errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["Errorcode"]));
    }
    if (m.find("Errormsg") != m.end() && !m["Errormsg"].empty()) {
      errormsg = make_shared<string>(boost::any_cast<string>(m["Errormsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ListSpecificAdResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ListSpecificAdResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListSpecificAdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListSpecificAdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSpecificAdResponseBody() = default;
};
class ListSpecificAdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSpecificAdResponseBody> body{};

  ListSpecificAdResponse() {}

  explicit ListSpecificAdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSpecificAdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSpecificAdResponseBody>(model1);
      }
    }
  }


  virtual ~ListSpecificAdResponse() = default;
};
class QueryAuditResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> dspId{};
  shared_ptr<vector<string>> ids{};

  QueryAuditResultRequest() {}

  explicit QueryAuditResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dspId) {
      res["DspId"] = boost::any(*dspId);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DspId") != m.end() && !m["DspId"].empty()) {
      dspId = make_shared<string>(boost::any_cast<string>(m["DspId"]));
    }
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
  }


  virtual ~QueryAuditResultRequest() = default;
};
class QueryAuditResultResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> crid{};
  shared_ptr<string> reason{};
  shared_ptr<long> state{};

  QueryAuditResultResponseBodyRecords() {}

  explicit QueryAuditResultResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crid) {
      res["Crid"] = boost::any(*crid);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crid") != m.end() && !m["Crid"].empty()) {
      crid = make_shared<string>(boost::any_cast<string>(m["Crid"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["State"]));
    }
  }


  virtual ~QueryAuditResultResponseBodyRecords() = default;
};
class QueryAuditResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<vector<QueryAuditResultResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<long> total{};

  QueryAuditResultResponseBody() {}

  explicit QueryAuditResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<QueryAuditResultResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAuditResultResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<QueryAuditResultResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryAuditResultResponseBody() = default;
};
class QueryAuditResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAuditResultResponseBody> body{};

  QueryAuditResultResponse() {}

  explicit QueryAuditResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAuditResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAuditResultResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAuditResultResponse() = default;
};
class QueryBenefitGrantResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloducodeFlowNo{};
  shared_ptr<string> outerCustomerId{};

  QueryBenefitGrantResultRequest() {}

  explicit QueryBenefitGrantResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloducodeFlowNo) {
      res["CloducodeFlowNo"] = boost::any(*cloducodeFlowNo);
    }
    if (outerCustomerId) {
      res["OuterCustomerId"] = boost::any(*outerCustomerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloducodeFlowNo") != m.end() && !m["CloducodeFlowNo"].empty()) {
      cloducodeFlowNo = make_shared<string>(boost::any_cast<string>(m["CloducodeFlowNo"]));
    }
    if (m.find("OuterCustomerId") != m.end() && !m["OuterCustomerId"].empty()) {
      outerCustomerId = make_shared<string>(boost::any_cast<string>(m["OuterCustomerId"]));
    }
  }


  virtual ~QueryBenefitGrantResultRequest() = default;
};
class QueryBenefitGrantResultResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> cloudcodeFlowNo{};
  shared_ptr<string> outerCustomerId{};
  shared_ptr<string> outerFlowNo{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  QueryBenefitGrantResultResponseBodyModel() {}

  explicit QueryBenefitGrantResultResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (cloudcodeFlowNo) {
      res["CloudcodeFlowNo"] = boost::any(*cloudcodeFlowNo);
    }
    if (outerCustomerId) {
      res["OuterCustomerId"] = boost::any(*outerCustomerId);
    }
    if (outerFlowNo) {
      res["OuterFlowNo"] = boost::any(*outerFlowNo);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("CloudcodeFlowNo") != m.end() && !m["CloudcodeFlowNo"].empty()) {
      cloudcodeFlowNo = make_shared<string>(boost::any_cast<string>(m["CloudcodeFlowNo"]));
    }
    if (m.find("OuterCustomerId") != m.end() && !m["OuterCustomerId"].empty()) {
      outerCustomerId = make_shared<string>(boost::any_cast<string>(m["OuterCustomerId"]));
    }
    if (m.find("OuterFlowNo") != m.end() && !m["OuterFlowNo"].empty()) {
      outerFlowNo = make_shared<string>(boost::any_cast<string>(m["OuterFlowNo"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryBenefitGrantResultResponseBodyModel() = default;
};
class QueryBenefitGrantResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> debug{};
  shared_ptr<string> message{};
  shared_ptr<QueryBenefitGrantResultResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryBenefitGrantResultResponseBody() {}

  explicit QueryBenefitGrantResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryBenefitGrantResultResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryBenefitGrantResultResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryBenefitGrantResultResponseBody() = default;
};
class QueryBenefitGrantResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBenefitGrantResultResponseBody> body{};

  QueryBenefitGrantResultResponse() {}

  explicit QueryBenefitGrantResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBenefitGrantResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBenefitGrantResultResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBenefitGrantResultResponse() = default;
};
class QueryFinanceUserInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<long> userId{};

  QueryFinanceUserInfoRequest() {}

  explicit QueryFinanceUserInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~QueryFinanceUserInfoRequest() = default;
};
class QueryFinanceUserInfoResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  QueryFinanceUserInfoResponseBodyHeader() {}

  explicit QueryFinanceUserInfoResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~QueryFinanceUserInfoResponseBodyHeader() = default;
};
class QueryFinanceUserInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalIncomeAmount{};
  shared_ptr<string> userPageType{};
  shared_ptr<long> yesterdayIncomeAmount{};

  QueryFinanceUserInfoResponseBodyResult() {}

  explicit QueryFinanceUserInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalIncomeAmount) {
      res["TotalIncomeAmount"] = boost::any(*totalIncomeAmount);
    }
    if (userPageType) {
      res["UserPageType"] = boost::any(*userPageType);
    }
    if (yesterdayIncomeAmount) {
      res["YesterdayIncomeAmount"] = boost::any(*yesterdayIncomeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalIncomeAmount") != m.end() && !m["TotalIncomeAmount"].empty()) {
      totalIncomeAmount = make_shared<long>(boost::any_cast<long>(m["TotalIncomeAmount"]));
    }
    if (m.find("UserPageType") != m.end() && !m["UserPageType"].empty()) {
      userPageType = make_shared<string>(boost::any_cast<string>(m["UserPageType"]));
    }
    if (m.find("YesterdayIncomeAmount") != m.end() && !m["YesterdayIncomeAmount"].empty()) {
      yesterdayIncomeAmount = make_shared<long>(boost::any_cast<long>(m["YesterdayIncomeAmount"]));
    }
  }


  virtual ~QueryFinanceUserInfoResponseBodyResult() = default;
};
class QueryFinanceUserInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<QueryFinanceUserInfoResponseBodyHeader> header{};
  shared_ptr<QueryFinanceUserInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryFinanceUserInfoResponseBody() {}

  explicit QueryFinanceUserInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        QueryFinanceUserInfoResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<QueryFinanceUserInfoResponseBodyHeader>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryFinanceUserInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryFinanceUserInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFinanceUserInfoResponseBody() = default;
};
class QueryFinanceUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFinanceUserInfoResponseBody> body{};

  QueryFinanceUserInfoResponse() {}

  explicit QueryFinanceUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFinanceUserInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFinanceUserInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFinanceUserInfoResponse() = default;
};
class QueryOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> channelTradeId{};
  shared_ptr<string> tradeId{};

  QueryOrderRequest() {}

  explicit QueryOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelTradeId) {
      res["ChannelTradeId"] = boost::any(*channelTradeId);
    }
    if (tradeId) {
      res["TradeId"] = boost::any(*tradeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ChannelTradeId") != m.end() && !m["ChannelTradeId"].empty()) {
      channelTradeId = make_shared<string>(boost::any_cast<string>(m["ChannelTradeId"]));
    }
    if (m.find("TradeId") != m.end() && !m["TradeId"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["TradeId"]));
    }
  }


  virtual ~QueryOrderRequest() = default;
};
class QueryOrderResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  QueryOrderResponseBodyHeader() {}

  explicit QueryOrderResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~QueryOrderResponseBodyHeader() = default;
};
class QueryOrderResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> alipayTradeId{};
  shared_ptr<string> channelTradeId{};
  shared_ptr<long> itemId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<long> orderStatus{};
  shared_ptr<long> price{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taobaoTradeId{};
  shared_ptr<string> tradeId{};

  QueryOrderResponseBodyResult() {}

  explicit QueryOrderResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alipayTradeId) {
      res["AlipayTradeId"] = boost::any(*alipayTradeId);
    }
    if (channelTradeId) {
      res["ChannelTradeId"] = boost::any(*channelTradeId);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taobaoTradeId) {
      res["TaobaoTradeId"] = boost::any(*taobaoTradeId);
    }
    if (tradeId) {
      res["TradeId"] = boost::any(*tradeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlipayTradeId") != m.end() && !m["AlipayTradeId"].empty()) {
      alipayTradeId = make_shared<string>(boost::any_cast<string>(m["AlipayTradeId"]));
    }
    if (m.find("ChannelTradeId") != m.end() && !m["ChannelTradeId"].empty()) {
      channelTradeId = make_shared<string>(boost::any_cast<string>(m["ChannelTradeId"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaobaoTradeId") != m.end() && !m["TaobaoTradeId"].empty()) {
      taobaoTradeId = make_shared<string>(boost::any_cast<string>(m["TaobaoTradeId"]));
    }
    if (m.find("TradeId") != m.end() && !m["TradeId"].empty()) {
      tradeId = make_shared<string>(boost::any_cast<string>(m["TradeId"]));
    }
  }


  virtual ~QueryOrderResponseBodyResult() = default;
};
class QueryOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<QueryOrderResponseBodyHeader> header{};
  shared_ptr<QueryOrderResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryOrderResponseBody() {}

  explicit QueryOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        QueryOrderResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<QueryOrderResponseBodyHeader>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryOrderResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryOrderResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryOrderResponseBody() = default;
};
class QueryOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrderResponseBody> body{};

  QueryOrderResponse() {}

  explicit QueryOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrderResponse() = default;
};
class ReportImpressionRequest : public Darabonba::Model {
public:
  shared_ptr<string> impressionlink{};

  ReportImpressionRequest() {}

  explicit ReportImpressionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (impressionlink) {
      res["Impressionlink"] = boost::any(*impressionlink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Impressionlink") != m.end() && !m["Impressionlink"].empty()) {
      impressionlink = make_shared<string>(boost::any_cast<string>(m["Impressionlink"]));
    }
  }


  virtual ~ReportImpressionRequest() = default;
};
class ReportImpressionResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ReportImpressionResponseBodyHeader() {}

  explicit ReportImpressionResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ReportImpressionResponseBodyHeader() = default;
};
class ReportImpressionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bidid{};
  shared_ptr<bool> success{};

  ReportImpressionResponseBodyResult() {}

  explicit ReportImpressionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidid) {
      res["Bidid"] = boost::any(*bidid);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bidid") != m.end() && !m["Bidid"].empty()) {
      bidid = make_shared<string>(boost::any_cast<string>(m["Bidid"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportImpressionResponseBodyResult() = default;
};
class ReportImpressionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<ReportImpressionResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<ReportImpressionResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ReportImpressionResponseBody() {}

  explicit ReportImpressionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ReportImpressionResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ReportImpressionResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ReportImpressionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ReportImpressionResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportImpressionResponseBody() = default;
};
class ReportImpressionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportImpressionResponseBody> body{};

  ReportImpressionResponse() {}

  explicit ReportImpressionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportImpressionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportImpressionResponseBody>(model1);
      }
    }
  }


  virtual ~ReportImpressionResponse() = default;
};
class ReportTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> impressionlink{};

  ReportTranslateRequest() {}

  explicit ReportTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (impressionlink) {
      res["Impressionlink"] = boost::any(*impressionlink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Impressionlink") != m.end() && !m["Impressionlink"].empty()) {
      impressionlink = make_shared<string>(boost::any_cast<string>(m["Impressionlink"]));
    }
  }


  virtual ~ReportTranslateRequest() = default;
};
class ReportTranslateResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> innerErrorCode{};
  shared_ptr<string> innerErrorMsg{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  ReportTranslateResponseBodyHeader() {}

  explicit ReportTranslateResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (innerErrorCode) {
      res["InnerErrorCode"] = boost::any(*innerErrorCode);
    }
    if (innerErrorMsg) {
      res["InnerErrorMsg"] = boost::any(*innerErrorMsg);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("InnerErrorCode") != m.end() && !m["InnerErrorCode"].empty()) {
      innerErrorCode = make_shared<string>(boost::any_cast<string>(m["InnerErrorCode"]));
    }
    if (m.find("InnerErrorMsg") != m.end() && !m["InnerErrorMsg"].empty()) {
      innerErrorMsg = make_shared<string>(boost::any_cast<string>(m["InnerErrorMsg"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ReportTranslateResponseBodyHeader() = default;
};
class ReportTranslateResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bidid{};
  shared_ptr<string> success{};

  ReportTranslateResponseBodyResult() {}

  explicit ReportTranslateResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidid) {
      res["Bidid"] = boost::any(*bidid);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bidid") != m.end() && !m["Bidid"].empty()) {
      bidid = make_shared<string>(boost::any_cast<string>(m["Bidid"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ReportTranslateResponseBodyResult() = default;
};
class ReportTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<ReportTranslateResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<ReportTranslateResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ReportTranslateResponseBody() {}

  explicit ReportTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        ReportTranslateResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<ReportTranslateResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ReportTranslateResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ReportTranslateResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportTranslateResponseBody() = default;
};
class ReportTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportTranslateResponseBody> body{};

  ReportTranslateResponse() {}

  explicit ReportTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~ReportTranslateResponse() = default;
};
class SendSmsRequest : public Darabonba::Model {
public:
  shared_ptr<long> nowStamp{};
  shared_ptr<string> phoneNumbers{};
  shared_ptr<string> signKey{};

  SendSmsRequest() {}

  explicit SendSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nowStamp) {
      res["NowStamp"] = boost::any(*nowStamp);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (signKey) {
      res["SignKey"] = boost::any(*signKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NowStamp") != m.end() && !m["NowStamp"].empty()) {
      nowStamp = make_shared<long>(boost::any_cast<long>(m["NowStamp"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbers = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("SignKey") != m.end() && !m["SignKey"].empty()) {
      signKey = make_shared<string>(boost::any_cast<string>(m["SignKey"]));
    }
  }


  virtual ~SendSmsRequest() = default;
};
class SendSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendSmsResponseBody() {}

  explicit SendSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendSmsResponseBody() = default;
};
class SendSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendSmsResponseBody> body{};

  SendSmsResponse() {}

  explicit SendSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendSmsResponseBody>(model1);
      }
    }
  }


  virtual ~SendSmsResponse() = default;
};
class SyncInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> bizId{};
  shared_ptr<string> chainValue{};
  shared_ptr<string> componentIdList{};
  shared_ptr<string> createUser{};
  shared_ptr<long> id{};
  shared_ptr<long> mainId{};
  shared_ptr<string> name{};
  shared_ptr<string> nextChainValue{};
  shared_ptr<string> ossFileUrl{};
  shared_ptr<string> pageId{};
  shared_ptr<long> status{};
  shared_ptr<string> updateUser{};
  shared_ptr<string> url{};
  shared_ptr<long> urlType{};

  SyncInfoRequest() {}

  explicit SyncInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (chainValue) {
      res["ChainValue"] = boost::any(*chainValue);
    }
    if (componentIdList) {
      res["ComponentIdList"] = boost::any(*componentIdList);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mainId) {
      res["MainId"] = boost::any(*mainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextChainValue) {
      res["NextChainValue"] = boost::any(*nextChainValue);
    }
    if (ossFileUrl) {
      res["OssFileUrl"] = boost::any(*ossFileUrl);
    }
    if (pageId) {
      res["PageId"] = boost::any(*pageId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("ChainValue") != m.end() && !m["ChainValue"].empty()) {
      chainValue = make_shared<string>(boost::any_cast<string>(m["ChainValue"]));
    }
    if (m.find("ComponentIdList") != m.end() && !m["ComponentIdList"].empty()) {
      componentIdList = make_shared<string>(boost::any_cast<string>(m["ComponentIdList"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MainId") != m.end() && !m["MainId"].empty()) {
      mainId = make_shared<long>(boost::any_cast<long>(m["MainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextChainValue") != m.end() && !m["NextChainValue"].empty()) {
      nextChainValue = make_shared<string>(boost::any_cast<string>(m["NextChainValue"]));
    }
    if (m.find("OssFileUrl") != m.end() && !m["OssFileUrl"].empty()) {
      ossFileUrl = make_shared<string>(boost::any_cast<string>(m["OssFileUrl"]));
    }
    if (m.find("PageId") != m.end() && !m["PageId"].empty()) {
      pageId = make_shared<string>(boost::any_cast<string>(m["PageId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<long>(boost::any_cast<long>(m["UrlType"]));
    }
  }


  virtual ~SyncInfoRequest() = default;
};
class SyncInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  SyncInfoResponseBodyData() {}

  explicit SyncInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~SyncInfoResponseBodyData() = default;
};
class SyncInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SyncInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncInfoResponseBody() {}

  explicit SyncInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
        SyncInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SyncInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncInfoResponseBody() = default;
};
class SyncInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncInfoResponseBody> body{};

  SyncInfoResponse() {}

  explicit SyncInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SyncInfoResponse() = default;
};
class UpdateAdxCreativeContentRequestAdNativead : public Darabonba::Model {
public:
  shared_ptr<string> attrname{};
  shared_ptr<string> attrvalue{};
  shared_ptr<long> h{};
  shared_ptr<string> mime{};
  shared_ptr<long> w{};

  UpdateAdxCreativeContentRequestAdNativead() {}

  explicit UpdateAdxCreativeContentRequestAdNativead(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attrname) {
      res["Attrname"] = boost::any(*attrname);
    }
    if (attrvalue) {
      res["Attrvalue"] = boost::any(*attrvalue);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (mime) {
      res["Mime"] = boost::any(*mime);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attrname") != m.end() && !m["Attrname"].empty()) {
      attrname = make_shared<string>(boost::any_cast<string>(m["Attrname"]));
    }
    if (m.find("Attrvalue") != m.end() && !m["Attrvalue"].empty()) {
      attrvalue = make_shared<string>(boost::any_cast<string>(m["Attrvalue"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<long>(boost::any_cast<long>(m["H"]));
    }
    if (m.find("Mime") != m.end() && !m["Mime"].empty()) {
      mime = make_shared<string>(boost::any_cast<string>(m["Mime"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<long>(boost::any_cast<long>(m["W"]));
    }
  }


  virtual ~UpdateAdxCreativeContentRequestAdNativead() = default;
};
class UpdateAdxCreativeContentRequestAd : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bundle{};
  shared_ptr<vector<string>> clicks{};
  shared_ptr<string> crid{};
  shared_ptr<string> enddate{};
  shared_ptr<vector<string>> imps{};
  shared_ptr<long> interacttype{};
  shared_ptr<vector<string>> mediaIdList{};
  shared_ptr<vector<UpdateAdxCreativeContentRequestAdNativead>> nativead{};
  shared_ptr<long> op{};
  shared_ptr<string> ostype{};
  shared_ptr<bool> prereview{};
  shared_ptr<string> seat{};
  shared_ptr<string> startdate{};
  shared_ptr<long> template_{};
  shared_ptr<long> type{};

  UpdateAdxCreativeContentRequestAd() {}

  explicit UpdateAdxCreativeContentRequestAd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundle) {
      res["Bundle"] = boost::any(*bundle);
    }
    if (clicks) {
      res["Clicks"] = boost::any(*clicks);
    }
    if (crid) {
      res["Crid"] = boost::any(*crid);
    }
    if (enddate) {
      res["Enddate"] = boost::any(*enddate);
    }
    if (imps) {
      res["Imps"] = boost::any(*imps);
    }
    if (interacttype) {
      res["Interacttype"] = boost::any(*interacttype);
    }
    if (mediaIdList) {
      res["MediaIdList"] = boost::any(*mediaIdList);
    }
    if (nativead) {
      vector<boost::any> temp1;
      for(auto item1:*nativead){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nativead"] = boost::any(temp1);
    }
    if (op) {
      res["Op"] = boost::any(*op);
    }
    if (ostype) {
      res["Ostype"] = boost::any(*ostype);
    }
    if (prereview) {
      res["Prereview"] = boost::any(*prereview);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    if (startdate) {
      res["Startdate"] = boost::any(*startdate);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bundle") != m.end() && !m["Bundle"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Bundle"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Bundle"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bundle = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Clicks") != m.end() && !m["Clicks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clicks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clicks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clicks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Crid") != m.end() && !m["Crid"].empty()) {
      crid = make_shared<string>(boost::any_cast<string>(m["Crid"]));
    }
    if (m.find("Enddate") != m.end() && !m["Enddate"].empty()) {
      enddate = make_shared<string>(boost::any_cast<string>(m["Enddate"]));
    }
    if (m.find("Imps") != m.end() && !m["Imps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Interacttype") != m.end() && !m["Interacttype"].empty()) {
      interacttype = make_shared<long>(boost::any_cast<long>(m["Interacttype"]));
    }
    if (m.find("MediaIdList") != m.end() && !m["MediaIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MediaIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MediaIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediaIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nativead") != m.end() && !m["Nativead"].empty()) {
      if (typeid(vector<boost::any>) == m["Nativead"].type()) {
        vector<UpdateAdxCreativeContentRequestAdNativead> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nativead"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAdxCreativeContentRequestAdNativead model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nativead = make_shared<vector<UpdateAdxCreativeContentRequestAdNativead>>(expect1);
      }
    }
    if (m.find("Op") != m.end() && !m["Op"].empty()) {
      op = make_shared<long>(boost::any_cast<long>(m["Op"]));
    }
    if (m.find("Ostype") != m.end() && !m["Ostype"].empty()) {
      ostype = make_shared<string>(boost::any_cast<string>(m["Ostype"]));
    }
    if (m.find("Prereview") != m.end() && !m["Prereview"].empty()) {
      prereview = make_shared<bool>(boost::any_cast<bool>(m["Prereview"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
    if (m.find("Startdate") != m.end() && !m["Startdate"].empty()) {
      startdate = make_shared<string>(boost::any_cast<string>(m["Startdate"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<long>(boost::any_cast<long>(m["Template"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~UpdateAdxCreativeContentRequestAd() = default;
};
class UpdateAdxCreativeContentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateAdxCreativeContentRequestAd>> ad{};
  shared_ptr<string> dspId{};

  UpdateAdxCreativeContentRequest() {}

  explicit UpdateAdxCreativeContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      vector<boost::any> temp1;
      for(auto item1:*ad){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ad"] = boost::any(temp1);
    }
    if (dspId) {
      res["DspId"] = boost::any(*dspId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      if (typeid(vector<boost::any>) == m["Ad"].type()) {
        vector<UpdateAdxCreativeContentRequestAd> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ad"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAdxCreativeContentRequestAd model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ad = make_shared<vector<UpdateAdxCreativeContentRequestAd>>(expect1);
      }
    }
    if (m.find("DspId") != m.end() && !m["DspId"].empty()) {
      dspId = make_shared<string>(boost::any_cast<string>(m["DspId"]));
    }
  }


  virtual ~UpdateAdxCreativeContentRequest() = default;
};
class UpdateAdxCreativeContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  UpdateAdxCreativeContentResponseBody() {}

  explicit UpdateAdxCreativeContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~UpdateAdxCreativeContentResponseBody() = default;
};
class UpdateAdxCreativeContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAdxCreativeContentResponseBody> body{};

  UpdateAdxCreativeContentResponse() {}

  explicit UpdateAdxCreativeContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAdxCreativeContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAdxCreativeContentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAdxCreativeContentResponse() = default;
};
class VerifyAdvertisingRequestApp : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> mediaid{};
  shared_ptr<string> sn{};

  VerifyAdvertisingRequestApp() {}

  explicit VerifyAdvertisingRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (mediaid) {
      res["Mediaid"] = boost::any(*mediaid);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Mediaid") != m.end() && !m["Mediaid"].empty()) {
      mediaid = make_shared<string>(boost::any_cast<string>(m["Mediaid"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~VerifyAdvertisingRequestApp() = default;
};
class VerifyAdvertisingRequestDeviceGeo : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> district{};
  shared_ptr<double> lat{};
  shared_ptr<double> lon{};
  shared_ptr<string> province{};

  VerifyAdvertisingRequestDeviceGeo() {}

  explicit VerifyAdvertisingRequestDeviceGeo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<double>(boost::any_cast<double>(m["Lat"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<double>(boost::any_cast<double>(m["Lon"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~VerifyAdvertisingRequestDeviceGeo() = default;
};
class VerifyAdvertisingRequestDevice : public Darabonba::Model {
public:
  shared_ptr<string> androidid{};
  shared_ptr<string> androidmd5{};
  shared_ptr<string> caid{};
  shared_ptr<string> carrier{};
  shared_ptr<long> connectiontype{};
  shared_ptr<long> devicetype{};
  shared_ptr<VerifyAdvertisingRequestDeviceGeo> geo{};
  shared_ptr<string> idfa{};
  shared_ptr<string> imei{};
  shared_ptr<string> imeimd5{};
  shared_ptr<string> ip{};
  shared_ptr<string> language{};
  shared_ptr<string> mac{};
  shared_ptr<string> macmd5{};
  shared_ptr<string> make{};
  shared_ptr<string> model{};
  shared_ptr<string> oaid{};
  shared_ptr<string> os{};
  shared_ptr<string> osv{};
  shared_ptr<string> ua{};
  shared_ptr<string> utdid{};

  VerifyAdvertisingRequestDevice() {}

  explicit VerifyAdvertisingRequestDevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidid) {
      res["Androidid"] = boost::any(*androidid);
    }
    if (androidmd5) {
      res["Androidmd5"] = boost::any(*androidmd5);
    }
    if (caid) {
      res["Caid"] = boost::any(*caid);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (connectiontype) {
      res["Connectiontype"] = boost::any(*connectiontype);
    }
    if (devicetype) {
      res["Devicetype"] = boost::any(*devicetype);
    }
    if (geo) {
      res["Geo"] = geo ? boost::any(geo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idfa) {
      res["Idfa"] = boost::any(*idfa);
    }
    if (imei) {
      res["Imei"] = boost::any(*imei);
    }
    if (imeimd5) {
      res["Imeimd5"] = boost::any(*imeimd5);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (macmd5) {
      res["Macmd5"] = boost::any(*macmd5);
    }
    if (make) {
      res["Make"] = boost::any(*make);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (oaid) {
      res["Oaid"] = boost::any(*oaid);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osv) {
      res["Osv"] = boost::any(*osv);
    }
    if (ua) {
      res["Ua"] = boost::any(*ua);
    }
    if (utdid) {
      res["Utdid"] = boost::any(*utdid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Androidid") != m.end() && !m["Androidid"].empty()) {
      androidid = make_shared<string>(boost::any_cast<string>(m["Androidid"]));
    }
    if (m.find("Androidmd5") != m.end() && !m["Androidmd5"].empty()) {
      androidmd5 = make_shared<string>(boost::any_cast<string>(m["Androidmd5"]));
    }
    if (m.find("Caid") != m.end() && !m["Caid"].empty()) {
      caid = make_shared<string>(boost::any_cast<string>(m["Caid"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Connectiontype") != m.end() && !m["Connectiontype"].empty()) {
      connectiontype = make_shared<long>(boost::any_cast<long>(m["Connectiontype"]));
    }
    if (m.find("Devicetype") != m.end() && !m["Devicetype"].empty()) {
      devicetype = make_shared<long>(boost::any_cast<long>(m["Devicetype"]));
    }
    if (m.find("Geo") != m.end() && !m["Geo"].empty()) {
      if (typeid(map<string, boost::any>) == m["Geo"].type()) {
        VerifyAdvertisingRequestDeviceGeo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Geo"]));
        geo = make_shared<VerifyAdvertisingRequestDeviceGeo>(model1);
      }
    }
    if (m.find("Idfa") != m.end() && !m["Idfa"].empty()) {
      idfa = make_shared<string>(boost::any_cast<string>(m["Idfa"]));
    }
    if (m.find("Imei") != m.end() && !m["Imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["Imei"]));
    }
    if (m.find("Imeimd5") != m.end() && !m["Imeimd5"].empty()) {
      imeimd5 = make_shared<string>(boost::any_cast<string>(m["Imeimd5"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Macmd5") != m.end() && !m["Macmd5"].empty()) {
      macmd5 = make_shared<string>(boost::any_cast<string>(m["Macmd5"]));
    }
    if (m.find("Make") != m.end() && !m["Make"].empty()) {
      make = make_shared<string>(boost::any_cast<string>(m["Make"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Oaid") != m.end() && !m["Oaid"].empty()) {
      oaid = make_shared<string>(boost::any_cast<string>(m["Oaid"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Osv") != m.end() && !m["Osv"].empty()) {
      osv = make_shared<string>(boost::any_cast<string>(m["Osv"]));
    }
    if (m.find("Ua") != m.end() && !m["Ua"].empty()) {
      ua = make_shared<string>(boost::any_cast<string>(m["Ua"]));
    }
    if (m.find("Utdid") != m.end() && !m["Utdid"].empty()) {
      utdid = make_shared<string>(boost::any_cast<string>(m["Utdid"]));
    }
  }


  virtual ~VerifyAdvertisingRequestDevice() = default;
};
class VerifyAdvertisingRequestImp : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> tagid{};

  VerifyAdvertisingRequestImp() {}

  explicit VerifyAdvertisingRequestImp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagid) {
      res["Tagid"] = boost::any(*tagid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Tagid") != m.end() && !m["Tagid"].empty()) {
      tagid = make_shared<string>(boost::any_cast<string>(m["Tagid"]));
    }
  }


  virtual ~VerifyAdvertisingRequestImp() = default;
};
class VerifyAdvertisingRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> usertype{};

  VerifyAdvertisingRequestUser() {}

  explicit VerifyAdvertisingRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (usertype) {
      res["Usertype"] = boost::any(*usertype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Usertype") != m.end() && !m["Usertype"].empty()) {
      usertype = make_shared<string>(boost::any_cast<string>(m["Usertype"]));
    }
  }


  virtual ~VerifyAdvertisingRequestUser() = default;
};
class VerifyAdvertisingRequestVerifyad : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> seat{};

  VerifyAdvertisingRequestVerifyad() {}

  explicit VerifyAdvertisingRequestVerifyad(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
  }


  virtual ~VerifyAdvertisingRequestVerifyad() = default;
};
class VerifyAdvertisingRequest : public Darabonba::Model {
public:
  shared_ptr<VerifyAdvertisingRequestApp> app{};
  shared_ptr<long> dealtype{};
  shared_ptr<VerifyAdvertisingRequestDevice> device{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> id{};
  shared_ptr<vector<VerifyAdvertisingRequestImp>> imp{};
  shared_ptr<long> test{};
  shared_ptr<VerifyAdvertisingRequestUser> user{};
  shared_ptr<vector<VerifyAdvertisingRequestVerifyad>> verifyad{};

  VerifyAdvertisingRequest() {}

  explicit VerifyAdvertisingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dealtype) {
      res["Dealtype"] = boost::any(*dealtype);
    }
    if (device) {
      res["Device"] = device ? boost::any(device->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imp) {
      vector<boost::any> temp1;
      for(auto item1:*imp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Imp"] = boost::any(temp1);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (verifyad) {
      vector<boost::any> temp1;
      for(auto item1:*verifyad){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Verifyad"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        VerifyAdvertisingRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<VerifyAdvertisingRequestApp>(model1);
      }
    }
    if (m.find("Dealtype") != m.end() && !m["Dealtype"].empty()) {
      dealtype = make_shared<long>(boost::any_cast<long>(m["Dealtype"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      if (typeid(map<string, boost::any>) == m["Device"].type()) {
        VerifyAdvertisingRequestDevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Device"]));
        device = make_shared<VerifyAdvertisingRequestDevice>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      if (typeid(vector<boost::any>) == m["Imp"].type()) {
        vector<VerifyAdvertisingRequestImp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Imp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingRequestImp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imp = make_shared<vector<VerifyAdvertisingRequestImp>>(expect1);
      }
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<long>(boost::any_cast<long>(m["Test"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        VerifyAdvertisingRequestUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<VerifyAdvertisingRequestUser>(model1);
      }
    }
    if (m.find("Verifyad") != m.end() && !m["Verifyad"].empty()) {
      if (typeid(vector<boost::any>) == m["Verifyad"].type()) {
        vector<VerifyAdvertisingRequestVerifyad> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Verifyad"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingRequestVerifyad model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifyad = make_shared<vector<VerifyAdvertisingRequestVerifyad>>(expect1);
      }
    }
  }


  virtual ~VerifyAdvertisingRequest() = default;
};
class VerifyAdvertisingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<long> dealtype{};
  shared_ptr<string> deviceShrink{};
  shared_ptr<string> extShrink{};
  shared_ptr<string> id{};
  shared_ptr<string> impShrink{};
  shared_ptr<long> test{};
  shared_ptr<string> userShrink{};
  shared_ptr<string> verifyadShrink{};

  VerifyAdvertisingShrinkRequest() {}

  explicit VerifyAdvertisingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (dealtype) {
      res["Dealtype"] = boost::any(*dealtype);
    }
    if (deviceShrink) {
      res["Device"] = boost::any(*deviceShrink);
    }
    if (extShrink) {
      res["Ext"] = boost::any(*extShrink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impShrink) {
      res["Imp"] = boost::any(*impShrink);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    if (verifyadShrink) {
      res["Verifyad"] = boost::any(*verifyadShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Dealtype") != m.end() && !m["Dealtype"].empty()) {
      dealtype = make_shared<long>(boost::any_cast<long>(m["Dealtype"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      deviceShrink = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      extShrink = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Imp") != m.end() && !m["Imp"].empty()) {
      impShrink = make_shared<string>(boost::any_cast<string>(m["Imp"]));
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<long>(boost::any_cast<long>(m["Test"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Verifyad") != m.end() && !m["Verifyad"].empty()) {
      verifyadShrink = make_shared<string>(boost::any_cast<string>(m["Verifyad"]));
    }
  }


  virtual ~VerifyAdvertisingShrinkRequest() = default;
};
class VerifyAdvertisingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<long> costTime{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> version{};

  VerifyAdvertisingResponseBodyHeader() {}

  explicit VerifyAdvertisingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBodyHeader() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> format{};
  shared_ptr<string> url{};

  VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imps{};

  VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imps) {
      res["Imps"] = boost::any(*imps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imps") != m.end() && !m["Imps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbidBidAds : public Darabonba::Model {
public:
  shared_ptr<string> crid{};
  shared_ptr<string> crurl{};
  shared_ptr<VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon> icon{};
  shared_ptr<string> id{};
  shared_ptr<vector<VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages>> images{};
  shared_ptr<long> interacttype{};
  shared_ptr<string> labeltype{};
  shared_ptr<vector<string>> landingurls{};
  shared_ptr<string> marketingtype{};
  shared_ptr<string> objective{};
  shared_ptr<string> price{};
  shared_ptr<string> seat{};
  shared_ptr<string> style{};
  shared_ptr<string> title{};
  shared_ptr<VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers> trackers{};
  shared_ptr<string> type{};

  VerifyAdvertisingResponseBodyResultSeatbidBidAds() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbidBidAds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crid) {
      res["Crid"] = boost::any(*crid);
    }
    if (crurl) {
      res["Crurl"] = boost::any(*crurl);
    }
    if (icon) {
      res["Icon"] = icon ? boost::any(icon->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (interacttype) {
      res["Interacttype"] = boost::any(*interacttype);
    }
    if (labeltype) {
      res["Labeltype"] = boost::any(*labeltype);
    }
    if (landingurls) {
      res["Landingurls"] = boost::any(*landingurls);
    }
    if (marketingtype) {
      res["Marketingtype"] = boost::any(*marketingtype);
    }
    if (objective) {
      res["Objective"] = boost::any(*objective);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (trackers) {
      res["Trackers"] = trackers ? boost::any(trackers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crid") != m.end() && !m["Crid"].empty()) {
      crid = make_shared<string>(boost::any_cast<string>(m["Crid"]));
    }
    if (m.find("Crurl") != m.end() && !m["Crurl"].empty()) {
      crurl = make_shared<string>(boost::any_cast<string>(m["Crurl"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      if (typeid(map<string, boost::any>) == m["Icon"].type()) {
        VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Icon"]));
        icon = make_shared<VerifyAdvertisingResponseBodyResultSeatbidBidAdsIcon>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<VerifyAdvertisingResponseBodyResultSeatbidBidAdsImages>>(expect1);
      }
    }
    if (m.find("Interacttype") != m.end() && !m["Interacttype"].empty()) {
      interacttype = make_shared<long>(boost::any_cast<long>(m["Interacttype"]));
    }
    if (m.find("Labeltype") != m.end() && !m["Labeltype"].empty()) {
      labeltype = make_shared<string>(boost::any_cast<string>(m["Labeltype"]));
    }
    if (m.find("Landingurls") != m.end() && !m["Landingurls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Landingurls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Landingurls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      landingurls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Marketingtype") != m.end() && !m["Marketingtype"].empty()) {
      marketingtype = make_shared<string>(boost::any_cast<string>(m["Marketingtype"]));
    }
    if (m.find("Objective") != m.end() && !m["Objective"].empty()) {
      objective = make_shared<string>(boost::any_cast<string>(m["Objective"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Trackers") != m.end() && !m["Trackers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trackers"].type()) {
        VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trackers"]));
        trackers = make_shared<VerifyAdvertisingResponseBodyResultSeatbidBidAdsTrackers>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbidBidAds() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbidBid : public Darabonba::Model {
public:
  shared_ptr<vector<VerifyAdvertisingResponseBodyResultSeatbidBidAds>> ads{};
  shared_ptr<string> impid{};

  VerifyAdvertisingResponseBodyResultSeatbidBid() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbidBid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ads) {
      vector<boost::any> temp1;
      for(auto item1:*ads){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ads"] = boost::any(temp1);
    }
    if (impid) {
      res["Impid"] = boost::any(*impid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ads") != m.end() && !m["Ads"].empty()) {
      if (typeid(vector<boost::any>) == m["Ads"].type()) {
        vector<VerifyAdvertisingResponseBodyResultSeatbidBidAds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ads"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingResponseBodyResultSeatbidBidAds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ads = make_shared<vector<VerifyAdvertisingResponseBodyResultSeatbidBidAds>>(expect1);
      }
    }
    if (m.find("Impid") != m.end() && !m["Impid"].empty()) {
      impid = make_shared<string>(boost::any_cast<string>(m["Impid"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbidBid() = default;
};
class VerifyAdvertisingResponseBodyResultSeatbid : public Darabonba::Model {
public:
  shared_ptr<vector<VerifyAdvertisingResponseBodyResultSeatbidBid>> bid{};

  VerifyAdvertisingResponseBodyResultSeatbid() {}

  explicit VerifyAdvertisingResponseBodyResultSeatbid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      vector<boost::any> temp1;
      for(auto item1:*bid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      if (typeid(vector<boost::any>) == m["Bid"].type()) {
        vector<VerifyAdvertisingResponseBodyResultSeatbidBid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingResponseBodyResultSeatbidBid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bid = make_shared<vector<VerifyAdvertisingResponseBodyResultSeatbidBid>>(expect1);
      }
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResultSeatbid() = default;
};
class VerifyAdvertisingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bidid{};
  shared_ptr<string> id{};
  shared_ptr<vector<VerifyAdvertisingResponseBodyResultSeatbid>> seatbid{};

  VerifyAdvertisingResponseBodyResult() {}

  explicit VerifyAdvertisingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidid) {
      res["Bidid"] = boost::any(*bidid);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (seatbid) {
      vector<boost::any> temp1;
      for(auto item1:*seatbid){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Seatbid"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bidid") != m.end() && !m["Bidid"].empty()) {
      bidid = make_shared<string>(boost::any_cast<string>(m["Bidid"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Seatbid") != m.end() && !m["Seatbid"].empty()) {
      if (typeid(vector<boost::any>) == m["Seatbid"].type()) {
        vector<VerifyAdvertisingResponseBodyResultSeatbid> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Seatbid"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyAdvertisingResponseBodyResultSeatbid model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seatbid = make_shared<vector<VerifyAdvertisingResponseBodyResultSeatbid>>(expect1);
      }
    }
  }


  virtual ~VerifyAdvertisingResponseBodyResult() = default;
};
class VerifyAdvertisingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorcode{};
  shared_ptr<string> errormsg{};
  shared_ptr<map<string, string>> ext{};
  shared_ptr<VerifyAdvertisingResponseBodyHeader> header{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyAdvertisingResponseBodyResult> result{};
  shared_ptr<bool> success{};

  VerifyAdvertisingResponseBody() {}

  explicit VerifyAdvertisingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorcode) {
      res["Errorcode"] = boost::any(*errorcode);
    }
    if (errormsg) {
      res["Errormsg"] = boost::any(*errormsg);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (header) {
      res["Header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Errorcode") != m.end() && !m["Errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["Errorcode"]));
    }
    if (m.find("Errormsg") != m.end() && !m["Errormsg"].empty()) {
      errormsg = make_shared<string>(boost::any_cast<string>(m["Errormsg"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Ext"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Header") != m.end() && !m["Header"].empty()) {
      if (typeid(map<string, boost::any>) == m["Header"].type()) {
        VerifyAdvertisingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Header"]));
        header = make_shared<VerifyAdvertisingResponseBodyHeader>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        VerifyAdvertisingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<VerifyAdvertisingResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyAdvertisingResponseBody() = default;
};
class VerifyAdvertisingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyAdvertisingResponseBody> body{};

  VerifyAdvertisingResponse() {}

  explicit VerifyAdvertisingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyAdvertisingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyAdvertisingResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyAdvertisingResponse() = default;
};
class VerifySmsCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> nowStamp{};
  shared_ptr<string> phoneNumbers{};
  shared_ptr<string> signKey{};

  VerifySmsCodeRequest() {}

  explicit VerifySmsCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (nowStamp) {
      res["NowStamp"] = boost::any(*nowStamp);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (signKey) {
      res["SignKey"] = boost::any(*signKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("NowStamp") != m.end() && !m["NowStamp"].empty()) {
      nowStamp = make_shared<long>(boost::any_cast<long>(m["NowStamp"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbers = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("SignKey") != m.end() && !m["SignKey"].empty()) {
      signKey = make_shared<string>(boost::any_cast<string>(m["SignKey"]));
    }
  }


  virtual ~VerifySmsCodeRequest() = default;
};
class VerifySmsCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifySmsCodeResponseBody() {}

  explicit VerifySmsCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifySmsCodeResponseBody() = default;
};
class VerifySmsCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifySmsCodeResponseBody> body{};

  VerifySmsCodeResponse() {}

  explicit VerifySmsCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifySmsCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifySmsCodeResponseBody>(model1);
      }
    }
  }


  virtual ~VerifySmsCodeResponse() = default;
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
  CancelOrderResponse cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderResponse cancelOrder(shared_ptr<CancelOrderRequest> request);
  ConfirmSampleReceivedResponse confirmSampleReceivedWithOptions(shared_ptr<ConfirmSampleReceivedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmSampleReceivedResponse confirmSampleReceived(shared_ptr<ConfirmSampleReceivedRequest> request);
  ConfirmSampleShippedResponse confirmSampleShippedWithOptions(shared_ptr<ConfirmSampleShippedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmSampleShippedResponse confirmSampleShipped(shared_ptr<ConfirmSampleShippedRequest> request);
  CreateDeviceResponse createDeviceWithOptions(shared_ptr<CreateDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeviceResponse createDevice(shared_ptr<CreateDeviceRequest> request);
  DeleteCreativeInfoResponse deleteCreativeInfoWithOptions(shared_ptr<DeleteCreativeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCreativeInfoResponse deleteCreativeInfo(shared_ptr<DeleteCreativeInfoRequest> request);
  GetAdvertisingForE2Response getAdvertisingForE2WithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdvertisingForE2Response getAdvertisingForE2();
  GetBrandPageResponse getBrandPageWithOptions(shared_ptr<GetBrandPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBrandPageResponse getBrandPage(shared_ptr<GetBrandPageRequest> request);
  GetBusinessIdResponse getBusinessIdWithOptions(shared_ptr<GetBusinessIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBusinessIdResponse getBusinessId(shared_ptr<GetBusinessIdRequest> request);
  GetCreativeInfoResponse getCreativeInfoWithOptions(shared_ptr<GetCreativeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCreativeInfoResponse getCreativeInfo(shared_ptr<GetCreativeInfoRequest> request);
  GetLeadsListPageResponse getLeadsListPageWithOptions(shared_ptr<GetLeadsListPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLeadsListPageResponse getLeadsListPage(shared_ptr<GetLeadsListPageRequest> request);
  GetMainPartPageResponse getMainPartPageWithOptions(shared_ptr<GetMainPartPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMainPartPageResponse getMainPartPage(shared_ptr<GetMainPartPageRequest> request);
  GetOssUploadSignatureResponse getOssUploadSignatureWithOptions(shared_ptr<GetOssUploadSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssUploadSignatureResponse getOssUploadSignature(shared_ptr<GetOssUploadSignatureRequest> request);
  GetRelatedByCreativeIdResponse getRelatedByCreativeIdWithOptions(shared_ptr<GetRelatedByCreativeIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRelatedByCreativeIdResponse getRelatedByCreativeId(shared_ptr<GetRelatedByCreativeIdRequest> request);
  GetUserFinishedAdResponse getUserFinishedAdWithOptions(shared_ptr<GetUserFinishedAdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserFinishedAdResponse getUserFinishedAd(shared_ptr<GetUserFinishedAdRequest> request);
  ListAdvertisingResponse listAdvertisingWithOptions(shared_ptr<ListAdvertisingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAdvertisingResponse listAdvertising(shared_ptr<ListAdvertisingRequest> request);
  ListSpecificAdResponse listSpecificAdWithOptions(shared_ptr<ListSpecificAdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSpecificAdResponse listSpecificAd(shared_ptr<ListSpecificAdRequest> request);
  QueryAuditResultResponse queryAuditResultWithOptions(shared_ptr<QueryAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAuditResultResponse queryAuditResult(shared_ptr<QueryAuditResultRequest> request);
  QueryBenefitGrantResultResponse queryBenefitGrantResultWithOptions(shared_ptr<QueryBenefitGrantResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBenefitGrantResultResponse queryBenefitGrantResult(shared_ptr<QueryBenefitGrantResultRequest> request);
  QueryFinanceUserInfoResponse queryFinanceUserInfoWithOptions(shared_ptr<QueryFinanceUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFinanceUserInfoResponse queryFinanceUserInfo(shared_ptr<QueryFinanceUserInfoRequest> request);
  QueryOrderResponse queryOrderWithOptions(shared_ptr<QueryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrderResponse queryOrder(shared_ptr<QueryOrderRequest> request);
  ReportImpressionResponse reportImpressionWithOptions(shared_ptr<ReportImpressionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportImpressionResponse reportImpression(shared_ptr<ReportImpressionRequest> request);
  ReportTranslateResponse reportTranslateWithOptions(shared_ptr<ReportTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportTranslateResponse reportTranslate(shared_ptr<ReportTranslateRequest> request);
  SendSmsResponse sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSmsResponse sendSms(shared_ptr<SendSmsRequest> request);
  SyncInfoResponse syncInfoWithOptions(shared_ptr<SyncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncInfoResponse syncInfo(shared_ptr<SyncInfoRequest> request);
  UpdateAdxCreativeContentResponse updateAdxCreativeContentWithOptions(shared_ptr<UpdateAdxCreativeContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAdxCreativeContentResponse updateAdxCreativeContent(shared_ptr<UpdateAdxCreativeContentRequest> request);
  VerifyAdvertisingResponse verifyAdvertisingWithOptions(shared_ptr<VerifyAdvertisingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyAdvertisingResponse verifyAdvertising(shared_ptr<VerifyAdvertisingRequest> request);
  VerifySmsCodeResponse verifySmsCodeWithOptions(shared_ptr<VerifySmsCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifySmsCodeResponse verifySmsCode(shared_ptr<VerifySmsCodeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imarketing20220704

#endif
