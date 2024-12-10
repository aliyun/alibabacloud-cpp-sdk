// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSSP20161228_H_
#define ALIBABACLOUD_MSSP20161228_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mssp20161228 {
class CreateServiceWorkOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> customerId{};
  shared_ptr<string> durationDay{};
  shared_ptr<string> isAttachment{};
  shared_ptr<string> isWorkOrderNotify{};
  shared_ptr<string> notifyDay{};
  shared_ptr<long> notifyId{};
  shared_ptr<string> operateRemark{};
  shared_ptr<string> operateType{};
  shared_ptr<string> operator_{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> workOrderDetail{};
  shared_ptr<string> workOrderName{};
  shared_ptr<string> workOrderSource{};
  shared_ptr<string> workOrderStatus{};
  shared_ptr<string> workOrderType{};

  CreateServiceWorkOrderRequest() {}

  explicit CreateServiceWorkOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (durationDay) {
      res["DurationDay"] = boost::any(*durationDay);
    }
    if (isAttachment) {
      res["IsAttachment"] = boost::any(*isAttachment);
    }
    if (isWorkOrderNotify) {
      res["IsWorkOrderNotify"] = boost::any(*isWorkOrderNotify);
    }
    if (notifyDay) {
      res["NotifyDay"] = boost::any(*notifyDay);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (operateRemark) {
      res["OperateRemark"] = boost::any(*operateRemark);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (workOrderDetail) {
      res["WorkOrderDetail"] = boost::any(*workOrderDetail);
    }
    if (workOrderName) {
      res["WorkOrderName"] = boost::any(*workOrderName);
    }
    if (workOrderSource) {
      res["WorkOrderSource"] = boost::any(*workOrderSource);
    }
    if (workOrderStatus) {
      res["WorkOrderStatus"] = boost::any(*workOrderStatus);
    }
    if (workOrderType) {
      res["WorkOrderType"] = boost::any(*workOrderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("DurationDay") != m.end() && !m["DurationDay"].empty()) {
      durationDay = make_shared<string>(boost::any_cast<string>(m["DurationDay"]));
    }
    if (m.find("IsAttachment") != m.end() && !m["IsAttachment"].empty()) {
      isAttachment = make_shared<string>(boost::any_cast<string>(m["IsAttachment"]));
    }
    if (m.find("IsWorkOrderNotify") != m.end() && !m["IsWorkOrderNotify"].empty()) {
      isWorkOrderNotify = make_shared<string>(boost::any_cast<string>(m["IsWorkOrderNotify"]));
    }
    if (m.find("NotifyDay") != m.end() && !m["NotifyDay"].empty()) {
      notifyDay = make_shared<string>(boost::any_cast<string>(m["NotifyDay"]));
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<long>(boost::any_cast<long>(m["NotifyId"]));
    }
    if (m.find("OperateRemark") != m.end() && !m["OperateRemark"].empty()) {
      operateRemark = make_shared<string>(boost::any_cast<string>(m["OperateRemark"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("WorkOrderDetail") != m.end() && !m["WorkOrderDetail"].empty()) {
      workOrderDetail = make_shared<string>(boost::any_cast<string>(m["WorkOrderDetail"]));
    }
    if (m.find("WorkOrderName") != m.end() && !m["WorkOrderName"].empty()) {
      workOrderName = make_shared<string>(boost::any_cast<string>(m["WorkOrderName"]));
    }
    if (m.find("WorkOrderSource") != m.end() && !m["WorkOrderSource"].empty()) {
      workOrderSource = make_shared<string>(boost::any_cast<string>(m["WorkOrderSource"]));
    }
    if (m.find("WorkOrderStatus") != m.end() && !m["WorkOrderStatus"].empty()) {
      workOrderStatus = make_shared<string>(boost::any_cast<string>(m["WorkOrderStatus"]));
    }
    if (m.find("WorkOrderType") != m.end() && !m["WorkOrderType"].empty()) {
      workOrderType = make_shared<string>(boost::any_cast<string>(m["WorkOrderType"]));
    }
  }


  virtual ~CreateServiceWorkOrderRequest() = default;
};
class CreateServiceWorkOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completeTime{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> customerId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> workOrderDetail{};
  shared_ptr<string> workOrderName{};
  shared_ptr<string> workOrderSource{};
  shared_ptr<string> workOrderStatus{};
  shared_ptr<string> workOrderType{};

  CreateServiceWorkOrderResponseBodyData() {}

  explicit CreateServiceWorkOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (workOrderDetail) {
      res["WorkOrderDetail"] = boost::any(*workOrderDetail);
    }
    if (workOrderName) {
      res["WorkOrderName"] = boost::any(*workOrderName);
    }
    if (workOrderSource) {
      res["WorkOrderSource"] = boost::any(*workOrderSource);
    }
    if (workOrderStatus) {
      res["WorkOrderStatus"] = boost::any(*workOrderStatus);
    }
    if (workOrderType) {
      res["WorkOrderType"] = boost::any(*workOrderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("WorkOrderDetail") != m.end() && !m["WorkOrderDetail"].empty()) {
      workOrderDetail = make_shared<string>(boost::any_cast<string>(m["WorkOrderDetail"]));
    }
    if (m.find("WorkOrderName") != m.end() && !m["WorkOrderName"].empty()) {
      workOrderName = make_shared<string>(boost::any_cast<string>(m["WorkOrderName"]));
    }
    if (m.find("WorkOrderSource") != m.end() && !m["WorkOrderSource"].empty()) {
      workOrderSource = make_shared<string>(boost::any_cast<string>(m["WorkOrderSource"]));
    }
    if (m.find("WorkOrderStatus") != m.end() && !m["WorkOrderStatus"].empty()) {
      workOrderStatus = make_shared<string>(boost::any_cast<string>(m["WorkOrderStatus"]));
    }
    if (m.find("WorkOrderType") != m.end() && !m["WorkOrderType"].empty()) {
      workOrderType = make_shared<string>(boost::any_cast<string>(m["WorkOrderType"]));
    }
  }


  virtual ~CreateServiceWorkOrderResponseBodyData() = default;
};
class CreateServiceWorkOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateServiceWorkOrderResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateServiceWorkOrderResponseBody() {}

  explicit CreateServiceWorkOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceWorkOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateServiceWorkOrderResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateServiceWorkOrderResponseBody() = default;
};
class CreateServiceWorkOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceWorkOrderResponseBody> body{};

  CreateServiceWorkOrderResponse() {}

  explicit CreateServiceWorkOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceWorkOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceWorkOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceWorkOrderResponse() = default;
};
class DisposeServiceWorkOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> attachmentName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> forwardOwnerId{};
  shared_ptr<long> id{};
  shared_ptr<string> isAttachment{};
  shared_ptr<string> isWorkOrderNotify{};
  shared_ptr<long> notifyId{};
  shared_ptr<string> operateRemark{};
  shared_ptr<string> operateType{};
  shared_ptr<string> operator_{};
  shared_ptr<long> startTime{};
  shared_ptr<string> upgradeOwnerId{};
  shared_ptr<string> workOrderDetail{};
  shared_ptr<string> workOrderName{};
  shared_ptr<string> workOrderStatus{};

  DisposeServiceWorkOrderRequest() {}

  explicit DisposeServiceWorkOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (forwardOwnerId) {
      res["ForwardOwnerId"] = boost::any(*forwardOwnerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isAttachment) {
      res["IsAttachment"] = boost::any(*isAttachment);
    }
    if (isWorkOrderNotify) {
      res["IsWorkOrderNotify"] = boost::any(*isWorkOrderNotify);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (operateRemark) {
      res["OperateRemark"] = boost::any(*operateRemark);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (upgradeOwnerId) {
      res["UpgradeOwnerId"] = boost::any(*upgradeOwnerId);
    }
    if (workOrderDetail) {
      res["WorkOrderDetail"] = boost::any(*workOrderDetail);
    }
    if (workOrderName) {
      res["WorkOrderName"] = boost::any(*workOrderName);
    }
    if (workOrderStatus) {
      res["WorkOrderStatus"] = boost::any(*workOrderStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ForwardOwnerId") != m.end() && !m["ForwardOwnerId"].empty()) {
      forwardOwnerId = make_shared<string>(boost::any_cast<string>(m["ForwardOwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsAttachment") != m.end() && !m["IsAttachment"].empty()) {
      isAttachment = make_shared<string>(boost::any_cast<string>(m["IsAttachment"]));
    }
    if (m.find("IsWorkOrderNotify") != m.end() && !m["IsWorkOrderNotify"].empty()) {
      isWorkOrderNotify = make_shared<string>(boost::any_cast<string>(m["IsWorkOrderNotify"]));
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<long>(boost::any_cast<long>(m["NotifyId"]));
    }
    if (m.find("OperateRemark") != m.end() && !m["OperateRemark"].empty()) {
      operateRemark = make_shared<string>(boost::any_cast<string>(m["OperateRemark"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UpgradeOwnerId") != m.end() && !m["UpgradeOwnerId"].empty()) {
      upgradeOwnerId = make_shared<string>(boost::any_cast<string>(m["UpgradeOwnerId"]));
    }
    if (m.find("WorkOrderDetail") != m.end() && !m["WorkOrderDetail"].empty()) {
      workOrderDetail = make_shared<string>(boost::any_cast<string>(m["WorkOrderDetail"]));
    }
    if (m.find("WorkOrderName") != m.end() && !m["WorkOrderName"].empty()) {
      workOrderName = make_shared<string>(boost::any_cast<string>(m["WorkOrderName"]));
    }
    if (m.find("WorkOrderStatus") != m.end() && !m["WorkOrderStatus"].empty()) {
      workOrderStatus = make_shared<string>(boost::any_cast<string>(m["WorkOrderStatus"]));
    }
  }


  virtual ~DisposeServiceWorkOrderRequest() = default;
};
class DisposeServiceWorkOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisposeServiceWorkOrderResponseBody() {}

  explicit DisposeServiceWorkOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DisposeServiceWorkOrderResponseBody() = default;
};
class DisposeServiceWorkOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisposeServiceWorkOrderResponseBody> body{};

  DisposeServiceWorkOrderResponse() {}

  explicit DisposeServiceWorkOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisposeServiceWorkOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisposeServiceWorkOrderResponseBody>(model1);
      }
    }
  }


  virtual ~DisposeServiceWorkOrderResponse() = default;
};
class DisposeWorkTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> optRemark{};
  shared_ptr<long> status{};
  shared_ptr<string> taskIds{};

  DisposeWorkTaskRequest() {}

  explicit DisposeWorkTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (optRemark) {
      res["OptRemark"] = boost::any(*optRemark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OptRemark") != m.end() && !m["OptRemark"].empty()) {
      optRemark = make_shared<string>(boost::any_cast<string>(m["OptRemark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      taskIds = make_shared<string>(boost::any_cast<string>(m["TaskIds"]));
    }
  }


  virtual ~DisposeWorkTaskRequest() = default;
};
class DisposeWorkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisposeWorkTaskResponseBody() {}

  explicit DisposeWorkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DisposeWorkTaskResponseBody() = default;
};
class DisposeWorkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisposeWorkTaskResponseBody> body{};

  DisposeWorkTaskResponse() {}

  explicit DisposeWorkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisposeWorkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisposeWorkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DisposeWorkTaskResponse() = default;
};
class GetAlarmDetailByIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetAlarmDetailByIdRequest() {}

  explicit GetAlarmDetailByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAlarmDetailByIdRequest() = default;
};
class GetAlarmDetailByIdResponseBodyDataEventDetails : public Darabonba::Model {
public:
  shared_ptr<string> nameDisplay{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<string> valueDisplay{};

  GetAlarmDetailByIdResponseBodyDataEventDetails() {}

  explicit GetAlarmDetailByIdResponseBodyDataEventDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nameDisplay) {
      res["NameDisplay"] = boost::any(*nameDisplay);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueDisplay) {
      res["ValueDisplay"] = boost::any(*valueDisplay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NameDisplay") != m.end() && !m["NameDisplay"].empty()) {
      nameDisplay = make_shared<string>(boost::any_cast<string>(m["NameDisplay"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueDisplay") != m.end() && !m["ValueDisplay"].empty()) {
      valueDisplay = make_shared<string>(boost::any_cast<string>(m["ValueDisplay"]));
    }
  }


  virtual ~GetAlarmDetailByIdResponseBodyDataEventDetails() = default;
};
class GetAlarmDetailByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmEventType{};
  shared_ptr<string> alarmEventTypeDisplay{};
  shared_ptr<long> alarmId{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmSource{};
  shared_ptr<string> alarmTime{};
  shared_ptr<string> analysisResult{};
  shared_ptr<bool> containHwMode{};
  shared_ptr<string> dealTime{};
  shared_ptr<string> desc{};
  shared_ptr<vector<GetAlarmDetailByIdResponseBodyDataEventDetails>> eventDetails{};
  shared_ptr<string> eventLevel{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> occurrenceTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> tacticDisplayName{};

  GetAlarmDetailByIdResponseBodyData() {}

  explicit GetAlarmDetailByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEventType) {
      res["AlarmEventType"] = boost::any(*alarmEventType);
    }
    if (alarmEventTypeDisplay) {
      res["AlarmEventTypeDisplay"] = boost::any(*alarmEventTypeDisplay);
    }
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmSource) {
      res["AlarmSource"] = boost::any(*alarmSource);
    }
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    if (analysisResult) {
      res["AnalysisResult"] = boost::any(*analysisResult);
    }
    if (containHwMode) {
      res["ContainHwMode"] = boost::any(*containHwMode);
    }
    if (dealTime) {
      res["DealTime"] = boost::any(*dealTime);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (eventDetails) {
      vector<boost::any> temp1;
      for(auto item1:*eventDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventDetails"] = boost::any(temp1);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (occurrenceTime) {
      res["OccurrenceTime"] = boost::any(*occurrenceTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tacticDisplayName) {
      res["TacticDisplayName"] = boost::any(*tacticDisplayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEventType") != m.end() && !m["AlarmEventType"].empty()) {
      alarmEventType = make_shared<string>(boost::any_cast<string>(m["AlarmEventType"]));
    }
    if (m.find("AlarmEventTypeDisplay") != m.end() && !m["AlarmEventTypeDisplay"].empty()) {
      alarmEventTypeDisplay = make_shared<string>(boost::any_cast<string>(m["AlarmEventTypeDisplay"]));
    }
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmSource") != m.end() && !m["AlarmSource"].empty()) {
      alarmSource = make_shared<string>(boost::any_cast<string>(m["AlarmSource"]));
    }
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<string>(boost::any_cast<string>(m["AlarmTime"]));
    }
    if (m.find("AnalysisResult") != m.end() && !m["AnalysisResult"].empty()) {
      analysisResult = make_shared<string>(boost::any_cast<string>(m["AnalysisResult"]));
    }
    if (m.find("ContainHwMode") != m.end() && !m["ContainHwMode"].empty()) {
      containHwMode = make_shared<bool>(boost::any_cast<bool>(m["ContainHwMode"]));
    }
    if (m.find("DealTime") != m.end() && !m["DealTime"].empty()) {
      dealTime = make_shared<string>(boost::any_cast<string>(m["DealTime"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EventDetails") != m.end() && !m["EventDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["EventDetails"].type()) {
        vector<GetAlarmDetailByIdResponseBodyDataEventDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAlarmDetailByIdResponseBodyDataEventDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventDetails = make_shared<vector<GetAlarmDetailByIdResponseBodyDataEventDetails>>(expect1);
      }
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("OccurrenceTime") != m.end() && !m["OccurrenceTime"].empty()) {
      occurrenceTime = make_shared<string>(boost::any_cast<string>(m["OccurrenceTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TacticDisplayName") != m.end() && !m["TacticDisplayName"].empty()) {
      tacticDisplayName = make_shared<string>(boost::any_cast<string>(m["TacticDisplayName"]));
    }
  }


  virtual ~GetAlarmDetailByIdResponseBodyData() = default;
};
class GetAlarmDetailByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAlarmDetailByIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAlarmDetailByIdResponseBody() {}

  explicit GetAlarmDetailByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlarmDetailByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAlarmDetailByIdResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetAlarmDetailByIdResponseBody() = default;
};
class GetAlarmDetailByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlarmDetailByIdResponseBody> body{};

  GetAlarmDetailByIdResponse() {}

  explicit GetAlarmDetailByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlarmDetailByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlarmDetailByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlarmDetailByIdResponse() = default;
};
class GetAttackedAssetDealRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetAttackedAssetDealRequest() {}

  explicit GetAttackedAssetDealRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetAttackedAssetDealRequest() = default;
};
class GetAttackedAssetDealResponseBodyDataEcsTrendList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> dealCount{};
  shared_ptr<long> findCount{};

  GetAttackedAssetDealResponseBodyDataEcsTrendList() {}

  explicit GetAttackedAssetDealResponseBodyDataEcsTrendList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (dealCount) {
      res["DealCount"] = boost::any(*dealCount);
    }
    if (findCount) {
      res["FindCount"] = boost::any(*findCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DealCount") != m.end() && !m["DealCount"].empty()) {
      dealCount = make_shared<long>(boost::any_cast<long>(m["DealCount"]));
    }
    if (m.find("FindCount") != m.end() && !m["FindCount"].empty()) {
      findCount = make_shared<long>(boost::any_cast<long>(m["FindCount"]));
    }
  }


  virtual ~GetAttackedAssetDealResponseBodyDataEcsTrendList() = default;
};
class GetAttackedAssetDealResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetAttackedAssetDealResponseBodyDataEcsTrendList>> ecsTrendList{};

  GetAttackedAssetDealResponseBodyData() {}

  explicit GetAttackedAssetDealResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsTrendList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsTrendList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsTrendList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsTrendList") != m.end() && !m["EcsTrendList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsTrendList"].type()) {
        vector<GetAttackedAssetDealResponseBodyDataEcsTrendList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsTrendList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAttackedAssetDealResponseBodyDataEcsTrendList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsTrendList = make_shared<vector<GetAttackedAssetDealResponseBodyDataEcsTrendList>>(expect1);
      }
    }
  }


  virtual ~GetAttackedAssetDealResponseBodyData() = default;
};
class GetAttackedAssetDealResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAttackedAssetDealResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAttackedAssetDealResponseBody() {}

  explicit GetAttackedAssetDealResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAttackedAssetDealResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAttackedAssetDealResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetAttackedAssetDealResponseBody() = default;
};
class GetAttackedAssetDealResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAttackedAssetDealResponseBody> body{};

  GetAttackedAssetDealResponse() {}

  explicit GetAttackedAssetDealResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAttackedAssetDealResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAttackedAssetDealResponseBody>(model1);
      }
    }
  }


  virtual ~GetAttackedAssetDealResponse() = default;
};
class GetBaselineSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetBaselineSummaryRequest() {}

  explicit GetBaselineSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetBaselineSummaryRequest() = default;
};
class GetBaselineSummaryResponseBodyDataTrendDTOList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> dealCount{};
  shared_ptr<long> findCount{};

  GetBaselineSummaryResponseBodyDataTrendDTOList() {}

  explicit GetBaselineSummaryResponseBodyDataTrendDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (dealCount) {
      res["DealCount"] = boost::any(*dealCount);
    }
    if (findCount) {
      res["FindCount"] = boost::any(*findCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DealCount") != m.end() && !m["DealCount"].empty()) {
      dealCount = make_shared<long>(boost::any_cast<long>(m["DealCount"]));
    }
    if (m.find("FindCount") != m.end() && !m["FindCount"].empty()) {
      findCount = make_shared<long>(boost::any_cast<long>(m["FindCount"]));
    }
  }


  virtual ~GetBaselineSummaryResponseBodyDataTrendDTOList() = default;
};
class GetBaselineSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetBaselineSummaryResponseBodyDataTrendDTOList>> trendDTOList{};

  GetBaselineSummaryResponseBodyData() {}

  explicit GetBaselineSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trendDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*trendDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrendDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrendDTOList") != m.end() && !m["TrendDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrendDTOList"].type()) {
        vector<GetBaselineSummaryResponseBodyDataTrendDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrendDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBaselineSummaryResponseBodyDataTrendDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trendDTOList = make_shared<vector<GetBaselineSummaryResponseBodyDataTrendDTOList>>(expect1);
      }
    }
  }


  virtual ~GetBaselineSummaryResponseBodyData() = default;
};
class GetBaselineSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetBaselineSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBaselineSummaryResponseBody() {}

  explicit GetBaselineSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBaselineSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBaselineSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetBaselineSummaryResponseBody() = default;
};
class GetBaselineSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBaselineSummaryResponseBody> body{};

  GetBaselineSummaryResponse() {}

  explicit GetBaselineSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBaselineSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBaselineSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetBaselineSummaryResponse() = default;
};
class GetConsoleScoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetConsoleScoreRequest() {}

  explicit GetConsoleScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetConsoleScoreRequest() = default;
};
class GetConsoleScoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsoleScoreResponseBody() {}

  explicit GetConsoleScoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetConsoleScoreResponseBody() = default;
};
class GetConsoleScoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsoleScoreResponseBody> body{};

  GetConsoleScoreResponse() {}

  explicit GetConsoleScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsoleScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsoleScoreResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsoleScoreResponse() = default;
};
class GetDetailByIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetDetailByIdRequest() {}

  explicit GetDetailByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDetailByIdRequest() = default;
};
class GetDetailByIdResponseBodyDataVulDetails : public Darabonba::Model {
public:
  shared_ptr<string> cveId{};
  shared_ptr<string> cvssScore{};
  shared_ptr<string> fixSuggestion{};
  shared_ptr<string> title{};

  GetDetailByIdResponseBodyDataVulDetails() {}

  explicit GetDetailByIdResponseBodyDataVulDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cveId) {
      res["CveId"] = boost::any(*cveId);
    }
    if (cvssScore) {
      res["CvssScore"] = boost::any(*cvssScore);
    }
    if (fixSuggestion) {
      res["FixSuggestion"] = boost::any(*fixSuggestion);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CveId") != m.end() && !m["CveId"].empty()) {
      cveId = make_shared<string>(boost::any_cast<string>(m["CveId"]));
    }
    if (m.find("CvssScore") != m.end() && !m["CvssScore"].empty()) {
      cvssScore = make_shared<string>(boost::any_cast<string>(m["CvssScore"]));
    }
    if (m.find("FixSuggestion") != m.end() && !m["FixSuggestion"].empty()) {
      fixSuggestion = make_shared<string>(boost::any_cast<string>(m["FixSuggestion"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetDetailByIdResponseBodyDataVulDetails() = default;
};
class GetDetailByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDetailByIdResponseBodyDataVulDetails>> vulDetails{};

  GetDetailByIdResponseBodyData() {}

  explicit GetDetailByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vulDetails) {
      vector<boost::any> temp1;
      for(auto item1:*vulDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VulDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VulDetails") != m.end() && !m["VulDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["VulDetails"].type()) {
        vector<GetDetailByIdResponseBodyDataVulDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VulDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDetailByIdResponseBodyDataVulDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulDetails = make_shared<vector<GetDetailByIdResponseBodyDataVulDetails>>(expect1);
      }
    }
  }


  virtual ~GetDetailByIdResponseBodyData() = default;
};
class GetDetailByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDetailByIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDetailByIdResponseBody() {}

  explicit GetDetailByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetailByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDetailByIdResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetDetailByIdResponseBody() = default;
};
class GetDetailByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetailByIdResponseBody> body{};

  GetDetailByIdResponse() {}

  explicit GetDetailByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetailByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetailByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetailByIdResponse() = default;
};
class GetDocumentDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetDocumentDownloadUrlRequest() {}

  explicit GetDocumentDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDocumentDownloadUrlRequest() = default;
};
class GetDocumentDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDocumentDownloadUrlResponseBody() {}

  explicit GetDocumentDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetDocumentDownloadUrlResponseBody() = default;
};
class GetDocumentDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentDownloadUrlResponseBody> body{};

  GetDocumentDownloadUrlResponse() {}

  explicit GetDocumentDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentDownloadUrlResponse() = default;
};
class GetDocumentPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> deliveredBy{};
  shared_ptr<string> documentName{};
  shared_ptr<string> documentType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reportType{};

  GetDocumentPageRequest() {}

  explicit GetDocumentPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deliveredBy) {
      res["DeliveredBy"] = boost::any(*deliveredBy);
    }
    if (documentName) {
      res["DocumentName"] = boost::any(*documentName);
    }
    if (documentType) {
      res["DocumentType"] = boost::any(*documentType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeliveredBy") != m.end() && !m["DeliveredBy"].empty()) {
      deliveredBy = make_shared<string>(boost::any_cast<string>(m["DeliveredBy"]));
    }
    if (m.find("DocumentName") != m.end() && !m["DocumentName"].empty()) {
      documentName = make_shared<string>(boost::any_cast<string>(m["DocumentName"]));
    }
    if (m.find("DocumentType") != m.end() && !m["DocumentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["DocumentType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
  }


  virtual ~GetDocumentPageRequest() = default;
};
class GetDocumentPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliveredBy{};
  shared_ptr<string> documentName{};
  shared_ptr<string> documentType{};
  shared_ptr<long> id{};
  shared_ptr<string> uploadTime{};

  GetDocumentPageResponseBodyData() {}

  explicit GetDocumentPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveredBy) {
      res["DeliveredBy"] = boost::any(*deliveredBy);
    }
    if (documentName) {
      res["DocumentName"] = boost::any(*documentName);
    }
    if (documentType) {
      res["DocumentType"] = boost::any(*documentType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveredBy") != m.end() && !m["DeliveredBy"].empty()) {
      deliveredBy = make_shared<string>(boost::any_cast<string>(m["DeliveredBy"]));
    }
    if (m.find("DocumentName") != m.end() && !m["DocumentName"].empty()) {
      documentName = make_shared<string>(boost::any_cast<string>(m["DocumentName"]));
    }
    if (m.find("DocumentType") != m.end() && !m["DocumentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["DocumentType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~GetDocumentPageResponseBodyData() = default;
};
class GetDocumentPageResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetDocumentPageResponseBodyPageInfo() {}

  explicit GetDocumentPageResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetDocumentPageResponseBodyPageInfo() = default;
};
class GetDocumentPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetDocumentPageResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetDocumentPageResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDocumentPageResponseBody() {}

  explicit GetDocumentPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
        vector<GetDocumentPageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentPageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetDocumentPageResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetDocumentPageResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetDocumentPageResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDocumentPageResponseBody() = default;
};
class GetDocumentPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentPageResponseBody> body{};

  GetDocumentPageResponse() {}

  explicit GetDocumentPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentPageResponse() = default;
};
class GetDocumentSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportType{};

  GetDocumentSummaryRequest() {}

  explicit GetDocumentSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
  }


  virtual ~GetDocumentSummaryRequest() = default;
};
class GetDocumentSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> documentCount{};
  shared_ptr<long> frequency{};

  GetDocumentSummaryResponseBodyData() {}

  explicit GetDocumentSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentCount) {
      res["DocumentCount"] = boost::any(*documentCount);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentCount") != m.end() && !m["DocumentCount"].empty()) {
      documentCount = make_shared<long>(boost::any_cast<long>(m["DocumentCount"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<long>(boost::any_cast<long>(m["Frequency"]));
    }
  }


  virtual ~GetDocumentSummaryResponseBodyData() = default;
};
class GetDocumentSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDocumentSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDocumentSummaryResponseBody() {}

  explicit GetDocumentSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDocumentSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetDocumentSummaryResponseBody() = default;
};
class GetDocumentSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentSummaryResponseBody> body{};

  GetDocumentSummaryResponse() {}

  explicit GetDocumentSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentSummaryResponse() = default;
};
class GetRecentDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetRecentDocumentRequest() {}

  explicit GetRecentDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetRecentDocumentRequest() = default;
};
class GetRecentDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> uploadTime{};

  GetRecentDocumentResponseBodyData() {}

  explicit GetRecentDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
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
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~GetRecentDocumentResponseBodyData() = default;
};
class GetRecentDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetRecentDocumentResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRecentDocumentResponseBody() {}

  explicit GetRecentDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetRecentDocumentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecentDocumentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRecentDocumentResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetRecentDocumentResponseBody() = default;
};
class GetRecentDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRecentDocumentResponseBody> body{};

  GetRecentDocumentResponse() {}

  explicit GetRecentDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRecentDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecentDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecentDocumentResponse() = default;
};
class GetSafetyCoverRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetSafetyCoverRequest() {}

  explicit GetSafetyCoverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetSafetyCoverRequest() = default;
};
class GetSafetyCoverResponseBodyDataCfwProtection : public Darabonba::Model {
public:
  shared_ptr<long> noProtectionCount{};
  shared_ptr<long> protectionCount{};
  shared_ptr<string> protectionGrowthRate{};
  shared_ptr<string> protectionRate{};
  shared_ptr<long> totalCount{};

  GetSafetyCoverResponseBodyDataCfwProtection() {}

  explicit GetSafetyCoverResponseBodyDataCfwProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noProtectionCount) {
      res["NoProtectionCount"] = boost::any(*noProtectionCount);
    }
    if (protectionCount) {
      res["ProtectionCount"] = boost::any(*protectionCount);
    }
    if (protectionGrowthRate) {
      res["ProtectionGrowthRate"] = boost::any(*protectionGrowthRate);
    }
    if (protectionRate) {
      res["ProtectionRate"] = boost::any(*protectionRate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoProtectionCount") != m.end() && !m["NoProtectionCount"].empty()) {
      noProtectionCount = make_shared<long>(boost::any_cast<long>(m["NoProtectionCount"]));
    }
    if (m.find("ProtectionCount") != m.end() && !m["ProtectionCount"].empty()) {
      protectionCount = make_shared<long>(boost::any_cast<long>(m["ProtectionCount"]));
    }
    if (m.find("ProtectionGrowthRate") != m.end() && !m["ProtectionGrowthRate"].empty()) {
      protectionGrowthRate = make_shared<string>(boost::any_cast<string>(m["ProtectionGrowthRate"]));
    }
    if (m.find("ProtectionRate") != m.end() && !m["ProtectionRate"].empty()) {
      protectionRate = make_shared<string>(boost::any_cast<string>(m["ProtectionRate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetSafetyCoverResponseBodyDataCfwProtection() = default;
};
class GetSafetyCoverResponseBodyDataEcsProtection : public Darabonba::Model {
public:
  shared_ptr<long> noProtectionCount{};
  shared_ptr<long> protectionCount{};
  shared_ptr<string> protectionGrowthRate{};
  shared_ptr<string> protectionRate{};
  shared_ptr<long> totalCount{};

  GetSafetyCoverResponseBodyDataEcsProtection() {}

  explicit GetSafetyCoverResponseBodyDataEcsProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noProtectionCount) {
      res["NoProtectionCount"] = boost::any(*noProtectionCount);
    }
    if (protectionCount) {
      res["ProtectionCount"] = boost::any(*protectionCount);
    }
    if (protectionGrowthRate) {
      res["ProtectionGrowthRate"] = boost::any(*protectionGrowthRate);
    }
    if (protectionRate) {
      res["ProtectionRate"] = boost::any(*protectionRate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoProtectionCount") != m.end() && !m["NoProtectionCount"].empty()) {
      noProtectionCount = make_shared<long>(boost::any_cast<long>(m["NoProtectionCount"]));
    }
    if (m.find("ProtectionCount") != m.end() && !m["ProtectionCount"].empty()) {
      protectionCount = make_shared<long>(boost::any_cast<long>(m["ProtectionCount"]));
    }
    if (m.find("ProtectionGrowthRate") != m.end() && !m["ProtectionGrowthRate"].empty()) {
      protectionGrowthRate = make_shared<string>(boost::any_cast<string>(m["ProtectionGrowthRate"]));
    }
    if (m.find("ProtectionRate") != m.end() && !m["ProtectionRate"].empty()) {
      protectionRate = make_shared<string>(boost::any_cast<string>(m["ProtectionRate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetSafetyCoverResponseBodyDataEcsProtection() = default;
};
class GetSafetyCoverResponseBodyDataWafProtection : public Darabonba::Model {
public:
  shared_ptr<long> noProtectionCount{};
  shared_ptr<long> protectionCount{};
  shared_ptr<string> protectionGrowthRate{};
  shared_ptr<string> protectionRate{};
  shared_ptr<long> totalCount{};

  GetSafetyCoverResponseBodyDataWafProtection() {}

  explicit GetSafetyCoverResponseBodyDataWafProtection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noProtectionCount) {
      res["NoProtectionCount"] = boost::any(*noProtectionCount);
    }
    if (protectionCount) {
      res["ProtectionCount"] = boost::any(*protectionCount);
    }
    if (protectionGrowthRate) {
      res["ProtectionGrowthRate"] = boost::any(*protectionGrowthRate);
    }
    if (protectionRate) {
      res["ProtectionRate"] = boost::any(*protectionRate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoProtectionCount") != m.end() && !m["NoProtectionCount"].empty()) {
      noProtectionCount = make_shared<long>(boost::any_cast<long>(m["NoProtectionCount"]));
    }
    if (m.find("ProtectionCount") != m.end() && !m["ProtectionCount"].empty()) {
      protectionCount = make_shared<long>(boost::any_cast<long>(m["ProtectionCount"]));
    }
    if (m.find("ProtectionGrowthRate") != m.end() && !m["ProtectionGrowthRate"].empty()) {
      protectionGrowthRate = make_shared<string>(boost::any_cast<string>(m["ProtectionGrowthRate"]));
    }
    if (m.find("ProtectionRate") != m.end() && !m["ProtectionRate"].empty()) {
      protectionRate = make_shared<string>(boost::any_cast<string>(m["ProtectionRate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetSafetyCoverResponseBodyDataWafProtection() = default;
};
class GetSafetyCoverResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetSafetyCoverResponseBodyDataCfwProtection> cfwProtection{};
  shared_ptr<GetSafetyCoverResponseBodyDataEcsProtection> ecsProtection{};
  shared_ptr<GetSafetyCoverResponseBodyDataWafProtection> wafProtection{};

  GetSafetyCoverResponseBodyData() {}

  explicit GetSafetyCoverResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cfwProtection) {
      res["CfwProtection"] = cfwProtection ? boost::any(cfwProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ecsProtection) {
      res["EcsProtection"] = ecsProtection ? boost::any(ecsProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wafProtection) {
      res["WafProtection"] = wafProtection ? boost::any(wafProtection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CfwProtection") != m.end() && !m["CfwProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["CfwProtection"].type()) {
        GetSafetyCoverResponseBodyDataCfwProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CfwProtection"]));
        cfwProtection = make_shared<GetSafetyCoverResponseBodyDataCfwProtection>(model1);
      }
    }
    if (m.find("EcsProtection") != m.end() && !m["EcsProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsProtection"].type()) {
        GetSafetyCoverResponseBodyDataEcsProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsProtection"]));
        ecsProtection = make_shared<GetSafetyCoverResponseBodyDataEcsProtection>(model1);
      }
    }
    if (m.find("WafProtection") != m.end() && !m["WafProtection"].empty()) {
      if (typeid(map<string, boost::any>) == m["WafProtection"].type()) {
        GetSafetyCoverResponseBodyDataWafProtection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WafProtection"]));
        wafProtection = make_shared<GetSafetyCoverResponseBodyDataWafProtection>(model1);
      }
    }
  }


  virtual ~GetSafetyCoverResponseBodyData() = default;
};
class GetSafetyCoverResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSafetyCoverResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSafetyCoverResponseBody() {}

  explicit GetSafetyCoverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSafetyCoverResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSafetyCoverResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetSafetyCoverResponseBody() = default;
};
class GetSafetyCoverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSafetyCoverResponseBody> body{};

  GetSafetyCoverResponse() {}

  explicit GetSafetyCoverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSafetyCoverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSafetyCoverResponseBody>(model1);
      }
    }
  }


  virtual ~GetSafetyCoverResponse() = default;
};
class GetSowListRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetSowListRequest() {}

  explicit GetSowListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetSowListRequest() = default;
};
class GetSowListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> completeTime{};
  shared_ptr<string> operateRemark{};
  shared_ptr<string> progress{};
  shared_ptr<long> recordCount{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskTypeName{};
  shared_ptr<string> workOrderName{};

  GetSowListResponseBodyData() {}

  explicit GetSowListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (operateRemark) {
      res["OperateRemark"] = boost::any(*operateRemark);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskTypeName) {
      res["TaskTypeName"] = boost::any(*taskTypeName);
    }
    if (workOrderName) {
      res["WorkOrderName"] = boost::any(*workOrderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("OperateRemark") != m.end() && !m["OperateRemark"].empty()) {
      operateRemark = make_shared<string>(boost::any_cast<string>(m["OperateRemark"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskTypeName") != m.end() && !m["TaskTypeName"].empty()) {
      taskTypeName = make_shared<string>(boost::any_cast<string>(m["TaskTypeName"]));
    }
    if (m.find("WorkOrderName") != m.end() && !m["WorkOrderName"].empty()) {
      workOrderName = make_shared<string>(boost::any_cast<string>(m["WorkOrderName"]));
    }
  }


  virtual ~GetSowListResponseBodyData() = default;
};
class GetSowListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetSowListResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSowListResponseBody() {}

  explicit GetSowListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSowListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSowListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSowListResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetSowListResponseBody() = default;
};
class GetSowListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSowListResponseBody> body{};

  GetSowListResponse() {}

  explicit GetSowListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSowListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSowListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSowListResponse() = default;
};
class GetSuspEventPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> alarmEndTime{};
  shared_ptr<long> alarmStartTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};
  shared_ptr<long> status{};

  GetSuspEventPageRequest() {}

  explicit GetSuspEventPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEndTime) {
      res["AlarmEndTime"] = boost::any(*alarmEndTime);
    }
    if (alarmStartTime) {
      res["AlarmStartTime"] = boost::any(*alarmStartTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEndTime") != m.end() && !m["AlarmEndTime"].empty()) {
      alarmEndTime = make_shared<long>(boost::any_cast<long>(m["AlarmEndTime"]));
    }
    if (m.find("AlarmStartTime") != m.end() && !m["AlarmStartTime"].empty()) {
      alarmStartTime = make_shared<long>(boost::any_cast<long>(m["AlarmStartTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetSuspEventPageRequest() = default;
};
class GetSuspEventPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmEventType{};
  shared_ptr<long> alarmId{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmSource{};
  shared_ptr<string> alarmTime{};
  shared_ptr<string> analysisResult{};
  shared_ptr<string> dealTime{};
  shared_ptr<string> eventLevel{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> occurrenceTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  GetSuspEventPageResponseBodyData() {}

  explicit GetSuspEventPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEventType) {
      res["AlarmEventType"] = boost::any(*alarmEventType);
    }
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmSource) {
      res["AlarmSource"] = boost::any(*alarmSource);
    }
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    if (analysisResult) {
      res["AnalysisResult"] = boost::any(*analysisResult);
    }
    if (dealTime) {
      res["DealTime"] = boost::any(*dealTime);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (occurrenceTime) {
      res["OccurrenceTime"] = boost::any(*occurrenceTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (m.find("AlarmEventType") != m.end() && !m["AlarmEventType"].empty()) {
      alarmEventType = make_shared<string>(boost::any_cast<string>(m["AlarmEventType"]));
    }
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmSource") != m.end() && !m["AlarmSource"].empty()) {
      alarmSource = make_shared<string>(boost::any_cast<string>(m["AlarmSource"]));
    }
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<string>(boost::any_cast<string>(m["AlarmTime"]));
    }
    if (m.find("AnalysisResult") != m.end() && !m["AnalysisResult"].empty()) {
      analysisResult = make_shared<string>(boost::any_cast<string>(m["AnalysisResult"]));
    }
    if (m.find("DealTime") != m.end() && !m["DealTime"].empty()) {
      dealTime = make_shared<string>(boost::any_cast<string>(m["DealTime"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("OccurrenceTime") != m.end() && !m["OccurrenceTime"].empty()) {
      occurrenceTime = make_shared<string>(boost::any_cast<string>(m["OccurrenceTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetSuspEventPageResponseBodyData() = default;
};
class GetSuspEventPageResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetSuspEventPageResponseBodyPageInfo() {}

  explicit GetSuspEventPageResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetSuspEventPageResponseBodyPageInfo() = default;
};
class GetSuspEventPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetSuspEventPageResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetSuspEventPageResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSuspEventPageResponseBody() {}

  explicit GetSuspEventPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
        vector<GetSuspEventPageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSuspEventPageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSuspEventPageResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetSuspEventPageResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetSuspEventPageResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSuspEventPageResponseBody() = default;
};
class GetSuspEventPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSuspEventPageResponseBody> body{};

  GetSuspEventPageResponse() {}

  explicit GetSuspEventPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSuspEventPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSuspEventPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetSuspEventPageResponse() = default;
};
class GetSuspEventSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetSuspEventSummaryRequest() {}

  explicit GetSuspEventSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetSuspEventSummaryRequest() = default;
};
class GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> ddosCount{};
  shared_ptr<long> eipCount{};
  shared_ptr<long> wafCount{};

  GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList() {}

  explicit GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (ddosCount) {
      res["DdosCount"] = boost::any(*ddosCount);
    }
    if (eipCount) {
      res["EipCount"] = boost::any(*eipCount);
    }
    if (wafCount) {
      res["WafCount"] = boost::any(*wafCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DdosCount") != m.end() && !m["DdosCount"].empty()) {
      ddosCount = make_shared<long>(boost::any_cast<long>(m["DdosCount"]));
    }
    if (m.find("EipCount") != m.end() && !m["EipCount"].empty()) {
      eipCount = make_shared<long>(boost::any_cast<long>(m["EipCount"]));
    }
    if (m.find("WafCount") != m.end() && !m["WafCount"].empty()) {
      wafCount = make_shared<long>(boost::any_cast<long>(m["WafCount"]));
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList() = default;
};
class GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO : public Darabonba::Model {
public:
  shared_ptr<vector<GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList>> trendList{};

  GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO() {}

  explicit GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trendList) {
      vector<boost::any> temp1;
      for(auto item1:*trendList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrendList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrendList") != m.end() && !m["TrendList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrendList"].type()) {
        vector<GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrendList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trendList = make_shared<vector<GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList>>(expect1);
      }
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO() = default;
};
class GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO : public Darabonba::Model {
public:
  shared_ptr<long> completedCount{};
  shared_ptr<long> handingCount{};
  shared_ptr<string> handingRate{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> totalGrowthRate{};
  shared_ptr<long> waitHandleCount{};

  GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO() {}

  explicit GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (handingCount) {
      res["HandingCount"] = boost::any(*handingCount);
    }
    if (handingRate) {
      res["HandingRate"] = boost::any(*handingRate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalGrowthRate) {
      res["TotalGrowthRate"] = boost::any(*totalGrowthRate);
    }
    if (waitHandleCount) {
      res["WaitHandleCount"] = boost::any(*waitHandleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("HandingCount") != m.end() && !m["HandingCount"].empty()) {
      handingCount = make_shared<long>(boost::any_cast<long>(m["HandingCount"]));
    }
    if (m.find("HandingRate") != m.end() && !m["HandingRate"].empty()) {
      handingRate = make_shared<string>(boost::any_cast<string>(m["HandingRate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalGrowthRate") != m.end() && !m["TotalGrowthRate"].empty()) {
      totalGrowthRate = make_shared<string>(boost::any_cast<string>(m["TotalGrowthRate"]));
    }
    if (m.find("WaitHandleCount") != m.end() && !m["WaitHandleCount"].empty()) {
      waitHandleCount = make_shared<long>(boost::any_cast<long>(m["WaitHandleCount"]));
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO() = default;
};
class GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<long> taskCount{};

  GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList() {}

  explicit GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList() = default;
};
class GetSuspEventSummaryResponseBodyDataSuspEventTopDTO : public Darabonba::Model {
public:
  shared_ptr<vector<GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList>> suspEventList{};

  GetSuspEventSummaryResponseBodyDataSuspEventTopDTO() {}

  explicit GetSuspEventSummaryResponseBodyDataSuspEventTopDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suspEventList) {
      vector<boost::any> temp1;
      for(auto item1:*suspEventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuspEventList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuspEventList") != m.end() && !m["SuspEventList"].empty()) {
      if (typeid(vector<boost::any>) == m["SuspEventList"].type()) {
        vector<GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuspEventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        suspEventList = make_shared<vector<GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList>>(expect1);
      }
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTopDTO() = default;
};
class GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> dealCount{};
  shared_ptr<long> findCount{};

  GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList() {}

  explicit GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (dealCount) {
      res["DealCount"] = boost::any(*dealCount);
    }
    if (findCount) {
      res["FindCount"] = boost::any(*findCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DealCount") != m.end() && !m["DealCount"].empty()) {
      dealCount = make_shared<long>(boost::any_cast<long>(m["DealCount"]));
    }
    if (m.find("FindCount") != m.end() && !m["FindCount"].empty()) {
      findCount = make_shared<long>(boost::any_cast<long>(m["FindCount"]));
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList() = default;
};
class GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO : public Darabonba::Model {
public:
  shared_ptr<vector<GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList>> trendList{};

  GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO() {}

  explicit GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trendList) {
      vector<boost::any> temp1;
      for(auto item1:*trendList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrendList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrendList") != m.end() && !m["TrendList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrendList"].type()) {
        vector<GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrendList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trendList = make_shared<vector<GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList>>(expect1);
      }
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO() = default;
};
class GetSuspEventSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO> networkAttackTrendDTO{};
  shared_ptr<GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO> suspEventDealSummaryDTO{};
  shared_ptr<GetSuspEventSummaryResponseBodyDataSuspEventTopDTO> suspEventTopDTO{};
  shared_ptr<GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO> suspEventTrendDTO{};

  GetSuspEventSummaryResponseBodyData() {}

  explicit GetSuspEventSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAttackTrendDTO) {
      res["NetworkAttackTrendDTO"] = networkAttackTrendDTO ? boost::any(networkAttackTrendDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (suspEventDealSummaryDTO) {
      res["SuspEventDealSummaryDTO"] = suspEventDealSummaryDTO ? boost::any(suspEventDealSummaryDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (suspEventTopDTO) {
      res["SuspEventTopDTO"] = suspEventTopDTO ? boost::any(suspEventTopDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (suspEventTrendDTO) {
      res["SuspEventTrendDTO"] = suspEventTrendDTO ? boost::any(suspEventTrendDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAttackTrendDTO") != m.end() && !m["NetworkAttackTrendDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkAttackTrendDTO"].type()) {
        GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkAttackTrendDTO"]));
        networkAttackTrendDTO = make_shared<GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO>(model1);
      }
    }
    if (m.find("SuspEventDealSummaryDTO") != m.end() && !m["SuspEventDealSummaryDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuspEventDealSummaryDTO"].type()) {
        GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuspEventDealSummaryDTO"]));
        suspEventDealSummaryDTO = make_shared<GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO>(model1);
      }
    }
    if (m.find("SuspEventTopDTO") != m.end() && !m["SuspEventTopDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuspEventTopDTO"].type()) {
        GetSuspEventSummaryResponseBodyDataSuspEventTopDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuspEventTopDTO"]));
        suspEventTopDTO = make_shared<GetSuspEventSummaryResponseBodyDataSuspEventTopDTO>(model1);
      }
    }
    if (m.find("SuspEventTrendDTO") != m.end() && !m["SuspEventTrendDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuspEventTrendDTO"].type()) {
        GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuspEventTrendDTO"]));
        suspEventTrendDTO = make_shared<GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO>(model1);
      }
    }
  }


  virtual ~GetSuspEventSummaryResponseBodyData() = default;
};
class GetSuspEventSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSuspEventSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSuspEventSummaryResponseBody() {}

  explicit GetSuspEventSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSuspEventSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSuspEventSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetSuspEventSummaryResponseBody() = default;
};
class GetSuspEventSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSuspEventSummaryResponseBody> body{};

  GetSuspEventSummaryResponse() {}

  explicit GetSuspEventSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSuspEventSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSuspEventSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetSuspEventSummaryResponse() = default;
};
class GetSuspPageSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completedCount{};
  shared_ptr<long> handingCount{};
  shared_ptr<long> highCount{};
  shared_ptr<long> lowCount{};
  shared_ptr<long> mediumCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> waitHandleCount{};

  GetSuspPageSummaryResponseBodyData() {}

  explicit GetSuspPageSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (handingCount) {
      res["HandingCount"] = boost::any(*handingCount);
    }
    if (highCount) {
      res["HighCount"] = boost::any(*highCount);
    }
    if (lowCount) {
      res["LowCount"] = boost::any(*lowCount);
    }
    if (mediumCount) {
      res["MediumCount"] = boost::any(*mediumCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (waitHandleCount) {
      res["WaitHandleCount"] = boost::any(*waitHandleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("HandingCount") != m.end() && !m["HandingCount"].empty()) {
      handingCount = make_shared<long>(boost::any_cast<long>(m["HandingCount"]));
    }
    if (m.find("HighCount") != m.end() && !m["HighCount"].empty()) {
      highCount = make_shared<long>(boost::any_cast<long>(m["HighCount"]));
    }
    if (m.find("LowCount") != m.end() && !m["LowCount"].empty()) {
      lowCount = make_shared<long>(boost::any_cast<long>(m["LowCount"]));
    }
    if (m.find("MediumCount") != m.end() && !m["MediumCount"].empty()) {
      mediumCount = make_shared<long>(boost::any_cast<long>(m["MediumCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WaitHandleCount") != m.end() && !m["WaitHandleCount"].empty()) {
      waitHandleCount = make_shared<long>(boost::any_cast<long>(m["WaitHandleCount"]));
    }
  }


  virtual ~GetSuspPageSummaryResponseBodyData() = default;
};
class GetSuspPageSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSuspPageSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSuspPageSummaryResponseBody() {}

  explicit GetSuspPageSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSuspPageSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSuspPageSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetSuspPageSummaryResponseBody() = default;
};
class GetSuspPageSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSuspPageSummaryResponseBody> body{};

  GetSuspPageSummaryResponse() {}

  explicit GetSuspPageSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSuspPageSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSuspPageSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetSuspPageSummaryResponse() = default;
};
class GetUserStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customerType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  GetUserStatusResponseBodyData() {}

  explicit GetUserStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerType) {
      res["CustomerType"] = boost::any(*customerType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerType") != m.end() && !m["CustomerType"].empty()) {
      customerType = make_shared<string>(boost::any_cast<string>(m["CustomerType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetUserStatusResponseBodyData() = default;
};
class GetUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetUserStatusResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserStatusResponseBody() {}

  explicit GetUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserStatusResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetUserStatusResponseBody() = default;
};
class GetUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserStatusResponseBody> body{};

  GetUserStatusResponse() {}

  explicit GetUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserStatusResponse() = default;
};
class GetVulItemPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> dealed{};
  shared_ptr<string> level{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scanType{};

  GetVulItemPageRequest() {}

  explicit GetVulItemPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
  }


  virtual ~GetVulItemPageRequest() = default;
};
class GetVulItemPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<long> asapCount{};
  shared_ptr<string> customerId{};
  shared_ptr<string> cveUrlPrefix{};
  shared_ptr<string> dealed{};
  shared_ptr<string> findTime{};
  shared_ptr<long> handledCount{};
  shared_ptr<long> id{};
  shared_ptr<long> laterCount{};
  shared_ptr<string> level{};
  shared_ptr<string> name{};
  shared_ptr<long> nntfCount{};
  shared_ptr<string> related{};
  shared_ptr<long> relatedCveCount{};
  shared_ptr<string> scanType{};
  shared_ptr<string> tags{};
  shared_ptr<long> totalFixCount{};

  GetVulItemPageResponseBodyData() {}

  explicit GetVulItemPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (asapCount) {
      res["AsapCount"] = boost::any(*asapCount);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (cveUrlPrefix) {
      res["CveUrlPrefix"] = boost::any(*cveUrlPrefix);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (findTime) {
      res["FindTime"] = boost::any(*findTime);
    }
    if (handledCount) {
      res["HandledCount"] = boost::any(*handledCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (laterCount) {
      res["LaterCount"] = boost::any(*laterCount);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nntfCount) {
      res["NntfCount"] = boost::any(*nntfCount);
    }
    if (related) {
      res["Related"] = boost::any(*related);
    }
    if (relatedCveCount) {
      res["RelatedCveCount"] = boost::any(*relatedCveCount);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (totalFixCount) {
      res["TotalFixCount"] = boost::any(*totalFixCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("AsapCount") != m.end() && !m["AsapCount"].empty()) {
      asapCount = make_shared<long>(boost::any_cast<long>(m["AsapCount"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CveUrlPrefix") != m.end() && !m["CveUrlPrefix"].empty()) {
      cveUrlPrefix = make_shared<string>(boost::any_cast<string>(m["CveUrlPrefix"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("FindTime") != m.end() && !m["FindTime"].empty()) {
      findTime = make_shared<string>(boost::any_cast<string>(m["FindTime"]));
    }
    if (m.find("HandledCount") != m.end() && !m["HandledCount"].empty()) {
      handledCount = make_shared<long>(boost::any_cast<long>(m["HandledCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LaterCount") != m.end() && !m["LaterCount"].empty()) {
      laterCount = make_shared<long>(boost::any_cast<long>(m["LaterCount"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NntfCount") != m.end() && !m["NntfCount"].empty()) {
      nntfCount = make_shared<long>(boost::any_cast<long>(m["NntfCount"]));
    }
    if (m.find("Related") != m.end() && !m["Related"].empty()) {
      related = make_shared<string>(boost::any_cast<string>(m["Related"]));
    }
    if (m.find("RelatedCveCount") != m.end() && !m["RelatedCveCount"].empty()) {
      relatedCveCount = make_shared<long>(boost::any_cast<long>(m["RelatedCveCount"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TotalFixCount") != m.end() && !m["TotalFixCount"].empty()) {
      totalFixCount = make_shared<long>(boost::any_cast<long>(m["TotalFixCount"]));
    }
  }


  virtual ~GetVulItemPageResponseBodyData() = default;
};
class GetVulItemPageResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetVulItemPageResponseBodyPageInfo() {}

  explicit GetVulItemPageResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetVulItemPageResponseBodyPageInfo() = default;
};
class GetVulItemPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetVulItemPageResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetVulItemPageResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVulItemPageResponseBody() {}

  explicit GetVulItemPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
        vector<GetVulItemPageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVulItemPageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetVulItemPageResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetVulItemPageResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetVulItemPageResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetVulItemPageResponseBody() = default;
};
class GetVulItemPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVulItemPageResponseBody> body{};

  GetVulItemPageResponse() {}

  explicit GetVulItemPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulItemPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVulItemPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetVulItemPageResponse() = default;
};
class GetVulListByIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> dealed{};
  shared_ptr<long> id{};
  shared_ptr<string> necessity{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> remark{};
  shared_ptr<string> uuids{};

  GetVulListByIdRequest() {}

  explicit GetVulListByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (uuids) {
      res["Uuids"] = boost::any(*uuids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Uuids") != m.end() && !m["Uuids"].empty()) {
      uuids = make_shared<string>(boost::any_cast<string>(m["Uuids"]));
    }
  }


  virtual ~GetVulListByIdRequest() = default;
};
class GetVulListByIdResponseBodyDataEffectMsgDTOS : public Darabonba::Model {
public:
  shared_ptr<string> matchList{};
  shared_ptr<string> path{};
  shared_ptr<string> softName{};

  GetVulListByIdResponseBodyDataEffectMsgDTOS() {}

  explicit GetVulListByIdResponseBodyDataEffectMsgDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchList) {
      res["MatchList"] = boost::any(*matchList);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (softName) {
      res["SoftName"] = boost::any(*softName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchList") != m.end() && !m["MatchList"].empty()) {
      matchList = make_shared<string>(boost::any_cast<string>(m["MatchList"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SoftName") != m.end() && !m["SoftName"].empty()) {
      softName = make_shared<string>(boost::any_cast<string>(m["SoftName"]));
    }
  }


  virtual ~GetVulListByIdResponseBodyDataEffectMsgDTOS() = default;
};
class GetVulListByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<vector<GetVulListByIdResponseBodyDataEffectMsgDTOS>> effectMsgDTOS{};
  shared_ptr<string> firstTs{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> lastTs{};
  shared_ptr<string> name{};
  shared_ptr<string> necessity{};
  shared_ptr<string> related{};
  shared_ptr<string> repairCmd{};
  shared_ptr<string> repairTs{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> uuid{};

  GetVulListByIdResponseBodyData() {}

  explicit GetVulListByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (effectMsgDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*effectMsgDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EffectMsgDTOS"] = boost::any(temp1);
    }
    if (firstTs) {
      res["FirstTs"] = boost::any(*firstTs);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (lastTs) {
      res["LastTs"] = boost::any(*lastTs);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (necessity) {
      res["Necessity"] = boost::any(*necessity);
    }
    if (related) {
      res["Related"] = boost::any(*related);
    }
    if (repairCmd) {
      res["RepairCmd"] = boost::any(*repairCmd);
    }
    if (repairTs) {
      res["RepairTs"] = boost::any(*repairTs);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("EffectMsgDTOS") != m.end() && !m["EffectMsgDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["EffectMsgDTOS"].type()) {
        vector<GetVulListByIdResponseBodyDataEffectMsgDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EffectMsgDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVulListByIdResponseBodyDataEffectMsgDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        effectMsgDTOS = make_shared<vector<GetVulListByIdResponseBodyDataEffectMsgDTOS>>(expect1);
      }
    }
    if (m.find("FirstTs") != m.end() && !m["FirstTs"].empty()) {
      firstTs = make_shared<string>(boost::any_cast<string>(m["FirstTs"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("LastTs") != m.end() && !m["LastTs"].empty()) {
      lastTs = make_shared<string>(boost::any_cast<string>(m["LastTs"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Necessity") != m.end() && !m["Necessity"].empty()) {
      necessity = make_shared<string>(boost::any_cast<string>(m["Necessity"]));
    }
    if (m.find("Related") != m.end() && !m["Related"].empty()) {
      related = make_shared<string>(boost::any_cast<string>(m["Related"]));
    }
    if (m.find("RepairCmd") != m.end() && !m["RepairCmd"].empty()) {
      repairCmd = make_shared<string>(boost::any_cast<string>(m["RepairCmd"]));
    }
    if (m.find("RepairTs") != m.end() && !m["RepairTs"].empty()) {
      repairTs = make_shared<string>(boost::any_cast<string>(m["RepairTs"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetVulListByIdResponseBodyData() = default;
};
class GetVulListByIdResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetVulListByIdResponseBodyPageInfo() {}

  explicit GetVulListByIdResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetVulListByIdResponseBodyPageInfo() = default;
};
class GetVulListByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetVulListByIdResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetVulListByIdResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVulListByIdResponseBody() {}

  explicit GetVulListByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
        vector<GetVulListByIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVulListByIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetVulListByIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetVulListByIdResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetVulListByIdResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetVulListByIdResponseBody() = default;
};
class GetVulListByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVulListByIdResponseBody> body{};

  GetVulListByIdResponse() {}

  explicit GetVulListByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulListByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVulListByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetVulListByIdResponse() = default;
};
class GetVulPageSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completedCount{};
  shared_ptr<long> handingCount{};
  shared_ptr<long> highCount{};
  shared_ptr<long> lowCount{};
  shared_ptr<long> mediumCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> waitHandleCount{};

  GetVulPageSummaryResponseBodyData() {}

  explicit GetVulPageSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (handingCount) {
      res["HandingCount"] = boost::any(*handingCount);
    }
    if (highCount) {
      res["HighCount"] = boost::any(*highCount);
    }
    if (lowCount) {
      res["LowCount"] = boost::any(*lowCount);
    }
    if (mediumCount) {
      res["MediumCount"] = boost::any(*mediumCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (waitHandleCount) {
      res["WaitHandleCount"] = boost::any(*waitHandleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("HandingCount") != m.end() && !m["HandingCount"].empty()) {
      handingCount = make_shared<long>(boost::any_cast<long>(m["HandingCount"]));
    }
    if (m.find("HighCount") != m.end() && !m["HighCount"].empty()) {
      highCount = make_shared<long>(boost::any_cast<long>(m["HighCount"]));
    }
    if (m.find("LowCount") != m.end() && !m["LowCount"].empty()) {
      lowCount = make_shared<long>(boost::any_cast<long>(m["LowCount"]));
    }
    if (m.find("MediumCount") != m.end() && !m["MediumCount"].empty()) {
      mediumCount = make_shared<long>(boost::any_cast<long>(m["MediumCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WaitHandleCount") != m.end() && !m["WaitHandleCount"].empty()) {
      waitHandleCount = make_shared<long>(boost::any_cast<long>(m["WaitHandleCount"]));
    }
  }


  virtual ~GetVulPageSummaryResponseBodyData() = default;
};
class GetVulPageSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVulPageSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVulPageSummaryResponseBody() {}

  explicit GetVulPageSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulPageSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVulPageSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetVulPageSummaryResponseBody() = default;
};
class GetVulPageSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVulPageSummaryResponseBody> body{};

  GetVulPageSummaryResponse() {}

  explicit GetVulPageSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulPageSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVulPageSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetVulPageSummaryResponse() = default;
};
class GetVulSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetVulSummaryRequest() {}

  explicit GetVulSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetVulSummaryRequest() = default;
};
class GetVulSummaryResponseBodyDataTrendList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> dealCount{};
  shared_ptr<long> findCount{};

  GetVulSummaryResponseBodyDataTrendList() {}

  explicit GetVulSummaryResponseBodyDataTrendList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (dealCount) {
      res["DealCount"] = boost::any(*dealCount);
    }
    if (findCount) {
      res["FindCount"] = boost::any(*findCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DealCount") != m.end() && !m["DealCount"].empty()) {
      dealCount = make_shared<long>(boost::any_cast<long>(m["DealCount"]));
    }
    if (m.find("FindCount") != m.end() && !m["FindCount"].empty()) {
      findCount = make_shared<long>(boost::any_cast<long>(m["FindCount"]));
    }
  }


  virtual ~GetVulSummaryResponseBodyDataTrendList() = default;
};
class GetVulSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completedCount{};
  shared_ptr<string> dealRate{};
  shared_ptr<vector<GetVulSummaryResponseBodyDataTrendList>> trendList{};
  shared_ptr<long> waitHandleCount{};

  GetVulSummaryResponseBodyData() {}

  explicit GetVulSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (dealRate) {
      res["DealRate"] = boost::any(*dealRate);
    }
    if (trendList) {
      vector<boost::any> temp1;
      for(auto item1:*trendList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrendList"] = boost::any(temp1);
    }
    if (waitHandleCount) {
      res["WaitHandleCount"] = boost::any(*waitHandleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("DealRate") != m.end() && !m["DealRate"].empty()) {
      dealRate = make_shared<string>(boost::any_cast<string>(m["DealRate"]));
    }
    if (m.find("TrendList") != m.end() && !m["TrendList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrendList"].type()) {
        vector<GetVulSummaryResponseBodyDataTrendList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrendList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVulSummaryResponseBodyDataTrendList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trendList = make_shared<vector<GetVulSummaryResponseBodyDataTrendList>>(expect1);
      }
    }
    if (m.find("WaitHandleCount") != m.end() && !m["WaitHandleCount"].empty()) {
      waitHandleCount = make_shared<long>(boost::any_cast<long>(m["WaitHandleCount"]));
    }
  }


  virtual ~GetVulSummaryResponseBodyData() = default;
};
class GetVulSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVulSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVulSummaryResponseBody() {}

  explicit GetVulSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVulSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetVulSummaryResponseBody() = default;
};
class GetVulSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVulSummaryResponseBody> body{};

  GetVulSummaryResponse() {}

  explicit GetVulSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVulSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVulSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetVulSummaryResponse() = default;
};
class GetWorkTaskSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> suspEventSource{};

  GetWorkTaskSummaryRequest() {}

  explicit GetWorkTaskSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateType) {
      res["DateType"] = boost::any(*dateType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suspEventSource) {
      res["SuspEventSource"] = boost::any(*suspEventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateType") != m.end() && !m["DateType"].empty()) {
      dateType = make_shared<string>(boost::any_cast<string>(m["DateType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("SuspEventSource") != m.end() && !m["SuspEventSource"].empty()) {
      suspEventSource = make_shared<string>(boost::any_cast<string>(m["SuspEventSource"]));
    }
  }


  virtual ~GetWorkTaskSummaryRequest() = default;
};
class GetWorkTaskSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> dealAverageDuration{};
  shared_ptr<string> dealAverageDurationGrowthRate{};
  shared_ptr<long> dealWorkTaskCount{};
  shared_ptr<string> dealWorkTaskCountRate{};
  shared_ptr<long> workTaskCount{};
  shared_ptr<string> workTaskDealRate{};
  shared_ptr<string> workTaskDealRateGrowthRate{};
  shared_ptr<string> workTaskGrowthRate{};

  GetWorkTaskSummaryResponseBodyData() {}

  explicit GetWorkTaskSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dealAverageDuration) {
      res["DealAverageDuration"] = boost::any(*dealAverageDuration);
    }
    if (dealAverageDurationGrowthRate) {
      res["DealAverageDurationGrowthRate"] = boost::any(*dealAverageDurationGrowthRate);
    }
    if (dealWorkTaskCount) {
      res["DealWorkTaskCount"] = boost::any(*dealWorkTaskCount);
    }
    if (dealWorkTaskCountRate) {
      res["DealWorkTaskCountRate"] = boost::any(*dealWorkTaskCountRate);
    }
    if (workTaskCount) {
      res["WorkTaskCount"] = boost::any(*workTaskCount);
    }
    if (workTaskDealRate) {
      res["WorkTaskDealRate"] = boost::any(*workTaskDealRate);
    }
    if (workTaskDealRateGrowthRate) {
      res["WorkTaskDealRateGrowthRate"] = boost::any(*workTaskDealRateGrowthRate);
    }
    if (workTaskGrowthRate) {
      res["WorkTaskGrowthRate"] = boost::any(*workTaskGrowthRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DealAverageDuration") != m.end() && !m["DealAverageDuration"].empty()) {
      dealAverageDuration = make_shared<long>(boost::any_cast<long>(m["DealAverageDuration"]));
    }
    if (m.find("DealAverageDurationGrowthRate") != m.end() && !m["DealAverageDurationGrowthRate"].empty()) {
      dealAverageDurationGrowthRate = make_shared<string>(boost::any_cast<string>(m["DealAverageDurationGrowthRate"]));
    }
    if (m.find("DealWorkTaskCount") != m.end() && !m["DealWorkTaskCount"].empty()) {
      dealWorkTaskCount = make_shared<long>(boost::any_cast<long>(m["DealWorkTaskCount"]));
    }
    if (m.find("DealWorkTaskCountRate") != m.end() && !m["DealWorkTaskCountRate"].empty()) {
      dealWorkTaskCountRate = make_shared<string>(boost::any_cast<string>(m["DealWorkTaskCountRate"]));
    }
    if (m.find("WorkTaskCount") != m.end() && !m["WorkTaskCount"].empty()) {
      workTaskCount = make_shared<long>(boost::any_cast<long>(m["WorkTaskCount"]));
    }
    if (m.find("WorkTaskDealRate") != m.end() && !m["WorkTaskDealRate"].empty()) {
      workTaskDealRate = make_shared<string>(boost::any_cast<string>(m["WorkTaskDealRate"]));
    }
    if (m.find("WorkTaskDealRateGrowthRate") != m.end() && !m["WorkTaskDealRateGrowthRate"].empty()) {
      workTaskDealRateGrowthRate = make_shared<string>(boost::any_cast<string>(m["WorkTaskDealRateGrowthRate"]));
    }
    if (m.find("WorkTaskGrowthRate") != m.end() && !m["WorkTaskGrowthRate"].empty()) {
      workTaskGrowthRate = make_shared<string>(boost::any_cast<string>(m["WorkTaskGrowthRate"]));
    }
  }


  virtual ~GetWorkTaskSummaryResponseBodyData() = default;
};
class GetWorkTaskSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetWorkTaskSummaryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWorkTaskSummaryResponseBody() {}

  explicit GetWorkTaskSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkTaskSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWorkTaskSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetWorkTaskSummaryResponseBody() = default;
};
class GetWorkTaskSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkTaskSummaryResponseBody> body{};

  GetWorkTaskSummaryResponse() {}

  explicit GetWorkTaskSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkTaskSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkTaskSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkTaskSummaryResponse() = default;
};
class PageServiceCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<long> authStatus{};
  shared_ptr<long> cmAuthStatus{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> monitorAuthStatus{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};

  PageServiceCustomerRequest() {}

  explicit PageServiceCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authStatus) {
      res["AuthStatus"] = boost::any(*authStatus);
    }
    if (cmAuthStatus) {
      res["CmAuthStatus"] = boost::any(*cmAuthStatus);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (monitorAuthStatus) {
      res["MonitorAuthStatus"] = boost::any(*monitorAuthStatus);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthStatus") != m.end() && !m["AuthStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["AuthStatus"]));
    }
    if (m.find("CmAuthStatus") != m.end() && !m["CmAuthStatus"].empty()) {
      cmAuthStatus = make_shared<long>(boost::any_cast<long>(m["CmAuthStatus"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MonitorAuthStatus") != m.end() && !m["MonitorAuthStatus"].empty()) {
      monitorAuthStatus = make_shared<long>(boost::any_cast<long>(m["MonitorAuthStatus"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~PageServiceCustomerRequest() = default;
};
class PageServiceCustomerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliuid{};
  shared_ptr<long> authStatus{};
  shared_ptr<long> cmAuthStatus{};
  shared_ptr<long> endTime{};
  shared_ptr<string> level{};
  shared_ptr<long> monitorAuthStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> ownId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> version{};

  PageServiceCustomerResponseBodyData() {}

  explicit PageServiceCustomerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (authStatus) {
      res["AuthStatus"] = boost::any(*authStatus);
    }
    if (cmAuthStatus) {
      res["CmAuthStatus"] = boost::any(*cmAuthStatus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (monitorAuthStatus) {
      res["MonitorAuthStatus"] = boost::any(*monitorAuthStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownId) {
      res["OwnId"] = boost::any(*ownId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<string>(boost::any_cast<string>(m["Aliuid"]));
    }
    if (m.find("AuthStatus") != m.end() && !m["AuthStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["AuthStatus"]));
    }
    if (m.find("CmAuthStatus") != m.end() && !m["CmAuthStatus"].empty()) {
      cmAuthStatus = make_shared<long>(boost::any_cast<long>(m["CmAuthStatus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("MonitorAuthStatus") != m.end() && !m["MonitorAuthStatus"].empty()) {
      monitorAuthStatus = make_shared<long>(boost::any_cast<long>(m["MonitorAuthStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnId") != m.end() && !m["OwnId"].empty()) {
      ownId = make_shared<string>(boost::any_cast<string>(m["OwnId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~PageServiceCustomerResponseBodyData() = default;
};
class PageServiceCustomerResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  PageServiceCustomerResponseBodyPageInfo() {}

  explicit PageServiceCustomerResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~PageServiceCustomerResponseBodyPageInfo() = default;
};
class PageServiceCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PageServiceCustomerResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<PageServiceCustomerResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PageServiceCustomerResponseBody() {}

  explicit PageServiceCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
        vector<PageServiceCustomerResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageServiceCustomerResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PageServiceCustomerResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        PageServiceCustomerResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<PageServiceCustomerResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PageServiceCustomerResponseBody() = default;
};
class PageServiceCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageServiceCustomerResponseBody> body{};

  PageServiceCustomerResponse() {}

  explicit PageServiceCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageServiceCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageServiceCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~PageServiceCustomerResponse() = default;
};
class SendCustomEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerId{};
  shared_ptr<string> dataSource{};
  shared_ptr<string> eventDescription{};
  shared_ptr<string> eventDetails{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<long> findTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> isSend{};
  shared_ptr<string> level{};
  shared_ptr<long> occurrenceTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> product{};
  shared_ptr<string> uniqueId{};
  shared_ptr<string> uuid{};

  SendCustomEventRequest() {}

  explicit SendCustomEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (eventDescription) {
      res["EventDescription"] = boost::any(*eventDescription);
    }
    if (eventDetails) {
      res["EventDetails"] = boost::any(*eventDetails);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (findTime) {
      res["FindTime"] = boost::any(*findTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isSend) {
      res["IsSend"] = boost::any(*isSend);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (occurrenceTime) {
      res["OccurrenceTime"] = boost::any(*occurrenceTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["DataSource"]));
    }
    if (m.find("EventDescription") != m.end() && !m["EventDescription"].empty()) {
      eventDescription = make_shared<string>(boost::any_cast<string>(m["EventDescription"]));
    }
    if (m.find("EventDetails") != m.end() && !m["EventDetails"].empty()) {
      eventDetails = make_shared<string>(boost::any_cast<string>(m["EventDetails"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("FindTime") != m.end() && !m["FindTime"].empty()) {
      findTime = make_shared<long>(boost::any_cast<long>(m["FindTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsSend") != m.end() && !m["IsSend"].empty()) {
      isSend = make_shared<string>(boost::any_cast<string>(m["IsSend"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("OccurrenceTime") != m.end() && !m["OccurrenceTime"].empty()) {
      occurrenceTime = make_shared<long>(boost::any_cast<long>(m["OccurrenceTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["UniqueId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~SendCustomEventRequest() = default;
};
class SendCustomEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customerId{};
  shared_ptr<string> customerName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventType{};
  shared_ptr<long> id{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> workTaskName{};

  SendCustomEventResponseBodyData() {}

  explicit SendCustomEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerName) {
      res["CustomerName"] = boost::any(*customerName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (workTaskName) {
      res["WorkTaskName"] = boost::any(*workTaskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerName") != m.end() && !m["CustomerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["CustomerName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("WorkTaskName") != m.end() && !m["WorkTaskName"].empty()) {
      workTaskName = make_shared<string>(boost::any_cast<string>(m["WorkTaskName"]));
    }
  }


  virtual ~SendCustomEventResponseBodyData() = default;
};
class SendCustomEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendCustomEventResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendCustomEventResponseBody() {}

  explicit SendCustomEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendCustomEventResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~SendCustomEventResponseBody() = default;
};
class SendCustomEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomEventResponseBody> body{};

  SendCustomEventResponse() {}

  explicit SendCustomEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomEventResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomEventResponse() = default;
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
  CreateServiceWorkOrderResponse createServiceWorkOrderWithOptions(shared_ptr<CreateServiceWorkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceWorkOrderResponse createServiceWorkOrder(shared_ptr<CreateServiceWorkOrderRequest> request);
  DisposeServiceWorkOrderResponse disposeServiceWorkOrderWithOptions(shared_ptr<DisposeServiceWorkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisposeServiceWorkOrderResponse disposeServiceWorkOrder(shared_ptr<DisposeServiceWorkOrderRequest> request);
  DisposeWorkTaskResponse disposeWorkTaskWithOptions(shared_ptr<DisposeWorkTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisposeWorkTaskResponse disposeWorkTask(shared_ptr<DisposeWorkTaskRequest> request);
  GetAlarmDetailByIdResponse getAlarmDetailByIdWithOptions(shared_ptr<GetAlarmDetailByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlarmDetailByIdResponse getAlarmDetailById(shared_ptr<GetAlarmDetailByIdRequest> request);
  GetAttackedAssetDealResponse getAttackedAssetDealWithOptions(shared_ptr<GetAttackedAssetDealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAttackedAssetDealResponse getAttackedAssetDeal(shared_ptr<GetAttackedAssetDealRequest> request);
  GetBaselineSummaryResponse getBaselineSummaryWithOptions(shared_ptr<GetBaselineSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBaselineSummaryResponse getBaselineSummary(shared_ptr<GetBaselineSummaryRequest> request);
  GetConsoleScoreResponse getConsoleScoreWithOptions(shared_ptr<GetConsoleScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsoleScoreResponse getConsoleScore(shared_ptr<GetConsoleScoreRequest> request);
  GetDetailByIdResponse getDetailByIdWithOptions(shared_ptr<GetDetailByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetailByIdResponse getDetailById(shared_ptr<GetDetailByIdRequest> request);
  GetDocumentDownloadUrlResponse getDocumentDownloadUrlWithOptions(shared_ptr<GetDocumentDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentDownloadUrlResponse getDocumentDownloadUrl(shared_ptr<GetDocumentDownloadUrlRequest> request);
  GetDocumentPageResponse getDocumentPageWithOptions(shared_ptr<GetDocumentPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentPageResponse getDocumentPage(shared_ptr<GetDocumentPageRequest> request);
  GetDocumentSummaryResponse getDocumentSummaryWithOptions(shared_ptr<GetDocumentSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentSummaryResponse getDocumentSummary(shared_ptr<GetDocumentSummaryRequest> request);
  GetRecentDocumentResponse getRecentDocumentWithOptions(shared_ptr<GetRecentDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecentDocumentResponse getRecentDocument(shared_ptr<GetRecentDocumentRequest> request);
  GetSafetyCoverResponse getSafetyCoverWithOptions(shared_ptr<GetSafetyCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSafetyCoverResponse getSafetyCover(shared_ptr<GetSafetyCoverRequest> request);
  GetSowListResponse getSowListWithOptions(shared_ptr<GetSowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSowListResponse getSowList(shared_ptr<GetSowListRequest> request);
  GetSuspEventPageResponse getSuspEventPageWithOptions(shared_ptr<GetSuspEventPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSuspEventPageResponse getSuspEventPage(shared_ptr<GetSuspEventPageRequest> request);
  GetSuspEventSummaryResponse getSuspEventSummaryWithOptions(shared_ptr<GetSuspEventSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSuspEventSummaryResponse getSuspEventSummary(shared_ptr<GetSuspEventSummaryRequest> request);
  GetSuspPageSummaryResponse getSuspPageSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSuspPageSummaryResponse getSuspPageSummary();
  GetUserStatusResponse getUserStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserStatusResponse getUserStatus();
  GetVulItemPageResponse getVulItemPageWithOptions(shared_ptr<GetVulItemPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVulItemPageResponse getVulItemPage(shared_ptr<GetVulItemPageRequest> request);
  GetVulListByIdResponse getVulListByIdWithOptions(shared_ptr<GetVulListByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVulListByIdResponse getVulListById(shared_ptr<GetVulListByIdRequest> request);
  GetVulPageSummaryResponse getVulPageSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVulPageSummaryResponse getVulPageSummary();
  GetVulSummaryResponse getVulSummaryWithOptions(shared_ptr<GetVulSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVulSummaryResponse getVulSummary(shared_ptr<GetVulSummaryRequest> request);
  GetWorkTaskSummaryResponse getWorkTaskSummaryWithOptions(shared_ptr<GetWorkTaskSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkTaskSummaryResponse getWorkTaskSummary(shared_ptr<GetWorkTaskSummaryRequest> request);
  PageServiceCustomerResponse pageServiceCustomerWithOptions(shared_ptr<PageServiceCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageServiceCustomerResponse pageServiceCustomer(shared_ptr<PageServiceCustomerRequest> request);
  SendCustomEventResponse sendCustomEventWithOptions(shared_ptr<SendCustomEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomEventResponse sendCustomEvent(shared_ptr<SendCustomEventRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mssp20161228

#endif
