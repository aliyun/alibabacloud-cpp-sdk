// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BSSOPENAPI20171214_H_
#define ALIBABACLOUD_BSSOPENAPI20171214_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BssOpenApi20171214 {
class AllocateCostUnitResourceRequestResourceInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> apportionCode{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceUserId{};

  AllocateCostUnitResourceRequestResourceInstanceList() {}

  explicit AllocateCostUnitResourceRequestResourceInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apportionCode) {
      res["ApportionCode"] = boost::any(*apportionCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceUserId) {
      res["ResourceUserId"] = boost::any(*resourceUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApportionCode") != m.end() && !m["ApportionCode"].empty()) {
      apportionCode = make_shared<string>(boost::any_cast<string>(m["ApportionCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceUserId") != m.end() && !m["ResourceUserId"].empty()) {
      resourceUserId = make_shared<long>(boost::any_cast<long>(m["ResourceUserId"]));
    }
  }


  virtual ~AllocateCostUnitResourceRequestResourceInstanceList() = default;
};
class AllocateCostUnitResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromUnitUserId{};
  shared_ptr<long> fromUnitId{};
  shared_ptr<long> toUnitUserId{};
  shared_ptr<long> toUnitId{};
  shared_ptr<vector<AllocateCostUnitResourceRequestResourceInstanceList>> resourceInstanceList{};

  AllocateCostUnitResourceRequest() {}

  explicit AllocateCostUnitResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromUnitUserId) {
      res["FromUnitUserId"] = boost::any(*fromUnitUserId);
    }
    if (fromUnitId) {
      res["FromUnitId"] = boost::any(*fromUnitId);
    }
    if (toUnitUserId) {
      res["ToUnitUserId"] = boost::any(*toUnitUserId);
    }
    if (toUnitId) {
      res["ToUnitId"] = boost::any(*toUnitId);
    }
    if (resourceInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceInstanceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromUnitUserId") != m.end() && !m["FromUnitUserId"].empty()) {
      fromUnitUserId = make_shared<long>(boost::any_cast<long>(m["FromUnitUserId"]));
    }
    if (m.find("FromUnitId") != m.end() && !m["FromUnitId"].empty()) {
      fromUnitId = make_shared<long>(boost::any_cast<long>(m["FromUnitId"]));
    }
    if (m.find("ToUnitUserId") != m.end() && !m["ToUnitUserId"].empty()) {
      toUnitUserId = make_shared<long>(boost::any_cast<long>(m["ToUnitUserId"]));
    }
    if (m.find("ToUnitId") != m.end() && !m["ToUnitId"].empty()) {
      toUnitId = make_shared<long>(boost::any_cast<long>(m["ToUnitId"]));
    }
    if (m.find("ResourceInstanceList") != m.end() && !m["ResourceInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceInstanceList"].type()) {
        vector<AllocateCostUnitResourceRequestResourceInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AllocateCostUnitResourceRequestResourceInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceInstanceList = make_shared<vector<AllocateCostUnitResourceRequestResourceInstanceList>>(expect1);
      }
    }
  }


  virtual ~AllocateCostUnitResourceRequest() = default;
};
class AllocateCostUnitResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> toUnitUserId{};
  shared_ptr<long> toUnitId{};

  AllocateCostUnitResourceResponseBodyData() {}

  explicit AllocateCostUnitResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (toUnitUserId) {
      res["ToUnitUserId"] = boost::any(*toUnitUserId);
    }
    if (toUnitId) {
      res["ToUnitId"] = boost::any(*toUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ToUnitUserId") != m.end() && !m["ToUnitUserId"].empty()) {
      toUnitUserId = make_shared<long>(boost::any_cast<long>(m["ToUnitUserId"]));
    }
    if (m.find("ToUnitId") != m.end() && !m["ToUnitId"].empty()) {
      toUnitId = make_shared<long>(boost::any_cast<long>(m["ToUnitId"]));
    }
  }


  virtual ~AllocateCostUnitResourceResponseBodyData() = default;
};
class AllocateCostUnitResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<AllocateCostUnitResourceResponseBodyData> data{};

  AllocateCostUnitResourceResponseBody() {}

  explicit AllocateCostUnitResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AllocateCostUnitResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AllocateCostUnitResourceResponseBodyData>(model1);
      }
    }
  }


  virtual ~AllocateCostUnitResourceResponseBody() = default;
};
class AllocateCostUnitResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateCostUnitResourceResponseBody> body{};

  AllocateCostUnitResourceResponse() {}

  explicit AllocateCostUnitResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateCostUnitResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateCostUnitResourceResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateCostUnitResourceResponse() = default;
};
class ApplyInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> invoiceAmount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> customerId{};
  shared_ptr<long> addressId{};
  shared_ptr<long> invoicingType{};
  shared_ptr<long> processWay{};
  shared_ptr<string> applyUserNick{};
  shared_ptr<vector<long>> selectedIds{};
  shared_ptr<bool> invoiceByAmount{};

  ApplyInvoiceRequest() {}

  explicit ApplyInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (addressId) {
      res["AddressId"] = boost::any(*addressId);
    }
    if (invoicingType) {
      res["InvoicingType"] = boost::any(*invoicingType);
    }
    if (processWay) {
      res["ProcessWay"] = boost::any(*processWay);
    }
    if (applyUserNick) {
      res["ApplyUserNick"] = boost::any(*applyUserNick);
    }
    if (selectedIds) {
      res["SelectedIds"] = boost::any(*selectedIds);
    }
    if (invoiceByAmount) {
      res["InvoiceByAmount"] = boost::any(*invoiceByAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<long>(boost::any_cast<long>(m["InvoiceAmount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
    }
    if (m.find("AddressId") != m.end() && !m["AddressId"].empty()) {
      addressId = make_shared<long>(boost::any_cast<long>(m["AddressId"]));
    }
    if (m.find("InvoicingType") != m.end() && !m["InvoicingType"].empty()) {
      invoicingType = make_shared<long>(boost::any_cast<long>(m["InvoicingType"]));
    }
    if (m.find("ProcessWay") != m.end() && !m["ProcessWay"].empty()) {
      processWay = make_shared<long>(boost::any_cast<long>(m["ProcessWay"]));
    }
    if (m.find("ApplyUserNick") != m.end() && !m["ApplyUserNick"].empty()) {
      applyUserNick = make_shared<string>(boost::any_cast<string>(m["ApplyUserNick"]));
    }
    if (m.find("SelectedIds") != m.end() && !m["SelectedIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SelectedIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SelectedIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      selectedIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("InvoiceByAmount") != m.end() && !m["InvoiceByAmount"].empty()) {
      invoiceByAmount = make_shared<bool>(boost::any_cast<bool>(m["InvoiceByAmount"]));
    }
  }


  virtual ~ApplyInvoiceRequest() = default;
};
class ApplyInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> invoiceApplyId{};

  ApplyInvoiceResponseBodyData() {}

  explicit ApplyInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceApplyId) {
      res["InvoiceApplyId"] = boost::any(*invoiceApplyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceApplyId") != m.end() && !m["InvoiceApplyId"].empty()) {
      invoiceApplyId = make_shared<long>(boost::any_cast<long>(m["InvoiceApplyId"]));
    }
  }


  virtual ~ApplyInvoiceResponseBodyData() = default;
};
class ApplyInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ApplyInvoiceResponseBodyData> data{};

  ApplyInvoiceResponseBody() {}

  explicit ApplyInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ApplyInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ApplyInvoiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~ApplyInvoiceResponseBody() = default;
};
class ApplyInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApplyInvoiceResponseBody> body{};

  ApplyInvoiceResponse() {}

  explicit ApplyInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyInvoiceResponse() = default;
};
class CancelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<long> ownerId{};

  CancelOrderRequest() {}

  explicit CancelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~CancelOrderRequest() = default;
};
class CancelOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};

  CancelOrderResponseBodyData() {}

  explicit CancelOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~CancelOrderResponseBodyData() = default;
};
class CancelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CancelOrderResponseBodyData> data{};

  CancelOrderResponseBody() {}

  explicit CancelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CancelOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CancelOrderResponseBodyData>(model1);
      }
    }
  }


  virtual ~CancelOrderResponseBody() = default;
};
class CancelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelOrderResponseBody> body{};

  CancelOrderResponse() {}

  explicit CancelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderResponse() = default;
};
class ChangeResellerConsumeAmountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> adjustType{};
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> outBizId{};
  shared_ptr<string> extendMap{};

  ChangeResellerConsumeAmountRequest() {}

  explicit ChangeResellerConsumeAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (adjustType) {
      res["AdjustType"] = boost::any(*adjustType);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (outBizId) {
      res["OutBizId"] = boost::any(*outBizId);
    }
    if (extendMap) {
      res["ExtendMap"] = boost::any(*extendMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("AdjustType") != m.end() && !m["AdjustType"].empty()) {
      adjustType = make_shared<string>(boost::any_cast<string>(m["AdjustType"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("OutBizId") != m.end() && !m["OutBizId"].empty()) {
      outBizId = make_shared<string>(boost::any_cast<string>(m["OutBizId"]));
    }
    if (m.find("ExtendMap") != m.end() && !m["ExtendMap"].empty()) {
      extendMap = make_shared<string>(boost::any_cast<string>(m["ExtendMap"]));
    }
  }


  virtual ~ChangeResellerConsumeAmountRequest() = default;
};
class ChangeResellerConsumeAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> data{};

  ChangeResellerConsumeAmountResponseBody() {}

  explicit ChangeResellerConsumeAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ChangeResellerConsumeAmountResponseBody() = default;
};
class ChangeResellerConsumeAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeResellerConsumeAmountResponseBody> body{};

  ChangeResellerConsumeAmountResponse() {}

  explicit ChangeResellerConsumeAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResellerConsumeAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResellerConsumeAmountResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResellerConsumeAmountResponse() = default;
};
class ConvertChargeTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> instanceId{};

  ConvertChargeTypeRequest() {}

  explicit ConvertChargeTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ConvertChargeTypeRequest() = default;
};
class ConvertChargeTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  ConvertChargeTypeResponseBodyData() {}

  explicit ConvertChargeTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ConvertChargeTypeResponseBodyData() = default;
};
class ConvertChargeTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ConvertChargeTypeResponseBodyData> data{};

  ConvertChargeTypeResponseBody() {}

  explicit ConvertChargeTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ConvertChargeTypeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConvertChargeTypeResponseBodyData>(model1);
      }
    }
  }


  virtual ~ConvertChargeTypeResponseBody() = default;
};
class ConvertChargeTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConvertChargeTypeResponseBody> body{};

  ConvertChargeTypeResponse() {}

  explicit ConvertChargeTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertChargeTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertChargeTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertChargeTypeResponse() = default;
};
class CreateAgAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> loginEmail{};
  shared_ptr<string> accountAttr{};
  shared_ptr<string> enterpriseName{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> nationCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> cityName{};
  shared_ptr<string> postcode{};

  CreateAgAccountRequest() {}

  explicit CreateAgAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginEmail) {
      res["LoginEmail"] = boost::any(*loginEmail);
    }
    if (accountAttr) {
      res["AccountAttr"] = boost::any(*accountAttr);
    }
    if (enterpriseName) {
      res["EnterpriseName"] = boost::any(*enterpriseName);
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (nationCode) {
      res["NationCode"] = boost::any(*nationCode);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (postcode) {
      res["Postcode"] = boost::any(*postcode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginEmail") != m.end() && !m["LoginEmail"].empty()) {
      loginEmail = make_shared<string>(boost::any_cast<string>(m["LoginEmail"]));
    }
    if (m.find("AccountAttr") != m.end() && !m["AccountAttr"].empty()) {
      accountAttr = make_shared<string>(boost::any_cast<string>(m["AccountAttr"]));
    }
    if (m.find("EnterpriseName") != m.end() && !m["EnterpriseName"].empty()) {
      enterpriseName = make_shared<string>(boost::any_cast<string>(m["EnterpriseName"]));
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("NationCode") != m.end() && !m["NationCode"].empty()) {
      nationCode = make_shared<string>(boost::any_cast<string>(m["NationCode"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("Postcode") != m.end() && !m["Postcode"].empty()) {
      postcode = make_shared<string>(boost::any_cast<string>(m["Postcode"]));
    }
  }


  virtual ~CreateAgAccountRequest() = default;
};
class CreateAgAccountResponseBodyAgRelationDto : public Darabonba::Model {
public:
  shared_ptr<string> pk{};
  shared_ptr<string> type{};
  shared_ptr<string> mpk{};
  shared_ptr<string> ramAdminRoleName{};

  CreateAgAccountResponseBodyAgRelationDto() {}

  explicit CreateAgAccountResponseBodyAgRelationDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (mpk) {
      res["Mpk"] = boost::any(*mpk);
    }
    if (ramAdminRoleName) {
      res["RamAdminRoleName"] = boost::any(*ramAdminRoleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Mpk") != m.end() && !m["Mpk"].empty()) {
      mpk = make_shared<string>(boost::any_cast<string>(m["Mpk"]));
    }
    if (m.find("RamAdminRoleName") != m.end() && !m["RamAdminRoleName"].empty()) {
      ramAdminRoleName = make_shared<string>(boost::any_cast<string>(m["RamAdminRoleName"]));
    }
  }


  virtual ~CreateAgAccountResponseBodyAgRelationDto() = default;
};
class CreateAgAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<CreateAgAccountResponseBodyAgRelationDto> agRelationDto{};

  CreateAgAccountResponseBody() {}

  explicit CreateAgAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (agRelationDto) {
      res["AgRelationDto"] = agRelationDto ? boost::any(agRelationDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("AgRelationDto") != m.end() && !m["AgRelationDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["AgRelationDto"].type()) {
        CreateAgAccountResponseBodyAgRelationDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AgRelationDto"]));
        agRelationDto = make_shared<CreateAgAccountResponseBodyAgRelationDto>(model1);
      }
    }
  }


  virtual ~CreateAgAccountResponseBody() = default;
};
class CreateAgAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAgAccountResponseBody> body{};

  CreateAgAccountResponse() {}

  explicit CreateAgAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAgAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAgAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAgAccountResponse() = default;
};
class CreateCostUnitRequestUnitEntityList : public Darabonba::Model {
public:
  shared_ptr<long> ownerUid{};
  shared_ptr<long> parentUnitId{};
  shared_ptr<string> unitName{};

  CreateCostUnitRequestUnitEntityList() {}

  explicit CreateCostUnitRequestUnitEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (parentUnitId) {
      res["ParentUnitId"] = boost::any(*parentUnitId);
    }
    if (unitName) {
      res["UnitName"] = boost::any(*unitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("ParentUnitId") != m.end() && !m["ParentUnitId"].empty()) {
      parentUnitId = make_shared<long>(boost::any_cast<long>(m["ParentUnitId"]));
    }
    if (m.find("UnitName") != m.end() && !m["UnitName"].empty()) {
      unitName = make_shared<string>(boost::any_cast<string>(m["UnitName"]));
    }
  }


  virtual ~CreateCostUnitRequestUnitEntityList() = default;
};
class CreateCostUnitRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateCostUnitRequestUnitEntityList>> unitEntityList{};

  CreateCostUnitRequest() {}

  explicit CreateCostUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unitEntityList) {
      vector<boost::any> temp1;
      for(auto item1:*unitEntityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnitEntityList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnitEntityList") != m.end() && !m["UnitEntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["UnitEntityList"].type()) {
        vector<CreateCostUnitRequestUnitEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnitEntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCostUnitRequestUnitEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unitEntityList = make_shared<vector<CreateCostUnitRequestUnitEntityList>>(expect1);
      }
    }
  }


  virtual ~CreateCostUnitRequest() = default;
};
class CreateCostUnitResponseBodyDataCostUnitDtoList : public Darabonba::Model {
public:
  shared_ptr<long> unitId{};
  shared_ptr<long> parentUnitId{};
  shared_ptr<long> ownerUid{};
  shared_ptr<string> unitName{};

  CreateCostUnitResponseBodyDataCostUnitDtoList() {}

  explicit CreateCostUnitResponseBodyDataCostUnitDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (parentUnitId) {
      res["ParentUnitId"] = boost::any(*parentUnitId);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitName) {
      res["UnitName"] = boost::any(*unitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("ParentUnitId") != m.end() && !m["ParentUnitId"].empty()) {
      parentUnitId = make_shared<long>(boost::any_cast<long>(m["ParentUnitId"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitName") != m.end() && !m["UnitName"].empty()) {
      unitName = make_shared<string>(boost::any_cast<string>(m["UnitName"]));
    }
  }


  virtual ~CreateCostUnitResponseBodyDataCostUnitDtoList() = default;
};
class CreateCostUnitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CreateCostUnitResponseBodyDataCostUnitDtoList>> costUnitDtoList{};

  CreateCostUnitResponseBodyData() {}

  explicit CreateCostUnitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costUnitDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*costUnitDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostUnitDtoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostUnitDtoList") != m.end() && !m["CostUnitDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostUnitDtoList"].type()) {
        vector<CreateCostUnitResponseBodyDataCostUnitDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostUnitDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCostUnitResponseBodyDataCostUnitDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costUnitDtoList = make_shared<vector<CreateCostUnitResponseBodyDataCostUnitDtoList>>(expect1);
      }
    }
  }


  virtual ~CreateCostUnitResponseBodyData() = default;
};
class CreateCostUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<CreateCostUnitResponseBodyData> data{};

  CreateCostUnitResponseBody() {}

  explicit CreateCostUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateCostUnitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCostUnitResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateCostUnitResponseBody() = default;
};
class CreateCostUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCostUnitResponseBody> body{};

  CreateCostUnitResponse() {}

  explicit CreateCostUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCostUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCostUnitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCostUnitResponse() = default;
};
class CreateInstanceRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  CreateInstanceRequestParameter() {}

  explicit CreateInstanceRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateInstanceRequestParameter() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<CreateInstanceRequestParameter>> parameter{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> period{};
  shared_ptr<string> renewalStatus{};
  shared_ptr<long> renewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> logistics{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    if (renewPeriod) {
      res["RenewPeriod"] = boost::any(*renewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logistics) {
      res["Logistics"] = boost::any(*logistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<CreateInstanceRequestParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<CreateInstanceRequestParameter>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
    if (m.find("RenewPeriod") != m.end() && !m["RenewPeriod"].empty()) {
      renewPeriod = make_shared<long>(boost::any_cast<long>(m["RenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Logistics") != m.end() && !m["Logistics"].empty()) {
      logistics = make_shared<string>(boost::any_cast<string>(m["Logistics"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};

  CreateInstanceResponseBodyData() {}

  explicit CreateInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateInstanceResponseBodyData() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CreateInstanceResponseBodyData> data{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateInstanceResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateResellerUserQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};
  shared_ptr<string> outBizId{};

  CreateResellerUserQuotaRequest() {}

  explicit CreateResellerUserQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (outBizId) {
      res["OutBizId"] = boost::any(*outBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("OutBizId") != m.end() && !m["OutBizId"].empty()) {
      outBizId = make_shared<string>(boost::any_cast<string>(m["OutBizId"]));
    }
  }


  virtual ~CreateResellerUserQuotaRequest() = default;
};
class CreateResellerUserQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<bool> data{};

  CreateResellerUserQuotaResponseBody() {}

  explicit CreateResellerUserQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~CreateResellerUserQuotaResponseBody() = default;
};
class CreateResellerUserQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateResellerUserQuotaResponseBody> body{};

  CreateResellerUserQuotaResponse() {}

  explicit CreateResellerUserQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResellerUserQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResellerUserQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResellerUserQuotaResponse() = default;
};
class CreateResourcePackageRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> packageType{};
  shared_ptr<string> effectiveDate{};
  shared_ptr<string> specification{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};

  CreateResourcePackageRequest() {}

  explicit CreateResourcePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (effectiveDate) {
      res["EffectiveDate"] = boost::any(*effectiveDate);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("EffectiveDate") != m.end() && !m["EffectiveDate"].empty()) {
      effectiveDate = make_shared<string>(boost::any_cast<string>(m["EffectiveDate"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~CreateResourcePackageRequest() = default;
};
class CreateResourcePackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> instanceId{};

  CreateResourcePackageResponseBodyData() {}

  explicit CreateResourcePackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateResourcePackageResponseBodyData() = default;
};
class CreateResourcePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CreateResourcePackageResponseBodyData> data{};

  CreateResourcePackageResponseBody() {}

  explicit CreateResourcePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateResourcePackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateResourcePackageResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateResourcePackageResponseBody() = default;
};
class CreateResourcePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateResourcePackageResponseBody> body{};

  CreateResourcePackageResponse() {}

  explicit CreateResourcePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourcePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourcePackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourcePackageResponse() = default;
};
class DeleteCostUnitRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerUid{};
  shared_ptr<long> unitId{};

  DeleteCostUnitRequest() {}

  explicit DeleteCostUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
  }


  virtual ~DeleteCostUnitRequest() = default;
};
class DeleteCostUnitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> unitId{};
  shared_ptr<long> ownerUid{};

  DeleteCostUnitResponseBodyData() {}

  explicit DeleteCostUnitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
  }


  virtual ~DeleteCostUnitResponseBodyData() = default;
};
class DeleteCostUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteCostUnitResponseBodyData> data{};

  DeleteCostUnitResponseBody() {}

  explicit DeleteCostUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteCostUnitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteCostUnitResponseBodyData>(model1);
      }
    }
  }


  virtual ~DeleteCostUnitResponseBody() = default;
};
class DeleteCostUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCostUnitResponseBody> body{};

  DeleteCostUnitResponse() {}

  explicit DeleteCostUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCostUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCostUnitResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCostUnitResponse() = default;
};
class DescribePricingModuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};

  DescribePricingModuleRequest() {}

  explicit DescribePricingModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~DescribePricingModuleRequest() = default;
};
class DescribePricingModuleResponseBodyDataModuleListModuleConfigList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> configList{};

  DescribePricingModuleResponseBodyDataModuleListModuleConfigList() {}

  explicit DescribePricingModuleResponseBodyDataModuleListModuleConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configList) {
      res["ConfigList"] = boost::any(*configList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConfigList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      configList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataModuleListModuleConfigList() = default;
};
class DescribePricingModuleResponseBodyDataModuleListModule : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> priceType{};
  shared_ptr<string> currency{};
  shared_ptr<DescribePricingModuleResponseBodyDataModuleListModuleConfigList> configList{};

  DescribePricingModuleResponseBodyDataModuleListModule() {}

  explicit DescribePricingModuleResponseBodyDataModuleListModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (configList) {
      res["ConfigList"] = configList ? boost::any(configList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigList"].type()) {
        DescribePricingModuleResponseBodyDataModuleListModuleConfigList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigList"]));
        configList = make_shared<DescribePricingModuleResponseBodyDataModuleListModuleConfigList>(model1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataModuleListModule() = default;
};
class DescribePricingModuleResponseBodyDataModuleList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePricingModuleResponseBodyDataModuleListModule>> module{};

  DescribePricingModuleResponseBodyDataModuleList() {}

  explicit DescribePricingModuleResponseBodyDataModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Module"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(vector<boost::any>) == m["Module"].type()) {
        vector<DescribePricingModuleResponseBodyDataModuleListModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePricingModuleResponseBodyDataModuleListModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<DescribePricingModuleResponseBodyDataModuleListModule>>(expect1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataModuleList() = default;
};
class DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};
  shared_ptr<string> remark{};

  DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue() {}

  explicit DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue() = default;
};
class DescribePricingModuleResponseBodyDataAttributeListAttributeValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue>> attributeValue{};

  DescribePricingModuleResponseBodyDataAttributeListAttributeValues() {}

  explicit DescribePricingModuleResponseBodyDataAttributeListAttributeValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeValue) {
      vector<boost::any> temp1;
      for(auto item1:*attributeValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttributeValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeValue") != m.end() && !m["AttributeValue"].empty()) {
      if (typeid(vector<boost::any>) == m["AttributeValue"].type()) {
        vector<DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttributeValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributeValue = make_shared<vector<DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue>>(expect1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataAttributeListAttributeValues() = default;
};
class DescribePricingModuleResponseBodyDataAttributeListAttribute : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> unit{};
  shared_ptr<DescribePricingModuleResponseBodyDataAttributeListAttributeValues> values{};

  DescribePricingModuleResponseBodyDataAttributeListAttribute() {}

  explicit DescribePricingModuleResponseBodyDataAttributeListAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        DescribePricingModuleResponseBodyDataAttributeListAttributeValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<DescribePricingModuleResponseBodyDataAttributeListAttributeValues>(model1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataAttributeListAttribute() = default;
};
class DescribePricingModuleResponseBodyDataAttributeList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePricingModuleResponseBodyDataAttributeListAttribute>> attribute{};

  DescribePricingModuleResponseBodyDataAttributeList() {}

  explicit DescribePricingModuleResponseBodyDataAttributeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      vector<boost::any> temp1;
      for(auto item1:*attribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attribute") != m.end() && !m["Attribute"].empty()) {
      if (typeid(vector<boost::any>) == m["Attribute"].type()) {
        vector<DescribePricingModuleResponseBodyDataAttributeListAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePricingModuleResponseBodyDataAttributeListAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attribute = make_shared<vector<DescribePricingModuleResponseBodyDataAttributeListAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyDataAttributeList() = default;
};
class DescribePricingModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribePricingModuleResponseBodyDataModuleList> moduleList{};
  shared_ptr<DescribePricingModuleResponseBodyDataAttributeList> attributeList{};

  DescribePricingModuleResponseBodyData() {}

  explicit DescribePricingModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleList) {
      res["ModuleList"] = moduleList ? boost::any(moduleList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attributeList) {
      res["AttributeList"] = attributeList ? boost::any(attributeList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleList"].type()) {
        DescribePricingModuleResponseBodyDataModuleList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleList"]));
        moduleList = make_shared<DescribePricingModuleResponseBodyDataModuleList>(model1);
      }
    }
    if (m.find("AttributeList") != m.end() && !m["AttributeList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AttributeList"].type()) {
        DescribePricingModuleResponseBodyDataAttributeList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AttributeList"]));
        attributeList = make_shared<DescribePricingModuleResponseBodyDataAttributeList>(model1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBodyData() = default;
};
class DescribePricingModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePricingModuleResponseBodyData> data{};

  DescribePricingModuleResponseBody() {}

  explicit DescribePricingModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePricingModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePricingModuleResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribePricingModuleResponseBody() = default;
};
class DescribePricingModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePricingModuleResponseBody> body{};

  DescribePricingModuleResponse() {}

  explicit DescribePricingModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePricingModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePricingModuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePricingModuleResponse() = default;
};
class DescribeResourcePackageProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};

  DescribeResourcePackageProductRequest() {}

  explicit DescribeResourcePackageProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribeResourcePackageProductRequest() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty>> property{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      vector<boost::any> temp1;
      for(auto item1:*property){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Property"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      if (typeid(vector<boost::any>) == m["Property"].type()) {
        vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Property"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        property = make_shared<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty>>(expect1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> value{};
  shared_ptr<string> unit{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration>> availableDuration{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableDuration) {
      vector<boost::any> temp1;
      for(auto item1:*availableDuration){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableDuration"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableDuration") != m.end() && !m["AvailableDuration"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableDuration"].type()) {
        vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableDuration"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableDuration = make_shared<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration>>(expect1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};
  shared_ptr<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations> availableDurations{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (availableDurations) {
      res["AvailableDurations"] = availableDurations ? boost::any(availableDurations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("AvailableDurations") != m.end() && !m["AvailableDurations"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableDurations"].type()) {
        DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableDurations"]));
        availableDurations = make_shared<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurations>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification>> specification{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specification) {
      vector<boost::any> temp1;
      for(auto item1:*specification){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specification"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      if (typeid(vector<boost::any>) == m["Specification"].type()) {
        vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specification"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specification = make_shared<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification>>(expect1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> code{};
  shared_ptr<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties> properties{};
  shared_ptr<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications> specifications{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specifications) {
      res["Specifications"] = specifications ? boost::any(specifications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties>(model1);
      }
    }
    if (m.find("Specifications") != m.end() && !m["Specifications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Specifications"].type()) {
        DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Specifications"]));
        specifications = make_shared<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType>> packageType{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageType) {
      vector<boost::any> temp1;
      for(auto item1:*packageType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PackageType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      if (typeid(vector<boost::any>) == m["PackageType"].type()) {
        vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PackageType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packageType = make_shared<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType>>(expect1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> name{};
  shared_ptr<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes> packageTypes{};

  DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageTypes) {
      res["PackageTypes"] = packageTypes ? boost::any(packageTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageTypes") != m.end() && !m["PackageTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageTypes"].type()) {
        DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageTypes"]));
        packageTypes = make_shared<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage() = default;
};
class DescribeResourcePackageProductResponseBodyDataResourcePackages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage>> resourcePackage{};

  DescribeResourcePackageProductResponseBodyDataResourcePackages() {}

  explicit DescribeResourcePackageProductResponseBodyDataResourcePackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourcePackage) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePackage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePackage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourcePackage") != m.end() && !m["ResourcePackage"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePackage"].type()) {
        vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePackage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePackage = make_shared<vector<DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage>>(expect1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackages() = default;
};
class DescribeResourcePackageProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeResourcePackageProductResponseBodyDataResourcePackages> resourcePackages{};

  DescribeResourcePackageProductResponseBodyData() {}

  explicit DescribeResourcePackageProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourcePackages) {
      res["ResourcePackages"] = resourcePackages ? boost::any(resourcePackages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourcePackages") != m.end() && !m["ResourcePackages"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcePackages"].type()) {
        DescribeResourcePackageProductResponseBodyDataResourcePackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcePackages"]));
        resourcePackages = make_shared<DescribeResourcePackageProductResponseBodyDataResourcePackages>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBodyData() = default;
};
class DescribeResourcePackageProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribeResourcePackageProductResponseBodyData> data{};

  DescribeResourcePackageProductResponseBody() {}

  explicit DescribeResourcePackageProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeResourcePackageProductResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeResourcePackageProductResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponseBody() = default;
};
class DescribeResourcePackageProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeResourcePackageProductResponseBody> body{};

  DescribeResourcePackageProductResponse() {}

  explicit DescribeResourcePackageProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourcePackageProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourcePackageProductResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourcePackageProductResponse() = default;
};
class DescribeSplitItemBillRequestTagFilter : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValues{};

  DescribeSplitItemBillRequestTagFilter() {}

  explicit DescribeSplitItemBillRequestTagFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSplitItemBillRequestTagFilter() = default;
};
class DescribeSplitItemBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> billOwnerId{};
  shared_ptr<vector<DescribeSplitItemBillRequestTagFilter>> tagFilter{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> splitItemID{};

  DescribeSplitItemBillRequest() {}

  explicit DescribeSplitItemBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    if (tagFilter) {
      vector<boost::any> temp1;
      for(auto item1:*tagFilter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagFilter"] = boost::any(temp1);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (splitItemID) {
      res["SplitItemID"] = boost::any(*splitItemID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      if (typeid(vector<boost::any>) == m["TagFilter"].type()) {
        vector<DescribeSplitItemBillRequestTagFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagFilter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSplitItemBillRequestTagFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagFilter = make_shared<vector<DescribeSplitItemBillRequestTagFilter>>(expect1);
      }
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("SplitItemID") != m.end() && !m["SplitItemID"].empty()) {
      splitItemID = make_shared<string>(boost::any_cast<string>(m["SplitItemID"]));
    }
  }


  virtual ~DescribeSplitItemBillRequest() = default;
};
class DescribeSplitItemBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> billingType{};
  shared_ptr<string> costUnit{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> billingItem{};
  shared_ptr<string> listPrice{};
  shared_ptr<string> listPriceUnit{};
  shared_ptr<string> usage{};
  shared_ptr<string> usageUnit{};
  shared_ptr<string> deductedByResourcePackage{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> nickName{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> tag{};
  shared_ptr<string> instanceConfig{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> internetIP{};
  shared_ptr<string> intranetIP{};
  shared_ptr<string> region{};
  shared_ptr<string> zone{};
  shared_ptr<string> item{};
  shared_ptr<string> servicePeriod{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> splitItemID{};
  shared_ptr<string> splitItemName{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> servicePeriodUnit{};
  shared_ptr<string> splitCommodityCode{};
  shared_ptr<string> splitProductDetail{};
  shared_ptr<string> splitAccountID{};
  shared_ptr<string> splitAccountName{};
  shared_ptr<string> splitBillingCycle{};

  DescribeSplitItemBillResponseBodyDataItems() {}

  explicit DescribeSplitItemBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (costUnit) {
      res["CostUnit"] = boost::any(*costUnit);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (billingItem) {
      res["BillingItem"] = boost::any(*billingItem);
    }
    if (listPrice) {
      res["ListPrice"] = boost::any(*listPrice);
    }
    if (listPriceUnit) {
      res["ListPriceUnit"] = boost::any(*listPriceUnit);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    if (usageUnit) {
      res["UsageUnit"] = boost::any(*usageUnit);
    }
    if (deductedByResourcePackage) {
      res["DeductedByResourcePackage"] = boost::any(*deductedByResourcePackage);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (instanceConfig) {
      res["InstanceConfig"] = boost::any(*instanceConfig);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (internetIP) {
      res["InternetIP"] = boost::any(*internetIP);
    }
    if (intranetIP) {
      res["IntranetIP"] = boost::any(*intranetIP);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (servicePeriod) {
      res["ServicePeriod"] = boost::any(*servicePeriod);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (splitItemID) {
      res["SplitItemID"] = boost::any(*splitItemID);
    }
    if (splitItemName) {
      res["SplitItemName"] = boost::any(*splitItemName);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (servicePeriodUnit) {
      res["ServicePeriodUnit"] = boost::any(*servicePeriodUnit);
    }
    if (splitCommodityCode) {
      res["SplitCommodityCode"] = boost::any(*splitCommodityCode);
    }
    if (splitProductDetail) {
      res["SplitProductDetail"] = boost::any(*splitProductDetail);
    }
    if (splitAccountID) {
      res["SplitAccountID"] = boost::any(*splitAccountID);
    }
    if (splitAccountName) {
      res["SplitAccountName"] = boost::any(*splitAccountName);
    }
    if (splitBillingCycle) {
      res["SplitBillingCycle"] = boost::any(*splitBillingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CostUnit") != m.end() && !m["CostUnit"].empty()) {
      costUnit = make_shared<string>(boost::any_cast<string>(m["CostUnit"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("BillingItem") != m.end() && !m["BillingItem"].empty()) {
      billingItem = make_shared<string>(boost::any_cast<string>(m["BillingItem"]));
    }
    if (m.find("ListPrice") != m.end() && !m["ListPrice"].empty()) {
      listPrice = make_shared<string>(boost::any_cast<string>(m["ListPrice"]));
    }
    if (m.find("ListPriceUnit") != m.end() && !m["ListPriceUnit"].empty()) {
      listPriceUnit = make_shared<string>(boost::any_cast<string>(m["ListPriceUnit"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
    if (m.find("UsageUnit") != m.end() && !m["UsageUnit"].empty()) {
      usageUnit = make_shared<string>(boost::any_cast<string>(m["UsageUnit"]));
    }
    if (m.find("DeductedByResourcePackage") != m.end() && !m["DeductedByResourcePackage"].empty()) {
      deductedByResourcePackage = make_shared<string>(boost::any_cast<string>(m["DeductedByResourcePackage"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("InstanceConfig") != m.end() && !m["InstanceConfig"].empty()) {
      instanceConfig = make_shared<string>(boost::any_cast<string>(m["InstanceConfig"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("InternetIP") != m.end() && !m["InternetIP"].empty()) {
      internetIP = make_shared<string>(boost::any_cast<string>(m["InternetIP"]));
    }
    if (m.find("IntranetIP") != m.end() && !m["IntranetIP"].empty()) {
      intranetIP = make_shared<string>(boost::any_cast<string>(m["IntranetIP"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("ServicePeriod") != m.end() && !m["ServicePeriod"].empty()) {
      servicePeriod = make_shared<string>(boost::any_cast<string>(m["ServicePeriod"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("SplitItemID") != m.end() && !m["SplitItemID"].empty()) {
      splitItemID = make_shared<string>(boost::any_cast<string>(m["SplitItemID"]));
    }
    if (m.find("SplitItemName") != m.end() && !m["SplitItemName"].empty()) {
      splitItemName = make_shared<string>(boost::any_cast<string>(m["SplitItemName"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ServicePeriodUnit") != m.end() && !m["ServicePeriodUnit"].empty()) {
      servicePeriodUnit = make_shared<string>(boost::any_cast<string>(m["ServicePeriodUnit"]));
    }
    if (m.find("SplitCommodityCode") != m.end() && !m["SplitCommodityCode"].empty()) {
      splitCommodityCode = make_shared<string>(boost::any_cast<string>(m["SplitCommodityCode"]));
    }
    if (m.find("SplitProductDetail") != m.end() && !m["SplitProductDetail"].empty()) {
      splitProductDetail = make_shared<string>(boost::any_cast<string>(m["SplitProductDetail"]));
    }
    if (m.find("SplitAccountID") != m.end() && !m["SplitAccountID"].empty()) {
      splitAccountID = make_shared<string>(boost::any_cast<string>(m["SplitAccountID"]));
    }
    if (m.find("SplitAccountName") != m.end() && !m["SplitAccountName"].empty()) {
      splitAccountName = make_shared<string>(boost::any_cast<string>(m["SplitAccountName"]));
    }
    if (m.find("SplitBillingCycle") != m.end() && !m["SplitBillingCycle"].empty()) {
      splitBillingCycle = make_shared<string>(boost::any_cast<string>(m["SplitBillingCycle"]));
    }
  }


  virtual ~DescribeSplitItemBillResponseBodyDataItems() = default;
};
class DescribeSplitItemBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<DescribeSplitItemBillResponseBodyDataItems>> items{};

  DescribeSplitItemBillResponseBodyData() {}

  explicit DescribeSplitItemBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSplitItemBillResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSplitItemBillResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSplitItemBillResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSplitItemBillResponseBodyData() = default;
};
class DescribeSplitItemBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribeSplitItemBillResponseBodyData> data{};

  DescribeSplitItemBillResponseBody() {}

  explicit DescribeSplitItemBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSplitItemBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSplitItemBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeSplitItemBillResponseBody() = default;
};
class DescribeSplitItemBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSplitItemBillResponseBody> body{};

  DescribeSplitItemBillResponse() {}

  explicit DescribeSplitItemBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSplitItemBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSplitItemBillResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSplitItemBillResponse() = default;
};
class EnableBillGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<long> ownerId{};

  EnableBillGenerationRequest() {}

  explicit EnableBillGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~EnableBillGenerationRequest() = default;
};
class EnableBillGenerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> boolean{};

  EnableBillGenerationResponseBodyData() {}

  explicit EnableBillGenerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boolean) {
      res["Boolean"] = boost::any(*boolean);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boolean") != m.end() && !m["Boolean"].empty()) {
      boolean = make_shared<bool>(boost::any_cast<bool>(m["Boolean"]));
    }
  }


  virtual ~EnableBillGenerationResponseBodyData() = default;
};
class EnableBillGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<EnableBillGenerationResponseBodyData> data{};

  EnableBillGenerationResponseBody() {}

  explicit EnableBillGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnableBillGenerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnableBillGenerationResponseBodyData>(model1);
      }
    }
  }


  virtual ~EnableBillGenerationResponseBody() = default;
};
class EnableBillGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableBillGenerationResponseBody> body{};

  EnableBillGenerationResponse() {}

  explicit EnableBillGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableBillGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableBillGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableBillGenerationResponse() = default;
};
class GetCustomerAccountInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  GetCustomerAccountInfoRequest() {}

  explicit GetCustomerAccountInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~GetCustomerAccountInfoRequest() = default;
};
class GetCustomerAccountInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> loginEmail{};
  shared_ptr<string> accountType{};
  shared_ptr<long> mpk{};
  shared_ptr<string> hostingStatus{};
  shared_ptr<string> creditLimitStatus{};
  shared_ptr<bool> isCertified{};

  GetCustomerAccountInfoResponseBodyData() {}

  explicit GetCustomerAccountInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginEmail) {
      res["LoginEmail"] = boost::any(*loginEmail);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (mpk) {
      res["Mpk"] = boost::any(*mpk);
    }
    if (hostingStatus) {
      res["HostingStatus"] = boost::any(*hostingStatus);
    }
    if (creditLimitStatus) {
      res["CreditLimitStatus"] = boost::any(*creditLimitStatus);
    }
    if (isCertified) {
      res["IsCertified"] = boost::any(*isCertified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginEmail") != m.end() && !m["LoginEmail"].empty()) {
      loginEmail = make_shared<string>(boost::any_cast<string>(m["LoginEmail"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Mpk") != m.end() && !m["Mpk"].empty()) {
      mpk = make_shared<long>(boost::any_cast<long>(m["Mpk"]));
    }
    if (m.find("HostingStatus") != m.end() && !m["HostingStatus"].empty()) {
      hostingStatus = make_shared<string>(boost::any_cast<string>(m["HostingStatus"]));
    }
    if (m.find("CreditLimitStatus") != m.end() && !m["CreditLimitStatus"].empty()) {
      creditLimitStatus = make_shared<string>(boost::any_cast<string>(m["CreditLimitStatus"]));
    }
    if (m.find("IsCertified") != m.end() && !m["IsCertified"].empty()) {
      isCertified = make_shared<bool>(boost::any_cast<bool>(m["IsCertified"]));
    }
  }


  virtual ~GetCustomerAccountInfoResponseBodyData() = default;
};
class GetCustomerAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetCustomerAccountInfoResponseBodyData> data{};

  GetCustomerAccountInfoResponseBody() {}

  explicit GetCustomerAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCustomerAccountInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomerAccountInfoResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetCustomerAccountInfoResponseBody() = default;
};
class GetCustomerAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCustomerAccountInfoResponseBody> body{};

  GetCustomerAccountInfoResponse() {}

  explicit GetCustomerAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerAccountInfoResponse() = default;
};
class GetCustomerListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> uidList{};

  GetCustomerListResponseBodyData() {}

  explicit GetCustomerListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uidList) {
      res["UidList"] = boost::any(*uidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UidList") != m.end() && !m["UidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uidList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetCustomerListResponseBodyData() = default;
};
class GetCustomerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetCustomerListResponseBodyData> data{};

  GetCustomerListResponseBody() {}

  explicit GetCustomerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCustomerListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomerListResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetCustomerListResponseBody() = default;
};
class GetCustomerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCustomerListResponseBody> body{};

  GetCustomerListResponse() {}

  explicit GetCustomerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerListResponse() = default;
};
class GetOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<long> ownerId{};

  GetOrderDetailRequest() {}

  explicit GetOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~GetOrderDetailRequest() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrder : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> afterTaxAmount{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> config{};
  shared_ptr<string> tax{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> usageEndTime{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> orderType{};
  shared_ptr<string> currency{};
  shared_ptr<string> usageStartTime{};
  shared_ptr<string> originalConfig{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> productCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> productType{};
  shared_ptr<string> relatedOrderId{};
  shared_ptr<string> quantity{};
  shared_ptr<string> orderId{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> orderSubType{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceIDs{};
  shared_ptr<string> pretaxAmountLocal{};
  shared_ptr<string> commodityCode{};

  GetOrderDetailResponseBodyDataOrderListOrder() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (subOrderId) {
      res["SubOrderId"] = boost::any(*subOrderId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (usageEndTime) {
      res["UsageEndTime"] = boost::any(*usageEndTime);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (usageStartTime) {
      res["UsageStartTime"] = boost::any(*usageStartTime);
    }
    if (originalConfig) {
      res["OriginalConfig"] = boost::any(*originalConfig);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (relatedOrderId) {
      res["RelatedOrderId"] = boost::any(*relatedOrderId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (orderSubType) {
      res["OrderSubType"] = boost::any(*orderSubType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceIDs) {
      res["InstanceIDs"] = boost::any(*instanceIDs);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<string>(boost::any_cast<string>(m["AfterTaxAmount"]));
    }
    if (m.find("SubOrderId") != m.end() && !m["SubOrderId"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["SubOrderId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<string>(boost::any_cast<string>(m["Tax"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("UsageEndTime") != m.end() && !m["UsageEndTime"].empty()) {
      usageEndTime = make_shared<string>(boost::any_cast<string>(m["UsageEndTime"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("UsageStartTime") != m.end() && !m["UsageStartTime"].empty()) {
      usageStartTime = make_shared<string>(boost::any_cast<string>(m["UsageStartTime"]));
    }
    if (m.find("OriginalConfig") != m.end() && !m["OriginalConfig"].empty()) {
      originalConfig = make_shared<string>(boost::any_cast<string>(m["OriginalConfig"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RelatedOrderId") != m.end() && !m["RelatedOrderId"].empty()) {
      relatedOrderId = make_shared<string>(boost::any_cast<string>(m["RelatedOrderId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("OrderSubType") != m.end() && !m["OrderSubType"].empty()) {
      orderSubType = make_shared<string>(boost::any_cast<string>(m["OrderSubType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceIDs") != m.end() && !m["InstanceIDs"].empty()) {
      instanceIDs = make_shared<string>(boost::any_cast<string>(m["InstanceIDs"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["PretaxAmountLocal"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrder() = default;
};
class GetOrderDetailResponseBodyDataOrderList : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrder>> order{};

  GetOrderDetailResponseBodyDataOrderList() {}

  explicit GetOrderDetailResponseBodyDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      vector<boost::any> temp1;
      for(auto item1:*order){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Order"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(vector<boost::any>) == m["Order"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Order"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        order = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrder>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderList() = default;
};
class GetOrderDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> hostName{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderList> orderList{};

  GetOrderDetailResponseBodyData() {}

  explicit GetOrderDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (orderList) {
      res["OrderList"] = orderList ? boost::any(orderList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderList"].type()) {
        GetOrderDetailResponseBodyDataOrderList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderList"]));
        orderList = make_shared<GetOrderDetailResponseBodyDataOrderList>(model1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyData() = default;
};
class GetOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<GetOrderDetailResponseBodyData> data{};

  GetOrderDetailResponseBody() {}

  explicit GetOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOrderDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOrderDetailResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBody() = default;
};
class GetOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOrderDetailResponseBody> body{};

  GetOrderDetailResponse() {}

  explicit GetOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderDetailResponse() = default;
};
class GetPayAsYouGoPriceRequestModuleList : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<string> config{};
  shared_ptr<string> priceType{};

  GetPayAsYouGoPriceRequestModuleList() {}

  explicit GetPayAsYouGoPriceRequestModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
  }


  virtual ~GetPayAsYouGoPriceRequestModuleList() = default;
};
class GetPayAsYouGoPriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> region{};
  shared_ptr<vector<GetPayAsYouGoPriceRequestModuleList>> moduleList{};

  GetPayAsYouGoPriceRequest() {}

  explicit GetPayAsYouGoPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (moduleList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleList"].type()) {
        vector<GetPayAsYouGoPriceRequestModuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPayAsYouGoPriceRequestModuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleList = make_shared<vector<GetPayAsYouGoPriceRequestModuleList>>(expect1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceRequest() = default;
};
class GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<double> originalCost{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> costAfterDiscount{};
  shared_ptr<double> unitPrice{};

  GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail() {}

  explicit GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (originalCost) {
      res["OriginalCost"] = boost::any(*originalCost);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (costAfterDiscount) {
      res["CostAfterDiscount"] = boost::any(*costAfterDiscount);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("OriginalCost") != m.end() && !m["OriginalCost"].empty()) {
      originalCost = make_shared<double>(boost::any_cast<double>(m["OriginalCost"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("CostAfterDiscount") != m.end() && !m["CostAfterDiscount"].empty()) {
      costAfterDiscount = make_shared<double>(boost::any_cast<double>(m["CostAfterDiscount"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["UnitPrice"]));
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail() = default;
};
class GetPayAsYouGoPriceResponseBodyDataModuleDetails : public Darabonba::Model {
public:
  shared_ptr<vector<GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail>> moduleDetail{};

  GetPayAsYouGoPriceResponseBodyDataModuleDetails() {}

  explicit GetPayAsYouGoPriceResponseBodyDataModuleDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleDetail) {
      vector<boost::any> temp1;
      for(auto item1:*moduleDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleDetail") != m.end() && !m["ModuleDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleDetail"].type()) {
        vector<GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleDetail = make_shared<vector<GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail>>(expect1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBodyDataModuleDetails() = default;
};
class GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail : public Darabonba::Model {
public:
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<long> promotionId{};

  GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail() {}

  explicit GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<long>(boost::any_cast<long>(m["PromotionId"]));
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail() = default;
};
class GetPayAsYouGoPriceResponseBodyDataPromotionDetails : public Darabonba::Model {
public:
  shared_ptr<vector<GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail>> promotionDetail{};

  GetPayAsYouGoPriceResponseBodyDataPromotionDetails() {}

  explicit GetPayAsYouGoPriceResponseBodyDataPromotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDetail) {
      vector<boost::any> temp1;
      for(auto item1:*promotionDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromotionDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDetail") != m.end() && !m["PromotionDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PromotionDetail"].type()) {
        vector<GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromotionDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionDetail = make_shared<vector<GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail>>(expect1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBodyDataPromotionDetails() = default;
};
class GetPayAsYouGoPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<GetPayAsYouGoPriceResponseBodyDataModuleDetails> moduleDetails{};
  shared_ptr<GetPayAsYouGoPriceResponseBodyDataPromotionDetails> promotionDetails{};

  GetPayAsYouGoPriceResponseBodyData() {}

  explicit GetPayAsYouGoPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (moduleDetails) {
      res["ModuleDetails"] = moduleDetails ? boost::any(moduleDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promotionDetails) {
      res["PromotionDetails"] = promotionDetails ? boost::any(promotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("ModuleDetails") != m.end() && !m["ModuleDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleDetails"].type()) {
        GetPayAsYouGoPriceResponseBodyDataModuleDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleDetails"]));
        moduleDetails = make_shared<GetPayAsYouGoPriceResponseBodyDataModuleDetails>(model1);
      }
    }
    if (m.find("PromotionDetails") != m.end() && !m["PromotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromotionDetails"].type()) {
        GetPayAsYouGoPriceResponseBodyDataPromotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromotionDetails"]));
        promotionDetails = make_shared<GetPayAsYouGoPriceResponseBodyDataPromotionDetails>(model1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBodyData() = default;
};
class GetPayAsYouGoPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetPayAsYouGoPriceResponseBodyData> data{};

  GetPayAsYouGoPriceResponseBody() {}

  explicit GetPayAsYouGoPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPayAsYouGoPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPayAsYouGoPriceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceResponseBody() = default;
};
class GetPayAsYouGoPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPayAsYouGoPriceResponseBody> body{};

  GetPayAsYouGoPriceResponse() {}

  explicit GetPayAsYouGoPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPayAsYouGoPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPayAsYouGoPriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetPayAsYouGoPriceResponse() = default;
};
class GetResourcePackagePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> packageType{};
  shared_ptr<string> effectiveDate{};
  shared_ptr<string> specification{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> orderType{};
  shared_ptr<string> instanceId{};

  GetResourcePackagePriceRequest() {}

  explicit GetResourcePackagePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (effectiveDate) {
      res["EffectiveDate"] = boost::any(*effectiveDate);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("EffectiveDate") != m.end() && !m["EffectiveDate"].empty()) {
      effectiveDate = make_shared<string>(boost::any_cast<string>(m["EffectiveDate"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetResourcePackagePriceRequest() = default;
};
class GetResourcePackagePriceResponseBodyDataPromotionsPromotion : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetResourcePackagePriceResponseBodyDataPromotionsPromotion() {}

  explicit GetResourcePackagePriceResponseBodyDataPromotionsPromotion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetResourcePackagePriceResponseBodyDataPromotionsPromotion() = default;
};
class GetResourcePackagePriceResponseBodyDataPromotions : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourcePackagePriceResponseBodyDataPromotionsPromotion>> promotion{};

  GetResourcePackagePriceResponseBodyDataPromotions() {}

  explicit GetResourcePackagePriceResponseBodyDataPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotion) {
      vector<boost::any> temp1;
      for(auto item1:*promotion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Promotion") != m.end() && !m["Promotion"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotion"].type()) {
        vector<GetResourcePackagePriceResponseBodyDataPromotionsPromotion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePackagePriceResponseBodyDataPromotionsPromotion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotion = make_shared<vector<GetResourcePackagePriceResponseBodyDataPromotionsPromotion>>(expect1);
      }
    }
  }


  virtual ~GetResourcePackagePriceResponseBodyDataPromotions() = default;
};
class GetResourcePackagePriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};
  shared_ptr<double> discountPrice{};
  shared_ptr<GetResourcePackagePriceResponseBodyDataPromotions> promotions{};

  GetResourcePackagePriceResponseBodyData() {}

  explicit GetResourcePackagePriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (promotions) {
      res["Promotions"] = promotions ? boost::any(promotions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Promotions"].type()) {
        GetResourcePackagePriceResponseBodyDataPromotions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Promotions"]));
        promotions = make_shared<GetResourcePackagePriceResponseBodyDataPromotions>(model1);
      }
    }
  }


  virtual ~GetResourcePackagePriceResponseBodyData() = default;
};
class GetResourcePackagePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetResourcePackagePriceResponseBodyData> data{};

  GetResourcePackagePriceResponseBody() {}

  explicit GetResourcePackagePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetResourcePackagePriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResourcePackagePriceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetResourcePackagePriceResponseBody() = default;
};
class GetResourcePackagePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourcePackagePriceResponseBody> body{};

  GetResourcePackagePriceResponse() {}

  explicit GetResourcePackagePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcePackagePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcePackagePriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcePackagePriceResponse() = default;
};
class GetSubscriptionPriceRequestModuleList : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<string> config{};
  shared_ptr<long> moduleStatus{};
  shared_ptr<string> tag{};

  GetSubscriptionPriceRequestModuleList() {}

  explicit GetSubscriptionPriceRequestModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (moduleStatus) {
      res["ModuleStatus"] = boost::any(*moduleStatus);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ModuleStatus") != m.end() && !m["ModuleStatus"].empty()) {
      moduleStatus = make_shared<long>(boost::any_cast<long>(m["ModuleStatus"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetSubscriptionPriceRequestModuleList() = default;
};
class GetSubscriptionPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> servicePeriodUnit{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> orderType{};
  shared_ptr<long> servicePeriodQuantity{};
  shared_ptr<string> productType{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<GetSubscriptionPriceRequestModuleList>> moduleList{};
  shared_ptr<long> quantity{};

  GetSubscriptionPriceRequest() {}

  explicit GetSubscriptionPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicePeriodUnit) {
      res["ServicePeriodUnit"] = boost::any(*servicePeriodUnit);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (servicePeriodQuantity) {
      res["ServicePeriodQuantity"] = boost::any(*servicePeriodQuantity);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleList"] = boost::any(temp1);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicePeriodUnit") != m.end() && !m["ServicePeriodUnit"].empty()) {
      servicePeriodUnit = make_shared<string>(boost::any_cast<string>(m["ServicePeriodUnit"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("ServicePeriodQuantity") != m.end() && !m["ServicePeriodQuantity"].empty()) {
      servicePeriodQuantity = make_shared<long>(boost::any_cast<long>(m["ServicePeriodQuantity"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleList"].type()) {
        vector<GetSubscriptionPriceRequestModuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionPriceRequestModuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleList = make_shared<vector<GetSubscriptionPriceRequestModuleList>>(expect1);
      }
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~GetSubscriptionPriceRequest() = default;
};
class GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<double> originalCost{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> costAfterDiscount{};
  shared_ptr<double> unitPrice{};

  GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail() {}

  explicit GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (originalCost) {
      res["OriginalCost"] = boost::any(*originalCost);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (costAfterDiscount) {
      res["CostAfterDiscount"] = boost::any(*costAfterDiscount);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("OriginalCost") != m.end() && !m["OriginalCost"].empty()) {
      originalCost = make_shared<double>(boost::any_cast<double>(m["OriginalCost"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("CostAfterDiscount") != m.end() && !m["CostAfterDiscount"].empty()) {
      costAfterDiscount = make_shared<double>(boost::any_cast<double>(m["CostAfterDiscount"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["UnitPrice"]));
    }
  }


  virtual ~GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail() = default;
};
class GetSubscriptionPriceResponseBodyDataModuleDetails : public Darabonba::Model {
public:
  shared_ptr<vector<GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail>> moduleDetail{};

  GetSubscriptionPriceResponseBodyDataModuleDetails() {}

  explicit GetSubscriptionPriceResponseBodyDataModuleDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleDetail) {
      vector<boost::any> temp1;
      for(auto item1:*moduleDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleDetail") != m.end() && !m["ModuleDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleDetail"].type()) {
        vector<GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleDetail = make_shared<vector<GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionPriceResponseBodyDataModuleDetails() = default;
};
class GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail : public Darabonba::Model {
public:
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<long> promotionId{};

  GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail() {}

  explicit GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<long>(boost::any_cast<long>(m["PromotionId"]));
    }
  }


  virtual ~GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail() = default;
};
class GetSubscriptionPriceResponseBodyDataPromotionDetails : public Darabonba::Model {
public:
  shared_ptr<vector<GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail>> promotionDetail{};

  GetSubscriptionPriceResponseBodyDataPromotionDetails() {}

  explicit GetSubscriptionPriceResponseBodyDataPromotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDetail) {
      vector<boost::any> temp1;
      for(auto item1:*promotionDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromotionDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDetail") != m.end() && !m["PromotionDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PromotionDetail"].type()) {
        vector<GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromotionDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionDetail = make_shared<vector<GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionPriceResponseBodyDataPromotionDetails() = default;
};
class GetSubscriptionPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> originalPrice{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> tradePrice{};
  shared_ptr<string> currency{};
  shared_ptr<long> quantity{};
  shared_ptr<GetSubscriptionPriceResponseBodyDataModuleDetails> moduleDetails{};
  shared_ptr<GetSubscriptionPriceResponseBodyDataPromotionDetails> promotionDetails{};

  GetSubscriptionPriceResponseBodyData() {}

  explicit GetSubscriptionPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (moduleDetails) {
      res["ModuleDetails"] = moduleDetails ? boost::any(moduleDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promotionDetails) {
      res["PromotionDetails"] = promotionDetails ? boost::any(promotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ModuleDetails") != m.end() && !m["ModuleDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleDetails"].type()) {
        GetSubscriptionPriceResponseBodyDataModuleDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleDetails"]));
        moduleDetails = make_shared<GetSubscriptionPriceResponseBodyDataModuleDetails>(model1);
      }
    }
    if (m.find("PromotionDetails") != m.end() && !m["PromotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromotionDetails"].type()) {
        GetSubscriptionPriceResponseBodyDataPromotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromotionDetails"]));
        promotionDetails = make_shared<GetSubscriptionPriceResponseBodyDataPromotionDetails>(model1);
      }
    }
  }


  virtual ~GetSubscriptionPriceResponseBodyData() = default;
};
class GetSubscriptionPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetSubscriptionPriceResponseBodyData> data{};

  GetSubscriptionPriceResponseBody() {}

  explicit GetSubscriptionPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSubscriptionPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSubscriptionPriceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSubscriptionPriceResponseBody() = default;
};
class GetSubscriptionPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSubscriptionPriceResponseBody> body{};

  GetSubscriptionPriceResponse() {}

  explicit GetSubscriptionPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubscriptionPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionPriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionPriceResponse() = default;
};
class ModifyCostUnitRequestUnitEntityList : public Darabonba::Model {
public:
  shared_ptr<string> newUnitName{};
  shared_ptr<long> ownerUid{};
  shared_ptr<long> unitId{};

  ModifyCostUnitRequestUnitEntityList() {}

  explicit ModifyCostUnitRequestUnitEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newUnitName) {
      res["NewUnitName"] = boost::any(*newUnitName);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewUnitName") != m.end() && !m["NewUnitName"].empty()) {
      newUnitName = make_shared<string>(boost::any_cast<string>(m["NewUnitName"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
  }


  virtual ~ModifyCostUnitRequestUnitEntityList() = default;
};
class ModifyCostUnitRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyCostUnitRequestUnitEntityList>> unitEntityList{};

  ModifyCostUnitRequest() {}

  explicit ModifyCostUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unitEntityList) {
      vector<boost::any> temp1;
      for(auto item1:*unitEntityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnitEntityList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnitEntityList") != m.end() && !m["UnitEntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["UnitEntityList"].type()) {
        vector<ModifyCostUnitRequestUnitEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnitEntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyCostUnitRequestUnitEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unitEntityList = make_shared<vector<ModifyCostUnitRequestUnitEntityList>>(expect1);
      }
    }
  }


  virtual ~ModifyCostUnitRequest() = default;
};
class ModifyCostUnitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> unitId{};
  shared_ptr<long> ownerUid{};

  ModifyCostUnitResponseBodyData() {}

  explicit ModifyCostUnitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
  }


  virtual ~ModifyCostUnitResponseBodyData() = default;
};
class ModifyCostUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ModifyCostUnitResponseBodyData>> data{};

  ModifyCostUnitResponseBody() {}

  explicit ModifyCostUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ModifyCostUnitResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyCostUnitResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ModifyCostUnitResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ModifyCostUnitResponseBody() = default;
};
class ModifyCostUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCostUnitResponseBody> body{};

  ModifyCostUnitResponse() {}

  explicit ModifyCostUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCostUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCostUnitResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCostUnitResponse() = default;
};
class ModifyInstanceRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  ModifyInstanceRequestParameter() {}

  explicit ModifyInstanceRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyInstanceRequestParameter() = default;
};
class ModifyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ModifyInstanceRequestParameter>> parameter{};
  shared_ptr<string> clientToken{};

  ModifyInstanceRequest() {}

  explicit ModifyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<ModifyInstanceRequestParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyInstanceRequestParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<ModifyInstanceRequestParameter>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ModifyInstanceRequest() = default;
};
class ModifyInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> orderId{};

  ModifyInstanceResponseBodyData() {}

  explicit ModifyInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ModifyInstanceResponseBodyData() = default;
};
class ModifyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ModifyInstanceResponseBodyData> data{};

  ModifyInstanceResponseBody() {}

  explicit ModifyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyInstanceResponseBodyData>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponseBody() = default;
};
class ModifyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceResponseBody> body{};

  ModifyInstanceResponse() {}

  explicit ModifyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponse() = default;
};
class QueryAccountBalanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> availableCashAmount{};
  shared_ptr<string> creditAmount{};
  shared_ptr<string> mybankCreditAmount{};
  shared_ptr<string> currency{};

  QueryAccountBalanceResponseBodyData() {}

  explicit QueryAccountBalanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (availableCashAmount) {
      res["AvailableCashAmount"] = boost::any(*availableCashAmount);
    }
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (mybankCreditAmount) {
      res["MybankCreditAmount"] = boost::any(*mybankCreditAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("AvailableCashAmount") != m.end() && !m["AvailableCashAmount"].empty()) {
      availableCashAmount = make_shared<string>(boost::any_cast<string>(m["AvailableCashAmount"]));
    }
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("MybankCreditAmount") != m.end() && !m["MybankCreditAmount"].empty()) {
      mybankCreditAmount = make_shared<string>(boost::any_cast<string>(m["MybankCreditAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
  }


  virtual ~QueryAccountBalanceResponseBodyData() = default;
};
class QueryAccountBalanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryAccountBalanceResponseBodyData> data{};

  QueryAccountBalanceResponseBody() {}

  explicit QueryAccountBalanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAccountBalanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAccountBalanceResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryAccountBalanceResponseBody() = default;
};
class QueryAccountBalanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryAccountBalanceResponseBody> body{};

  QueryAccountBalanceResponse() {}

  explicit QueryAccountBalanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAccountBalanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAccountBalanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAccountBalanceResponse() = default;
};
class QueryAccountBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> ownerID{};
  shared_ptr<bool> isGroupByProduct{};
  shared_ptr<string> productCode{};
  shared_ptr<long> billOwnerId{};
  shared_ptr<string> granularity{};
  shared_ptr<string> billingDate{};

  QueryAccountBillRequest() {}

  explicit QueryAccountBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (isGroupByProduct) {
      res["IsGroupByProduct"] = boost::any(*isGroupByProduct);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<long>(boost::any_cast<long>(m["OwnerID"]));
    }
    if (m.find("IsGroupByProduct") != m.end() && !m["IsGroupByProduct"].empty()) {
      isGroupByProduct = make_shared<bool>(boost::any_cast<bool>(m["IsGroupByProduct"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
  }


  virtual ~QueryAccountBillRequest() = default;
};
class QueryAccountBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> costUnit{};
  shared_ptr<string> ownerID{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> billingDate{};

  QueryAccountBillResponseBodyDataItemsItem() {}

  explicit QueryAccountBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costUnit) {
      res["CostUnit"] = boost::any(*costUnit);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostUnit") != m.end() && !m["CostUnit"].empty()) {
      costUnit = make_shared<string>(boost::any_cast<string>(m["CostUnit"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
  }


  virtual ~QueryAccountBillResponseBodyDataItemsItem() = default;
};
class QueryAccountBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAccountBillResponseBodyDataItemsItem>> item{};

  QueryAccountBillResponseBodyDataItems() {}

  explicit QueryAccountBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryAccountBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAccountBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryAccountBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryAccountBillResponseBodyDataItems() = default;
};
class QueryAccountBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryAccountBillResponseBodyDataItems> items{};

  QueryAccountBillResponseBodyData() {}

  explicit QueryAccountBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryAccountBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryAccountBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryAccountBillResponseBodyData() = default;
};
class QueryAccountBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryAccountBillResponseBodyData> data{};

  QueryAccountBillResponseBody() {}

  explicit QueryAccountBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAccountBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAccountBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryAccountBillResponseBody() = default;
};
class QueryAccountBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryAccountBillResponseBody> body{};

  QueryAccountBillResponse() {}

  explicit QueryAccountBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAccountBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAccountBillResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAccountBillResponse() = default;
};
class QueryAccountTransactionDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> transactionNumber{};
  shared_ptr<string> recordID{};
  shared_ptr<string> transactionChannelSN{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> transactionChannel{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  QueryAccountTransactionDetailsRequest() {}

  explicit QueryAccountTransactionDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (transactionChannelSN) {
      res["TransactionChannelSN"] = boost::any(*transactionChannelSN);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionChannel) {
      res["TransactionChannel"] = boost::any(*transactionChannel);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<string>(boost::any_cast<string>(m["TransactionNumber"]));
    }
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("TransactionChannelSN") != m.end() && !m["TransactionChannelSN"].empty()) {
      transactionChannelSN = make_shared<string>(boost::any_cast<string>(m["TransactionChannelSN"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionChannel") != m.end() && !m["TransactionChannel"].empty()) {
      transactionChannel = make_shared<string>(boost::any_cast<string>(m["TransactionChannel"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~QueryAccountTransactionDetailsRequest() = default;
};
class QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList : public Darabonba::Model {
public:
  shared_ptr<string> transactionNumber{};
  shared_ptr<string> transactionTime{};
  shared_ptr<string> transactionFlow{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> transactionChannel{};
  shared_ptr<string> transactionChannelSN{};
  shared_ptr<string> fundType{};
  shared_ptr<string> recordID{};
  shared_ptr<string> remarks{};
  shared_ptr<string> billingCycle{};
  shared_ptr<string> amount{};
  shared_ptr<string> balance{};
  shared_ptr<string> transactionAccount{};

  QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList() {}

  explicit QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionTime) {
      res["TransactionTime"] = boost::any(*transactionTime);
    }
    if (transactionFlow) {
      res["TransactionFlow"] = boost::any(*transactionFlow);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionChannel) {
      res["TransactionChannel"] = boost::any(*transactionChannel);
    }
    if (transactionChannelSN) {
      res["TransactionChannelSN"] = boost::any(*transactionChannelSN);
    }
    if (fundType) {
      res["FundType"] = boost::any(*fundType);
    }
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (remarks) {
      res["Remarks"] = boost::any(*remarks);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (transactionAccount) {
      res["TransactionAccount"] = boost::any(*transactionAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<string>(boost::any_cast<string>(m["TransactionNumber"]));
    }
    if (m.find("TransactionTime") != m.end() && !m["TransactionTime"].empty()) {
      transactionTime = make_shared<string>(boost::any_cast<string>(m["TransactionTime"]));
    }
    if (m.find("TransactionFlow") != m.end() && !m["TransactionFlow"].empty()) {
      transactionFlow = make_shared<string>(boost::any_cast<string>(m["TransactionFlow"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionChannel") != m.end() && !m["TransactionChannel"].empty()) {
      transactionChannel = make_shared<string>(boost::any_cast<string>(m["TransactionChannel"]));
    }
    if (m.find("TransactionChannelSN") != m.end() && !m["TransactionChannelSN"].empty()) {
      transactionChannelSN = make_shared<string>(boost::any_cast<string>(m["TransactionChannelSN"]));
    }
    if (m.find("FundType") != m.end() && !m["FundType"].empty()) {
      fundType = make_shared<string>(boost::any_cast<string>(m["FundType"]));
    }
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("Remarks") != m.end() && !m["Remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["Remarks"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("TransactionAccount") != m.end() && !m["TransactionAccount"].empty()) {
      transactionAccount = make_shared<string>(boost::any_cast<string>(m["TransactionAccount"]));
    }
  }


  virtual ~QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList() = default;
};
class QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList>> accountTransactionsList{};

  QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList() {}

  explicit QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountTransactionsList) {
      vector<boost::any> temp1;
      for(auto item1:*accountTransactionsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountTransactionsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountTransactionsList") != m.end() && !m["AccountTransactionsList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountTransactionsList"].type()) {
        vector<QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountTransactionsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountTransactionsList = make_shared<vector<QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList>>(expect1);
      }
    }
  }


  virtual ~QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList() = default;
};
class QueryAccountTransactionDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList> accountTransactionsList{};

  QueryAccountTransactionDetailsResponseBodyData() {}

  explicit QueryAccountTransactionDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (accountTransactionsList) {
      res["AccountTransactionsList"] = accountTransactionsList ? boost::any(accountTransactionsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("AccountTransactionsList") != m.end() && !m["AccountTransactionsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountTransactionsList"].type()) {
        QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountTransactionsList"]));
        accountTransactionsList = make_shared<QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionDetailsResponseBodyData() = default;
};
class QueryAccountTransactionDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryAccountTransactionDetailsResponseBodyData> data{};

  QueryAccountTransactionDetailsResponseBody() {}

  explicit QueryAccountTransactionDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAccountTransactionDetailsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAccountTransactionDetailsResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionDetailsResponseBody() = default;
};
class QueryAccountTransactionDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryAccountTransactionDetailsResponseBody> body{};

  QueryAccountTransactionDetailsResponse() {}

  explicit QueryAccountTransactionDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAccountTransactionDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAccountTransactionDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionDetailsResponse() = default;
};
class QueryAccountTransactionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> transactionNumber{};
  shared_ptr<string> recordID{};
  shared_ptr<string> transactionChannelSN{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryAccountTransactionsRequest() {}

  explicit QueryAccountTransactionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (transactionChannelSN) {
      res["TransactionChannelSN"] = boost::any(*transactionChannelSN);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<string>(boost::any_cast<string>(m["TransactionNumber"]));
    }
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("TransactionChannelSN") != m.end() && !m["TransactionChannelSN"].empty()) {
      transactionChannelSN = make_shared<string>(boost::any_cast<string>(m["TransactionChannelSN"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryAccountTransactionsRequest() = default;
};
class QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList : public Darabonba::Model {
public:
  shared_ptr<string> transactionNumber{};
  shared_ptr<string> transactionTime{};
  shared_ptr<string> transactionFlow{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> transactionChannel{};
  shared_ptr<string> transactionChannelSN{};
  shared_ptr<string> fundType{};
  shared_ptr<string> recordID{};
  shared_ptr<string> remarks{};
  shared_ptr<string> billingCycle{};
  shared_ptr<string> amount{};
  shared_ptr<string> balance{};
  shared_ptr<string> transactionAccount{};

  QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList() {}

  explicit QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionTime) {
      res["TransactionTime"] = boost::any(*transactionTime);
    }
    if (transactionFlow) {
      res["TransactionFlow"] = boost::any(*transactionFlow);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionChannel) {
      res["TransactionChannel"] = boost::any(*transactionChannel);
    }
    if (transactionChannelSN) {
      res["TransactionChannelSN"] = boost::any(*transactionChannelSN);
    }
    if (fundType) {
      res["FundType"] = boost::any(*fundType);
    }
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (remarks) {
      res["Remarks"] = boost::any(*remarks);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (transactionAccount) {
      res["TransactionAccount"] = boost::any(*transactionAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<string>(boost::any_cast<string>(m["TransactionNumber"]));
    }
    if (m.find("TransactionTime") != m.end() && !m["TransactionTime"].empty()) {
      transactionTime = make_shared<string>(boost::any_cast<string>(m["TransactionTime"]));
    }
    if (m.find("TransactionFlow") != m.end() && !m["TransactionFlow"].empty()) {
      transactionFlow = make_shared<string>(boost::any_cast<string>(m["TransactionFlow"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionChannel") != m.end() && !m["TransactionChannel"].empty()) {
      transactionChannel = make_shared<string>(boost::any_cast<string>(m["TransactionChannel"]));
    }
    if (m.find("TransactionChannelSN") != m.end() && !m["TransactionChannelSN"].empty()) {
      transactionChannelSN = make_shared<string>(boost::any_cast<string>(m["TransactionChannelSN"]));
    }
    if (m.find("FundType") != m.end() && !m["FundType"].empty()) {
      fundType = make_shared<string>(boost::any_cast<string>(m["FundType"]));
    }
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("Remarks") != m.end() && !m["Remarks"].empty()) {
      remarks = make_shared<string>(boost::any_cast<string>(m["Remarks"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("TransactionAccount") != m.end() && !m["TransactionAccount"].empty()) {
      transactionAccount = make_shared<string>(boost::any_cast<string>(m["TransactionAccount"]));
    }
  }


  virtual ~QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList() = default;
};
class QueryAccountTransactionsResponseBodyDataAccountTransactionsList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList>> accountTransactionsList{};

  QueryAccountTransactionsResponseBodyDataAccountTransactionsList() {}

  explicit QueryAccountTransactionsResponseBodyDataAccountTransactionsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountTransactionsList) {
      vector<boost::any> temp1;
      for(auto item1:*accountTransactionsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountTransactionsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountTransactionsList") != m.end() && !m["AccountTransactionsList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountTransactionsList"].type()) {
        vector<QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountTransactionsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountTransactionsList = make_shared<vector<QueryAccountTransactionsResponseBodyDataAccountTransactionsListAccountTransactionsList>>(expect1);
      }
    }
  }


  virtual ~QueryAccountTransactionsResponseBodyDataAccountTransactionsList() = default;
};
class QueryAccountTransactionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryAccountTransactionsResponseBodyDataAccountTransactionsList> accountTransactionsList{};

  QueryAccountTransactionsResponseBodyData() {}

  explicit QueryAccountTransactionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (accountTransactionsList) {
      res["AccountTransactionsList"] = accountTransactionsList ? boost::any(accountTransactionsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AccountTransactionsList") != m.end() && !m["AccountTransactionsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountTransactionsList"].type()) {
        QueryAccountTransactionsResponseBodyDataAccountTransactionsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountTransactionsList"]));
        accountTransactionsList = make_shared<QueryAccountTransactionsResponseBodyDataAccountTransactionsList>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionsResponseBodyData() = default;
};
class QueryAccountTransactionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryAccountTransactionsResponseBodyData> data{};

  QueryAccountTransactionsResponseBody() {}

  explicit QueryAccountTransactionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAccountTransactionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAccountTransactionsResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionsResponseBody() = default;
};
class QueryAccountTransactionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryAccountTransactionsResponseBody> body{};

  QueryAccountTransactionsResponse() {}

  explicit QueryAccountTransactionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAccountTransactionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAccountTransactionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAccountTransactionsResponse() = default;
};
class QueryAvailableInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> instanceIDs{};
  shared_ptr<string> endTimeStart{};
  shared_ptr<string> endTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> renewStatus{};

  QueryAvailableInstancesRequest() {}

  explicit QueryAvailableInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (instanceIDs) {
      res["InstanceIDs"] = boost::any(*instanceIDs);
    }
    if (endTimeStart) {
      res["EndTimeStart"] = boost::any(*endTimeStart);
    }
    if (endTimeEnd) {
      res["EndTimeEnd"] = boost::any(*endTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (renewStatus) {
      res["RenewStatus"] = boost::any(*renewStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("InstanceIDs") != m.end() && !m["InstanceIDs"].empty()) {
      instanceIDs = make_shared<string>(boost::any_cast<string>(m["InstanceIDs"]));
    }
    if (m.find("EndTimeStart") != m.end() && !m["EndTimeStart"].empty()) {
      endTimeStart = make_shared<string>(boost::any_cast<string>(m["EndTimeStart"]));
    }
    if (m.find("EndTimeEnd") != m.end() && !m["EndTimeEnd"].empty()) {
      endTimeEnd = make_shared<string>(boost::any_cast<string>(m["EndTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("RenewStatus") != m.end() && !m["RenewStatus"].empty()) {
      renewStatus = make_shared<string>(boost::any_cast<string>(m["RenewStatus"]));
    }
  }


  virtual ~QueryAvailableInstancesRequest() = default;
};
class QueryAvailableInstancesResponseBodyDataInstanceList : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> sellerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> region{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> expectedReleaseTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> renewStatus{};
  shared_ptr<long> renewalDuration{};
  shared_ptr<string> renewalDurationUnit{};
  shared_ptr<string> seller{};

  QueryAvailableInstancesResponseBodyDataInstanceList() {}

  explicit QueryAvailableInstancesResponseBodyDataInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (expectedReleaseTime) {
      res["ExpectedReleaseTime"] = boost::any(*expectedReleaseTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (renewStatus) {
      res["RenewStatus"] = boost::any(*renewStatus);
    }
    if (renewalDuration) {
      res["RenewalDuration"] = boost::any(*renewalDuration);
    }
    if (renewalDurationUnit) {
      res["RenewalDurationUnit"] = boost::any(*renewalDurationUnit);
    }
    if (seller) {
      res["Seller"] = boost::any(*seller);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<long>(boost::any_cast<long>(m["SellerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("ExpectedReleaseTime") != m.end() && !m["ExpectedReleaseTime"].empty()) {
      expectedReleaseTime = make_shared<string>(boost::any_cast<string>(m["ExpectedReleaseTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("RenewStatus") != m.end() && !m["RenewStatus"].empty()) {
      renewStatus = make_shared<string>(boost::any_cast<string>(m["RenewStatus"]));
    }
    if (m.find("RenewalDuration") != m.end() && !m["RenewalDuration"].empty()) {
      renewalDuration = make_shared<long>(boost::any_cast<long>(m["RenewalDuration"]));
    }
    if (m.find("RenewalDurationUnit") != m.end() && !m["RenewalDurationUnit"].empty()) {
      renewalDurationUnit = make_shared<string>(boost::any_cast<string>(m["RenewalDurationUnit"]));
    }
    if (m.find("Seller") != m.end() && !m["Seller"].empty()) {
      seller = make_shared<string>(boost::any_cast<string>(m["Seller"]));
    }
  }


  virtual ~QueryAvailableInstancesResponseBodyDataInstanceList() = default;
};
class QueryAvailableInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<QueryAvailableInstancesResponseBodyDataInstanceList>> instanceList{};

  QueryAvailableInstancesResponseBodyData() {}

  explicit QueryAvailableInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<QueryAvailableInstancesResponseBodyDataInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvailableInstancesResponseBodyDataInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<QueryAvailableInstancesResponseBodyDataInstanceList>>(expect1);
      }
    }
  }


  virtual ~QueryAvailableInstancesResponseBodyData() = default;
};
class QueryAvailableInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryAvailableInstancesResponseBodyData> data{};

  QueryAvailableInstancesResponseBody() {}

  explicit QueryAvailableInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAvailableInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAvailableInstancesResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryAvailableInstancesResponseBody() = default;
};
class QueryAvailableInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryAvailableInstancesResponseBody> body{};

  QueryAvailableInstancesResponse() {}

  explicit QueryAvailableInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvailableInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvailableInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvailableInstancesResponse() = default;
};
class QueryBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> type{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<bool> isHideZeroCharge{};
  shared_ptr<bool> isDisplayLocalCurrency{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> billOwnerId{};

  QueryBillRequest() {}

  explicit QueryBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (isHideZeroCharge) {
      res["IsHideZeroCharge"] = boost::any(*isHideZeroCharge);
    }
    if (isDisplayLocalCurrency) {
      res["IsDisplayLocalCurrency"] = boost::any(*isDisplayLocalCurrency);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("IsHideZeroCharge") != m.end() && !m["IsHideZeroCharge"].empty()) {
      isHideZeroCharge = make_shared<bool>(boost::any_cast<bool>(m["IsHideZeroCharge"]));
    }
    if (m.find("IsDisplayLocalCurrency") != m.end() && !m["IsDisplayLocalCurrency"].empty()) {
      isDisplayLocalCurrency = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayLocalCurrency"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
  }


  virtual ~QueryBillRequest() = default;
};
class QueryBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> recordID{};
  shared_ptr<string> item{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> usageStartTime{};
  shared_ptr<string> usageEndTime{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> tax{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<string> status{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> paymentTransactionID{};
  shared_ptr<string> roundDownDiscount{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};

  QueryBillResponseBodyDataItemsItem() {}

  explicit QueryBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (usageStartTime) {
      res["UsageStartTime"] = boost::any(*usageStartTime);
    }
    if (usageEndTime) {
      res["UsageEndTime"] = boost::any(*usageEndTime);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (paymentTransactionID) {
      res["PaymentTransactionID"] = boost::any(*paymentTransactionID);
    }
    if (roundDownDiscount) {
      res["RoundDownDiscount"] = boost::any(*roundDownDiscount);
    }
    if (subOrderId) {
      res["SubOrderId"] = boost::any(*subOrderId);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("UsageStartTime") != m.end() && !m["UsageStartTime"].empty()) {
      usageStartTime = make_shared<string>(boost::any_cast<string>(m["UsageStartTime"]));
    }
    if (m.find("UsageEndTime") != m.end() && !m["UsageEndTime"].empty()) {
      usageEndTime = make_shared<string>(boost::any_cast<string>(m["UsageEndTime"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("PaymentTransactionID") != m.end() && !m["PaymentTransactionID"].empty()) {
      paymentTransactionID = make_shared<string>(boost::any_cast<string>(m["PaymentTransactionID"]));
    }
    if (m.find("RoundDownDiscount") != m.end() && !m["RoundDownDiscount"].empty()) {
      roundDownDiscount = make_shared<string>(boost::any_cast<string>(m["RoundDownDiscount"]));
    }
    if (m.find("SubOrderId") != m.end() && !m["SubOrderId"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["SubOrderId"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~QueryBillResponseBodyDataItemsItem() = default;
};
class QueryBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBillResponseBodyDataItemsItem>> item{};

  QueryBillResponseBodyDataItems() {}

  explicit QueryBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryBillResponseBodyDataItems() = default;
};
class QueryBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryBillResponseBodyDataItems> items{};

  QueryBillResponseBodyData() {}

  explicit QueryBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryBillResponseBodyData() = default;
};
class QueryBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryBillResponseBodyData> data{};

  QueryBillResponseBody() {}

  explicit QueryBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryBillResponseBody() = default;
};
class QueryBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBillResponseBody> body{};

  QueryBillResponse() {}

  explicit QueryBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBillResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBillResponse() = default;
};
class QueryBillOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> billOwnerId{};

  QueryBillOverviewRequest() {}

  explicit QueryBillOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
  }


  virtual ~QueryBillOverviewRequest() = default;
};
class QueryBillOverviewResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> item{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> tax{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> roundDownDiscount{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};

  QueryBillOverviewResponseBodyDataItemsItem() {}

  explicit QueryBillOverviewResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (roundDownDiscount) {
      res["RoundDownDiscount"] = boost::any(*roundDownDiscount);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("RoundDownDiscount") != m.end() && !m["RoundDownDiscount"].empty()) {
      roundDownDiscount = make_shared<string>(boost::any_cast<string>(m["RoundDownDiscount"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~QueryBillOverviewResponseBodyDataItemsItem() = default;
};
class QueryBillOverviewResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBillOverviewResponseBodyDataItemsItem>> item{};

  QueryBillOverviewResponseBodyDataItems() {}

  explicit QueryBillOverviewResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryBillOverviewResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBillOverviewResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryBillOverviewResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryBillOverviewResponseBodyDataItems() = default;
};
class QueryBillOverviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<QueryBillOverviewResponseBodyDataItems> items{};

  QueryBillOverviewResponseBodyData() {}

  explicit QueryBillOverviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryBillOverviewResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryBillOverviewResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryBillOverviewResponseBodyData() = default;
};
class QueryBillOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryBillOverviewResponseBodyData> data{};

  QueryBillOverviewResponseBody() {}

  explicit QueryBillOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryBillOverviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryBillOverviewResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryBillOverviewResponseBody() = default;
};
class QueryBillOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBillOverviewResponseBody> body{};

  QueryBillOverviewResponse() {}

  explicit QueryBillOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBillOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBillOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBillOverviewResponse() = default;
};
class QueryBillToOSSSubscriptionResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> subscribeType{};
  shared_ptr<string> subscribeBucket{};
  shared_ptr<long> bucketOwnerId{};
  shared_ptr<string> subscribeTime{};
  shared_ptr<string> subscribeLanguage{};

  QueryBillToOSSSubscriptionResponseBodyDataItemsItem() {}

  explicit QueryBillToOSSSubscriptionResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscribeType) {
      res["SubscribeType"] = boost::any(*subscribeType);
    }
    if (subscribeBucket) {
      res["SubscribeBucket"] = boost::any(*subscribeBucket);
    }
    if (bucketOwnerId) {
      res["BucketOwnerId"] = boost::any(*bucketOwnerId);
    }
    if (subscribeTime) {
      res["SubscribeTime"] = boost::any(*subscribeTime);
    }
    if (subscribeLanguage) {
      res["SubscribeLanguage"] = boost::any(*subscribeLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscribeType") != m.end() && !m["SubscribeType"].empty()) {
      subscribeType = make_shared<string>(boost::any_cast<string>(m["SubscribeType"]));
    }
    if (m.find("SubscribeBucket") != m.end() && !m["SubscribeBucket"].empty()) {
      subscribeBucket = make_shared<string>(boost::any_cast<string>(m["SubscribeBucket"]));
    }
    if (m.find("BucketOwnerId") != m.end() && !m["BucketOwnerId"].empty()) {
      bucketOwnerId = make_shared<long>(boost::any_cast<long>(m["BucketOwnerId"]));
    }
    if (m.find("SubscribeTime") != m.end() && !m["SubscribeTime"].empty()) {
      subscribeTime = make_shared<string>(boost::any_cast<string>(m["SubscribeTime"]));
    }
    if (m.find("SubscribeLanguage") != m.end() && !m["SubscribeLanguage"].empty()) {
      subscribeLanguage = make_shared<string>(boost::any_cast<string>(m["SubscribeLanguage"]));
    }
  }


  virtual ~QueryBillToOSSSubscriptionResponseBodyDataItemsItem() = default;
};
class QueryBillToOSSSubscriptionResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBillToOSSSubscriptionResponseBodyDataItemsItem>> item{};

  QueryBillToOSSSubscriptionResponseBodyDataItems() {}

  explicit QueryBillToOSSSubscriptionResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryBillToOSSSubscriptionResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBillToOSSSubscriptionResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryBillToOSSSubscriptionResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryBillToOSSSubscriptionResponseBodyDataItems() = default;
};
class QueryBillToOSSSubscriptionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<QueryBillToOSSSubscriptionResponseBodyDataItems> items{};

  QueryBillToOSSSubscriptionResponseBodyData() {}

  explicit QueryBillToOSSSubscriptionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryBillToOSSSubscriptionResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryBillToOSSSubscriptionResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryBillToOSSSubscriptionResponseBodyData() = default;
};
class QueryBillToOSSSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryBillToOSSSubscriptionResponseBodyData> data{};

  QueryBillToOSSSubscriptionResponseBody() {}

  explicit QueryBillToOSSSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryBillToOSSSubscriptionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryBillToOSSSubscriptionResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryBillToOSSSubscriptionResponseBody() = default;
};
class QueryBillToOSSSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBillToOSSSubscriptionResponseBody> body{};

  QueryBillToOSSSubscriptionResponse() {}

  explicit QueryBillToOSSSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBillToOSSSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBillToOSSSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBillToOSSSubscriptionResponse() = default;
};
class QueryCashCouponsRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiryTimeEnd{};
  shared_ptr<string> expiryTimeStart{};
  shared_ptr<bool> effectiveOrNot{};

  QueryCashCouponsRequest() {}

  explicit QueryCashCouponsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiryTimeEnd) {
      res["ExpiryTimeEnd"] = boost::any(*expiryTimeEnd);
    }
    if (expiryTimeStart) {
      res["ExpiryTimeStart"] = boost::any(*expiryTimeStart);
    }
    if (effectiveOrNot) {
      res["EffectiveOrNot"] = boost::any(*effectiveOrNot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiryTimeEnd") != m.end() && !m["ExpiryTimeEnd"].empty()) {
      expiryTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeEnd"]));
    }
    if (m.find("ExpiryTimeStart") != m.end() && !m["ExpiryTimeStart"].empty()) {
      expiryTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeStart"]));
    }
    if (m.find("EffectiveOrNot") != m.end() && !m["EffectiveOrNot"].empty()) {
      effectiveOrNot = make_shared<bool>(boost::any_cast<bool>(m["EffectiveOrNot"]));
    }
  }


  virtual ~QueryCashCouponsRequest() = default;
};
class QueryCashCouponsResponseBodyDataCashCoupon : public Darabonba::Model {
public:
  shared_ptr<long> cashCouponId{};
  shared_ptr<string> cashCouponNo{};
  shared_ptr<string> grantedTime{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expiryTime{};
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> applicableScenarios{};
  shared_ptr<string> nominalValue{};
  shared_ptr<string> balance{};
  shared_ptr<string> status{};

  QueryCashCouponsResponseBodyDataCashCoupon() {}

  explicit QueryCashCouponsResponseBodyDataCashCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cashCouponId) {
      res["CashCouponId"] = boost::any(*cashCouponId);
    }
    if (cashCouponNo) {
      res["CashCouponNo"] = boost::any(*cashCouponNo);
    }
    if (grantedTime) {
      res["GrantedTime"] = boost::any(*grantedTime);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (applicableScenarios) {
      res["ApplicableScenarios"] = boost::any(*applicableScenarios);
    }
    if (nominalValue) {
      res["NominalValue"] = boost::any(*nominalValue);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CashCouponId") != m.end() && !m["CashCouponId"].empty()) {
      cashCouponId = make_shared<long>(boost::any_cast<long>(m["CashCouponId"]));
    }
    if (m.find("CashCouponNo") != m.end() && !m["CashCouponNo"].empty()) {
      cashCouponNo = make_shared<string>(boost::any_cast<string>(m["CashCouponNo"]));
    }
    if (m.find("GrantedTime") != m.end() && !m["GrantedTime"].empty()) {
      grantedTime = make_shared<string>(boost::any_cast<string>(m["GrantedTime"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<string>(boost::any_cast<string>(m["ExpiryTime"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("ApplicableScenarios") != m.end() && !m["ApplicableScenarios"].empty()) {
      applicableScenarios = make_shared<string>(boost::any_cast<string>(m["ApplicableScenarios"]));
    }
    if (m.find("NominalValue") != m.end() && !m["NominalValue"].empty()) {
      nominalValue = make_shared<string>(boost::any_cast<string>(m["NominalValue"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryCashCouponsResponseBodyDataCashCoupon() = default;
};
class QueryCashCouponsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCashCouponsResponseBodyDataCashCoupon>> cashCoupon{};

  QueryCashCouponsResponseBodyData() {}

  explicit QueryCashCouponsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cashCoupon) {
      vector<boost::any> temp1;
      for(auto item1:*cashCoupon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CashCoupon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CashCoupon") != m.end() && !m["CashCoupon"].empty()) {
      if (typeid(vector<boost::any>) == m["CashCoupon"].type()) {
        vector<QueryCashCouponsResponseBodyDataCashCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CashCoupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCashCouponsResponseBodyDataCashCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cashCoupon = make_shared<vector<QueryCashCouponsResponseBodyDataCashCoupon>>(expect1);
      }
    }
  }


  virtual ~QueryCashCouponsResponseBodyData() = default;
};
class QueryCashCouponsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryCashCouponsResponseBodyData> data{};

  QueryCashCouponsResponseBody() {}

  explicit QueryCashCouponsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCashCouponsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCashCouponsResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryCashCouponsResponseBody() = default;
};
class QueryCashCouponsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCashCouponsResponseBody> body{};

  QueryCashCouponsResponse() {}

  explicit QueryCashCouponsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCashCouponsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCashCouponsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCashCouponsResponse() = default;
};
class QueryCostUnitRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerUid{};
  shared_ptr<long> parentUnitId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryCostUnitRequest() {}

  explicit QueryCostUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (parentUnitId) {
      res["ParentUnitId"] = boost::any(*parentUnitId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("ParentUnitId") != m.end() && !m["ParentUnitId"].empty()) {
      parentUnitId = make_shared<long>(boost::any_cast<long>(m["ParentUnitId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryCostUnitRequest() = default;
};
class QueryCostUnitResponseBodyDataCostUnitDtoList : public Darabonba::Model {
public:
  shared_ptr<long> unitId{};
  shared_ptr<long> parentUnitId{};
  shared_ptr<long> ownerUid{};
  shared_ptr<string> unitName{};

  QueryCostUnitResponseBodyDataCostUnitDtoList() {}

  explicit QueryCostUnitResponseBodyDataCostUnitDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (parentUnitId) {
      res["ParentUnitId"] = boost::any(*parentUnitId);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitName) {
      res["UnitName"] = boost::any(*unitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("ParentUnitId") != m.end() && !m["ParentUnitId"].empty()) {
      parentUnitId = make_shared<long>(boost::any_cast<long>(m["ParentUnitId"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitName") != m.end() && !m["UnitName"].empty()) {
      unitName = make_shared<string>(boost::any_cast<string>(m["UnitName"]));
    }
  }


  virtual ~QueryCostUnitResponseBodyDataCostUnitDtoList() = default;
};
class QueryCostUnitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<vector<QueryCostUnitResponseBodyDataCostUnitDtoList>> costUnitDtoList{};

  QueryCostUnitResponseBodyData() {}

  explicit QueryCostUnitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (costUnitDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*costUnitDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostUnitDtoList"] = boost::any(temp1);
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
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("CostUnitDtoList") != m.end() && !m["CostUnitDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostUnitDtoList"].type()) {
        vector<QueryCostUnitResponseBodyDataCostUnitDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostUnitDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostUnitResponseBodyDataCostUnitDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costUnitDtoList = make_shared<vector<QueryCostUnitResponseBodyDataCostUnitDtoList>>(expect1);
      }
    }
  }


  virtual ~QueryCostUnitResponseBodyData() = default;
};
class QueryCostUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<QueryCostUnitResponseBodyData> data{};

  QueryCostUnitResponseBody() {}

  explicit QueryCostUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCostUnitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCostUnitResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryCostUnitResponseBody() = default;
};
class QueryCostUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCostUnitResponseBody> body{};

  QueryCostUnitResponse() {}

  explicit QueryCostUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCostUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCostUnitResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCostUnitResponse() = default;
};
class QueryCostUnitResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerUid{};
  shared_ptr<long> unitId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryCostUnitResourceRequest() {}

  explicit QueryCostUnitResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryCostUnitResourceRequest() = default;
};
class QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList : public Darabonba::Model {
public:
  shared_ptr<long> resourceUserId{};
  shared_ptr<string> resourceTag{};
  shared_ptr<string> relatedResources{};
  shared_ptr<string> apportionName{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceUserName{};
  shared_ptr<string> resourceNick{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> apportionCode{};

  QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList() {}

  explicit QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceUserId) {
      res["ResourceUserId"] = boost::any(*resourceUserId);
    }
    if (resourceTag) {
      res["ResourceTag"] = boost::any(*resourceTag);
    }
    if (relatedResources) {
      res["RelatedResources"] = boost::any(*relatedResources);
    }
    if (apportionName) {
      res["ApportionName"] = boost::any(*apportionName);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceUserName) {
      res["ResourceUserName"] = boost::any(*resourceUserName);
    }
    if (resourceNick) {
      res["ResourceNick"] = boost::any(*resourceNick);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (apportionCode) {
      res["ApportionCode"] = boost::any(*apportionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceUserId") != m.end() && !m["ResourceUserId"].empty()) {
      resourceUserId = make_shared<long>(boost::any_cast<long>(m["ResourceUserId"]));
    }
    if (m.find("ResourceTag") != m.end() && !m["ResourceTag"].empty()) {
      resourceTag = make_shared<string>(boost::any_cast<string>(m["ResourceTag"]));
    }
    if (m.find("RelatedResources") != m.end() && !m["RelatedResources"].empty()) {
      relatedResources = make_shared<string>(boost::any_cast<string>(m["RelatedResources"]));
    }
    if (m.find("ApportionName") != m.end() && !m["ApportionName"].empty()) {
      apportionName = make_shared<string>(boost::any_cast<string>(m["ApportionName"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceUserName") != m.end() && !m["ResourceUserName"].empty()) {
      resourceUserName = make_shared<string>(boost::any_cast<string>(m["ResourceUserName"]));
    }
    if (m.find("ResourceNick") != m.end() && !m["ResourceNick"].empty()) {
      resourceNick = make_shared<string>(boost::any_cast<string>(m["ResourceNick"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("ApportionCode") != m.end() && !m["ApportionCode"].empty()) {
      apportionCode = make_shared<string>(boost::any_cast<string>(m["ApportionCode"]));
    }
  }


  virtual ~QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList() = default;
};
class QueryCostUnitResourceResponseBodyDataCostUnit : public Darabonba::Model {
public:
  shared_ptr<long> unitId{};
  shared_ptr<long> parentUnitId{};
  shared_ptr<long> ownerUid{};
  shared_ptr<string> unitName{};

  QueryCostUnitResourceResponseBodyDataCostUnit() {}

  explicit QueryCostUnitResourceResponseBodyDataCostUnit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unitId) {
      res["UnitId"] = boost::any(*unitId);
    }
    if (parentUnitId) {
      res["ParentUnitId"] = boost::any(*parentUnitId);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (unitName) {
      res["UnitName"] = boost::any(*unitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnitId") != m.end() && !m["UnitId"].empty()) {
      unitId = make_shared<long>(boost::any_cast<long>(m["UnitId"]));
    }
    if (m.find("ParentUnitId") != m.end() && !m["ParentUnitId"].empty()) {
      parentUnitId = make_shared<long>(boost::any_cast<long>(m["ParentUnitId"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["OwnerUid"]));
    }
    if (m.find("UnitName") != m.end() && !m["UnitName"].empty()) {
      unitName = make_shared<string>(boost::any_cast<string>(m["UnitName"]));
    }
  }


  virtual ~QueryCostUnitResourceResponseBodyDataCostUnit() = default;
};
class QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo : public Darabonba::Model {
public:
  shared_ptr<long> subUnitCount{};
  shared_ptr<long> totalResourceGroupCount{};
  shared_ptr<long> totalResourceCount{};
  shared_ptr<long> userCount{};
  shared_ptr<long> resourceCount{};
  shared_ptr<long> totalUserCount{};
  shared_ptr<long> resourceGroupCount{};

  QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo() {}

  explicit QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subUnitCount) {
      res["SubUnitCount"] = boost::any(*subUnitCount);
    }
    if (totalResourceGroupCount) {
      res["TotalResourceGroupCount"] = boost::any(*totalResourceGroupCount);
    }
    if (totalResourceCount) {
      res["TotalResourceCount"] = boost::any(*totalResourceCount);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (totalUserCount) {
      res["TotalUserCount"] = boost::any(*totalUserCount);
    }
    if (resourceGroupCount) {
      res["ResourceGroupCount"] = boost::any(*resourceGroupCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubUnitCount") != m.end() && !m["SubUnitCount"].empty()) {
      subUnitCount = make_shared<long>(boost::any_cast<long>(m["SubUnitCount"]));
    }
    if (m.find("TotalResourceGroupCount") != m.end() && !m["TotalResourceGroupCount"].empty()) {
      totalResourceGroupCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceGroupCount"]));
    }
    if (m.find("TotalResourceCount") != m.end() && !m["TotalResourceCount"].empty()) {
      totalResourceCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceCount"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("TotalUserCount") != m.end() && !m["TotalUserCount"].empty()) {
      totalUserCount = make_shared<long>(boost::any_cast<long>(m["TotalUserCount"]));
    }
    if (m.find("ResourceGroupCount") != m.end() && !m["ResourceGroupCount"].empty()) {
      resourceGroupCount = make_shared<long>(boost::any_cast<long>(m["ResourceGroupCount"]));
    }
  }


  virtual ~QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo() = default;
};
class QueryCostUnitResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNum{};
  shared_ptr<vector<QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList>> resourceInstanceDtoList{};
  shared_ptr<QueryCostUnitResourceResponseBodyDataCostUnit> costUnit{};
  shared_ptr<QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo> costUnitStatisInfo{};

  QueryCostUnitResourceResponseBodyData() {}

  explicit QueryCostUnitResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (resourceInstanceDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceInstanceDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceInstanceDtoList"] = boost::any(temp1);
    }
    if (costUnit) {
      res["CostUnit"] = costUnit ? boost::any(costUnit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (costUnitStatisInfo) {
      res["CostUnitStatisInfo"] = costUnitStatisInfo ? boost::any(costUnitStatisInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("ResourceInstanceDtoList") != m.end() && !m["ResourceInstanceDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceInstanceDtoList"].type()) {
        vector<QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceInstanceDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceInstanceDtoList = make_shared<vector<QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList>>(expect1);
      }
    }
    if (m.find("CostUnit") != m.end() && !m["CostUnit"].empty()) {
      if (typeid(map<string, boost::any>) == m["CostUnit"].type()) {
        QueryCostUnitResourceResponseBodyDataCostUnit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CostUnit"]));
        costUnit = make_shared<QueryCostUnitResourceResponseBodyDataCostUnit>(model1);
      }
    }
    if (m.find("CostUnitStatisInfo") != m.end() && !m["CostUnitStatisInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CostUnitStatisInfo"].type()) {
        QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CostUnitStatisInfo"]));
        costUnitStatisInfo = make_shared<QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo>(model1);
      }
    }
  }


  virtual ~QueryCostUnitResourceResponseBodyData() = default;
};
class QueryCostUnitResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<QueryCostUnitResourceResponseBodyData> data{};

  QueryCostUnitResourceResponseBody() {}

  explicit QueryCostUnitResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCostUnitResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCostUnitResourceResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryCostUnitResourceResponseBody() = default;
};
class QueryCostUnitResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCostUnitResourceResponseBody> body{};

  QueryCostUnitResourceResponse() {}

  explicit QueryCostUnitResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCostUnitResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCostUnitResourceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCostUnitResourceResponse() = default;
};
class QueryCustomerAddressListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  QueryCustomerAddressListRequest() {}

  explicit QueryCustomerAddressListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~QueryCustomerAddressListRequest() = default;
};
class QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> userId{};
  shared_ptr<string> userNick{};
  shared_ptr<string> addressee{};
  shared_ptr<string> province{};
  shared_ptr<string> city{};
  shared_ptr<string> county{};
  shared_ptr<string> street{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> phone{};
  shared_ptr<string> bizType{};
  shared_ptr<string> deliveryAddress{};

  QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress() {}

  explicit QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (addressee) {
      res["Addressee"] = boost::any(*addressee);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (county) {
      res["County"] = boost::any(*county);
    }
    if (street) {
      res["Street"] = boost::any(*street);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (deliveryAddress) {
      res["DeliveryAddress"] = boost::any(*deliveryAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("Addressee") != m.end() && !m["Addressee"].empty()) {
      addressee = make_shared<string>(boost::any_cast<string>(m["Addressee"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("County") != m.end() && !m["County"].empty()) {
      county = make_shared<string>(boost::any_cast<string>(m["County"]));
    }
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      street = make_shared<string>(boost::any_cast<string>(m["Street"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DeliveryAddress") != m.end() && !m["DeliveryAddress"].empty()) {
      deliveryAddress = make_shared<string>(boost::any_cast<string>(m["DeliveryAddress"]));
    }
  }


  virtual ~QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress() = default;
};
class QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress>> customerInvoiceAddress{};

  QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList() {}

  explicit QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInvoiceAddress) {
      vector<boost::any> temp1;
      for(auto item1:*customerInvoiceAddress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInvoiceAddress"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInvoiceAddress") != m.end() && !m["CustomerInvoiceAddress"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInvoiceAddress"].type()) {
        vector<QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInvoiceAddress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInvoiceAddress = make_shared<vector<QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress>>(expect1);
      }
    }
  }


  virtual ~QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList() = default;
};
class QueryCustomerAddressListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList> customerInvoiceAddressList{};

  QueryCustomerAddressListResponseBodyData() {}

  explicit QueryCustomerAddressListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInvoiceAddressList) {
      res["CustomerInvoiceAddressList"] = customerInvoiceAddressList ? boost::any(customerInvoiceAddressList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInvoiceAddressList") != m.end() && !m["CustomerInvoiceAddressList"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomerInvoiceAddressList"].type()) {
        QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomerInvoiceAddressList"]));
        customerInvoiceAddressList = make_shared<QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressList>(model1);
      }
    }
  }


  virtual ~QueryCustomerAddressListResponseBodyData() = default;
};
class QueryCustomerAddressListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryCustomerAddressListResponseBodyData> data{};

  QueryCustomerAddressListResponseBody() {}

  explicit QueryCustomerAddressListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCustomerAddressListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCustomerAddressListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryCustomerAddressListResponseBody() = default;
};
class QueryCustomerAddressListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCustomerAddressListResponseBody> body{};

  QueryCustomerAddressListResponse() {}

  explicit QueryCustomerAddressListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCustomerAddressListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCustomerAddressListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCustomerAddressListResponse() = default;
};
class QueryEvaluateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> outBizId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startAmount{};
  shared_ptr<long> endAmount{};
  shared_ptr<string> startBizTime{};
  shared_ptr<string> endBizTime{};
  shared_ptr<long> sortType{};
  shared_ptr<string> startSearchTime{};
  shared_ptr<string> endSearchTime{};
  shared_ptr<string> billCycle{};
  shared_ptr<vector<string>> bizTypeList{};

  QueryEvaluateListRequest() {}

  explicit QueryEvaluateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (outBizId) {
      res["OutBizId"] = boost::any(*outBizId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startAmount) {
      res["StartAmount"] = boost::any(*startAmount);
    }
    if (endAmount) {
      res["EndAmount"] = boost::any(*endAmount);
    }
    if (startBizTime) {
      res["StartBizTime"] = boost::any(*startBizTime);
    }
    if (endBizTime) {
      res["EndBizTime"] = boost::any(*endBizTime);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (startSearchTime) {
      res["StartSearchTime"] = boost::any(*startSearchTime);
    }
    if (endSearchTime) {
      res["EndSearchTime"] = boost::any(*endSearchTime);
    }
    if (billCycle) {
      res["BillCycle"] = boost::any(*billCycle);
    }
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("OutBizId") != m.end() && !m["OutBizId"].empty()) {
      outBizId = make_shared<string>(boost::any_cast<string>(m["OutBizId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartAmount") != m.end() && !m["StartAmount"].empty()) {
      startAmount = make_shared<long>(boost::any_cast<long>(m["StartAmount"]));
    }
    if (m.find("EndAmount") != m.end() && !m["EndAmount"].empty()) {
      endAmount = make_shared<long>(boost::any_cast<long>(m["EndAmount"]));
    }
    if (m.find("StartBizTime") != m.end() && !m["StartBizTime"].empty()) {
      startBizTime = make_shared<string>(boost::any_cast<string>(m["StartBizTime"]));
    }
    if (m.find("EndBizTime") != m.end() && !m["EndBizTime"].empty()) {
      endBizTime = make_shared<string>(boost::any_cast<string>(m["EndBizTime"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<long>(boost::any_cast<long>(m["SortType"]));
    }
    if (m.find("StartSearchTime") != m.end() && !m["StartSearchTime"].empty()) {
      startSearchTime = make_shared<string>(boost::any_cast<string>(m["StartSearchTime"]));
    }
    if (m.find("EndSearchTime") != m.end() && !m["EndSearchTime"].empty()) {
      endSearchTime = make_shared<string>(boost::any_cast<string>(m["EndSearchTime"]));
    }
    if (m.find("BillCycle") != m.end() && !m["BillCycle"].empty()) {
      billCycle = make_shared<string>(boost::any_cast<string>(m["BillCycle"]));
    }
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryEvaluateListRequest() = default;
};
class QueryEvaluateListResponseBodyDataEvaluateListEvaluate : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> userId{};
  shared_ptr<string> userNick{};
  shared_ptr<string> outBizId{};
  shared_ptr<long> billId{};
  shared_ptr<long> itemId{};
  shared_ptr<string> billCycle{};
  shared_ptr<string> bizType{};
  shared_ptr<long> originalAmount{};
  shared_ptr<long> presentAmount{};
  shared_ptr<long> canInvoiceAmount{};
  shared_ptr<long> invoicedAmount{};
  shared_ptr<long> offsetCostAmount{};
  shared_ptr<long> offsetAcceptAmount{};
  shared_ptr<long> status{};
  shared_ptr<string> opId{};
  shared_ptr<string> name{};
  shared_ptr<string> bizTime{};
  shared_ptr<long> type{};

  QueryEvaluateListResponseBodyDataEvaluateListEvaluate() {}

  explicit QueryEvaluateListResponseBodyDataEvaluateListEvaluate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (outBizId) {
      res["OutBizId"] = boost::any(*outBizId);
    }
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (billCycle) {
      res["BillCycle"] = boost::any(*billCycle);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (presentAmount) {
      res["PresentAmount"] = boost::any(*presentAmount);
    }
    if (canInvoiceAmount) {
      res["CanInvoiceAmount"] = boost::any(*canInvoiceAmount);
    }
    if (invoicedAmount) {
      res["InvoicedAmount"] = boost::any(*invoicedAmount);
    }
    if (offsetCostAmount) {
      res["OffsetCostAmount"] = boost::any(*offsetCostAmount);
    }
    if (offsetAcceptAmount) {
      res["OffsetAcceptAmount"] = boost::any(*offsetAcceptAmount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (opId) {
      res["OpId"] = boost::any(*opId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (bizTime) {
      res["BizTime"] = boost::any(*bizTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("OutBizId") != m.end() && !m["OutBizId"].empty()) {
      outBizId = make_shared<string>(boost::any_cast<string>(m["OutBizId"]));
    }
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<long>(boost::any_cast<long>(m["BillId"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("BillCycle") != m.end() && !m["BillCycle"].empty()) {
      billCycle = make_shared<string>(boost::any_cast<string>(m["BillCycle"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<long>(boost::any_cast<long>(m["OriginalAmount"]));
    }
    if (m.find("PresentAmount") != m.end() && !m["PresentAmount"].empty()) {
      presentAmount = make_shared<long>(boost::any_cast<long>(m["PresentAmount"]));
    }
    if (m.find("CanInvoiceAmount") != m.end() && !m["CanInvoiceAmount"].empty()) {
      canInvoiceAmount = make_shared<long>(boost::any_cast<long>(m["CanInvoiceAmount"]));
    }
    if (m.find("InvoicedAmount") != m.end() && !m["InvoicedAmount"].empty()) {
      invoicedAmount = make_shared<long>(boost::any_cast<long>(m["InvoicedAmount"]));
    }
    if (m.find("OffsetCostAmount") != m.end() && !m["OffsetCostAmount"].empty()) {
      offsetCostAmount = make_shared<long>(boost::any_cast<long>(m["OffsetCostAmount"]));
    }
    if (m.find("OffsetAcceptAmount") != m.end() && !m["OffsetAcceptAmount"].empty()) {
      offsetAcceptAmount = make_shared<long>(boost::any_cast<long>(m["OffsetAcceptAmount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("OpId") != m.end() && !m["OpId"].empty()) {
      opId = make_shared<string>(boost::any_cast<string>(m["OpId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BizTime") != m.end() && !m["BizTime"].empty()) {
      bizTime = make_shared<string>(boost::any_cast<string>(m["BizTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryEvaluateListResponseBodyDataEvaluateListEvaluate() = default;
};
class QueryEvaluateListResponseBodyDataEvaluateList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEvaluateListResponseBodyDataEvaluateListEvaluate>> evaluate{};

  QueryEvaluateListResponseBodyDataEvaluateList() {}

  explicit QueryEvaluateListResponseBodyDataEvaluateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluate) {
      vector<boost::any> temp1;
      for(auto item1:*evaluate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Evaluate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Evaluate") != m.end() && !m["Evaluate"].empty()) {
      if (typeid(vector<boost::any>) == m["Evaluate"].type()) {
        vector<QueryEvaluateListResponseBodyDataEvaluateListEvaluate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Evaluate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEvaluateListResponseBodyDataEvaluateListEvaluate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluate = make_shared<vector<QueryEvaluateListResponseBodyDataEvaluateListEvaluate>>(expect1);
      }
    }
  }


  virtual ~QueryEvaluateListResponseBodyDataEvaluateList() = default;
};
class QueryEvaluateListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalInvoiceAmount{};
  shared_ptr<long> totalUnAppliedInvoiceAmount{};
  shared_ptr<QueryEvaluateListResponseBodyDataEvaluateList> evaluateList{};

  QueryEvaluateListResponseBodyData() {}

  explicit QueryEvaluateListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalInvoiceAmount) {
      res["TotalInvoiceAmount"] = boost::any(*totalInvoiceAmount);
    }
    if (totalUnAppliedInvoiceAmount) {
      res["TotalUnAppliedInvoiceAmount"] = boost::any(*totalUnAppliedInvoiceAmount);
    }
    if (evaluateList) {
      res["EvaluateList"] = evaluateList ? boost::any(evaluateList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalInvoiceAmount") != m.end() && !m["TotalInvoiceAmount"].empty()) {
      totalInvoiceAmount = make_shared<long>(boost::any_cast<long>(m["TotalInvoiceAmount"]));
    }
    if (m.find("TotalUnAppliedInvoiceAmount") != m.end() && !m["TotalUnAppliedInvoiceAmount"].empty()) {
      totalUnAppliedInvoiceAmount = make_shared<long>(boost::any_cast<long>(m["TotalUnAppliedInvoiceAmount"]));
    }
    if (m.find("EvaluateList") != m.end() && !m["EvaluateList"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluateList"].type()) {
        QueryEvaluateListResponseBodyDataEvaluateList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluateList"]));
        evaluateList = make_shared<QueryEvaluateListResponseBodyDataEvaluateList>(model1);
      }
    }
  }


  virtual ~QueryEvaluateListResponseBodyData() = default;
};
class QueryEvaluateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryEvaluateListResponseBodyData> data{};

  QueryEvaluateListResponseBody() {}

  explicit QueryEvaluateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEvaluateListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEvaluateListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryEvaluateListResponseBody() = default;
};
class QueryEvaluateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryEvaluateListResponseBody> body{};

  QueryEvaluateListResponse() {}

  explicit QueryEvaluateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEvaluateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEvaluateListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEvaluateListResponse() = default;
};
class QueryFinancialAccountInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};

  QueryFinancialAccountInfoRequest() {}

  explicit QueryFinancialAccountInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~QueryFinancialAccountInfoRequest() = default;
};
class QueryFinancialAccountInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> userName{};
  shared_ptr<bool> isFinancialAccount{};
  shared_ptr<string> accountType{};
  shared_ptr<string> memberNickName{};
  shared_ptr<long> memberGroupId{};
  shared_ptr<string> memberGroupName{};

  QueryFinancialAccountInfoResponseBodyData() {}

  explicit QueryFinancialAccountInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (isFinancialAccount) {
      res["IsFinancialAccount"] = boost::any(*isFinancialAccount);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (memberNickName) {
      res["MemberNickName"] = boost::any(*memberNickName);
    }
    if (memberGroupId) {
      res["MemberGroupId"] = boost::any(*memberGroupId);
    }
    if (memberGroupName) {
      res["MemberGroupName"] = boost::any(*memberGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("IsFinancialAccount") != m.end() && !m["IsFinancialAccount"].empty()) {
      isFinancialAccount = make_shared<bool>(boost::any_cast<bool>(m["IsFinancialAccount"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("MemberNickName") != m.end() && !m["MemberNickName"].empty()) {
      memberNickName = make_shared<string>(boost::any_cast<string>(m["MemberNickName"]));
    }
    if (m.find("MemberGroupId") != m.end() && !m["MemberGroupId"].empty()) {
      memberGroupId = make_shared<long>(boost::any_cast<long>(m["MemberGroupId"]));
    }
    if (m.find("MemberGroupName") != m.end() && !m["MemberGroupName"].empty()) {
      memberGroupName = make_shared<string>(boost::any_cast<string>(m["MemberGroupName"]));
    }
  }


  virtual ~QueryFinancialAccountInfoResponseBodyData() = default;
};
class QueryFinancialAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<QueryFinancialAccountInfoResponseBodyData> data{};

  QueryFinancialAccountInfoResponseBody() {}

  explicit QueryFinancialAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFinancialAccountInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFinancialAccountInfoResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryFinancialAccountInfoResponseBody() = default;
};
class QueryFinancialAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryFinancialAccountInfoResponseBody> body{};

  QueryFinancialAccountInfoResponse() {}

  explicit QueryFinancialAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFinancialAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFinancialAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFinancialAccountInfoResponse() = default;
};
class QueryInstanceBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> ownerId{};
  shared_ptr<bool> isBillingItem{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> isHideZeroCharge{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> granularity{};
  shared_ptr<long> billOwnerId{};

  QueryInstanceBillRequest() {}

  explicit QueryInstanceBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (isBillingItem) {
      res["IsBillingItem"] = boost::any(*isBillingItem);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (isHideZeroCharge) {
      res["IsHideZeroCharge"] = boost::any(*isHideZeroCharge);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("IsBillingItem") != m.end() && !m["IsBillingItem"].empty()) {
      isBillingItem = make_shared<bool>(boost::any_cast<bool>(m["IsBillingItem"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("IsHideZeroCharge") != m.end() && !m["IsHideZeroCharge"].empty()) {
      isHideZeroCharge = make_shared<bool>(boost::any_cast<bool>(m["IsHideZeroCharge"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
  }


  virtual ~QueryInstanceBillRequest() = default;
};
class QueryInstanceBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> billingType{};
  shared_ptr<string> costUnit{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> billingItem{};
  shared_ptr<string> listPrice{};
  shared_ptr<string> listPriceUnit{};
  shared_ptr<string> usage{};
  shared_ptr<string> usageUnit{};
  shared_ptr<string> deductedByResourcePackage{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> nickName{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> tag{};
  shared_ptr<string> instanceConfig{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> internetIP{};
  shared_ptr<string> intranetIP{};
  shared_ptr<string> region{};
  shared_ptr<string> zone{};
  shared_ptr<string> item{};
  shared_ptr<string> servicePeriod{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> servicePeriodUnit{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};

  QueryInstanceBillResponseBodyDataItemsItem() {}

  explicit QueryInstanceBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (costUnit) {
      res["CostUnit"] = boost::any(*costUnit);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (billingItem) {
      res["BillingItem"] = boost::any(*billingItem);
    }
    if (listPrice) {
      res["ListPrice"] = boost::any(*listPrice);
    }
    if (listPriceUnit) {
      res["ListPriceUnit"] = boost::any(*listPriceUnit);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    if (usageUnit) {
      res["UsageUnit"] = boost::any(*usageUnit);
    }
    if (deductedByResourcePackage) {
      res["DeductedByResourcePackage"] = boost::any(*deductedByResourcePackage);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (instanceConfig) {
      res["InstanceConfig"] = boost::any(*instanceConfig);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (internetIP) {
      res["InternetIP"] = boost::any(*internetIP);
    }
    if (intranetIP) {
      res["IntranetIP"] = boost::any(*intranetIP);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (servicePeriod) {
      res["ServicePeriod"] = boost::any(*servicePeriod);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (servicePeriodUnit) {
      res["ServicePeriodUnit"] = boost::any(*servicePeriodUnit);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CostUnit") != m.end() && !m["CostUnit"].empty()) {
      costUnit = make_shared<string>(boost::any_cast<string>(m["CostUnit"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("BillingItem") != m.end() && !m["BillingItem"].empty()) {
      billingItem = make_shared<string>(boost::any_cast<string>(m["BillingItem"]));
    }
    if (m.find("ListPrice") != m.end() && !m["ListPrice"].empty()) {
      listPrice = make_shared<string>(boost::any_cast<string>(m["ListPrice"]));
    }
    if (m.find("ListPriceUnit") != m.end() && !m["ListPriceUnit"].empty()) {
      listPriceUnit = make_shared<string>(boost::any_cast<string>(m["ListPriceUnit"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
    if (m.find("UsageUnit") != m.end() && !m["UsageUnit"].empty()) {
      usageUnit = make_shared<string>(boost::any_cast<string>(m["UsageUnit"]));
    }
    if (m.find("DeductedByResourcePackage") != m.end() && !m["DeductedByResourcePackage"].empty()) {
      deductedByResourcePackage = make_shared<string>(boost::any_cast<string>(m["DeductedByResourcePackage"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("InstanceConfig") != m.end() && !m["InstanceConfig"].empty()) {
      instanceConfig = make_shared<string>(boost::any_cast<string>(m["InstanceConfig"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("InternetIP") != m.end() && !m["InternetIP"].empty()) {
      internetIP = make_shared<string>(boost::any_cast<string>(m["InternetIP"]));
    }
    if (m.find("IntranetIP") != m.end() && !m["IntranetIP"].empty()) {
      intranetIP = make_shared<string>(boost::any_cast<string>(m["IntranetIP"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("ServicePeriod") != m.end() && !m["ServicePeriod"].empty()) {
      servicePeriod = make_shared<string>(boost::any_cast<string>(m["ServicePeriod"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("ServicePeriodUnit") != m.end() && !m["ServicePeriodUnit"].empty()) {
      servicePeriodUnit = make_shared<string>(boost::any_cast<string>(m["ServicePeriodUnit"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~QueryInstanceBillResponseBodyDataItemsItem() = default;
};
class QueryInstanceBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInstanceBillResponseBodyDataItemsItem>> item{};

  QueryInstanceBillResponseBodyDataItems() {}

  explicit QueryInstanceBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryInstanceBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryInstanceBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceBillResponseBodyDataItems() = default;
};
class QueryInstanceBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryInstanceBillResponseBodyDataItems> items{};

  QueryInstanceBillResponseBodyData() {}

  explicit QueryInstanceBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryInstanceBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryInstanceBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryInstanceBillResponseBodyData() = default;
};
class QueryInstanceBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryInstanceBillResponseBodyData> data{};

  QueryInstanceBillResponseBody() {}

  explicit QueryInstanceBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryInstanceBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryInstanceBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryInstanceBillResponseBody() = default;
};
class QueryInstanceBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryInstanceBillResponseBody> body{};

  QueryInstanceBillResponse() {}

  explicit QueryInstanceBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInstanceBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInstanceBillResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInstanceBillResponse() = default;
};
class QueryInstanceByTagRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  QueryInstanceByTagRequestTag() {}

  explicit QueryInstanceByTagRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryInstanceByTagRequestTag() = default;
};
class QueryInstanceByTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<QueryInstanceByTagRequestTag>> tag{};

  QueryInstanceByTagRequest() {}

  explicit QueryInstanceByTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<QueryInstanceByTagRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceByTagRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<QueryInstanceByTagRequestTag>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceByTagRequest() = default;
};
class QueryInstanceByTagResponseBodyTagResourceTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  QueryInstanceByTagResponseBodyTagResourceTag() {}

  explicit QueryInstanceByTagResponseBodyTagResourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryInstanceByTagResponseBodyTagResourceTag() = default;
};
class QueryInstanceByTagResponseBodyTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<QueryInstanceByTagResponseBodyTagResourceTag>> tag{};

  QueryInstanceByTagResponseBodyTagResource() {}

  explicit QueryInstanceByTagResponseBodyTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<QueryInstanceByTagResponseBodyTagResourceTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceByTagResponseBodyTagResourceTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<QueryInstanceByTagResponseBodyTagResourceTag>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceByTagResponseBodyTagResource() = default;
};
class QueryInstanceByTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<QueryInstanceByTagResponseBodyTagResource>> tagResource{};

  QueryInstanceByTagResponseBody() {}

  explicit QueryInstanceByTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<QueryInstanceByTagResponseBodyTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceByTagResponseBodyTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<QueryInstanceByTagResponseBodyTagResource>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceByTagResponseBody() = default;
};
class QueryInstanceByTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryInstanceByTagResponseBody> body{};

  QueryInstanceByTagResponse() {}

  explicit QueryInstanceByTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInstanceByTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInstanceByTagResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInstanceByTagResponse() = default;
};
class QueryInstanceGaapCostRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};

  QueryInstanceGaapCostRequest() {}

  explicit QueryInstanceGaapCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~QueryInstanceGaapCostRequest() = default;
};
class QueryInstanceGaapCostResponseBodyDataModulesModule : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> tag{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> accountingUnit{};
  shared_ptr<string> payerAccount{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> region{};
  shared_ptr<string> currency{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> orderType{};
  shared_ptr<string> payTime{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> pricingDiscount{};
  shared_ptr<string> deductedByCoupons{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> pretaxAmountLocal{};
  shared_ptr<string> deductedByCashCoupons{};
  shared_ptr<string> deductedByPrepaidCard{};
  shared_ptr<string> paymentAmount{};
  shared_ptr<string> gaapPretaxGrossAmount{};
  shared_ptr<string> gaapPricingDiscount{};
  shared_ptr<string> gaapDeductedByCoupons{};
  shared_ptr<string> gaapPretaxAmount{};
  shared_ptr<string> gaapPretaxAmountLocal{};
  shared_ptr<string> gaapDeductedByCashCoupons{};
  shared_ptr<string> gaapDeductedByPrepaidCard{};
  shared_ptr<string> gaapPaymentAmount{};
  shared_ptr<string> monthGaapPretaxGrossAmount{};
  shared_ptr<string> monthGaapPricingDiscount{};
  shared_ptr<string> monthGaapDeductedByCoupons{};
  shared_ptr<string> monthGaapPretaxAmount{};
  shared_ptr<string> monthGaapPretaxAmountLocal{};
  shared_ptr<string> monthGaapDeductedByCashCoupons{};
  shared_ptr<string> monthGaapDeductedByPrepaidCard{};
  shared_ptr<string> monthGaapPaymentAmount{};
  shared_ptr<string> unallocatedPaymentAmount{};
  shared_ptr<string> usageStartDate{};
  shared_ptr<string> usageEndDate{};
  shared_ptr<string> billType{};
  shared_ptr<string> orderId{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> unallocatedPretaxGrossAmount{};
  shared_ptr<string> unallocatedPricingDiscount{};
  shared_ptr<string> unallocatedDeductedByCoupons{};
  shared_ptr<string> unallocatedPretaxAmount{};
  shared_ptr<string> unallocatedPretaxAmountLocal{};
  shared_ptr<string> unallocatedDeductedByCashCoupons{};
  shared_ptr<string> unallocatedDeductedByPrepaidCard{};

  QueryInstanceGaapCostResponseBodyDataModulesModule() {}

  explicit QueryInstanceGaapCostResponseBodyDataModulesModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (accountingUnit) {
      res["AccountingUnit"] = boost::any(*accountingUnit);
    }
    if (payerAccount) {
      res["PayerAccount"] = boost::any(*payerAccount);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (pricingDiscount) {
      res["PricingDiscount"] = boost::any(*pricingDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (gaapPretaxGrossAmount) {
      res["GaapPretaxGrossAmount"] = boost::any(*gaapPretaxGrossAmount);
    }
    if (gaapPricingDiscount) {
      res["GaapPricingDiscount"] = boost::any(*gaapPricingDiscount);
    }
    if (gaapDeductedByCoupons) {
      res["GaapDeductedByCoupons"] = boost::any(*gaapDeductedByCoupons);
    }
    if (gaapPretaxAmount) {
      res["GaapPretaxAmount"] = boost::any(*gaapPretaxAmount);
    }
    if (gaapPretaxAmountLocal) {
      res["GaapPretaxAmountLocal"] = boost::any(*gaapPretaxAmountLocal);
    }
    if (gaapDeductedByCashCoupons) {
      res["GaapDeductedByCashCoupons"] = boost::any(*gaapDeductedByCashCoupons);
    }
    if (gaapDeductedByPrepaidCard) {
      res["GaapDeductedByPrepaidCard"] = boost::any(*gaapDeductedByPrepaidCard);
    }
    if (gaapPaymentAmount) {
      res["GaapPaymentAmount"] = boost::any(*gaapPaymentAmount);
    }
    if (monthGaapPretaxGrossAmount) {
      res["MonthGaapPretaxGrossAmount"] = boost::any(*monthGaapPretaxGrossAmount);
    }
    if (monthGaapPricingDiscount) {
      res["MonthGaapPricingDiscount"] = boost::any(*monthGaapPricingDiscount);
    }
    if (monthGaapDeductedByCoupons) {
      res["MonthGaapDeductedByCoupons"] = boost::any(*monthGaapDeductedByCoupons);
    }
    if (monthGaapPretaxAmount) {
      res["MonthGaapPretaxAmount"] = boost::any(*monthGaapPretaxAmount);
    }
    if (monthGaapPretaxAmountLocal) {
      res["MonthGaapPretaxAmountLocal"] = boost::any(*monthGaapPretaxAmountLocal);
    }
    if (monthGaapDeductedByCashCoupons) {
      res["MonthGaapDeductedByCashCoupons"] = boost::any(*monthGaapDeductedByCashCoupons);
    }
    if (monthGaapDeductedByPrepaidCard) {
      res["MonthGaapDeductedByPrepaidCard"] = boost::any(*monthGaapDeductedByPrepaidCard);
    }
    if (monthGaapPaymentAmount) {
      res["MonthGaapPaymentAmount"] = boost::any(*monthGaapPaymentAmount);
    }
    if (unallocatedPaymentAmount) {
      res["UnallocatedPaymentAmount"] = boost::any(*unallocatedPaymentAmount);
    }
    if (usageStartDate) {
      res["UsageStartDate"] = boost::any(*usageStartDate);
    }
    if (usageEndDate) {
      res["UsageEndDate"] = boost::any(*usageEndDate);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (subOrderId) {
      res["SubOrderId"] = boost::any(*subOrderId);
    }
    if (unallocatedPretaxGrossAmount) {
      res["UnallocatedPretaxGrossAmount"] = boost::any(*unallocatedPretaxGrossAmount);
    }
    if (unallocatedPricingDiscount) {
      res["UnallocatedPricingDiscount"] = boost::any(*unallocatedPricingDiscount);
    }
    if (unallocatedDeductedByCoupons) {
      res["UnallocatedDeductedByCoupons"] = boost::any(*unallocatedDeductedByCoupons);
    }
    if (unallocatedPretaxAmount) {
      res["UnallocatedPretaxAmount"] = boost::any(*unallocatedPretaxAmount);
    }
    if (unallocatedPretaxAmountLocal) {
      res["UnallocatedPretaxAmountLocal"] = boost::any(*unallocatedPretaxAmountLocal);
    }
    if (unallocatedDeductedByCashCoupons) {
      res["UnallocatedDeductedByCashCoupons"] = boost::any(*unallocatedDeductedByCashCoupons);
    }
    if (unallocatedDeductedByPrepaidCard) {
      res["UnallocatedDeductedByPrepaidCard"] = boost::any(*unallocatedDeductedByPrepaidCard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("AccountingUnit") != m.end() && !m["AccountingUnit"].empty()) {
      accountingUnit = make_shared<string>(boost::any_cast<string>(m["AccountingUnit"]));
    }
    if (m.find("PayerAccount") != m.end() && !m["PayerAccount"].empty()) {
      payerAccount = make_shared<string>(boost::any_cast<string>(m["PayerAccount"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["PayTime"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("PricingDiscount") != m.end() && !m["PricingDiscount"].empty()) {
      pricingDiscount = make_shared<string>(boost::any_cast<string>(m["PricingDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<string>(boost::any_cast<string>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["PretaxAmountLocal"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<string>(boost::any_cast<string>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<string>(boost::any_cast<string>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<string>(boost::any_cast<string>(m["PaymentAmount"]));
    }
    if (m.find("GaapPretaxGrossAmount") != m.end() && !m["GaapPretaxGrossAmount"].empty()) {
      gaapPretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["GaapPretaxGrossAmount"]));
    }
    if (m.find("GaapPricingDiscount") != m.end() && !m["GaapPricingDiscount"].empty()) {
      gaapPricingDiscount = make_shared<string>(boost::any_cast<string>(m["GaapPricingDiscount"]));
    }
    if (m.find("GaapDeductedByCoupons") != m.end() && !m["GaapDeductedByCoupons"].empty()) {
      gaapDeductedByCoupons = make_shared<string>(boost::any_cast<string>(m["GaapDeductedByCoupons"]));
    }
    if (m.find("GaapPretaxAmount") != m.end() && !m["GaapPretaxAmount"].empty()) {
      gaapPretaxAmount = make_shared<string>(boost::any_cast<string>(m["GaapPretaxAmount"]));
    }
    if (m.find("GaapPretaxAmountLocal") != m.end() && !m["GaapPretaxAmountLocal"].empty()) {
      gaapPretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["GaapPretaxAmountLocal"]));
    }
    if (m.find("GaapDeductedByCashCoupons") != m.end() && !m["GaapDeductedByCashCoupons"].empty()) {
      gaapDeductedByCashCoupons = make_shared<string>(boost::any_cast<string>(m["GaapDeductedByCashCoupons"]));
    }
    if (m.find("GaapDeductedByPrepaidCard") != m.end() && !m["GaapDeductedByPrepaidCard"].empty()) {
      gaapDeductedByPrepaidCard = make_shared<string>(boost::any_cast<string>(m["GaapDeductedByPrepaidCard"]));
    }
    if (m.find("GaapPaymentAmount") != m.end() && !m["GaapPaymentAmount"].empty()) {
      gaapPaymentAmount = make_shared<string>(boost::any_cast<string>(m["GaapPaymentAmount"]));
    }
    if (m.find("MonthGaapPretaxGrossAmount") != m.end() && !m["MonthGaapPretaxGrossAmount"].empty()) {
      monthGaapPretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["MonthGaapPretaxGrossAmount"]));
    }
    if (m.find("MonthGaapPricingDiscount") != m.end() && !m["MonthGaapPricingDiscount"].empty()) {
      monthGaapPricingDiscount = make_shared<string>(boost::any_cast<string>(m["MonthGaapPricingDiscount"]));
    }
    if (m.find("MonthGaapDeductedByCoupons") != m.end() && !m["MonthGaapDeductedByCoupons"].empty()) {
      monthGaapDeductedByCoupons = make_shared<string>(boost::any_cast<string>(m["MonthGaapDeductedByCoupons"]));
    }
    if (m.find("MonthGaapPretaxAmount") != m.end() && !m["MonthGaapPretaxAmount"].empty()) {
      monthGaapPretaxAmount = make_shared<string>(boost::any_cast<string>(m["MonthGaapPretaxAmount"]));
    }
    if (m.find("MonthGaapPretaxAmountLocal") != m.end() && !m["MonthGaapPretaxAmountLocal"].empty()) {
      monthGaapPretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["MonthGaapPretaxAmountLocal"]));
    }
    if (m.find("MonthGaapDeductedByCashCoupons") != m.end() && !m["MonthGaapDeductedByCashCoupons"].empty()) {
      monthGaapDeductedByCashCoupons = make_shared<string>(boost::any_cast<string>(m["MonthGaapDeductedByCashCoupons"]));
    }
    if (m.find("MonthGaapDeductedByPrepaidCard") != m.end() && !m["MonthGaapDeductedByPrepaidCard"].empty()) {
      monthGaapDeductedByPrepaidCard = make_shared<string>(boost::any_cast<string>(m["MonthGaapDeductedByPrepaidCard"]));
    }
    if (m.find("MonthGaapPaymentAmount") != m.end() && !m["MonthGaapPaymentAmount"].empty()) {
      monthGaapPaymentAmount = make_shared<string>(boost::any_cast<string>(m["MonthGaapPaymentAmount"]));
    }
    if (m.find("UnallocatedPaymentAmount") != m.end() && !m["UnallocatedPaymentAmount"].empty()) {
      unallocatedPaymentAmount = make_shared<string>(boost::any_cast<string>(m["UnallocatedPaymentAmount"]));
    }
    if (m.find("UsageStartDate") != m.end() && !m["UsageStartDate"].empty()) {
      usageStartDate = make_shared<string>(boost::any_cast<string>(m["UsageStartDate"]));
    }
    if (m.find("UsageEndDate") != m.end() && !m["UsageEndDate"].empty()) {
      usageEndDate = make_shared<string>(boost::any_cast<string>(m["UsageEndDate"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("SubOrderId") != m.end() && !m["SubOrderId"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["SubOrderId"]));
    }
    if (m.find("UnallocatedPretaxGrossAmount") != m.end() && !m["UnallocatedPretaxGrossAmount"].empty()) {
      unallocatedPretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["UnallocatedPretaxGrossAmount"]));
    }
    if (m.find("UnallocatedPricingDiscount") != m.end() && !m["UnallocatedPricingDiscount"].empty()) {
      unallocatedPricingDiscount = make_shared<string>(boost::any_cast<string>(m["UnallocatedPricingDiscount"]));
    }
    if (m.find("UnallocatedDeductedByCoupons") != m.end() && !m["UnallocatedDeductedByCoupons"].empty()) {
      unallocatedDeductedByCoupons = make_shared<string>(boost::any_cast<string>(m["UnallocatedDeductedByCoupons"]));
    }
    if (m.find("UnallocatedPretaxAmount") != m.end() && !m["UnallocatedPretaxAmount"].empty()) {
      unallocatedPretaxAmount = make_shared<string>(boost::any_cast<string>(m["UnallocatedPretaxAmount"]));
    }
    if (m.find("UnallocatedPretaxAmountLocal") != m.end() && !m["UnallocatedPretaxAmountLocal"].empty()) {
      unallocatedPretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["UnallocatedPretaxAmountLocal"]));
    }
    if (m.find("UnallocatedDeductedByCashCoupons") != m.end() && !m["UnallocatedDeductedByCashCoupons"].empty()) {
      unallocatedDeductedByCashCoupons = make_shared<string>(boost::any_cast<string>(m["UnallocatedDeductedByCashCoupons"]));
    }
    if (m.find("UnallocatedDeductedByPrepaidCard") != m.end() && !m["UnallocatedDeductedByPrepaidCard"].empty()) {
      unallocatedDeductedByPrepaidCard = make_shared<string>(boost::any_cast<string>(m["UnallocatedDeductedByPrepaidCard"]));
    }
  }


  virtual ~QueryInstanceGaapCostResponseBodyDataModulesModule() = default;
};
class QueryInstanceGaapCostResponseBodyDataModules : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInstanceGaapCostResponseBodyDataModulesModule>> module{};

  QueryInstanceGaapCostResponseBodyDataModules() {}

  explicit QueryInstanceGaapCostResponseBodyDataModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Module"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(vector<boost::any>) == m["Module"].type()) {
        vector<QueryInstanceGaapCostResponseBodyDataModulesModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceGaapCostResponseBodyDataModulesModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<QueryInstanceGaapCostResponseBodyDataModulesModule>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceGaapCostResponseBodyDataModules() = default;
};
class QueryInstanceGaapCostResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryInstanceGaapCostResponseBodyDataModules> modules{};

  QueryInstanceGaapCostResponseBodyData() {}

  explicit QueryInstanceGaapCostResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (modules) {
      res["Modules"] = modules ? boost::any(modules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Modules") != m.end() && !m["Modules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modules"].type()) {
        QueryInstanceGaapCostResponseBodyDataModules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modules"]));
        modules = make_shared<QueryInstanceGaapCostResponseBodyDataModules>(model1);
      }
    }
  }


  virtual ~QueryInstanceGaapCostResponseBodyData() = default;
};
class QueryInstanceGaapCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryInstanceGaapCostResponseBodyData> data{};

  QueryInstanceGaapCostResponseBody() {}

  explicit QueryInstanceGaapCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryInstanceGaapCostResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryInstanceGaapCostResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryInstanceGaapCostResponseBody() = default;
};
class QueryInstanceGaapCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryInstanceGaapCostResponseBody> body{};

  QueryInstanceGaapCostResponse() {}

  explicit QueryInstanceGaapCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInstanceGaapCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInstanceGaapCostResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInstanceGaapCostResponse() = default;
};
class QueryInvoicingCustomerListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  QueryInvoicingCustomerListRequest() {}

  explicit QueryInvoicingCustomerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~QueryInvoicingCustomerListRequest() = default;
};
class QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> userId{};
  shared_ptr<string> userNick{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<long> customerType{};
  shared_ptr<long> taxpayerType{};
  shared_ptr<string> bank{};
  shared_ptr<string> bankNo{};
  shared_ptr<string> operatingLicenseAddress{};
  shared_ptr<string> operatingLicensePhone{};
  shared_ptr<string> registerNo{};
  shared_ptr<long> startCycle{};
  shared_ptr<long> status{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> taxationLicense{};
  shared_ptr<long> adjustType{};
  shared_ptr<long> endCycle{};
  shared_ptr<string> titleChangeInstructions{};
  shared_ptr<long> issueType{};
  shared_ptr<long> type{};
  shared_ptr<string> defaultRemark{};

  QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice() {}

  explicit QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (invoiceTitle) {
      res["InvoiceTitle"] = boost::any(*invoiceTitle);
    }
    if (customerType) {
      res["CustomerType"] = boost::any(*customerType);
    }
    if (taxpayerType) {
      res["TaxpayerType"] = boost::any(*taxpayerType);
    }
    if (bank) {
      res["Bank"] = boost::any(*bank);
    }
    if (bankNo) {
      res["BankNo"] = boost::any(*bankNo);
    }
    if (operatingLicenseAddress) {
      res["OperatingLicenseAddress"] = boost::any(*operatingLicenseAddress);
    }
    if (operatingLicensePhone) {
      res["OperatingLicensePhone"] = boost::any(*operatingLicensePhone);
    }
    if (registerNo) {
      res["RegisterNo"] = boost::any(*registerNo);
    }
    if (startCycle) {
      res["StartCycle"] = boost::any(*startCycle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (taxationLicense) {
      res["TaxationLicense"] = boost::any(*taxationLicense);
    }
    if (adjustType) {
      res["AdjustType"] = boost::any(*adjustType);
    }
    if (endCycle) {
      res["EndCycle"] = boost::any(*endCycle);
    }
    if (titleChangeInstructions) {
      res["TitleChangeInstructions"] = boost::any(*titleChangeInstructions);
    }
    if (issueType) {
      res["IssueType"] = boost::any(*issueType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (defaultRemark) {
      res["DefaultRemark"] = boost::any(*defaultRemark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("InvoiceTitle") != m.end() && !m["InvoiceTitle"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["InvoiceTitle"]));
    }
    if (m.find("CustomerType") != m.end() && !m["CustomerType"].empty()) {
      customerType = make_shared<long>(boost::any_cast<long>(m["CustomerType"]));
    }
    if (m.find("TaxpayerType") != m.end() && !m["TaxpayerType"].empty()) {
      taxpayerType = make_shared<long>(boost::any_cast<long>(m["TaxpayerType"]));
    }
    if (m.find("Bank") != m.end() && !m["Bank"].empty()) {
      bank = make_shared<string>(boost::any_cast<string>(m["Bank"]));
    }
    if (m.find("BankNo") != m.end() && !m["BankNo"].empty()) {
      bankNo = make_shared<string>(boost::any_cast<string>(m["BankNo"]));
    }
    if (m.find("OperatingLicenseAddress") != m.end() && !m["OperatingLicenseAddress"].empty()) {
      operatingLicenseAddress = make_shared<string>(boost::any_cast<string>(m["OperatingLicenseAddress"]));
    }
    if (m.find("OperatingLicensePhone") != m.end() && !m["OperatingLicensePhone"].empty()) {
      operatingLicensePhone = make_shared<string>(boost::any_cast<string>(m["OperatingLicensePhone"]));
    }
    if (m.find("RegisterNo") != m.end() && !m["RegisterNo"].empty()) {
      registerNo = make_shared<string>(boost::any_cast<string>(m["RegisterNo"]));
    }
    if (m.find("StartCycle") != m.end() && !m["StartCycle"].empty()) {
      startCycle = make_shared<long>(boost::any_cast<long>(m["StartCycle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("TaxationLicense") != m.end() && !m["TaxationLicense"].empty()) {
      taxationLicense = make_shared<string>(boost::any_cast<string>(m["TaxationLicense"]));
    }
    if (m.find("AdjustType") != m.end() && !m["AdjustType"].empty()) {
      adjustType = make_shared<long>(boost::any_cast<long>(m["AdjustType"]));
    }
    if (m.find("EndCycle") != m.end() && !m["EndCycle"].empty()) {
      endCycle = make_shared<long>(boost::any_cast<long>(m["EndCycle"]));
    }
    if (m.find("TitleChangeInstructions") != m.end() && !m["TitleChangeInstructions"].empty()) {
      titleChangeInstructions = make_shared<string>(boost::any_cast<string>(m["TitleChangeInstructions"]));
    }
    if (m.find("IssueType") != m.end() && !m["IssueType"].empty()) {
      issueType = make_shared<long>(boost::any_cast<long>(m["IssueType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("DefaultRemark") != m.end() && !m["DefaultRemark"].empty()) {
      defaultRemark = make_shared<string>(boost::any_cast<string>(m["DefaultRemark"]));
    }
  }


  virtual ~QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice() = default;
};
class QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice>> customerInvoice{};

  QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList() {}

  explicit QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInvoice) {
      vector<boost::any> temp1;
      for(auto item1:*customerInvoice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInvoice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInvoice") != m.end() && !m["CustomerInvoice"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInvoice"].type()) {
        vector<QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInvoice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInvoice = make_shared<vector<QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice>>(expect1);
      }
    }
  }


  virtual ~QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList() = default;
};
class QueryInvoicingCustomerListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList> customerInvoiceList{};

  QueryInvoicingCustomerListResponseBodyData() {}

  explicit QueryInvoicingCustomerListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInvoiceList) {
      res["CustomerInvoiceList"] = customerInvoiceList ? boost::any(customerInvoiceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInvoiceList") != m.end() && !m["CustomerInvoiceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomerInvoiceList"].type()) {
        QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomerInvoiceList"]));
        customerInvoiceList = make_shared<QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceList>(model1);
      }
    }
  }


  virtual ~QueryInvoicingCustomerListResponseBodyData() = default;
};
class QueryInvoicingCustomerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryInvoicingCustomerListResponseBodyData> data{};

  QueryInvoicingCustomerListResponseBody() {}

  explicit QueryInvoicingCustomerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryInvoicingCustomerListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryInvoicingCustomerListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryInvoicingCustomerListResponseBody() = default;
};
class QueryInvoicingCustomerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryInvoicingCustomerListResponseBody> body{};

  QueryInvoicingCustomerListResponse() {}

  explicit QueryInvoicingCustomerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInvoicingCustomerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInvoicingCustomerListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInvoicingCustomerListResponse() = default;
};
class QueryMonthlyBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};

  QueryMonthlyBillRequest() {}

  explicit QueryMonthlyBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
  }


  virtual ~QueryMonthlyBillRequest() = default;
};
class QueryMonthlyBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> item{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> solutionCode{};
  shared_ptr<string> solutionName{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> tax{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<string> paymentCurrency{};

  QueryMonthlyBillResponseBodyDataItemsItem() {}

  explicit QueryMonthlyBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (solutionCode) {
      res["SolutionCode"] = boost::any(*solutionCode);
    }
    if (solutionName) {
      res["SolutionName"] = boost::any(*solutionName);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("SolutionCode") != m.end() && !m["SolutionCode"].empty()) {
      solutionCode = make_shared<string>(boost::any_cast<string>(m["SolutionCode"]));
    }
    if (m.find("SolutionName") != m.end() && !m["SolutionName"].empty()) {
      solutionName = make_shared<string>(boost::any_cast<string>(m["SolutionName"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
  }


  virtual ~QueryMonthlyBillResponseBodyDataItemsItem() = default;
};
class QueryMonthlyBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMonthlyBillResponseBodyDataItemsItem>> item{};

  QueryMonthlyBillResponseBodyDataItems() {}

  explicit QueryMonthlyBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryMonthlyBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMonthlyBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryMonthlyBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryMonthlyBillResponseBodyDataItems() = default;
};
class QueryMonthlyBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> totalOutstandingAmount{};
  shared_ptr<double> newInvoiceAmount{};
  shared_ptr<string> billingCycle{};
  shared_ptr<QueryMonthlyBillResponseBodyDataItems> items{};

  QueryMonthlyBillResponseBodyData() {}

  explicit QueryMonthlyBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (totalOutstandingAmount) {
      res["TotalOutstandingAmount"] = boost::any(*totalOutstandingAmount);
    }
    if (newInvoiceAmount) {
      res["NewInvoiceAmount"] = boost::any(*newInvoiceAmount);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("TotalOutstandingAmount") != m.end() && !m["TotalOutstandingAmount"].empty()) {
      totalOutstandingAmount = make_shared<double>(boost::any_cast<double>(m["TotalOutstandingAmount"]));
    }
    if (m.find("NewInvoiceAmount") != m.end() && !m["NewInvoiceAmount"].empty()) {
      newInvoiceAmount = make_shared<double>(boost::any_cast<double>(m["NewInvoiceAmount"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryMonthlyBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryMonthlyBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryMonthlyBillResponseBodyData() = default;
};
class QueryMonthlyBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryMonthlyBillResponseBodyData> data{};

  QueryMonthlyBillResponseBody() {}

  explicit QueryMonthlyBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryMonthlyBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMonthlyBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryMonthlyBillResponseBody() = default;
};
class QueryMonthlyBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMonthlyBillResponseBody> body{};

  QueryMonthlyBillResponse() {}

  explicit QueryMonthlyBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMonthlyBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonthlyBillResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonthlyBillResponse() = default;
};
class QueryMonthlyInstanceConsumptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};

  QueryMonthlyInstanceConsumptionRequest() {}

  explicit QueryMonthlyInstanceConsumptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionRequest() = default;
};
class QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> tag{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> payerAccount{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> region{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> tax{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<string> paymentCurrency{};

  QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem() {}

  explicit QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (payerAccount) {
      res["PayerAccount"] = boost::any(*payerAccount);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("PayerAccount") != m.end() && !m["PayerAccount"].empty()) {
      payerAccount = make_shared<string>(boost::any_cast<string>(m["PayerAccount"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem() = default;
};
class QueryMonthlyInstanceConsumptionResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem>> item{};

  QueryMonthlyInstanceConsumptionResponseBodyDataItems() {}

  explicit QueryMonthlyInstanceConsumptionResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QueryMonthlyInstanceConsumptionResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionResponseBodyDataItems() = default;
};
class QueryMonthlyInstanceConsumptionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> billingCycle{};
  shared_ptr<QueryMonthlyInstanceConsumptionResponseBodyDataItems> items{};

  QueryMonthlyInstanceConsumptionResponseBodyData() {}

  explicit QueryMonthlyInstanceConsumptionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QueryMonthlyInstanceConsumptionResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QueryMonthlyInstanceConsumptionResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionResponseBodyData() = default;
};
class QueryMonthlyInstanceConsumptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryMonthlyInstanceConsumptionResponseBodyData> data{};

  QueryMonthlyInstanceConsumptionResponseBody() {}

  explicit QueryMonthlyInstanceConsumptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryMonthlyInstanceConsumptionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMonthlyInstanceConsumptionResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionResponseBody() = default;
};
class QueryMonthlyInstanceConsumptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMonthlyInstanceConsumptionResponseBody> body{};

  QueryMonthlyInstanceConsumptionResponse() {}

  explicit QueryMonthlyInstanceConsumptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMonthlyInstanceConsumptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonthlyInstanceConsumptionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonthlyInstanceConsumptionResponse() = default;
};
class QueryOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeEnd{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> orderType{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> ownerId{};

  QueryOrdersRequest() {}

  explicit QueryOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~QueryOrdersRequest() = default;
};
class QueryOrdersResponseBodyDataOrderListOrder : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> orderType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> pretaxAmountLocal{};
  shared_ptr<string> tax{};
  shared_ptr<string> afterTaxAmount{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> relatedOrderId{};
  shared_ptr<string> commodityCode{};

  QueryOrdersResponseBodyDataOrderListOrder() {}

  explicit QueryOrdersResponseBodyDataOrderListOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (relatedOrderId) {
      res["RelatedOrderId"] = boost::any(*relatedOrderId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<string>(boost::any_cast<string>(m["Tax"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<string>(boost::any_cast<string>(m["AfterTaxAmount"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("RelatedOrderId") != m.end() && !m["RelatedOrderId"].empty()) {
      relatedOrderId = make_shared<string>(boost::any_cast<string>(m["RelatedOrderId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~QueryOrdersResponseBodyDataOrderListOrder() = default;
};
class QueryOrdersResponseBodyDataOrderList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryOrdersResponseBodyDataOrderListOrder>> order{};

  QueryOrdersResponseBodyDataOrderList() {}

  explicit QueryOrdersResponseBodyDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      vector<boost::any> temp1;
      for(auto item1:*order){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Order"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(vector<boost::any>) == m["Order"].type()) {
        vector<QueryOrdersResponseBodyDataOrderListOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Order"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrdersResponseBodyDataOrderListOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        order = make_shared<vector<QueryOrdersResponseBodyDataOrderListOrder>>(expect1);
      }
    }
  }


  virtual ~QueryOrdersResponseBodyDataOrderList() = default;
};
class QueryOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryOrdersResponseBodyDataOrderList> orderList{};

  QueryOrdersResponseBodyData() {}

  explicit QueryOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (orderList) {
      res["OrderList"] = orderList ? boost::any(orderList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderList"].type()) {
        QueryOrdersResponseBodyDataOrderList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderList"]));
        orderList = make_shared<QueryOrdersResponseBodyDataOrderList>(model1);
      }
    }
  }


  virtual ~QueryOrdersResponseBodyData() = default;
};
class QueryOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryOrdersResponseBodyData> data{};

  QueryOrdersResponseBody() {}

  explicit QueryOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryOrdersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryOrdersResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryOrdersResponseBody() = default;
};
class QueryOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryOrdersResponseBody> body{};

  QueryOrdersResponse() {}

  explicit QueryOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrdersResponse() = default;
};
class QueryPermissionListRequest : public Darabonba::Model {
public:
  shared_ptr<long> relationId{};

  QueryPermissionListRequest() {}

  explicit QueryPermissionListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationId) {
      res["RelationId"] = boost::any(*relationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelationId") != m.end() && !m["RelationId"].empty()) {
      relationId = make_shared<long>(boost::any_cast<long>(m["RelationId"]));
    }
  }


  virtual ~QueryPermissionListRequest() = default;
};
class QueryPermissionListResponseBodyDataPermissionList : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<string> permissionName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  QueryPermissionListResponseBodyDataPermissionList() {}

  explicit QueryPermissionListResponseBodyDataPermissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionName) {
      res["PermissionName"] = boost::any(*permissionName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionName") != m.end() && !m["PermissionName"].empty()) {
      permissionName = make_shared<string>(boost::any_cast<string>(m["PermissionName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~QueryPermissionListResponseBodyDataPermissionList() = default;
};
class QueryPermissionListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> masterId{};
  shared_ptr<long> memberId{};
  shared_ptr<string> relationType{};
  shared_ptr<string> state{};
  shared_ptr<string> setupTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<QueryPermissionListResponseBodyDataPermissionList>> permissionList{};

  QueryPermissionListResponseBodyData() {}

  explicit QueryPermissionListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterId) {
      res["MasterId"] = boost::any(*masterId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (setupTime) {
      res["SetupTime"] = boost::any(*setupTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (permissionList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterId") != m.end() && !m["MasterId"].empty()) {
      masterId = make_shared<long>(boost::any_cast<long>(m["MasterId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("SetupTime") != m.end() && !m["SetupTime"].empty()) {
      setupTime = make_shared<string>(boost::any_cast<string>(m["SetupTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PermissionList") != m.end() && !m["PermissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionList"].type()) {
        vector<QueryPermissionListResponseBodyDataPermissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPermissionListResponseBodyDataPermissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionList = make_shared<vector<QueryPermissionListResponseBodyDataPermissionList>>(expect1);
      }
    }
  }


  virtual ~QueryPermissionListResponseBodyData() = default;
};
class QueryPermissionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<QueryPermissionListResponseBodyData> data{};

  QueryPermissionListResponseBody() {}

  explicit QueryPermissionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPermissionListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPermissionListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryPermissionListResponseBody() = default;
};
class QueryPermissionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryPermissionListResponseBody> body{};

  QueryPermissionListResponse() {}

  explicit QueryPermissionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPermissionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPermissionListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPermissionListResponse() = default;
};
class QueryPrepaidCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiryTimeEnd{};
  shared_ptr<string> expiryTimeStart{};
  shared_ptr<bool> effectiveOrNot{};

  QueryPrepaidCardsRequest() {}

  explicit QueryPrepaidCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiryTimeEnd) {
      res["ExpiryTimeEnd"] = boost::any(*expiryTimeEnd);
    }
    if (expiryTimeStart) {
      res["ExpiryTimeStart"] = boost::any(*expiryTimeStart);
    }
    if (effectiveOrNot) {
      res["EffectiveOrNot"] = boost::any(*effectiveOrNot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiryTimeEnd") != m.end() && !m["ExpiryTimeEnd"].empty()) {
      expiryTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeEnd"]));
    }
    if (m.find("ExpiryTimeStart") != m.end() && !m["ExpiryTimeStart"].empty()) {
      expiryTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeStart"]));
    }
    if (m.find("EffectiveOrNot") != m.end() && !m["EffectiveOrNot"].empty()) {
      effectiveOrNot = make_shared<bool>(boost::any_cast<bool>(m["EffectiveOrNot"]));
    }
  }


  virtual ~QueryPrepaidCardsRequest() = default;
};
class QueryPrepaidCardsResponseBodyDataPrepaidCard : public Darabonba::Model {
public:
  shared_ptr<long> prepaidCardId{};
  shared_ptr<string> prepaidCardNo{};
  shared_ptr<string> grantedTime{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expiryTime{};
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> applicableScenarios{};
  shared_ptr<string> nominalValue{};
  shared_ptr<string> balance{};
  shared_ptr<string> status{};

  QueryPrepaidCardsResponseBodyDataPrepaidCard() {}

  explicit QueryPrepaidCardsResponseBodyDataPrepaidCard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prepaidCardId) {
      res["PrepaidCardId"] = boost::any(*prepaidCardId);
    }
    if (prepaidCardNo) {
      res["PrepaidCardNo"] = boost::any(*prepaidCardNo);
    }
    if (grantedTime) {
      res["GrantedTime"] = boost::any(*grantedTime);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (applicableScenarios) {
      res["ApplicableScenarios"] = boost::any(*applicableScenarios);
    }
    if (nominalValue) {
      res["NominalValue"] = boost::any(*nominalValue);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrepaidCardId") != m.end() && !m["PrepaidCardId"].empty()) {
      prepaidCardId = make_shared<long>(boost::any_cast<long>(m["PrepaidCardId"]));
    }
    if (m.find("PrepaidCardNo") != m.end() && !m["PrepaidCardNo"].empty()) {
      prepaidCardNo = make_shared<string>(boost::any_cast<string>(m["PrepaidCardNo"]));
    }
    if (m.find("GrantedTime") != m.end() && !m["GrantedTime"].empty()) {
      grantedTime = make_shared<string>(boost::any_cast<string>(m["GrantedTime"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<string>(boost::any_cast<string>(m["ExpiryTime"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("ApplicableScenarios") != m.end() && !m["ApplicableScenarios"].empty()) {
      applicableScenarios = make_shared<string>(boost::any_cast<string>(m["ApplicableScenarios"]));
    }
    if (m.find("NominalValue") != m.end() && !m["NominalValue"].empty()) {
      nominalValue = make_shared<string>(boost::any_cast<string>(m["NominalValue"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryPrepaidCardsResponseBodyDataPrepaidCard() = default;
};
class QueryPrepaidCardsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPrepaidCardsResponseBodyDataPrepaidCard>> prepaidCard{};

  QueryPrepaidCardsResponseBodyData() {}

  explicit QueryPrepaidCardsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prepaidCard) {
      vector<boost::any> temp1;
      for(auto item1:*prepaidCard){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrepaidCard"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrepaidCard") != m.end() && !m["PrepaidCard"].empty()) {
      if (typeid(vector<boost::any>) == m["PrepaidCard"].type()) {
        vector<QueryPrepaidCardsResponseBodyDataPrepaidCard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrepaidCard"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPrepaidCardsResponseBodyDataPrepaidCard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        prepaidCard = make_shared<vector<QueryPrepaidCardsResponseBodyDataPrepaidCard>>(expect1);
      }
    }
  }


  virtual ~QueryPrepaidCardsResponseBodyData() = default;
};
class QueryPrepaidCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryPrepaidCardsResponseBodyData> data{};

  QueryPrepaidCardsResponseBody() {}

  explicit QueryPrepaidCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPrepaidCardsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPrepaidCardsResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryPrepaidCardsResponseBody() = default;
};
class QueryPrepaidCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryPrepaidCardsResponseBody> body{};

  QueryPrepaidCardsResponse() {}

  explicit QueryPrepaidCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPrepaidCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPrepaidCardsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPrepaidCardsResponse() = default;
};
class QueryProductListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> queryTotalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryProductListRequest() {}

  explicit QueryProductListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryTotalCount) {
      res["QueryTotalCount"] = boost::any(*queryTotalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryTotalCount") != m.end() && !m["QueryTotalCount"].empty()) {
      queryTotalCount = make_shared<bool>(boost::any_cast<bool>(m["QueryTotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryProductListRequest() = default;
};
class QueryProductListResponseBodyDataProductListProduct : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};

  QueryProductListResponseBodyDataProductListProduct() {}

  explicit QueryProductListResponseBodyDataProductListProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~QueryProductListResponseBodyDataProductListProduct() = default;
};
class QueryProductListResponseBodyDataProductList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProductListResponseBodyDataProductListProduct>> product{};

  QueryProductListResponseBodyDataProductList() {}

  explicit QueryProductListResponseBodyDataProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      vector<boost::any> temp1;
      for(auto item1:*product){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Product"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<QueryProductListResponseBodyDataProductListProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProductListResponseBodyDataProductListProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<QueryProductListResponseBodyDataProductListProduct>>(expect1);
      }
    }
  }


  virtual ~QueryProductListResponseBodyDataProductList() = default;
};
class QueryProductListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryProductListResponseBodyDataProductList> productList{};

  QueryProductListResponseBodyData() {}

  explicit QueryProductListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productList) {
      res["ProductList"] = productList ? boost::any(productList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductList") != m.end() && !m["ProductList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductList"].type()) {
        QueryProductListResponseBodyDataProductList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductList"]));
        productList = make_shared<QueryProductListResponseBodyDataProductList>(model1);
      }
    }
  }


  virtual ~QueryProductListResponseBodyData() = default;
};
class QueryProductListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryProductListResponseBodyData> data{};

  QueryProductListResponseBody() {}

  explicit QueryProductListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryProductListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryProductListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryProductListResponseBody() = default;
};
class QueryProductListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryProductListResponseBody> body{};

  QueryProductListResponse() {}

  explicit QueryProductListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProductListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProductListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProductListResponse() = default;
};
class QueryRedeemRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiryTimeStart{};
  shared_ptr<string> expiryTimeEnd{};
  shared_ptr<bool> effectiveOrNot{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryRedeemRequest() {}

  explicit QueryRedeemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiryTimeStart) {
      res["ExpiryTimeStart"] = boost::any(*expiryTimeStart);
    }
    if (expiryTimeEnd) {
      res["ExpiryTimeEnd"] = boost::any(*expiryTimeEnd);
    }
    if (effectiveOrNot) {
      res["EffectiveOrNot"] = boost::any(*effectiveOrNot);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiryTimeStart") != m.end() && !m["ExpiryTimeStart"].empty()) {
      expiryTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeStart"]));
    }
    if (m.find("ExpiryTimeEnd") != m.end() && !m["ExpiryTimeEnd"].empty()) {
      expiryTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeEnd"]));
    }
    if (m.find("EffectiveOrNot") != m.end() && !m["EffectiveOrNot"].empty()) {
      effectiveOrNot = make_shared<bool>(boost::any_cast<bool>(m["EffectiveOrNot"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryRedeemRequest() = default;
};
class QueryRedeemResponseBodyDataRedeemRedeem : public Darabonba::Model {
public:
  shared_ptr<string> redeemId{};
  shared_ptr<string> redeemNo{};
  shared_ptr<string> status{};
  shared_ptr<string> grantedTime{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expiryTime{};
  shared_ptr<string> nominalValue{};
  shared_ptr<string> balance{};
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> specification{};

  QueryRedeemResponseBodyDataRedeemRedeem() {}

  explicit QueryRedeemResponseBodyDataRedeemRedeem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redeemId) {
      res["RedeemId"] = boost::any(*redeemId);
    }
    if (redeemNo) {
      res["RedeemNo"] = boost::any(*redeemNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (grantedTime) {
      res["GrantedTime"] = boost::any(*grantedTime);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (nominalValue) {
      res["NominalValue"] = boost::any(*nominalValue);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedeemId") != m.end() && !m["RedeemId"].empty()) {
      redeemId = make_shared<string>(boost::any_cast<string>(m["RedeemId"]));
    }
    if (m.find("RedeemNo") != m.end() && !m["RedeemNo"].empty()) {
      redeemNo = make_shared<string>(boost::any_cast<string>(m["RedeemNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("GrantedTime") != m.end() && !m["GrantedTime"].empty()) {
      grantedTime = make_shared<string>(boost::any_cast<string>(m["GrantedTime"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<string>(boost::any_cast<string>(m["ExpiryTime"]));
    }
    if (m.find("NominalValue") != m.end() && !m["NominalValue"].empty()) {
      nominalValue = make_shared<string>(boost::any_cast<string>(m["NominalValue"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
  }


  virtual ~QueryRedeemResponseBodyDataRedeemRedeem() = default;
};
class QueryRedeemResponseBodyDataRedeem : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRedeemResponseBodyDataRedeemRedeem>> redeem{};

  QueryRedeemResponseBodyDataRedeem() {}

  explicit QueryRedeemResponseBodyDataRedeem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redeem) {
      vector<boost::any> temp1;
      for(auto item1:*redeem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Redeem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Redeem") != m.end() && !m["Redeem"].empty()) {
      if (typeid(vector<boost::any>) == m["Redeem"].type()) {
        vector<QueryRedeemResponseBodyDataRedeemRedeem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Redeem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRedeemResponseBodyDataRedeemRedeem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        redeem = make_shared<vector<QueryRedeemResponseBodyDataRedeemRedeem>>(expect1);
      }
    }
  }


  virtual ~QueryRedeemResponseBodyDataRedeem() = default;
};
class QueryRedeemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryRedeemResponseBodyDataRedeem> redeem{};

  QueryRedeemResponseBodyData() {}

  explicit QueryRedeemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (redeem) {
      res["Redeem"] = redeem ? boost::any(redeem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Redeem") != m.end() && !m["Redeem"].empty()) {
      if (typeid(map<string, boost::any>) == m["Redeem"].type()) {
        QueryRedeemResponseBodyDataRedeem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Redeem"]));
        redeem = make_shared<QueryRedeemResponseBodyDataRedeem>(model1);
      }
    }
  }


  virtual ~QueryRedeemResponseBodyData() = default;
};
class QueryRedeemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryRedeemResponseBodyData> data{};

  QueryRedeemResponseBody() {}

  explicit QueryRedeemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRedeemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRedeemResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryRedeemResponseBody() = default;
};
class QueryRedeemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRedeemResponseBody> body{};

  QueryRedeemResponse() {}

  explicit QueryRedeemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRedeemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRedeemResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRedeemResponse() = default;
};
class QueryRelationListRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryRelationListRequest() {}

  explicit QueryRelationListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryRelationListRequest() = default;
};
class QueryRelationListResponseBodyDataFinancialRelationInfoList : public Darabonba::Model {
public:
  shared_ptr<long> relationId{};
  shared_ptr<string> accountType{};
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountNickName{};
  shared_ptr<string> relationType{};
  shared_ptr<string> state{};
  shared_ptr<string> setupTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  QueryRelationListResponseBodyDataFinancialRelationInfoList() {}

  explicit QueryRelationListResponseBodyDataFinancialRelationInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationId) {
      res["RelationId"] = boost::any(*relationId);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountNickName) {
      res["AccountNickName"] = boost::any(*accountNickName);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (setupTime) {
      res["SetupTime"] = boost::any(*setupTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelationId") != m.end() && !m["RelationId"].empty()) {
      relationId = make_shared<long>(boost::any_cast<long>(m["RelationId"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountNickName") != m.end() && !m["AccountNickName"].empty()) {
      accountNickName = make_shared<string>(boost::any_cast<string>(m["AccountNickName"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("SetupTime") != m.end() && !m["SetupTime"].empty()) {
      setupTime = make_shared<string>(boost::any_cast<string>(m["SetupTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~QueryRelationListResponseBodyDataFinancialRelationInfoList() = default;
};
class QueryRelationListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<QueryRelationListResponseBodyDataFinancialRelationInfoList>> financialRelationInfoList{};

  QueryRelationListResponseBodyData() {}

  explicit QueryRelationListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (financialRelationInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*financialRelationInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FinancialRelationInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("FinancialRelationInfoList") != m.end() && !m["FinancialRelationInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FinancialRelationInfoList"].type()) {
        vector<QueryRelationListResponseBodyDataFinancialRelationInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FinancialRelationInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRelationListResponseBodyDataFinancialRelationInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        financialRelationInfoList = make_shared<vector<QueryRelationListResponseBodyDataFinancialRelationInfoList>>(expect1);
      }
    }
  }


  virtual ~QueryRelationListResponseBodyData() = default;
};
class QueryRelationListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<QueryRelationListResponseBodyData> data{};

  QueryRelationListResponseBody() {}

  explicit QueryRelationListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRelationListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRelationListResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryRelationListResponseBody() = default;
};
class QueryRelationListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRelationListResponseBody> body{};

  QueryRelationListResponse() {}

  explicit QueryRelationListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRelationListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRelationListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRelationListResponse() = default;
};
class QueryResellerAvailableQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> itemCodes{};

  QueryResellerAvailableQuotaRequest() {}

  explicit QueryResellerAvailableQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (itemCodes) {
      res["ItemCodes"] = boost::any(*itemCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ItemCodes") != m.end() && !m["ItemCodes"].empty()) {
      itemCodes = make_shared<string>(boost::any_cast<string>(m["ItemCodes"]));
    }
  }


  virtual ~QueryResellerAvailableQuotaRequest() = default;
};
class QueryResellerAvailableQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> data{};

  QueryResellerAvailableQuotaResponseBody() {}

  explicit QueryResellerAvailableQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~QueryResellerAvailableQuotaResponseBody() = default;
};
class QueryResellerAvailableQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryResellerAvailableQuotaResponseBody> body{};

  QueryResellerAvailableQuotaResponse() {}

  explicit QueryResellerAvailableQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResellerAvailableQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResellerAvailableQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResellerAvailableQuotaResponse() = default;
};
class QueryResourcePackageInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> expiryTimeStart{};
  shared_ptr<string> expiryTimeEnd{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryResourcePackageInstancesRequest() {}

  explicit QueryResourcePackageInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (expiryTimeStart) {
      res["ExpiryTimeStart"] = boost::any(*expiryTimeStart);
    }
    if (expiryTimeEnd) {
      res["ExpiryTimeEnd"] = boost::any(*expiryTimeEnd);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ExpiryTimeStart") != m.end() && !m["ExpiryTimeStart"].empty()) {
      expiryTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeStart"]));
    }
    if (m.find("ExpiryTimeEnd") != m.end() && !m["ExpiryTimeEnd"].empty()) {
      expiryTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpiryTimeEnd"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryResourcePackageInstancesRequest() = default;
};
class QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts : public Darabonba::Model {
public:
  shared_ptr<vector<string>> product{};

  QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts() {}

  explicit QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Product"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      product = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts() = default;
};
class QueryResourcePackageInstancesResponseBodyDataInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> totalAmount{};
  shared_ptr<string> totalAmountUnit{};
  shared_ptr<string> remainingAmount{};
  shared_ptr<string> remainingAmountUnit{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expiryTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> packageType{};
  shared_ptr<string> status{};
  shared_ptr<string> deductType{};
  shared_ptr<QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts> applicableProducts{};

  QueryResourcePackageInstancesResponseBodyDataInstancesInstance() {}

  explicit QueryResourcePackageInstancesResponseBodyDataInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (totalAmount) {
      res["TotalAmount"] = boost::any(*totalAmount);
    }
    if (totalAmountUnit) {
      res["TotalAmountUnit"] = boost::any(*totalAmountUnit);
    }
    if (remainingAmount) {
      res["RemainingAmount"] = boost::any(*remainingAmount);
    }
    if (remainingAmountUnit) {
      res["RemainingAmountUnit"] = boost::any(*remainingAmountUnit);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (deductType) {
      res["DeductType"] = boost::any(*deductType);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = applicableProducts ? boost::any(applicableProducts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("TotalAmount") != m.end() && !m["TotalAmount"].empty()) {
      totalAmount = make_shared<string>(boost::any_cast<string>(m["TotalAmount"]));
    }
    if (m.find("TotalAmountUnit") != m.end() && !m["TotalAmountUnit"].empty()) {
      totalAmountUnit = make_shared<string>(boost::any_cast<string>(m["TotalAmountUnit"]));
    }
    if (m.find("RemainingAmount") != m.end() && !m["RemainingAmount"].empty()) {
      remainingAmount = make_shared<string>(boost::any_cast<string>(m["RemainingAmount"]));
    }
    if (m.find("RemainingAmountUnit") != m.end() && !m["RemainingAmountUnit"].empty()) {
      remainingAmountUnit = make_shared<string>(boost::any_cast<string>(m["RemainingAmountUnit"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<string>(boost::any_cast<string>(m["ExpiryTime"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DeductType") != m.end() && !m["DeductType"].empty()) {
      deductType = make_shared<string>(boost::any_cast<string>(m["DeductType"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicableProducts"].type()) {
        QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicableProducts"]));
        applicableProducts = make_shared<QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts>(model1);
      }
    }
  }


  virtual ~QueryResourcePackageInstancesResponseBodyDataInstancesInstance() = default;
};
class QueryResourcePackageInstancesResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<vector<QueryResourcePackageInstancesResponseBodyDataInstancesInstance>> instance{};

  QueryResourcePackageInstancesResponseBodyDataInstances() {}

  explicit QueryResourcePackageInstancesResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<QueryResourcePackageInstancesResponseBodyDataInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryResourcePackageInstancesResponseBodyDataInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<QueryResourcePackageInstancesResponseBodyDataInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~QueryResourcePackageInstancesResponseBodyDataInstances() = default;
};
class QueryResourcePackageInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};
  shared_ptr<QueryResourcePackageInstancesResponseBodyDataInstances> instances{};

  QueryResourcePackageInstancesResponseBodyData() {}

  explicit QueryResourcePackageInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        QueryResourcePackageInstancesResponseBodyDataInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<QueryResourcePackageInstancesResponseBodyDataInstances>(model1);
      }
    }
  }


  virtual ~QueryResourcePackageInstancesResponseBodyData() = default;
};
class QueryResourcePackageInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<QueryResourcePackageInstancesResponseBodyData> data{};

  QueryResourcePackageInstancesResponseBody() {}

  explicit QueryResourcePackageInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryResourcePackageInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryResourcePackageInstancesResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryResourcePackageInstancesResponseBody() = default;
};
class QueryResourcePackageInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryResourcePackageInstancesResponseBody> body{};

  QueryResourcePackageInstancesResponse() {}

  explicit QueryResourcePackageInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResourcePackageInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResourcePackageInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResourcePackageInstancesResponse() = default;
};
class QueryRIUtilizationDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> RIInstanceId{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> RICommodityCode{};
  shared_ptr<string> deductedInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryRIUtilizationDetailRequest() {}

  explicit QueryRIUtilizationDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (RIInstanceId) {
      res["RIInstanceId"] = boost::any(*RIInstanceId);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (RICommodityCode) {
      res["RICommodityCode"] = boost::any(*RICommodityCode);
    }
    if (deductedInstanceId) {
      res["DeductedInstanceId"] = boost::any(*deductedInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RIInstanceId") != m.end() && !m["RIInstanceId"].empty()) {
      RIInstanceId = make_shared<string>(boost::any_cast<string>(m["RIInstanceId"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("RICommodityCode") != m.end() && !m["RICommodityCode"].empty()) {
      RICommodityCode = make_shared<string>(boost::any_cast<string>(m["RICommodityCode"]));
    }
    if (m.find("DeductedInstanceId") != m.end() && !m["DeductedInstanceId"].empty()) {
      deductedInstanceId = make_shared<string>(boost::any_cast<string>(m["DeductedInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryRIUtilizationDetailRequest() = default;
};
class QueryRIUtilizationDetailResponseBodyDataDetailListDetailList : public Darabonba::Model {
public:
  shared_ptr<string> RIInstanceId{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> deductedInstanceId{};
  shared_ptr<string> deductedCommodityCode{};
  shared_ptr<string> deductDate{};
  shared_ptr<string> deductHours{};
  shared_ptr<string> deductedProductDetail{};
  shared_ptr<double> deductQuantity{};
  shared_ptr<double> deductFactorTotal{};

  QueryRIUtilizationDetailResponseBodyDataDetailListDetailList() {}

  explicit QueryRIUtilizationDetailResponseBodyDataDetailListDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (RIInstanceId) {
      res["RIInstanceId"] = boost::any(*RIInstanceId);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (deductedInstanceId) {
      res["DeductedInstanceId"] = boost::any(*deductedInstanceId);
    }
    if (deductedCommodityCode) {
      res["DeductedCommodityCode"] = boost::any(*deductedCommodityCode);
    }
    if (deductDate) {
      res["DeductDate"] = boost::any(*deductDate);
    }
    if (deductHours) {
      res["DeductHours"] = boost::any(*deductHours);
    }
    if (deductedProductDetail) {
      res["DeductedProductDetail"] = boost::any(*deductedProductDetail);
    }
    if (deductQuantity) {
      res["DeductQuantity"] = boost::any(*deductQuantity);
    }
    if (deductFactorTotal) {
      res["DeductFactorTotal"] = boost::any(*deductFactorTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RIInstanceId") != m.end() && !m["RIInstanceId"].empty()) {
      RIInstanceId = make_shared<string>(boost::any_cast<string>(m["RIInstanceId"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("DeductedInstanceId") != m.end() && !m["DeductedInstanceId"].empty()) {
      deductedInstanceId = make_shared<string>(boost::any_cast<string>(m["DeductedInstanceId"]));
    }
    if (m.find("DeductedCommodityCode") != m.end() && !m["DeductedCommodityCode"].empty()) {
      deductedCommodityCode = make_shared<string>(boost::any_cast<string>(m["DeductedCommodityCode"]));
    }
    if (m.find("DeductDate") != m.end() && !m["DeductDate"].empty()) {
      deductDate = make_shared<string>(boost::any_cast<string>(m["DeductDate"]));
    }
    if (m.find("DeductHours") != m.end() && !m["DeductHours"].empty()) {
      deductHours = make_shared<string>(boost::any_cast<string>(m["DeductHours"]));
    }
    if (m.find("DeductedProductDetail") != m.end() && !m["DeductedProductDetail"].empty()) {
      deductedProductDetail = make_shared<string>(boost::any_cast<string>(m["DeductedProductDetail"]));
    }
    if (m.find("DeductQuantity") != m.end() && !m["DeductQuantity"].empty()) {
      deductQuantity = make_shared<double>(boost::any_cast<double>(m["DeductQuantity"]));
    }
    if (m.find("DeductFactorTotal") != m.end() && !m["DeductFactorTotal"].empty()) {
      deductFactorTotal = make_shared<double>(boost::any_cast<double>(m["DeductFactorTotal"]));
    }
  }


  virtual ~QueryRIUtilizationDetailResponseBodyDataDetailListDetailList() = default;
};
class QueryRIUtilizationDetailResponseBodyDataDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRIUtilizationDetailResponseBodyDataDetailListDetailList>> detailList{};

  QueryRIUtilizationDetailResponseBodyDataDetailList() {}

  explicit QueryRIUtilizationDetailResponseBodyDataDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailList) {
      vector<boost::any> temp1;
      for(auto item1:*detailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailList"].type()) {
        vector<QueryRIUtilizationDetailResponseBodyDataDetailListDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRIUtilizationDetailResponseBodyDataDetailListDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailList = make_shared<vector<QueryRIUtilizationDetailResponseBodyDataDetailListDetailList>>(expect1);
      }
    }
  }


  virtual ~QueryRIUtilizationDetailResponseBodyDataDetailList() = default;
};
class QueryRIUtilizationDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryRIUtilizationDetailResponseBodyDataDetailList> detailList{};

  QueryRIUtilizationDetailResponseBodyData() {}

  explicit QueryRIUtilizationDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (detailList) {
      res["DetailList"] = detailList ? boost::any(detailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailList"].type()) {
        QueryRIUtilizationDetailResponseBodyDataDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailList"]));
        detailList = make_shared<QueryRIUtilizationDetailResponseBodyDataDetailList>(model1);
      }
    }
  }


  virtual ~QueryRIUtilizationDetailResponseBodyData() = default;
};
class QueryRIUtilizationDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryRIUtilizationDetailResponseBodyData> data{};

  QueryRIUtilizationDetailResponseBody() {}

  explicit QueryRIUtilizationDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRIUtilizationDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRIUtilizationDetailResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryRIUtilizationDetailResponseBody() = default;
};
class QueryRIUtilizationDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRIUtilizationDetailResponseBody> body{};

  QueryRIUtilizationDetailResponse() {}

  explicit QueryRIUtilizationDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRIUtilizationDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRIUtilizationDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRIUtilizationDetailResponse() = default;
};
class QuerySavingsPlansDeductLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> locale{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  QuerySavingsPlansDeductLogRequest() {}

  explicit QuerySavingsPlansDeductLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~QuerySavingsPlansDeductLogRequest() = default;
};
class QuerySavingsPlansDeductLogResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> savingsType{};
  shared_ptr<string> billModule{};
  shared_ptr<string> deductFee{};
  shared_ptr<string> deductRate{};
  shared_ptr<long> userId{};
  shared_ptr<string> deductCommodity{};
  shared_ptr<string> deductInstanceId{};
  shared_ptr<string> discountRate{};

  QuerySavingsPlansDeductLogResponseBodyDataItems() {}

  explicit QuerySavingsPlansDeductLogResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (savingsType) {
      res["SavingsType"] = boost::any(*savingsType);
    }
    if (billModule) {
      res["BillModule"] = boost::any(*billModule);
    }
    if (deductFee) {
      res["DeductFee"] = boost::any(*deductFee);
    }
    if (deductRate) {
      res["DeductRate"] = boost::any(*deductRate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (deductCommodity) {
      res["DeductCommodity"] = boost::any(*deductCommodity);
    }
    if (deductInstanceId) {
      res["DeductInstanceId"] = boost::any(*deductInstanceId);
    }
    if (discountRate) {
      res["DiscountRate"] = boost::any(*discountRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SavingsType") != m.end() && !m["SavingsType"].empty()) {
      savingsType = make_shared<string>(boost::any_cast<string>(m["SavingsType"]));
    }
    if (m.find("BillModule") != m.end() && !m["BillModule"].empty()) {
      billModule = make_shared<string>(boost::any_cast<string>(m["BillModule"]));
    }
    if (m.find("DeductFee") != m.end() && !m["DeductFee"].empty()) {
      deductFee = make_shared<string>(boost::any_cast<string>(m["DeductFee"]));
    }
    if (m.find("DeductRate") != m.end() && !m["DeductRate"].empty()) {
      deductRate = make_shared<string>(boost::any_cast<string>(m["DeductRate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("DeductCommodity") != m.end() && !m["DeductCommodity"].empty()) {
      deductCommodity = make_shared<string>(boost::any_cast<string>(m["DeductCommodity"]));
    }
    if (m.find("DeductInstanceId") != m.end() && !m["DeductInstanceId"].empty()) {
      deductInstanceId = make_shared<string>(boost::any_cast<string>(m["DeductInstanceId"]));
    }
    if (m.find("DiscountRate") != m.end() && !m["DiscountRate"].empty()) {
      discountRate = make_shared<string>(boost::any_cast<string>(m["DiscountRate"]));
    }
  }


  virtual ~QuerySavingsPlansDeductLogResponseBodyDataItems() = default;
};
class QuerySavingsPlansDeductLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<QuerySavingsPlansDeductLogResponseBodyDataItems>> items{};

  QuerySavingsPlansDeductLogResponseBodyData() {}

  explicit QuerySavingsPlansDeductLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<QuerySavingsPlansDeductLogResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySavingsPlansDeductLogResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<QuerySavingsPlansDeductLogResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~QuerySavingsPlansDeductLogResponseBodyData() = default;
};
class QuerySavingsPlansDeductLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<QuerySavingsPlansDeductLogResponseBodyData> data{};

  QuerySavingsPlansDeductLogResponseBody() {}

  explicit QuerySavingsPlansDeductLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySavingsPlansDeductLogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySavingsPlansDeductLogResponseBodyData>(model1);
      }
    }
  }


  virtual ~QuerySavingsPlansDeductLogResponseBody() = default;
};
class QuerySavingsPlansDeductLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySavingsPlansDeductLogResponseBody> body{};

  QuerySavingsPlansDeductLogResponse() {}

  explicit QuerySavingsPlansDeductLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySavingsPlansDeductLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySavingsPlansDeductLogResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySavingsPlansDeductLogResponse() = default;
};
class QuerySavingsPlansInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<string> locale{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  QuerySavingsPlansInstanceRequest() {}

  explicit QuerySavingsPlansInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~QuerySavingsPlansInstanceRequest() = default;
};
class QuerySavingsPlansInstanceResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> savingsType{};
  shared_ptr<string> instanceFamily{};
  shared_ptr<string> region{};
  shared_ptr<string> poolValue{};
  shared_ptr<string> currency{};
  shared_ptr<string> status{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> payMode{};
  shared_ptr<string> prepayFee{};
  shared_ptr<string> totalSave{};
  shared_ptr<string> utilization{};
  shared_ptr<bool> share{};

  QuerySavingsPlansInstanceResponseBodyDataItems() {}

  explicit QuerySavingsPlansInstanceResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (savingsType) {
      res["SavingsType"] = boost::any(*savingsType);
    }
    if (instanceFamily) {
      res["InstanceFamily"] = boost::any(*instanceFamily);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (poolValue) {
      res["PoolValue"] = boost::any(*poolValue);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (payMode) {
      res["PayMode"] = boost::any(*payMode);
    }
    if (prepayFee) {
      res["PrepayFee"] = boost::any(*prepayFee);
    }
    if (totalSave) {
      res["TotalSave"] = boost::any(*totalSave);
    }
    if (utilization) {
      res["Utilization"] = boost::any(*utilization);
    }
    if (share) {
      res["Share"] = boost::any(*share);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SavingsType") != m.end() && !m["SavingsType"].empty()) {
      savingsType = make_shared<string>(boost::any_cast<string>(m["SavingsType"]));
    }
    if (m.find("InstanceFamily") != m.end() && !m["InstanceFamily"].empty()) {
      instanceFamily = make_shared<string>(boost::any_cast<string>(m["InstanceFamily"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("PoolValue") != m.end() && !m["PoolValue"].empty()) {
      poolValue = make_shared<string>(boost::any_cast<string>(m["PoolValue"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PayMode") != m.end() && !m["PayMode"].empty()) {
      payMode = make_shared<string>(boost::any_cast<string>(m["PayMode"]));
    }
    if (m.find("PrepayFee") != m.end() && !m["PrepayFee"].empty()) {
      prepayFee = make_shared<string>(boost::any_cast<string>(m["PrepayFee"]));
    }
    if (m.find("TotalSave") != m.end() && !m["TotalSave"].empty()) {
      totalSave = make_shared<string>(boost::any_cast<string>(m["TotalSave"]));
    }
    if (m.find("Utilization") != m.end() && !m["Utilization"].empty()) {
      utilization = make_shared<string>(boost::any_cast<string>(m["Utilization"]));
    }
    if (m.find("Share") != m.end() && !m["Share"].empty()) {
      share = make_shared<bool>(boost::any_cast<bool>(m["Share"]));
    }
  }


  virtual ~QuerySavingsPlansInstanceResponseBodyDataItems() = default;
};
class QuerySavingsPlansInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<QuerySavingsPlansInstanceResponseBodyDataItems>> items{};

  QuerySavingsPlansInstanceResponseBodyData() {}

  explicit QuerySavingsPlansInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<QuerySavingsPlansInstanceResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySavingsPlansInstanceResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<QuerySavingsPlansInstanceResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~QuerySavingsPlansInstanceResponseBodyData() = default;
};
class QuerySavingsPlansInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<QuerySavingsPlansInstanceResponseBodyData> data{};

  QuerySavingsPlansInstanceResponseBody() {}

  explicit QuerySavingsPlansInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySavingsPlansInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySavingsPlansInstanceResponseBodyData>(model1);
      }
    }
  }


  virtual ~QuerySavingsPlansInstanceResponseBody() = default;
};
class QuerySavingsPlansInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySavingsPlansInstanceResponseBody> body{};

  QuerySavingsPlansInstanceResponse() {}

  explicit QuerySavingsPlansInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySavingsPlansInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySavingsPlansInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySavingsPlansInstanceResponse() = default;
};
class QuerySettleBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> type{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<bool> isHideZeroCharge{};
  shared_ptr<bool> isDisplayLocalCurrency{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> billOwnerId{};

  QuerySettleBillRequest() {}

  explicit QuerySettleBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (isHideZeroCharge) {
      res["IsHideZeroCharge"] = boost::any(*isHideZeroCharge);
    }
    if (isDisplayLocalCurrency) {
      res["IsDisplayLocalCurrency"] = boost::any(*isDisplayLocalCurrency);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("IsHideZeroCharge") != m.end() && !m["IsHideZeroCharge"].empty()) {
      isHideZeroCharge = make_shared<bool>(boost::any_cast<bool>(m["IsHideZeroCharge"]));
    }
    if (m.find("IsDisplayLocalCurrency") != m.end() && !m["IsDisplayLocalCurrency"].empty()) {
      isDisplayLocalCurrency = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayLocalCurrency"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
  }


  virtual ~QuerySettleBillRequest() = default;
};
class QuerySettleBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> recordID{};
  shared_ptr<string> item{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> usageStartTime{};
  shared_ptr<string> usageEndTime{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> tax{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<string> status{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> paymentTransactionID{};
  shared_ptr<string> roundDownDiscount{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};

  QuerySettleBillResponseBodyDataItemsItem() {}

  explicit QuerySettleBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (usageStartTime) {
      res["UsageStartTime"] = boost::any(*usageStartTime);
    }
    if (usageEndTime) {
      res["UsageEndTime"] = boost::any(*usageEndTime);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (paymentTransactionID) {
      res["PaymentTransactionID"] = boost::any(*paymentTransactionID);
    }
    if (roundDownDiscount) {
      res["RoundDownDiscount"] = boost::any(*roundDownDiscount);
    }
    if (subOrderId) {
      res["SubOrderId"] = boost::any(*subOrderId);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("UsageStartTime") != m.end() && !m["UsageStartTime"].empty()) {
      usageStartTime = make_shared<string>(boost::any_cast<string>(m["UsageStartTime"]));
    }
    if (m.find("UsageEndTime") != m.end() && !m["UsageEndTime"].empty()) {
      usageEndTime = make_shared<string>(boost::any_cast<string>(m["UsageEndTime"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("PaymentTransactionID") != m.end() && !m["PaymentTransactionID"].empty()) {
      paymentTransactionID = make_shared<string>(boost::any_cast<string>(m["PaymentTransactionID"]));
    }
    if (m.find("RoundDownDiscount") != m.end() && !m["RoundDownDiscount"].empty()) {
      roundDownDiscount = make_shared<string>(boost::any_cast<string>(m["RoundDownDiscount"]));
    }
    if (m.find("SubOrderId") != m.end() && !m["SubOrderId"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["SubOrderId"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~QuerySettleBillResponseBodyDataItemsItem() = default;
};
class QuerySettleBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySettleBillResponseBodyDataItemsItem>> item{};

  QuerySettleBillResponseBodyDataItems() {}

  explicit QuerySettleBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QuerySettleBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySettleBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QuerySettleBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QuerySettleBillResponseBodyDataItems() = default;
};
class QuerySettleBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> totalCount{};
  shared_ptr<QuerySettleBillResponseBodyDataItems> items{};

  QuerySettleBillResponseBodyData() {}

  explicit QuerySettleBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QuerySettleBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QuerySettleBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QuerySettleBillResponseBodyData() = default;
};
class QuerySettleBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QuerySettleBillResponseBodyData> data{};

  QuerySettleBillResponseBody() {}

  explicit QuerySettleBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySettleBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySettleBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QuerySettleBillResponseBody() = default;
};
class QuerySettleBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySettleBillResponseBody> body{};

  QuerySettleBillResponse() {}

  explicit QuerySettleBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySettleBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySettleBillResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySettleBillResponse() = default;
};
class QuerySettlementBillRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> billingCycle{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> type{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<bool> isHideZeroCharge{};

  QuerySettlementBillRequest() {}

  explicit QuerySettlementBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (isHideZeroCharge) {
      res["IsHideZeroCharge"] = boost::any(*isHideZeroCharge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("IsHideZeroCharge") != m.end() && !m["IsHideZeroCharge"].empty()) {
      isHideZeroCharge = make_shared<bool>(boost::any_cast<bool>(m["IsHideZeroCharge"]));
    }
  }


  virtual ~QuerySettlementBillRequest() = default;
};
class QuerySettlementBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> recordID{};
  shared_ptr<string> item{};
  shared_ptr<string> payerAccount{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> createTime{};
  shared_ptr<string> usageStartTime{};
  shared_ptr<string> usageEndTime{};
  shared_ptr<string> suborderID{};
  shared_ptr<string> orderID{};
  shared_ptr<string> orderType{};
  shared_ptr<string> linkedCustomerOrderID{};
  shared_ptr<string> originalOrderID{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> solutionID{};
  shared_ptr<string> solutionName{};
  shared_ptr<string> billID{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> region{};
  shared_ptr<string> config{};
  shared_ptr<string> quantity{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> chargeDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> accountDiscount{};
  shared_ptr<string> promotion{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> pretaxAmountLocal{};
  shared_ptr<double> previousBillingCycleBalance{};
  shared_ptr<double> tax{};
  shared_ptr<double> afterTaxAmount{};
  shared_ptr<string> status{};
  shared_ptr<string> clearedTime{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> mybankPaymentAmount{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> seller{};
  shared_ptr<string> invoiceNo{};

  QuerySettlementBillResponseBodyDataItemsItem() {}

  explicit QuerySettlementBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordID) {
      res["RecordID"] = boost::any(*recordID);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (payerAccount) {
      res["PayerAccount"] = boost::any(*payerAccount);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (usageStartTime) {
      res["UsageStartTime"] = boost::any(*usageStartTime);
    }
    if (usageEndTime) {
      res["UsageEndTime"] = boost::any(*usageEndTime);
    }
    if (suborderID) {
      res["SuborderID"] = boost::any(*suborderID);
    }
    if (orderID) {
      res["OrderID"] = boost::any(*orderID);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (linkedCustomerOrderID) {
      res["LinkedCustomerOrderID"] = boost::any(*linkedCustomerOrderID);
    }
    if (originalOrderID) {
      res["OriginalOrderID"] = boost::any(*originalOrderID);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (solutionID) {
      res["SolutionID"] = boost::any(*solutionID);
    }
    if (solutionName) {
      res["SolutionName"] = boost::any(*solutionName);
    }
    if (billID) {
      res["BillID"] = boost::any(*billID);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (chargeDiscount) {
      res["ChargeDiscount"] = boost::any(*chargeDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (accountDiscount) {
      res["AccountDiscount"] = boost::any(*accountDiscount);
    }
    if (promotion) {
      res["Promotion"] = boost::any(*promotion);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (previousBillingCycleBalance) {
      res["PreviousBillingCycleBalance"] = boost::any(*previousBillingCycleBalance);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (clearedTime) {
      res["ClearedTime"] = boost::any(*clearedTime);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (mybankPaymentAmount) {
      res["MybankPaymentAmount"] = boost::any(*mybankPaymentAmount);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (seller) {
      res["Seller"] = boost::any(*seller);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordID") != m.end() && !m["RecordID"].empty()) {
      recordID = make_shared<string>(boost::any_cast<string>(m["RecordID"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("PayerAccount") != m.end() && !m["PayerAccount"].empty()) {
      payerAccount = make_shared<string>(boost::any_cast<string>(m["PayerAccount"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UsageStartTime") != m.end() && !m["UsageStartTime"].empty()) {
      usageStartTime = make_shared<string>(boost::any_cast<string>(m["UsageStartTime"]));
    }
    if (m.find("UsageEndTime") != m.end() && !m["UsageEndTime"].empty()) {
      usageEndTime = make_shared<string>(boost::any_cast<string>(m["UsageEndTime"]));
    }
    if (m.find("SuborderID") != m.end() && !m["SuborderID"].empty()) {
      suborderID = make_shared<string>(boost::any_cast<string>(m["SuborderID"]));
    }
    if (m.find("OrderID") != m.end() && !m["OrderID"].empty()) {
      orderID = make_shared<string>(boost::any_cast<string>(m["OrderID"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("LinkedCustomerOrderID") != m.end() && !m["LinkedCustomerOrderID"].empty()) {
      linkedCustomerOrderID = make_shared<string>(boost::any_cast<string>(m["LinkedCustomerOrderID"]));
    }
    if (m.find("OriginalOrderID") != m.end() && !m["OriginalOrderID"].empty()) {
      originalOrderID = make_shared<string>(boost::any_cast<string>(m["OriginalOrderID"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("SolutionID") != m.end() && !m["SolutionID"].empty()) {
      solutionID = make_shared<string>(boost::any_cast<string>(m["SolutionID"]));
    }
    if (m.find("SolutionName") != m.end() && !m["SolutionName"].empty()) {
      solutionName = make_shared<string>(boost::any_cast<string>(m["SolutionName"]));
    }
    if (m.find("BillID") != m.end() && !m["BillID"].empty()) {
      billID = make_shared<string>(boost::any_cast<string>(m["BillID"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("ChargeDiscount") != m.end() && !m["ChargeDiscount"].empty()) {
      chargeDiscount = make_shared<double>(boost::any_cast<double>(m["ChargeDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("AccountDiscount") != m.end() && !m["AccountDiscount"].empty()) {
      accountDiscount = make_shared<double>(boost::any_cast<double>(m["AccountDiscount"]));
    }
    if (m.find("Promotion") != m.end() && !m["Promotion"].empty()) {
      promotion = make_shared<string>(boost::any_cast<string>(m["Promotion"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<double>(boost::any_cast<double>(m["PretaxAmountLocal"]));
    }
    if (m.find("PreviousBillingCycleBalance") != m.end() && !m["PreviousBillingCycleBalance"].empty()) {
      previousBillingCycleBalance = make_shared<double>(boost::any_cast<double>(m["PreviousBillingCycleBalance"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["Tax"]));
    }
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<double>(boost::any_cast<double>(m["AfterTaxAmount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ClearedTime") != m.end() && !m["ClearedTime"].empty()) {
      clearedTime = make_shared<string>(boost::any_cast<string>(m["ClearedTime"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("MybankPaymentAmount") != m.end() && !m["MybankPaymentAmount"].empty()) {
      mybankPaymentAmount = make_shared<double>(boost::any_cast<double>(m["MybankPaymentAmount"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("Seller") != m.end() && !m["Seller"].empty()) {
      seller = make_shared<string>(boost::any_cast<string>(m["Seller"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
  }


  virtual ~QuerySettlementBillResponseBodyDataItemsItem() = default;
};
class QuerySettlementBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySettlementBillResponseBodyDataItemsItem>> item{};

  QuerySettlementBillResponseBodyDataItems() {}

  explicit QuerySettlementBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QuerySettlementBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySettlementBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QuerySettlementBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QuerySettlementBillResponseBodyDataItems() = default;
};
class QuerySettlementBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> billingCycle{};
  shared_ptr<QuerySettlementBillResponseBodyDataItems> items{};

  QuerySettlementBillResponseBodyData() {}

  explicit QuerySettlementBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QuerySettlementBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QuerySettlementBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QuerySettlementBillResponseBodyData() = default;
};
class QuerySettlementBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QuerySettlementBillResponseBodyData> data{};

  QuerySettlementBillResponseBody() {}

  explicit QuerySettlementBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySettlementBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySettlementBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QuerySettlementBillResponseBody() = default;
};
class QuerySettlementBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySettlementBillResponseBody> body{};

  QuerySettlementBillResponse() {}

  explicit QuerySettlementBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySettlementBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySettlementBillResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySettlementBillResponse() = default;
};
class QuerySplitItemBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> billOwnerId{};

  QuerySplitItemBillRequest() {}

  explicit QuerySplitItemBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (billOwnerId) {
      res["BillOwnerId"] = boost::any(*billOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("BillOwnerId") != m.end() && !m["BillOwnerId"].empty()) {
      billOwnerId = make_shared<long>(boost::any_cast<long>(m["BillOwnerId"]));
    }
  }


  virtual ~QuerySplitItemBillRequest() = default;
};
class QuerySplitItemBillResponseBodyDataItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> billingType{};
  shared_ptr<string> costUnit{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> billingItem{};
  shared_ptr<string> listPrice{};
  shared_ptr<string> listPriceUnit{};
  shared_ptr<string> usage{};
  shared_ptr<string> usageUnit{};
  shared_ptr<string> deductedByResourcePackage{};
  shared_ptr<double> pretaxGrossAmount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<double> deductedByCoupons{};
  shared_ptr<double> pretaxAmount{};
  shared_ptr<double> deductedByCashCoupons{};
  shared_ptr<double> deductedByPrepaidCard{};
  shared_ptr<double> paymentAmount{};
  shared_ptr<double> outstandingAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> nickName{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> tag{};
  shared_ptr<string> instanceConfig{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> internetIP{};
  shared_ptr<string> intranetIP{};
  shared_ptr<string> region{};
  shared_ptr<string> zone{};
  shared_ptr<string> item{};
  shared_ptr<string> servicePeriod{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> splitItemID{};
  shared_ptr<string> splitItemName{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> servicePeriodUnit{};
  shared_ptr<string> splitCommodityCode{};
  shared_ptr<string> splitProductDetail{};
  shared_ptr<string> splitAccountID{};
  shared_ptr<string> splitAccountName{};
  shared_ptr<string> splitBillingCycle{};

  QuerySplitItemBillResponseBodyDataItemsItem() {}

  explicit QuerySplitItemBillResponseBodyDataItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (costUnit) {
      res["CostUnit"] = boost::any(*costUnit);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (billingItem) {
      res["BillingItem"] = boost::any(*billingItem);
    }
    if (listPrice) {
      res["ListPrice"] = boost::any(*listPrice);
    }
    if (listPriceUnit) {
      res["ListPriceUnit"] = boost::any(*listPriceUnit);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    if (usageUnit) {
      res["UsageUnit"] = boost::any(*usageUnit);
    }
    if (deductedByResourcePackage) {
      res["DeductedByResourcePackage"] = boost::any(*deductedByResourcePackage);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (deductedByCoupons) {
      res["DeductedByCoupons"] = boost::any(*deductedByCoupons);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (deductedByCashCoupons) {
      res["DeductedByCashCoupons"] = boost::any(*deductedByCashCoupons);
    }
    if (deductedByPrepaidCard) {
      res["DeductedByPrepaidCard"] = boost::any(*deductedByPrepaidCard);
    }
    if (paymentAmount) {
      res["PaymentAmount"] = boost::any(*paymentAmount);
    }
    if (outstandingAmount) {
      res["OutstandingAmount"] = boost::any(*outstandingAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (instanceConfig) {
      res["InstanceConfig"] = boost::any(*instanceConfig);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (internetIP) {
      res["InternetIP"] = boost::any(*internetIP);
    }
    if (intranetIP) {
      res["IntranetIP"] = boost::any(*intranetIP);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (servicePeriod) {
      res["ServicePeriod"] = boost::any(*servicePeriod);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (splitItemID) {
      res["SplitItemID"] = boost::any(*splitItemID);
    }
    if (splitItemName) {
      res["SplitItemName"] = boost::any(*splitItemName);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (servicePeriodUnit) {
      res["ServicePeriodUnit"] = boost::any(*servicePeriodUnit);
    }
    if (splitCommodityCode) {
      res["SplitCommodityCode"] = boost::any(*splitCommodityCode);
    }
    if (splitProductDetail) {
      res["SplitProductDetail"] = boost::any(*splitProductDetail);
    }
    if (splitAccountID) {
      res["SplitAccountID"] = boost::any(*splitAccountID);
    }
    if (splitAccountName) {
      res["SplitAccountName"] = boost::any(*splitAccountName);
    }
    if (splitBillingCycle) {
      res["SplitBillingCycle"] = boost::any(*splitBillingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CostUnit") != m.end() && !m["CostUnit"].empty()) {
      costUnit = make_shared<string>(boost::any_cast<string>(m["CostUnit"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("BillingItem") != m.end() && !m["BillingItem"].empty()) {
      billingItem = make_shared<string>(boost::any_cast<string>(m["BillingItem"]));
    }
    if (m.find("ListPrice") != m.end() && !m["ListPrice"].empty()) {
      listPrice = make_shared<string>(boost::any_cast<string>(m["ListPrice"]));
    }
    if (m.find("ListPriceUnit") != m.end() && !m["ListPriceUnit"].empty()) {
      listPriceUnit = make_shared<string>(boost::any_cast<string>(m["ListPriceUnit"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
    if (m.find("UsageUnit") != m.end() && !m["UsageUnit"].empty()) {
      usageUnit = make_shared<string>(boost::any_cast<string>(m["UsageUnit"]));
    }
    if (m.find("DeductedByResourcePackage") != m.end() && !m["DeductedByResourcePackage"].empty()) {
      deductedByResourcePackage = make_shared<string>(boost::any_cast<string>(m["DeductedByResourcePackage"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<double>(boost::any_cast<double>(m["PretaxGrossAmount"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["InvoiceDiscount"]));
    }
    if (m.find("DeductedByCoupons") != m.end() && !m["DeductedByCoupons"].empty()) {
      deductedByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCoupons"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<double>(boost::any_cast<double>(m["PretaxAmount"]));
    }
    if (m.find("DeductedByCashCoupons") != m.end() && !m["DeductedByCashCoupons"].empty()) {
      deductedByCashCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedByCashCoupons"]));
    }
    if (m.find("DeductedByPrepaidCard") != m.end() && !m["DeductedByPrepaidCard"].empty()) {
      deductedByPrepaidCard = make_shared<double>(boost::any_cast<double>(m["DeductedByPrepaidCard"]));
    }
    if (m.find("PaymentAmount") != m.end() && !m["PaymentAmount"].empty()) {
      paymentAmount = make_shared<double>(boost::any_cast<double>(m["PaymentAmount"]));
    }
    if (m.find("OutstandingAmount") != m.end() && !m["OutstandingAmount"].empty()) {
      outstandingAmount = make_shared<double>(boost::any_cast<double>(m["OutstandingAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("InstanceConfig") != m.end() && !m["InstanceConfig"].empty()) {
      instanceConfig = make_shared<string>(boost::any_cast<string>(m["InstanceConfig"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("InternetIP") != m.end() && !m["InternetIP"].empty()) {
      internetIP = make_shared<string>(boost::any_cast<string>(m["InternetIP"]));
    }
    if (m.find("IntranetIP") != m.end() && !m["IntranetIP"].empty()) {
      intranetIP = make_shared<string>(boost::any_cast<string>(m["IntranetIP"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("ServicePeriod") != m.end() && !m["ServicePeriod"].empty()) {
      servicePeriod = make_shared<string>(boost::any_cast<string>(m["ServicePeriod"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("SplitItemID") != m.end() && !m["SplitItemID"].empty()) {
      splitItemID = make_shared<string>(boost::any_cast<string>(m["SplitItemID"]));
    }
    if (m.find("SplitItemName") != m.end() && !m["SplitItemName"].empty()) {
      splitItemName = make_shared<string>(boost::any_cast<string>(m["SplitItemName"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ServicePeriodUnit") != m.end() && !m["ServicePeriodUnit"].empty()) {
      servicePeriodUnit = make_shared<string>(boost::any_cast<string>(m["ServicePeriodUnit"]));
    }
    if (m.find("SplitCommodityCode") != m.end() && !m["SplitCommodityCode"].empty()) {
      splitCommodityCode = make_shared<string>(boost::any_cast<string>(m["SplitCommodityCode"]));
    }
    if (m.find("SplitProductDetail") != m.end() && !m["SplitProductDetail"].empty()) {
      splitProductDetail = make_shared<string>(boost::any_cast<string>(m["SplitProductDetail"]));
    }
    if (m.find("SplitAccountID") != m.end() && !m["SplitAccountID"].empty()) {
      splitAccountID = make_shared<string>(boost::any_cast<string>(m["SplitAccountID"]));
    }
    if (m.find("SplitAccountName") != m.end() && !m["SplitAccountName"].empty()) {
      splitAccountName = make_shared<string>(boost::any_cast<string>(m["SplitAccountName"]));
    }
    if (m.find("SplitBillingCycle") != m.end() && !m["SplitBillingCycle"].empty()) {
      splitBillingCycle = make_shared<string>(boost::any_cast<string>(m["SplitBillingCycle"]));
    }
  }


  virtual ~QuerySplitItemBillResponseBodyDataItemsItem() = default;
};
class QuerySplitItemBillResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySplitItemBillResponseBodyDataItemsItem>> item{};

  QuerySplitItemBillResponseBodyDataItems() {}

  explicit QuerySplitItemBillResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<QuerySplitItemBillResponseBodyDataItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySplitItemBillResponseBodyDataItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<QuerySplitItemBillResponseBodyDataItemsItem>>(expect1);
      }
    }
  }


  virtual ~QuerySplitItemBillResponseBodyDataItems() = default;
};
class QuerySplitItemBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> accountID{};
  shared_ptr<string> accountName{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<QuerySplitItemBillResponseBodyDataItems> items{};

  QuerySplitItemBillResponseBodyData() {}

  explicit QuerySplitItemBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (accountID) {
      res["AccountID"] = boost::any(*accountID);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("AccountID") != m.end() && !m["AccountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["AccountID"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        QuerySplitItemBillResponseBodyDataItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<QuerySplitItemBillResponseBodyDataItems>(model1);
      }
    }
  }


  virtual ~QuerySplitItemBillResponseBodyData() = default;
};
class QuerySplitItemBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QuerySplitItemBillResponseBodyData> data{};

  QuerySplitItemBillResponseBody() {}

  explicit QuerySplitItemBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySplitItemBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySplitItemBillResponseBodyData>(model1);
      }
    }
  }


  virtual ~QuerySplitItemBillResponseBody() = default;
};
class QuerySplitItemBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySplitItemBillResponseBody> body{};

  QuerySplitItemBillResponse() {}

  explicit QuerySplitItemBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySplitItemBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySplitItemBillResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySplitItemBillResponse() = default;
};
class QueryUserOmsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> table{};
  shared_ptr<string> dataType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> marker{};
  shared_ptr<long> pageSize{};

  QueryUserOmsDataRequest() {}

  explicit QueryUserOmsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryUserOmsDataRequest() = default;
};
class QueryUserOmsDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<string> hostId{};
  shared_ptr<vector<map<string, string>>> omsData{};

  QueryUserOmsDataResponseBodyData() {}

  explicit QueryUserOmsDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (omsData) {
      res["OmsData"] = boost::any(*omsData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("OmsData") != m.end() && !m["OmsData"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["OmsData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OmsData"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      omsData = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~QueryUserOmsDataResponseBodyData() = default;
};
class QueryUserOmsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryUserOmsDataResponseBodyData> data{};

  QueryUserOmsDataResponseBody() {}

  explicit QueryUserOmsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryUserOmsDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryUserOmsDataResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryUserOmsDataResponseBody() = default;
};
class QueryUserOmsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryUserOmsDataResponseBody> body{};

  QueryUserOmsDataResponse() {}

  explicit QueryUserOmsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserOmsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserOmsDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserOmsDataResponse() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> renewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> productType{};
  shared_ptr<long> ownerId{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (renewPeriod) {
      res["RenewPeriod"] = boost::any(*renewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RenewPeriod") != m.end() && !m["RenewPeriod"].empty()) {
      renewPeriod = make_shared<long>(boost::any_cast<long>(m["RenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  RenewInstanceResponseBodyData() {}

  explicit RenewInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~RenewInstanceResponseBodyData() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<RenewInstanceResponseBodyData> data{};

  RenewInstanceResponseBody() {}

  explicit RenewInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RenewInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenewInstanceResponseBodyData>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
};
class RenewResourcePackageRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> effectiveDate{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};

  RenewResourcePackageRequest() {}

  explicit RenewResourcePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (effectiveDate) {
      res["EffectiveDate"] = boost::any(*effectiveDate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EffectiveDate") != m.end() && !m["EffectiveDate"].empty()) {
      effectiveDate = make_shared<string>(boost::any_cast<string>(m["EffectiveDate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~RenewResourcePackageRequest() = default;
};
class RenewResourcePackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> instanceId{};

  RenewResourcePackageResponseBodyData() {}

  explicit RenewResourcePackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RenewResourcePackageResponseBodyData() = default;
};
class RenewResourcePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<RenewResourcePackageResponseBodyData> data{};

  RenewResourcePackageResponseBody() {}

  explicit RenewResourcePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RenewResourcePackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenewResourcePackageResponseBodyData>(model1);
      }
    }
  }


  virtual ~RenewResourcePackageResponseBody() = default;
};
class RenewResourcePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewResourcePackageResponseBody> body{};

  RenewResourcePackageResponse() {}

  explicit RenewResourcePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewResourcePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewResourcePackageResponseBody>(model1);
      }
    }
  }


  virtual ~RenewResourcePackageResponse() = default;
};
class SaveUserCreditRequest : public Darabonba::Model {
public:
  shared_ptr<bool> avoidExpiration{};
  shared_ptr<bool> avoidPrepaidNotification{};
  shared_ptr<string> description{};
  shared_ptr<bool> avoidNotification{};
  shared_ptr<string> creditValue{};
  shared_ptr<bool> avoidPrepaidExpiration{};
  shared_ptr<string> operator_{};
  shared_ptr<string> creditType{};

  SaveUserCreditRequest() {}

  explicit SaveUserCreditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avoidExpiration) {
      res["AvoidExpiration"] = boost::any(*avoidExpiration);
    }
    if (avoidPrepaidNotification) {
      res["AvoidPrepaidNotification"] = boost::any(*avoidPrepaidNotification);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (avoidNotification) {
      res["AvoidNotification"] = boost::any(*avoidNotification);
    }
    if (creditValue) {
      res["CreditValue"] = boost::any(*creditValue);
    }
    if (avoidPrepaidExpiration) {
      res["AvoidPrepaidExpiration"] = boost::any(*avoidPrepaidExpiration);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (creditType) {
      res["CreditType"] = boost::any(*creditType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvoidExpiration") != m.end() && !m["AvoidExpiration"].empty()) {
      avoidExpiration = make_shared<bool>(boost::any_cast<bool>(m["AvoidExpiration"]));
    }
    if (m.find("AvoidPrepaidNotification") != m.end() && !m["AvoidPrepaidNotification"].empty()) {
      avoidPrepaidNotification = make_shared<bool>(boost::any_cast<bool>(m["AvoidPrepaidNotification"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AvoidNotification") != m.end() && !m["AvoidNotification"].empty()) {
      avoidNotification = make_shared<bool>(boost::any_cast<bool>(m["AvoidNotification"]));
    }
    if (m.find("CreditValue") != m.end() && !m["CreditValue"].empty()) {
      creditValue = make_shared<string>(boost::any_cast<string>(m["CreditValue"]));
    }
    if (m.find("AvoidPrepaidExpiration") != m.end() && !m["AvoidPrepaidExpiration"].empty()) {
      avoidPrepaidExpiration = make_shared<bool>(boost::any_cast<bool>(m["AvoidPrepaidExpiration"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("CreditType") != m.end() && !m["CreditType"].empty()) {
      creditType = make_shared<string>(boost::any_cast<string>(m["CreditType"]));
    }
  }


  virtual ~SaveUserCreditRequest() = default;
};
class SaveUserCreditResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};

  SaveUserCreditResponseBody() {}

  explicit SaveUserCreditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SaveUserCreditResponseBody() = default;
};
class SaveUserCreditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveUserCreditResponseBody> body{};

  SaveUserCreditResponse() {}

  explicit SaveUserCreditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveUserCreditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveUserCreditResponseBody>(model1);
      }
    }
  }


  virtual ~SaveUserCreditResponse() = default;
};
class SetCreditLabelActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> uid{};
  shared_ptr<string> clearCycle{};
  shared_ptr<string> creditAmount{};
  shared_ptr<string> currencyCode{};
  shared_ptr<string> dailyCycle{};
  shared_ptr<string> description{};
  shared_ptr<string> isNeedAddSettleLabel{};
  shared_ptr<string> isNeedAdjustCreditAccount{};
  shared_ptr<string> isNeedSaveNotifyRule{};
  shared_ptr<string> isNeedSetCreditAmount{};
  shared_ptr<bool> needNotice{};
  shared_ptr<bool> newCreateMode{};
  shared_ptr<string> operator_{};
  shared_ptr<string> requestId{};
  shared_ptr<string> siteCode{};
  shared_ptr<string> source{};

  SetCreditLabelActionRequest() {}

  explicit SetCreditLabelActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (clearCycle) {
      res["ClearCycle"] = boost::any(*clearCycle);
    }
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (dailyCycle) {
      res["DailyCycle"] = boost::any(*dailyCycle);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isNeedAddSettleLabel) {
      res["IsNeedAddSettleLabel"] = boost::any(*isNeedAddSettleLabel);
    }
    if (isNeedAdjustCreditAccount) {
      res["IsNeedAdjustCreditAccount"] = boost::any(*isNeedAdjustCreditAccount);
    }
    if (isNeedSaveNotifyRule) {
      res["IsNeedSaveNotifyRule"] = boost::any(*isNeedSaveNotifyRule);
    }
    if (isNeedSetCreditAmount) {
      res["IsNeedSetCreditAmount"] = boost::any(*isNeedSetCreditAmount);
    }
    if (needNotice) {
      res["NeedNotice"] = boost::any(*needNotice);
    }
    if (newCreateMode) {
      res["NewCreateMode"] = boost::any(*newCreateMode);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (siteCode) {
      res["SiteCode"] = boost::any(*siteCode);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("ClearCycle") != m.end() && !m["ClearCycle"].empty()) {
      clearCycle = make_shared<string>(boost::any_cast<string>(m["ClearCycle"]));
    }
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("DailyCycle") != m.end() && !m["DailyCycle"].empty()) {
      dailyCycle = make_shared<string>(boost::any_cast<string>(m["DailyCycle"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsNeedAddSettleLabel") != m.end() && !m["IsNeedAddSettleLabel"].empty()) {
      isNeedAddSettleLabel = make_shared<string>(boost::any_cast<string>(m["IsNeedAddSettleLabel"]));
    }
    if (m.find("IsNeedAdjustCreditAccount") != m.end() && !m["IsNeedAdjustCreditAccount"].empty()) {
      isNeedAdjustCreditAccount = make_shared<string>(boost::any_cast<string>(m["IsNeedAdjustCreditAccount"]));
    }
    if (m.find("IsNeedSaveNotifyRule") != m.end() && !m["IsNeedSaveNotifyRule"].empty()) {
      isNeedSaveNotifyRule = make_shared<string>(boost::any_cast<string>(m["IsNeedSaveNotifyRule"]));
    }
    if (m.find("IsNeedSetCreditAmount") != m.end() && !m["IsNeedSetCreditAmount"].empty()) {
      isNeedSetCreditAmount = make_shared<string>(boost::any_cast<string>(m["IsNeedSetCreditAmount"]));
    }
    if (m.find("NeedNotice") != m.end() && !m["NeedNotice"].empty()) {
      needNotice = make_shared<bool>(boost::any_cast<bool>(m["NeedNotice"]));
    }
    if (m.find("NewCreateMode") != m.end() && !m["NewCreateMode"].empty()) {
      newCreateMode = make_shared<bool>(boost::any_cast<bool>(m["NewCreateMode"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SiteCode") != m.end() && !m["SiteCode"].empty()) {
      siteCode = make_shared<string>(boost::any_cast<string>(m["SiteCode"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~SetCreditLabelActionRequest() = default;
};
class SetCreditLabelActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SetCreditLabelActionResponseBody() {}

  explicit SetCreditLabelActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetCreditLabelActionResponseBody() = default;
};
class SetCreditLabelActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetCreditLabelActionResponseBody> body{};

  SetCreditLabelActionResponse() {}

  explicit SetCreditLabelActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetCreditLabelActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetCreditLabelActionResponseBody>(model1);
      }
    }
  }


  virtual ~SetCreditLabelActionResponse() = default;
};
class SetRenewalRequest : public Darabonba::Model {
public:
  shared_ptr<long> renewalPeriod{};
  shared_ptr<string> instanceIDs{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> renewalPeriodUnit{};
  shared_ptr<string> renewalStatus{};

  SetRenewalRequest() {}

  explicit SetRenewalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (renewalPeriod) {
      res["RenewalPeriod"] = boost::any(*renewalPeriod);
    }
    if (instanceIDs) {
      res["InstanceIDs"] = boost::any(*instanceIDs);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (renewalPeriodUnit) {
      res["RenewalPeriodUnit"] = boost::any(*renewalPeriodUnit);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RenewalPeriod") != m.end() && !m["RenewalPeriod"].empty()) {
      renewalPeriod = make_shared<long>(boost::any_cast<long>(m["RenewalPeriod"]));
    }
    if (m.find("InstanceIDs") != m.end() && !m["InstanceIDs"].empty()) {
      instanceIDs = make_shared<string>(boost::any_cast<string>(m["InstanceIDs"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("RenewalPeriodUnit") != m.end() && !m["RenewalPeriodUnit"].empty()) {
      renewalPeriodUnit = make_shared<string>(boost::any_cast<string>(m["RenewalPeriodUnit"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
  }


  virtual ~SetRenewalRequest() = default;
};
class SetRenewalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  SetRenewalResponseBody() {}

  explicit SetRenewalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SetRenewalResponseBody() = default;
};
class SetRenewalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetRenewalResponseBody> body{};

  SetRenewalResponse() {}

  explicit SetRenewalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetRenewalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetRenewalResponseBody>(model1);
      }
    }
  }


  virtual ~SetRenewalResponse() = default;
};
class SetResellerUserAlarmThresholdRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> alarmType{};
  shared_ptr<string> alarmThresholds{};

  SetResellerUserAlarmThresholdRequest() {}

  explicit SetResellerUserAlarmThresholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (alarmThresholds) {
      res["AlarmThresholds"] = boost::any(*alarmThresholds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("AlarmThresholds") != m.end() && !m["AlarmThresholds"].empty()) {
      alarmThresholds = make_shared<string>(boost::any_cast<string>(m["AlarmThresholds"]));
    }
  }


  virtual ~SetResellerUserAlarmThresholdRequest() = default;
};
class SetResellerUserAlarmThresholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<bool> data{};

  SetResellerUserAlarmThresholdResponseBody() {}

  explicit SetResellerUserAlarmThresholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~SetResellerUserAlarmThresholdResponseBody() = default;
};
class SetResellerUserAlarmThresholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetResellerUserAlarmThresholdResponseBody> body{};

  SetResellerUserAlarmThresholdResponse() {}

  explicit SetResellerUserAlarmThresholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetResellerUserAlarmThresholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetResellerUserAlarmThresholdResponseBody>(model1);
      }
    }
  }


  virtual ~SetResellerUserAlarmThresholdResponse() = default;
};
class SetResellerUserQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};
  shared_ptr<string> outBizId{};

  SetResellerUserQuotaRequest() {}

  explicit SetResellerUserQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (outBizId) {
      res["OutBizId"] = boost::any(*outBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("OutBizId") != m.end() && !m["OutBizId"].empty()) {
      outBizId = make_shared<string>(boost::any_cast<string>(m["OutBizId"]));
    }
  }


  virtual ~SetResellerUserQuotaRequest() = default;
};
class SetResellerUserQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<bool> data{};

  SetResellerUserQuotaResponseBody() {}

  explicit SetResellerUserQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~SetResellerUserQuotaResponseBody() = default;
};
class SetResellerUserQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetResellerUserQuotaResponseBody> body{};

  SetResellerUserQuotaResponse() {}

  explicit SetResellerUserQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetResellerUserQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetResellerUserQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~SetResellerUserQuotaResponse() = default;
};
class SetResellerUserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> status{};
  shared_ptr<string> businessType{};

  SetResellerUserStatusRequest() {}

  explicit SetResellerUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
  }


  virtual ~SetResellerUserStatusRequest() = default;
};
class SetResellerUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<bool> data{};

  SetResellerUserStatusResponseBody() {}

  explicit SetResellerUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~SetResellerUserStatusResponseBody() = default;
};
class SetResellerUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetResellerUserStatusResponseBody> body{};

  SetResellerUserStatusResponse() {}

  explicit SetResellerUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetResellerUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetResellerUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetResellerUserStatusResponse() = default;
};
class SubscribeBillToOSSRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscribeBucket{};
  shared_ptr<string> subscribeType{};
  shared_ptr<string> multAccountRelSubscribe{};
  shared_ptr<long> bucketOwnerId{};

  SubscribeBillToOSSRequest() {}

  explicit SubscribeBillToOSSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscribeBucket) {
      res["SubscribeBucket"] = boost::any(*subscribeBucket);
    }
    if (subscribeType) {
      res["SubscribeType"] = boost::any(*subscribeType);
    }
    if (multAccountRelSubscribe) {
      res["MultAccountRelSubscribe"] = boost::any(*multAccountRelSubscribe);
    }
    if (bucketOwnerId) {
      res["BucketOwnerId"] = boost::any(*bucketOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscribeBucket") != m.end() && !m["SubscribeBucket"].empty()) {
      subscribeBucket = make_shared<string>(boost::any_cast<string>(m["SubscribeBucket"]));
    }
    if (m.find("SubscribeType") != m.end() && !m["SubscribeType"].empty()) {
      subscribeType = make_shared<string>(boost::any_cast<string>(m["SubscribeType"]));
    }
    if (m.find("MultAccountRelSubscribe") != m.end() && !m["MultAccountRelSubscribe"].empty()) {
      multAccountRelSubscribe = make_shared<string>(boost::any_cast<string>(m["MultAccountRelSubscribe"]));
    }
    if (m.find("BucketOwnerId") != m.end() && !m["BucketOwnerId"].empty()) {
      bucketOwnerId = make_shared<long>(boost::any_cast<long>(m["BucketOwnerId"]));
    }
  }


  virtual ~SubscribeBillToOSSRequest() = default;
};
class SubscribeBillToOSSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  SubscribeBillToOSSResponseBody() {}

  explicit SubscribeBillToOSSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SubscribeBillToOSSResponseBody() = default;
};
class SubscribeBillToOSSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubscribeBillToOSSResponseBody> body{};

  SubscribeBillToOSSResponse() {}

  explicit SubscribeBillToOSSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubscribeBillToOSSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubscribeBillToOSSResponseBody>(model1);
      }
    }
  }


  virtual ~SubscribeBillToOSSResponse() = default;
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
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> data{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnsubscribeBillToOSSRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscribeType{};
  shared_ptr<string> multAccountRelSubscribe{};

  UnsubscribeBillToOSSRequest() {}

  explicit UnsubscribeBillToOSSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscribeType) {
      res["SubscribeType"] = boost::any(*subscribeType);
    }
    if (multAccountRelSubscribe) {
      res["MultAccountRelSubscribe"] = boost::any(*multAccountRelSubscribe);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscribeType") != m.end() && !m["SubscribeType"].empty()) {
      subscribeType = make_shared<string>(boost::any_cast<string>(m["SubscribeType"]));
    }
    if (m.find("MultAccountRelSubscribe") != m.end() && !m["MultAccountRelSubscribe"].empty()) {
      multAccountRelSubscribe = make_shared<string>(boost::any_cast<string>(m["MultAccountRelSubscribe"]));
    }
  }


  virtual ~UnsubscribeBillToOSSRequest() = default;
};
class UnsubscribeBillToOSSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  UnsubscribeBillToOSSResponseBody() {}

  explicit UnsubscribeBillToOSSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UnsubscribeBillToOSSResponseBody() = default;
};
class UnsubscribeBillToOSSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnsubscribeBillToOSSResponseBody> body{};

  UnsubscribeBillToOSSResponse() {}

  explicit UnsubscribeBillToOSSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnsubscribeBillToOSSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnsubscribeBillToOSSResponseBody>(model1);
      }
    }
  }


  virtual ~UnsubscribeBillToOSSResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};
  shared_ptr<bool> all{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> data{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpgradeResourcePackageRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> effectiveDate{};
  shared_ptr<string> specification{};

  UpgradeResourcePackageRequest() {}

  explicit UpgradeResourcePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (effectiveDate) {
      res["EffectiveDate"] = boost::any(*effectiveDate);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EffectiveDate") != m.end() && !m["EffectiveDate"].empty()) {
      effectiveDate = make_shared<string>(boost::any_cast<string>(m["EffectiveDate"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
  }


  virtual ~UpgradeResourcePackageRequest() = default;
};
class UpgradeResourcePackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> instanceId{};

  UpgradeResourcePackageResponseBodyData() {}

  explicit UpgradeResourcePackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpgradeResourcePackageResponseBodyData() = default;
};
class UpgradeResourcePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<UpgradeResourcePackageResponseBodyData> data{};

  UpgradeResourcePackageResponseBody() {}

  explicit UpgradeResourcePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpgradeResourcePackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpgradeResourcePackageResponseBodyData>(model1);
      }
    }
  }


  virtual ~UpgradeResourcePackageResponseBody() = default;
};
class UpgradeResourcePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeResourcePackageResponseBody> body{};

  UpgradeResourcePackageResponse() {}

  explicit UpgradeResourcePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeResourcePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeResourcePackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeResourcePackageResponse() = default;
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
  AllocateCostUnitResourceResponse allocateCostUnitResourceWithOptions(shared_ptr<AllocateCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateCostUnitResourceResponse allocateCostUnitResource(shared_ptr<AllocateCostUnitResourceRequest> request);
  ApplyInvoiceResponse applyInvoiceWithOptions(shared_ptr<ApplyInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyInvoiceResponse applyInvoice(shared_ptr<ApplyInvoiceRequest> request);
  CancelOrderResponse cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderResponse cancelOrder(shared_ptr<CancelOrderRequest> request);
  ChangeResellerConsumeAmountResponse changeResellerConsumeAmountWithOptions(shared_ptr<ChangeResellerConsumeAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResellerConsumeAmountResponse changeResellerConsumeAmount(shared_ptr<ChangeResellerConsumeAmountRequest> request);
  ConvertChargeTypeResponse convertChargeTypeWithOptions(shared_ptr<ConvertChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertChargeTypeResponse convertChargeType(shared_ptr<ConvertChargeTypeRequest> request);
  CreateAgAccountResponse createAgAccountWithOptions(shared_ptr<CreateAgAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAgAccountResponse createAgAccount(shared_ptr<CreateAgAccountRequest> request);
  CreateCostUnitResponse createCostUnitWithOptions(shared_ptr<CreateCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCostUnitResponse createCostUnit(shared_ptr<CreateCostUnitRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateResellerUserQuotaResponse createResellerUserQuotaWithOptions(shared_ptr<CreateResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResellerUserQuotaResponse createResellerUserQuota(shared_ptr<CreateResellerUserQuotaRequest> request);
  CreateResourcePackageResponse createResourcePackageWithOptions(shared_ptr<CreateResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourcePackageResponse createResourcePackage(shared_ptr<CreateResourcePackageRequest> request);
  DeleteCostUnitResponse deleteCostUnitWithOptions(shared_ptr<DeleteCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCostUnitResponse deleteCostUnit(shared_ptr<DeleteCostUnitRequest> request);
  DescribePricingModuleResponse describePricingModuleWithOptions(shared_ptr<DescribePricingModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePricingModuleResponse describePricingModule(shared_ptr<DescribePricingModuleRequest> request);
  DescribeResourcePackageProductResponse describeResourcePackageProductWithOptions(shared_ptr<DescribeResourcePackageProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourcePackageProductResponse describeResourcePackageProduct(shared_ptr<DescribeResourcePackageProductRequest> request);
  DescribeSplitItemBillResponse describeSplitItemBillWithOptions(shared_ptr<DescribeSplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSplitItemBillResponse describeSplitItemBill(shared_ptr<DescribeSplitItemBillRequest> request);
  EnableBillGenerationResponse enableBillGenerationWithOptions(shared_ptr<EnableBillGenerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableBillGenerationResponse enableBillGeneration(shared_ptr<EnableBillGenerationRequest> request);
  GetCustomerAccountInfoResponse getCustomerAccountInfoWithOptions(shared_ptr<GetCustomerAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerAccountInfoResponse getCustomerAccountInfo(shared_ptr<GetCustomerAccountInfoRequest> request);
  GetCustomerListResponse getCustomerListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerListResponse getCustomerList();
  GetOrderDetailResponse getOrderDetailWithOptions(shared_ptr<GetOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderDetailResponse getOrderDetail(shared_ptr<GetOrderDetailRequest> request);
  GetPayAsYouGoPriceResponse getPayAsYouGoPriceWithOptions(shared_ptr<GetPayAsYouGoPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPayAsYouGoPriceResponse getPayAsYouGoPrice(shared_ptr<GetPayAsYouGoPriceRequest> request);
  GetResourcePackagePriceResponse getResourcePackagePriceWithOptions(shared_ptr<GetResourcePackagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcePackagePriceResponse getResourcePackagePrice(shared_ptr<GetResourcePackagePriceRequest> request);
  GetSubscriptionPriceResponse getSubscriptionPriceWithOptions(shared_ptr<GetSubscriptionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionPriceResponse getSubscriptionPrice(shared_ptr<GetSubscriptionPriceRequest> request);
  ModifyCostUnitResponse modifyCostUnitWithOptions(shared_ptr<ModifyCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCostUnitResponse modifyCostUnit(shared_ptr<ModifyCostUnitRequest> request);
  ModifyInstanceResponse modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceResponse modifyInstance(shared_ptr<ModifyInstanceRequest> request);
  QueryAccountBalanceResponse queryAccountBalanceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAccountBalanceResponse queryAccountBalance();
  QueryAccountBillResponse queryAccountBillWithOptions(shared_ptr<QueryAccountBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAccountBillResponse queryAccountBill(shared_ptr<QueryAccountBillRequest> request);
  QueryAccountTransactionDetailsResponse queryAccountTransactionDetailsWithOptions(shared_ptr<QueryAccountTransactionDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAccountTransactionDetailsResponse queryAccountTransactionDetails(shared_ptr<QueryAccountTransactionDetailsRequest> request);
  QueryAccountTransactionsResponse queryAccountTransactionsWithOptions(shared_ptr<QueryAccountTransactionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAccountTransactionsResponse queryAccountTransactions(shared_ptr<QueryAccountTransactionsRequest> request);
  QueryAvailableInstancesResponse queryAvailableInstancesWithOptions(shared_ptr<QueryAvailableInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvailableInstancesResponse queryAvailableInstances(shared_ptr<QueryAvailableInstancesRequest> request);
  QueryBillResponse queryBillWithOptions(shared_ptr<QueryBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBillResponse queryBill(shared_ptr<QueryBillRequest> request);
  QueryBillOverviewResponse queryBillOverviewWithOptions(shared_ptr<QueryBillOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBillOverviewResponse queryBillOverview(shared_ptr<QueryBillOverviewRequest> request);
  QueryBillToOSSSubscriptionResponse queryBillToOSSSubscriptionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBillToOSSSubscriptionResponse queryBillToOSSSubscription();
  QueryCashCouponsResponse queryCashCouponsWithOptions(shared_ptr<QueryCashCouponsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCashCouponsResponse queryCashCoupons(shared_ptr<QueryCashCouponsRequest> request);
  QueryCostUnitResponse queryCostUnitWithOptions(shared_ptr<QueryCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCostUnitResponse queryCostUnit(shared_ptr<QueryCostUnitRequest> request);
  QueryCostUnitResourceResponse queryCostUnitResourceWithOptions(shared_ptr<QueryCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCostUnitResourceResponse queryCostUnitResource(shared_ptr<QueryCostUnitResourceRequest> request);
  QueryCustomerAddressListResponse queryCustomerAddressListWithOptions(shared_ptr<QueryCustomerAddressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCustomerAddressListResponse queryCustomerAddressList(shared_ptr<QueryCustomerAddressListRequest> request);
  QueryEvaluateListResponse queryEvaluateListWithOptions(shared_ptr<QueryEvaluateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEvaluateListResponse queryEvaluateList(shared_ptr<QueryEvaluateListRequest> request);
  QueryFinancialAccountInfoResponse queryFinancialAccountInfoWithOptions(shared_ptr<QueryFinancialAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFinancialAccountInfoResponse queryFinancialAccountInfo(shared_ptr<QueryFinancialAccountInfoRequest> request);
  QueryInstanceBillResponse queryInstanceBillWithOptions(shared_ptr<QueryInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInstanceBillResponse queryInstanceBill(shared_ptr<QueryInstanceBillRequest> request);
  QueryInstanceByTagResponse queryInstanceByTagWithOptions(shared_ptr<QueryInstanceByTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInstanceByTagResponse queryInstanceByTag(shared_ptr<QueryInstanceByTagRequest> request);
  QueryInstanceGaapCostResponse queryInstanceGaapCostWithOptions(shared_ptr<QueryInstanceGaapCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInstanceGaapCostResponse queryInstanceGaapCost(shared_ptr<QueryInstanceGaapCostRequest> request);
  QueryInvoicingCustomerListResponse queryInvoicingCustomerListWithOptions(shared_ptr<QueryInvoicingCustomerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInvoicingCustomerListResponse queryInvoicingCustomerList(shared_ptr<QueryInvoicingCustomerListRequest> request);
  QueryMonthlyBillResponse queryMonthlyBillWithOptions(shared_ptr<QueryMonthlyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonthlyBillResponse queryMonthlyBill(shared_ptr<QueryMonthlyBillRequest> request);
  QueryMonthlyInstanceConsumptionResponse queryMonthlyInstanceConsumptionWithOptions(shared_ptr<QueryMonthlyInstanceConsumptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonthlyInstanceConsumptionResponse queryMonthlyInstanceConsumption(shared_ptr<QueryMonthlyInstanceConsumptionRequest> request);
  QueryOrdersResponse queryOrdersWithOptions(shared_ptr<QueryOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrdersResponse queryOrders(shared_ptr<QueryOrdersRequest> request);
  QueryPermissionListResponse queryPermissionListWithOptions(shared_ptr<QueryPermissionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPermissionListResponse queryPermissionList(shared_ptr<QueryPermissionListRequest> request);
  QueryPrepaidCardsResponse queryPrepaidCardsWithOptions(shared_ptr<QueryPrepaidCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPrepaidCardsResponse queryPrepaidCards(shared_ptr<QueryPrepaidCardsRequest> request);
  QueryProductListResponse queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProductListResponse queryProductList(shared_ptr<QueryProductListRequest> request);
  QueryRedeemResponse queryRedeemWithOptions(shared_ptr<QueryRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRedeemResponse queryRedeem(shared_ptr<QueryRedeemRequest> request);
  QueryRelationListResponse queryRelationListWithOptions(shared_ptr<QueryRelationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRelationListResponse queryRelationList(shared_ptr<QueryRelationListRequest> request);
  QueryResellerAvailableQuotaResponse queryResellerAvailableQuotaWithOptions(shared_ptr<QueryResellerAvailableQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResellerAvailableQuotaResponse queryResellerAvailableQuota(shared_ptr<QueryResellerAvailableQuotaRequest> request);
  QueryResourcePackageInstancesResponse queryResourcePackageInstancesWithOptions(shared_ptr<QueryResourcePackageInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResourcePackageInstancesResponse queryResourcePackageInstances(shared_ptr<QueryResourcePackageInstancesRequest> request);
  QueryRIUtilizationDetailResponse queryRIUtilizationDetailWithOptions(shared_ptr<QueryRIUtilizationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRIUtilizationDetailResponse queryRIUtilizationDetail(shared_ptr<QueryRIUtilizationDetailRequest> request);
  QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLogWithOptions(shared_ptr<QuerySavingsPlansDeductLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLog(shared_ptr<QuerySavingsPlansDeductLogRequest> request);
  QuerySavingsPlansInstanceResponse querySavingsPlansInstanceWithOptions(shared_ptr<QuerySavingsPlansInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySavingsPlansInstanceResponse querySavingsPlansInstance(shared_ptr<QuerySavingsPlansInstanceRequest> request);
  QuerySettleBillResponse querySettleBillWithOptions(shared_ptr<QuerySettleBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySettleBillResponse querySettleBill(shared_ptr<QuerySettleBillRequest> request);
  QuerySettlementBillResponse querySettlementBillWithOptions(shared_ptr<QuerySettlementBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySettlementBillResponse querySettlementBill(shared_ptr<QuerySettlementBillRequest> request);
  QuerySplitItemBillResponse querySplitItemBillWithOptions(shared_ptr<QuerySplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySplitItemBillResponse querySplitItemBill(shared_ptr<QuerySplitItemBillRequest> request);
  QueryUserOmsDataResponse queryUserOmsDataWithOptions(shared_ptr<QueryUserOmsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserOmsDataResponse queryUserOmsData(shared_ptr<QueryUserOmsDataRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  RenewResourcePackageResponse renewResourcePackageWithOptions(shared_ptr<RenewResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewResourcePackageResponse renewResourcePackage(shared_ptr<RenewResourcePackageRequest> request);
  SaveUserCreditResponse saveUserCreditWithOptions(shared_ptr<SaveUserCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveUserCreditResponse saveUserCredit(shared_ptr<SaveUserCreditRequest> request);
  SetCreditLabelActionResponse setCreditLabelActionWithOptions(shared_ptr<SetCreditLabelActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetCreditLabelActionResponse setCreditLabelAction(shared_ptr<SetCreditLabelActionRequest> request);
  SetRenewalResponse setRenewalWithOptions(shared_ptr<SetRenewalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetRenewalResponse setRenewal(shared_ptr<SetRenewalRequest> request);
  SetResellerUserAlarmThresholdResponse setResellerUserAlarmThresholdWithOptions(shared_ptr<SetResellerUserAlarmThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetResellerUserAlarmThresholdResponse setResellerUserAlarmThreshold(shared_ptr<SetResellerUserAlarmThresholdRequest> request);
  SetResellerUserQuotaResponse setResellerUserQuotaWithOptions(shared_ptr<SetResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetResellerUserQuotaResponse setResellerUserQuota(shared_ptr<SetResellerUserQuotaRequest> request);
  SetResellerUserStatusResponse setResellerUserStatusWithOptions(shared_ptr<SetResellerUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetResellerUserStatusResponse setResellerUserStatus(shared_ptr<SetResellerUserStatusRequest> request);
  SubscribeBillToOSSResponse subscribeBillToOSSWithOptions(shared_ptr<SubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubscribeBillToOSSResponse subscribeBillToOSS(shared_ptr<SubscribeBillToOSSRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnsubscribeBillToOSSResponse unsubscribeBillToOSSWithOptions(shared_ptr<UnsubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnsubscribeBillToOSSResponse unsubscribeBillToOSS(shared_ptr<UnsubscribeBillToOSSRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeResourcePackageResponse upgradeResourcePackageWithOptions(shared_ptr<UpgradeResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeResourcePackageResponse upgradeResourcePackage(shared_ptr<UpgradeResourcePackageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BssOpenApi20171214

#endif
