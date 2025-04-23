// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AGENCY20250227_H_
#define ALIBABACLOUD_AGENCY20250227_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Agency20250227 {
class GetBillDetailFileListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billMonth{};
  shared_ptr<string> ossAccessKeyId{};
  shared_ptr<string> ossAccessKeySecret{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossRegion{};
  shared_ptr<string> ossSecurityToken{};

  GetBillDetailFileListRequest() {}

  explicit GetBillDetailFileListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billMonth) {
      res["BillMonth"] = boost::any(*billMonth);
    }
    if (ossAccessKeyId) {
      res["OssAccessKeyId"] = boost::any(*ossAccessKeyId);
    }
    if (ossAccessKeySecret) {
      res["OssAccessKeySecret"] = boost::any(*ossAccessKeySecret);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossRegion) {
      res["OssRegion"] = boost::any(*ossRegion);
    }
    if (ossSecurityToken) {
      res["OssSecurityToken"] = boost::any(*ossSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillMonth") != m.end() && !m["BillMonth"].empty()) {
      billMonth = make_shared<string>(boost::any_cast<string>(m["BillMonth"]));
    }
    if (m.find("OssAccessKeyId") != m.end() && !m["OssAccessKeyId"].empty()) {
      ossAccessKeyId = make_shared<string>(boost::any_cast<string>(m["OssAccessKeyId"]));
    }
    if (m.find("OssAccessKeySecret") != m.end() && !m["OssAccessKeySecret"].empty()) {
      ossAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["OssAccessKeySecret"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssRegion") != m.end() && !m["OssRegion"].empty()) {
      ossRegion = make_shared<string>(boost::any_cast<string>(m["OssRegion"]));
    }
    if (m.find("OssSecurityToken") != m.end() && !m["OssSecurityToken"].empty()) {
      ossSecurityToken = make_shared<string>(boost::any_cast<string>(m["OssSecurityToken"]));
    }
  }


  virtual ~GetBillDetailFileListRequest() = default;
};
class GetBillDetailFileListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billMonth{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetBillDetailFileListResponseBodyData() {}

  explicit GetBillDetailFileListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billMonth) {
      res["BillMonth"] = boost::any(*billMonth);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillMonth") != m.end() && !m["BillMonth"].empty()) {
      billMonth = make_shared<string>(boost::any_cast<string>(m["BillMonth"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetBillDetailFileListResponseBodyData() = default;
};
class GetBillDetailFileListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetBillDetailFileListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBillDetailFileListResponseBody() {}

  explicit GetBillDetailFileListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetBillDetailFileListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBillDetailFileListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetBillDetailFileListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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


  virtual ~GetBillDetailFileListResponseBody() = default;
};
class GetBillDetailFileListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBillDetailFileListResponseBody> body{};

  GetBillDetailFileListResponse() {}

  explicit GetBillDetailFileListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBillDetailFileListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBillDetailFileListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBillDetailFileListResponse() = default;
};
class GetCommissionDetailFileListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billMonth{};
  shared_ptr<string> ossAccessKeyId{};
  shared_ptr<string> ossAccessKeySecret{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossRegion{};
  shared_ptr<string> ossSecurityToken{};

  GetCommissionDetailFileListRequest() {}

  explicit GetCommissionDetailFileListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billMonth) {
      res["BillMonth"] = boost::any(*billMonth);
    }
    if (ossAccessKeyId) {
      res["OssAccessKeyId"] = boost::any(*ossAccessKeyId);
    }
    if (ossAccessKeySecret) {
      res["OssAccessKeySecret"] = boost::any(*ossAccessKeySecret);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossRegion) {
      res["OssRegion"] = boost::any(*ossRegion);
    }
    if (ossSecurityToken) {
      res["OssSecurityToken"] = boost::any(*ossSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillMonth") != m.end() && !m["BillMonth"].empty()) {
      billMonth = make_shared<string>(boost::any_cast<string>(m["BillMonth"]));
    }
    if (m.find("OssAccessKeyId") != m.end() && !m["OssAccessKeyId"].empty()) {
      ossAccessKeyId = make_shared<string>(boost::any_cast<string>(m["OssAccessKeyId"]));
    }
    if (m.find("OssAccessKeySecret") != m.end() && !m["OssAccessKeySecret"].empty()) {
      ossAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["OssAccessKeySecret"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssRegion") != m.end() && !m["OssRegion"].empty()) {
      ossRegion = make_shared<string>(boost::any_cast<string>(m["OssRegion"]));
    }
    if (m.find("OssSecurityToken") != m.end() && !m["OssSecurityToken"].empty()) {
      ossSecurityToken = make_shared<string>(boost::any_cast<string>(m["OssSecurityToken"]));
    }
  }


  virtual ~GetCommissionDetailFileListRequest() = default;
};
class GetCommissionDetailFileListResponseBodyDataFileList : public Darabonba::Model {
public:
  shared_ptr<string> bucketSyncStatus{};
  shared_ptr<string> commissionPolicyName{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};

  GetCommissionDetailFileListResponseBodyDataFileList() {}

  explicit GetCommissionDetailFileListResponseBodyDataFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketSyncStatus) {
      res["BucketSyncStatus"] = boost::any(*bucketSyncStatus);
    }
    if (commissionPolicyName) {
      res["CommissionPolicyName"] = boost::any(*commissionPolicyName);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketSyncStatus") != m.end() && !m["BucketSyncStatus"].empty()) {
      bucketSyncStatus = make_shared<string>(boost::any_cast<string>(m["BucketSyncStatus"]));
    }
    if (m.find("CommissionPolicyName") != m.end() && !m["CommissionPolicyName"].empty()) {
      commissionPolicyName = make_shared<string>(boost::any_cast<string>(m["CommissionPolicyName"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
  }


  virtual ~GetCommissionDetailFileListResponseBodyDataFileList() = default;
};
class GetCommissionDetailFileListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billMonth{};
  shared_ptr<vector<GetCommissionDetailFileListResponseBodyDataFileList>> fileList{};
  shared_ptr<string> partnerUid{};

  GetCommissionDetailFileListResponseBodyData() {}

  explicit GetCommissionDetailFileListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billMonth) {
      res["BillMonth"] = boost::any(*billMonth);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (partnerUid) {
      res["PartnerUid"] = boost::any(*partnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillMonth") != m.end() && !m["BillMonth"].empty()) {
      billMonth = make_shared<string>(boost::any_cast<string>(m["BillMonth"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<GetCommissionDetailFileListResponseBodyDataFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCommissionDetailFileListResponseBodyDataFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<GetCommissionDetailFileListResponseBodyDataFileList>>(expect1);
      }
    }
    if (m.find("PartnerUid") != m.end() && !m["PartnerUid"].empty()) {
      partnerUid = make_shared<string>(boost::any_cast<string>(m["PartnerUid"]));
    }
  }


  virtual ~GetCommissionDetailFileListResponseBodyData() = default;
};
class GetCommissionDetailFileListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCommissionDetailFileListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCommissionDetailFileListResponseBody() {}

  explicit GetCommissionDetailFileListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommissionDetailFileListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCommissionDetailFileListResponseBodyData>(model1);
      }
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


  virtual ~GetCommissionDetailFileListResponseBody() = default;
};
class GetCommissionDetailFileListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCommissionDetailFileListResponseBody> body{};

  GetCommissionDetailFileListResponse() {}

  explicit GetCommissionDetailFileListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommissionDetailFileListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCommissionDetailFileListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCommissionDetailFileListResponse() = default;
};
class GetCustomerOrderListRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerAccount{};
  shared_ptr<long> customerUid{};
  shared_ptr<long> orderCreateAfter{};
  shared_ptr<long> orderCreateBefore{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderPayAfter{};
  shared_ptr<long> orderPayBefore{};
  shared_ptr<long> orderStatus{};
  shared_ptr<vector<string>> orderTypeList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<double> payAmountAfter{};
  shared_ptr<double> payAmountBefore{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<string> ramAccountForCustomerManager{};

  GetCustomerOrderListRequest() {}

  explicit GetCustomerOrderListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerAccount) {
      res["CustomerAccount"] = boost::any(*customerAccount);
    }
    if (customerUid) {
      res["CustomerUid"] = boost::any(*customerUid);
    }
    if (orderCreateAfter) {
      res["OrderCreateAfter"] = boost::any(*orderCreateAfter);
    }
    if (orderCreateBefore) {
      res["OrderCreateBefore"] = boost::any(*orderCreateBefore);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPayAfter) {
      res["OrderPayAfter"] = boost::any(*orderPayAfter);
    }
    if (orderPayBefore) {
      res["OrderPayBefore"] = boost::any(*orderPayBefore);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderTypeList) {
      res["OrderTypeList"] = boost::any(*orderTypeList);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payAmountAfter) {
      res["PayAmountAfter"] = boost::any(*payAmountAfter);
    }
    if (payAmountBefore) {
      res["PayAmountBefore"] = boost::any(*payAmountBefore);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ramAccountForCustomerManager) {
      res["RamAccountForCustomerManager"] = boost::any(*ramAccountForCustomerManager);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerAccount") != m.end() && !m["CustomerAccount"].empty()) {
      customerAccount = make_shared<string>(boost::any_cast<string>(m["CustomerAccount"]));
    }
    if (m.find("CustomerUid") != m.end() && !m["CustomerUid"].empty()) {
      customerUid = make_shared<long>(boost::any_cast<long>(m["CustomerUid"]));
    }
    if (m.find("OrderCreateAfter") != m.end() && !m["OrderCreateAfter"].empty()) {
      orderCreateAfter = make_shared<long>(boost::any_cast<long>(m["OrderCreateAfter"]));
    }
    if (m.find("OrderCreateBefore") != m.end() && !m["OrderCreateBefore"].empty()) {
      orderCreateBefore = make_shared<long>(boost::any_cast<long>(m["OrderCreateBefore"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderPayAfter") != m.end() && !m["OrderPayAfter"].empty()) {
      orderPayAfter = make_shared<long>(boost::any_cast<long>(m["OrderPayAfter"]));
    }
    if (m.find("OrderPayBefore") != m.end() && !m["OrderPayBefore"].empty()) {
      orderPayBefore = make_shared<long>(boost::any_cast<long>(m["OrderPayBefore"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderTypeList") != m.end() && !m["OrderTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayAmountAfter") != m.end() && !m["PayAmountAfter"].empty()) {
      payAmountAfter = make_shared<double>(boost::any_cast<double>(m["PayAmountAfter"]));
    }
    if (m.find("PayAmountBefore") != m.end() && !m["PayAmountBefore"].empty()) {
      payAmountBefore = make_shared<double>(boost::any_cast<double>(m["PayAmountBefore"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RamAccountForCustomerManager") != m.end() && !m["RamAccountForCustomerManager"].empty()) {
      ramAccountForCustomerManager = make_shared<string>(boost::any_cast<string>(m["RamAccountForCustomerManager"]));
    }
  }


  virtual ~GetCustomerOrderListRequest() = default;
};
class GetCustomerOrderListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerAccount{};
  shared_ptr<long> customerUid{};
  shared_ptr<long> orderCreateAfter{};
  shared_ptr<long> orderCreateBefore{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderPayAfter{};
  shared_ptr<long> orderPayBefore{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderTypeListShrink{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<double> payAmountAfter{};
  shared_ptr<double> payAmountBefore{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<string> ramAccountForCustomerManager{};

  GetCustomerOrderListShrinkRequest() {}

  explicit GetCustomerOrderListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerAccount) {
      res["CustomerAccount"] = boost::any(*customerAccount);
    }
    if (customerUid) {
      res["CustomerUid"] = boost::any(*customerUid);
    }
    if (orderCreateAfter) {
      res["OrderCreateAfter"] = boost::any(*orderCreateAfter);
    }
    if (orderCreateBefore) {
      res["OrderCreateBefore"] = boost::any(*orderCreateBefore);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPayAfter) {
      res["OrderPayAfter"] = boost::any(*orderPayAfter);
    }
    if (orderPayBefore) {
      res["OrderPayBefore"] = boost::any(*orderPayBefore);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderTypeListShrink) {
      res["OrderTypeList"] = boost::any(*orderTypeListShrink);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payAmountAfter) {
      res["PayAmountAfter"] = boost::any(*payAmountAfter);
    }
    if (payAmountBefore) {
      res["PayAmountBefore"] = boost::any(*payAmountBefore);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ramAccountForCustomerManager) {
      res["RamAccountForCustomerManager"] = boost::any(*ramAccountForCustomerManager);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerAccount") != m.end() && !m["CustomerAccount"].empty()) {
      customerAccount = make_shared<string>(boost::any_cast<string>(m["CustomerAccount"]));
    }
    if (m.find("CustomerUid") != m.end() && !m["CustomerUid"].empty()) {
      customerUid = make_shared<long>(boost::any_cast<long>(m["CustomerUid"]));
    }
    if (m.find("OrderCreateAfter") != m.end() && !m["OrderCreateAfter"].empty()) {
      orderCreateAfter = make_shared<long>(boost::any_cast<long>(m["OrderCreateAfter"]));
    }
    if (m.find("OrderCreateBefore") != m.end() && !m["OrderCreateBefore"].empty()) {
      orderCreateBefore = make_shared<long>(boost::any_cast<long>(m["OrderCreateBefore"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderPayAfter") != m.end() && !m["OrderPayAfter"].empty()) {
      orderPayAfter = make_shared<long>(boost::any_cast<long>(m["OrderPayAfter"]));
    }
    if (m.find("OrderPayBefore") != m.end() && !m["OrderPayBefore"].empty()) {
      orderPayBefore = make_shared<long>(boost::any_cast<long>(m["OrderPayBefore"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderTypeList") != m.end() && !m["OrderTypeList"].empty()) {
      orderTypeListShrink = make_shared<string>(boost::any_cast<string>(m["OrderTypeList"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayAmountAfter") != m.end() && !m["PayAmountAfter"].empty()) {
      payAmountAfter = make_shared<double>(boost::any_cast<double>(m["PayAmountAfter"]));
    }
    if (m.find("PayAmountBefore") != m.end() && !m["PayAmountBefore"].empty()) {
      payAmountBefore = make_shared<double>(boost::any_cast<double>(m["PayAmountBefore"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RamAccountForCustomerManager") != m.end() && !m["RamAccountForCustomerManager"].empty()) {
      ramAccountForCustomerManager = make_shared<string>(boost::any_cast<string>(m["RamAccountForCustomerManager"]));
    }
  }


  virtual ~GetCustomerOrderListShrinkRequest() = default;
};
class GetCustomerOrderListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> amountDiscount{};
  shared_ptr<double> amountDue{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> customerAccount{};
  shared_ptr<string> customerClassification{};
  shared_ptr<long> customerUid{};
  shared_ptr<double> deductedAmountByCoupons{};
  shared_ptr<double> discountedPrice{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<string> paidAt{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<vector<string>> ramAccountForCustomerManagers{};

  GetCustomerOrderListResponseBodyData() {}

  explicit GetCustomerOrderListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amountDiscount) {
      res["AmountDiscount"] = boost::any(*amountDiscount);
    }
    if (amountDue) {
      res["AmountDue"] = boost::any(*amountDue);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (customerAccount) {
      res["CustomerAccount"] = boost::any(*customerAccount);
    }
    if (customerClassification) {
      res["CustomerClassification"] = boost::any(*customerClassification);
    }
    if (customerUid) {
      res["CustomerUid"] = boost::any(*customerUid);
    }
    if (deductedAmountByCoupons) {
      res["DeductedAmountByCoupons"] = boost::any(*deductedAmountByCoupons);
    }
    if (discountedPrice) {
      res["DiscountedPrice"] = boost::any(*discountedPrice);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (paidAt) {
      res["PaidAt"] = boost::any(*paidAt);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (ramAccountForCustomerManagers) {
      res["RamAccountForCustomerManagers"] = boost::any(*ramAccountForCustomerManagers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AmountDiscount") != m.end() && !m["AmountDiscount"].empty()) {
      amountDiscount = make_shared<double>(boost::any_cast<double>(m["AmountDiscount"]));
    }
    if (m.find("AmountDue") != m.end() && !m["AmountDue"].empty()) {
      amountDue = make_shared<double>(boost::any_cast<double>(m["AmountDue"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("CustomerAccount") != m.end() && !m["CustomerAccount"].empty()) {
      customerAccount = make_shared<string>(boost::any_cast<string>(m["CustomerAccount"]));
    }
    if (m.find("CustomerClassification") != m.end() && !m["CustomerClassification"].empty()) {
      customerClassification = make_shared<string>(boost::any_cast<string>(m["CustomerClassification"]));
    }
    if (m.find("CustomerUid") != m.end() && !m["CustomerUid"].empty()) {
      customerUid = make_shared<long>(boost::any_cast<long>(m["CustomerUid"]));
    }
    if (m.find("DeductedAmountByCoupons") != m.end() && !m["DeductedAmountByCoupons"].empty()) {
      deductedAmountByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedAmountByCoupons"]));
    }
    if (m.find("DiscountedPrice") != m.end() && !m["DiscountedPrice"].empty()) {
      discountedPrice = make_shared<double>(boost::any_cast<double>(m["DiscountedPrice"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PaidAt") != m.end() && !m["PaidAt"].empty()) {
      paidAt = make_shared<string>(boost::any_cast<string>(m["PaidAt"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RamAccountForCustomerManagers") != m.end() && !m["RamAccountForCustomerManagers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RamAccountForCustomerManagers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RamAccountForCustomerManagers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ramAccountForCustomerManagers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetCustomerOrderListResponseBodyData() = default;
};
class GetCustomerOrderListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetCustomerOrderListResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetCustomerOrderListResponseBody() {}

  explicit GetCustomerOrderListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCustomerOrderListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCustomerOrderListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCustomerOrderListResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetCustomerOrderListResponseBody() = default;
};
class GetCustomerOrderListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCustomerOrderListResponseBody> body{};

  GetCustomerOrderListResponse() {}

  explicit GetCustomerOrderListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerOrderListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerOrderListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerOrderListResponse() = default;
};
class GetRenewalRateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> fiscalYearAndQuarter{};

  GetRenewalRateListRequest() {}

  explicit GetRenewalRateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fiscalYearAndQuarter) {
      res["FiscalYearAndQuarter"] = boost::any(*fiscalYearAndQuarter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FiscalYearAndQuarter") != m.end() && !m["FiscalYearAndQuarter"].empty()) {
      fiscalYearAndQuarter = make_shared<string>(boost::any_cast<string>(m["FiscalYearAndQuarter"]));
    }
  }


  virtual ~GetRenewalRateListRequest() = default;
};
class GetRenewalRateListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> customerAdjustedRenewalAmountDue{};
  shared_ptr<double> customerOtherBillAmount{};
  shared_ptr<double> finalCustomerRenewalAmountDue{};
  shared_ptr<double> finalCustomerRenewalRate{};
  shared_ptr<double> finalCustomerRenewedAmount{};
  shared_ptr<double> finalOtherBillAmount{};
  shared_ptr<double> finalRenewalAmountDue{};
  shared_ptr<double> finalRenewalRate{};
  shared_ptr<double> finalRenewedAmount{};
  shared_ptr<double> finalSubPartnerRenewalAmountDue{};
  shared_ptr<double> finalSubPartnerRenewalRate{};
  shared_ptr<double> finalSubPartnerRenewedAmount{};
  shared_ptr<string> fiscalYearAndQuarter{};
  shared_ptr<string> masterPid{};
  shared_ptr<string> masterPidName{};
  shared_ptr<double> specialCustomerRenewRatio{};
  shared_ptr<double> specialCustomerRenewalAmountDue{};
  shared_ptr<double> specialCustomerRenewedAmount{};
  shared_ptr<double> specialFinalRenewRatio{};
  shared_ptr<double> specialFinalRenewalAmountDue{};
  shared_ptr<double> specialFinalRenewedAmount{};
  shared_ptr<double> specialSubPartnerRenewRatio{};
  shared_ptr<double> specialSubPartnerRenewalAmountDue{};
  shared_ptr<double> specialSubPartnerRenewedAmount{};
  shared_ptr<double> subPartnerAdjustedRenewalAmountDue{};
  shared_ptr<double> subPartnerOtherBillAmount{};

  GetRenewalRateListResponseBodyData() {}

  explicit GetRenewalRateListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerAdjustedRenewalAmountDue) {
      res["CustomerAdjustedRenewalAmountDue"] = boost::any(*customerAdjustedRenewalAmountDue);
    }
    if (customerOtherBillAmount) {
      res["CustomerOtherBillAmount"] = boost::any(*customerOtherBillAmount);
    }
    if (finalCustomerRenewalAmountDue) {
      res["FinalCustomerRenewalAmountDue"] = boost::any(*finalCustomerRenewalAmountDue);
    }
    if (finalCustomerRenewalRate) {
      res["FinalCustomerRenewalRate"] = boost::any(*finalCustomerRenewalRate);
    }
    if (finalCustomerRenewedAmount) {
      res["FinalCustomerRenewedAmount"] = boost::any(*finalCustomerRenewedAmount);
    }
    if (finalOtherBillAmount) {
      res["FinalOtherBillAmount"] = boost::any(*finalOtherBillAmount);
    }
    if (finalRenewalAmountDue) {
      res["FinalRenewalAmountDue"] = boost::any(*finalRenewalAmountDue);
    }
    if (finalRenewalRate) {
      res["FinalRenewalRate"] = boost::any(*finalRenewalRate);
    }
    if (finalRenewedAmount) {
      res["FinalRenewedAmount"] = boost::any(*finalRenewedAmount);
    }
    if (finalSubPartnerRenewalAmountDue) {
      res["FinalSubPartnerRenewalAmountDue"] = boost::any(*finalSubPartnerRenewalAmountDue);
    }
    if (finalSubPartnerRenewalRate) {
      res["FinalSubPartnerRenewalRate"] = boost::any(*finalSubPartnerRenewalRate);
    }
    if (finalSubPartnerRenewedAmount) {
      res["FinalSubPartnerRenewedAmount"] = boost::any(*finalSubPartnerRenewedAmount);
    }
    if (fiscalYearAndQuarter) {
      res["FiscalYearAndQuarter"] = boost::any(*fiscalYearAndQuarter);
    }
    if (masterPid) {
      res["MasterPid"] = boost::any(*masterPid);
    }
    if (masterPidName) {
      res["MasterPidName"] = boost::any(*masterPidName);
    }
    if (specialCustomerRenewRatio) {
      res["SpecialCustomerRenewRatio"] = boost::any(*specialCustomerRenewRatio);
    }
    if (specialCustomerRenewalAmountDue) {
      res["SpecialCustomerRenewalAmountDue"] = boost::any(*specialCustomerRenewalAmountDue);
    }
    if (specialCustomerRenewedAmount) {
      res["SpecialCustomerRenewedAmount"] = boost::any(*specialCustomerRenewedAmount);
    }
    if (specialFinalRenewRatio) {
      res["SpecialFinalRenewRatio"] = boost::any(*specialFinalRenewRatio);
    }
    if (specialFinalRenewalAmountDue) {
      res["SpecialFinalRenewalAmountDue"] = boost::any(*specialFinalRenewalAmountDue);
    }
    if (specialFinalRenewedAmount) {
      res["SpecialFinalRenewedAmount"] = boost::any(*specialFinalRenewedAmount);
    }
    if (specialSubPartnerRenewRatio) {
      res["SpecialSubPartnerRenewRatio"] = boost::any(*specialSubPartnerRenewRatio);
    }
    if (specialSubPartnerRenewalAmountDue) {
      res["SpecialSubPartnerRenewalAmountDue"] = boost::any(*specialSubPartnerRenewalAmountDue);
    }
    if (specialSubPartnerRenewedAmount) {
      res["SpecialSubPartnerRenewedAmount"] = boost::any(*specialSubPartnerRenewedAmount);
    }
    if (subPartnerAdjustedRenewalAmountDue) {
      res["SubPartnerAdjustedRenewalAmountDue"] = boost::any(*subPartnerAdjustedRenewalAmountDue);
    }
    if (subPartnerOtherBillAmount) {
      res["SubPartnerOtherBillAmount"] = boost::any(*subPartnerOtherBillAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerAdjustedRenewalAmountDue") != m.end() && !m["CustomerAdjustedRenewalAmountDue"].empty()) {
      customerAdjustedRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["CustomerAdjustedRenewalAmountDue"]));
    }
    if (m.find("CustomerOtherBillAmount") != m.end() && !m["CustomerOtherBillAmount"].empty()) {
      customerOtherBillAmount = make_shared<double>(boost::any_cast<double>(m["CustomerOtherBillAmount"]));
    }
    if (m.find("FinalCustomerRenewalAmountDue") != m.end() && !m["FinalCustomerRenewalAmountDue"].empty()) {
      finalCustomerRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["FinalCustomerRenewalAmountDue"]));
    }
    if (m.find("FinalCustomerRenewalRate") != m.end() && !m["FinalCustomerRenewalRate"].empty()) {
      finalCustomerRenewalRate = make_shared<double>(boost::any_cast<double>(m["FinalCustomerRenewalRate"]));
    }
    if (m.find("FinalCustomerRenewedAmount") != m.end() && !m["FinalCustomerRenewedAmount"].empty()) {
      finalCustomerRenewedAmount = make_shared<double>(boost::any_cast<double>(m["FinalCustomerRenewedAmount"]));
    }
    if (m.find("FinalOtherBillAmount") != m.end() && !m["FinalOtherBillAmount"].empty()) {
      finalOtherBillAmount = make_shared<double>(boost::any_cast<double>(m["FinalOtherBillAmount"]));
    }
    if (m.find("FinalRenewalAmountDue") != m.end() && !m["FinalRenewalAmountDue"].empty()) {
      finalRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["FinalRenewalAmountDue"]));
    }
    if (m.find("FinalRenewalRate") != m.end() && !m["FinalRenewalRate"].empty()) {
      finalRenewalRate = make_shared<double>(boost::any_cast<double>(m["FinalRenewalRate"]));
    }
    if (m.find("FinalRenewedAmount") != m.end() && !m["FinalRenewedAmount"].empty()) {
      finalRenewedAmount = make_shared<double>(boost::any_cast<double>(m["FinalRenewedAmount"]));
    }
    if (m.find("FinalSubPartnerRenewalAmountDue") != m.end() && !m["FinalSubPartnerRenewalAmountDue"].empty()) {
      finalSubPartnerRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["FinalSubPartnerRenewalAmountDue"]));
    }
    if (m.find("FinalSubPartnerRenewalRate") != m.end() && !m["FinalSubPartnerRenewalRate"].empty()) {
      finalSubPartnerRenewalRate = make_shared<double>(boost::any_cast<double>(m["FinalSubPartnerRenewalRate"]));
    }
    if (m.find("FinalSubPartnerRenewedAmount") != m.end() && !m["FinalSubPartnerRenewedAmount"].empty()) {
      finalSubPartnerRenewedAmount = make_shared<double>(boost::any_cast<double>(m["FinalSubPartnerRenewedAmount"]));
    }
    if (m.find("FiscalYearAndQuarter") != m.end() && !m["FiscalYearAndQuarter"].empty()) {
      fiscalYearAndQuarter = make_shared<string>(boost::any_cast<string>(m["FiscalYearAndQuarter"]));
    }
    if (m.find("MasterPid") != m.end() && !m["MasterPid"].empty()) {
      masterPid = make_shared<string>(boost::any_cast<string>(m["MasterPid"]));
    }
    if (m.find("MasterPidName") != m.end() && !m["MasterPidName"].empty()) {
      masterPidName = make_shared<string>(boost::any_cast<string>(m["MasterPidName"]));
    }
    if (m.find("SpecialCustomerRenewRatio") != m.end() && !m["SpecialCustomerRenewRatio"].empty()) {
      specialCustomerRenewRatio = make_shared<double>(boost::any_cast<double>(m["SpecialCustomerRenewRatio"]));
    }
    if (m.find("SpecialCustomerRenewalAmountDue") != m.end() && !m["SpecialCustomerRenewalAmountDue"].empty()) {
      specialCustomerRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["SpecialCustomerRenewalAmountDue"]));
    }
    if (m.find("SpecialCustomerRenewedAmount") != m.end() && !m["SpecialCustomerRenewedAmount"].empty()) {
      specialCustomerRenewedAmount = make_shared<double>(boost::any_cast<double>(m["SpecialCustomerRenewedAmount"]));
    }
    if (m.find("SpecialFinalRenewRatio") != m.end() && !m["SpecialFinalRenewRatio"].empty()) {
      specialFinalRenewRatio = make_shared<double>(boost::any_cast<double>(m["SpecialFinalRenewRatio"]));
    }
    if (m.find("SpecialFinalRenewalAmountDue") != m.end() && !m["SpecialFinalRenewalAmountDue"].empty()) {
      specialFinalRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["SpecialFinalRenewalAmountDue"]));
    }
    if (m.find("SpecialFinalRenewedAmount") != m.end() && !m["SpecialFinalRenewedAmount"].empty()) {
      specialFinalRenewedAmount = make_shared<double>(boost::any_cast<double>(m["SpecialFinalRenewedAmount"]));
    }
    if (m.find("SpecialSubPartnerRenewRatio") != m.end() && !m["SpecialSubPartnerRenewRatio"].empty()) {
      specialSubPartnerRenewRatio = make_shared<double>(boost::any_cast<double>(m["SpecialSubPartnerRenewRatio"]));
    }
    if (m.find("SpecialSubPartnerRenewalAmountDue") != m.end() && !m["SpecialSubPartnerRenewalAmountDue"].empty()) {
      specialSubPartnerRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["SpecialSubPartnerRenewalAmountDue"]));
    }
    if (m.find("SpecialSubPartnerRenewedAmount") != m.end() && !m["SpecialSubPartnerRenewedAmount"].empty()) {
      specialSubPartnerRenewedAmount = make_shared<double>(boost::any_cast<double>(m["SpecialSubPartnerRenewedAmount"]));
    }
    if (m.find("SubPartnerAdjustedRenewalAmountDue") != m.end() && !m["SubPartnerAdjustedRenewalAmountDue"].empty()) {
      subPartnerAdjustedRenewalAmountDue = make_shared<double>(boost::any_cast<double>(m["SubPartnerAdjustedRenewalAmountDue"]));
    }
    if (m.find("SubPartnerOtherBillAmount") != m.end() && !m["SubPartnerOtherBillAmount"].empty()) {
      subPartnerOtherBillAmount = make_shared<double>(boost::any_cast<double>(m["SubPartnerOtherBillAmount"]));
    }
  }


  virtual ~GetRenewalRateListResponseBodyData() = default;
};
class GetRenewalRateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetRenewalRateListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRenewalRateListResponseBody() {}

  explicit GetRenewalRateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetRenewalRateListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRenewalRateListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRenewalRateListResponseBodyData>>(expect1);
      }
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


  virtual ~GetRenewalRateListResponseBody() = default;
};
class GetRenewalRateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRenewalRateListResponseBody> body{};

  GetRenewalRateListResponse() {}

  explicit GetRenewalRateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRenewalRateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRenewalRateListResponseBody>(model1);
      }
    }
  }


  virtual ~GetRenewalRateListResponse() = default;
};
class GetSubPartnerListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subPartnerCompanyName{};
  shared_ptr<string> subPartnerPid{};

  GetSubPartnerListRequest() {}

  explicit GetSubPartnerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subPartnerCompanyName) {
      res["SubPartnerCompanyName"] = boost::any(*subPartnerCompanyName);
    }
    if (subPartnerPid) {
      res["SubPartnerPid"] = boost::any(*subPartnerPid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubPartnerCompanyName") != m.end() && !m["SubPartnerCompanyName"].empty()) {
      subPartnerCompanyName = make_shared<string>(boost::any_cast<string>(m["SubPartnerCompanyName"]));
    }
    if (m.find("SubPartnerPid") != m.end() && !m["SubPartnerPid"].empty()) {
      subPartnerPid = make_shared<string>(boost::any_cast<string>(m["SubPartnerPid"]));
    }
  }


  virtual ~GetSubPartnerListRequest() = default;
};
class GetSubPartnerListResponseBodySubPartnerList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> agreementStatus{};
  shared_ptr<string> agreementStatusDesc{};
  shared_ptr<string> city{};
  shared_ptr<string> companyName{};
  shared_ptr<string> contact{};
  shared_ptr<string> district{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> masterAccount{};
  shared_ptr<string> masterUid{};
  shared_ptr<string> pid{};
  shared_ptr<string> province{};

  GetSubPartnerListResponseBodySubPartnerList() {}

  explicit GetSubPartnerListResponseBodySubPartnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (agreementStatus) {
      res["AgreementStatus"] = boost::any(*agreementStatus);
    }
    if (agreementStatusDesc) {
      res["AgreementStatusDesc"] = boost::any(*agreementStatusDesc);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (contact) {
      res["Contact"] = boost::any(*contact);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (masterAccount) {
      res["MasterAccount"] = boost::any(*masterAccount);
    }
    if (masterUid) {
      res["MasterUid"] = boost::any(*masterUid);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AgreementStatus") != m.end() && !m["AgreementStatus"].empty()) {
      agreementStatus = make_shared<string>(boost::any_cast<string>(m["AgreementStatus"]));
    }
    if (m.find("AgreementStatusDesc") != m.end() && !m["AgreementStatusDesc"].empty()) {
      agreementStatusDesc = make_shared<string>(boost::any_cast<string>(m["AgreementStatusDesc"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["Contact"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("MasterAccount") != m.end() && !m["MasterAccount"].empty()) {
      masterAccount = make_shared<string>(boost::any_cast<string>(m["MasterAccount"]));
    }
    if (m.find("MasterUid") != m.end() && !m["MasterUid"].empty()) {
      masterUid = make_shared<string>(boost::any_cast<string>(m["MasterUid"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~GetSubPartnerListResponseBodySubPartnerList() = default;
};
class GetSubPartnerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetSubPartnerListResponseBodySubPartnerList>> subPartnerList{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetSubPartnerListResponseBody() {}

  explicit GetSubPartnerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subPartnerList) {
      vector<boost::any> temp1;
      for(auto item1:*subPartnerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubPartnerList"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubPartnerList") != m.end() && !m["SubPartnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubPartnerList"].type()) {
        vector<GetSubPartnerListResponseBodySubPartnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubPartnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubPartnerListResponseBodySubPartnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subPartnerList = make_shared<vector<GetSubPartnerListResponseBodySubPartnerList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetSubPartnerListResponseBody() = default;
};
class GetSubPartnerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubPartnerListResponseBody> body{};

  GetSubPartnerListResponse() {}

  explicit GetSubPartnerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubPartnerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubPartnerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubPartnerListResponse() = default;
};
class GetSubPartnerOrderListRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderCreateAfter{};
  shared_ptr<long> orderCreateBefore{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderPayAfter{};
  shared_ptr<long> orderPayBefore{};
  shared_ptr<long> orderStatus{};
  shared_ptr<vector<string>> orderTypeList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> payAmountAfter{};
  shared_ptr<long> payAmountBefore{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<string> subPartnerName{};
  shared_ptr<long> subPartnerUid{};

  GetSubPartnerOrderListRequest() {}

  explicit GetSubPartnerOrderListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderCreateAfter) {
      res["OrderCreateAfter"] = boost::any(*orderCreateAfter);
    }
    if (orderCreateBefore) {
      res["OrderCreateBefore"] = boost::any(*orderCreateBefore);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPayAfter) {
      res["OrderPayAfter"] = boost::any(*orderPayAfter);
    }
    if (orderPayBefore) {
      res["OrderPayBefore"] = boost::any(*orderPayBefore);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderTypeList) {
      res["OrderTypeList"] = boost::any(*orderTypeList);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payAmountAfter) {
      res["PayAmountAfter"] = boost::any(*payAmountAfter);
    }
    if (payAmountBefore) {
      res["PayAmountBefore"] = boost::any(*payAmountBefore);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (subPartnerName) {
      res["SubPartnerName"] = boost::any(*subPartnerName);
    }
    if (subPartnerUid) {
      res["SubPartnerUid"] = boost::any(*subPartnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderCreateAfter") != m.end() && !m["OrderCreateAfter"].empty()) {
      orderCreateAfter = make_shared<long>(boost::any_cast<long>(m["OrderCreateAfter"]));
    }
    if (m.find("OrderCreateBefore") != m.end() && !m["OrderCreateBefore"].empty()) {
      orderCreateBefore = make_shared<long>(boost::any_cast<long>(m["OrderCreateBefore"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderPayAfter") != m.end() && !m["OrderPayAfter"].empty()) {
      orderPayAfter = make_shared<long>(boost::any_cast<long>(m["OrderPayAfter"]));
    }
    if (m.find("OrderPayBefore") != m.end() && !m["OrderPayBefore"].empty()) {
      orderPayBefore = make_shared<long>(boost::any_cast<long>(m["OrderPayBefore"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderTypeList") != m.end() && !m["OrderTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayAmountAfter") != m.end() && !m["PayAmountAfter"].empty()) {
      payAmountAfter = make_shared<long>(boost::any_cast<long>(m["PayAmountAfter"]));
    }
    if (m.find("PayAmountBefore") != m.end() && !m["PayAmountBefore"].empty()) {
      payAmountBefore = make_shared<long>(boost::any_cast<long>(m["PayAmountBefore"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SubPartnerName") != m.end() && !m["SubPartnerName"].empty()) {
      subPartnerName = make_shared<string>(boost::any_cast<string>(m["SubPartnerName"]));
    }
    if (m.find("SubPartnerUid") != m.end() && !m["SubPartnerUid"].empty()) {
      subPartnerUid = make_shared<long>(boost::any_cast<long>(m["SubPartnerUid"]));
    }
  }


  virtual ~GetSubPartnerOrderListRequest() = default;
};
class GetSubPartnerOrderListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderCreateAfter{};
  shared_ptr<long> orderCreateBefore{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderPayAfter{};
  shared_ptr<long> orderPayBefore{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderTypeListShrink{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> payAmountAfter{};
  shared_ptr<long> payAmountBefore{};
  shared_ptr<long> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<string> subPartnerName{};
  shared_ptr<long> subPartnerUid{};

  GetSubPartnerOrderListShrinkRequest() {}

  explicit GetSubPartnerOrderListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderCreateAfter) {
      res["OrderCreateAfter"] = boost::any(*orderCreateAfter);
    }
    if (orderCreateBefore) {
      res["OrderCreateBefore"] = boost::any(*orderCreateBefore);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPayAfter) {
      res["OrderPayAfter"] = boost::any(*orderPayAfter);
    }
    if (orderPayBefore) {
      res["OrderPayBefore"] = boost::any(*orderPayBefore);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderTypeListShrink) {
      res["OrderTypeList"] = boost::any(*orderTypeListShrink);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payAmountAfter) {
      res["PayAmountAfter"] = boost::any(*payAmountAfter);
    }
    if (payAmountBefore) {
      res["PayAmountBefore"] = boost::any(*payAmountBefore);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (subPartnerName) {
      res["SubPartnerName"] = boost::any(*subPartnerName);
    }
    if (subPartnerUid) {
      res["SubPartnerUid"] = boost::any(*subPartnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderCreateAfter") != m.end() && !m["OrderCreateAfter"].empty()) {
      orderCreateAfter = make_shared<long>(boost::any_cast<long>(m["OrderCreateAfter"]));
    }
    if (m.find("OrderCreateBefore") != m.end() && !m["OrderCreateBefore"].empty()) {
      orderCreateBefore = make_shared<long>(boost::any_cast<long>(m["OrderCreateBefore"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderPayAfter") != m.end() && !m["OrderPayAfter"].empty()) {
      orderPayAfter = make_shared<long>(boost::any_cast<long>(m["OrderPayAfter"]));
    }
    if (m.find("OrderPayBefore") != m.end() && !m["OrderPayBefore"].empty()) {
      orderPayBefore = make_shared<long>(boost::any_cast<long>(m["OrderPayBefore"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderTypeList") != m.end() && !m["OrderTypeList"].empty()) {
      orderTypeListShrink = make_shared<string>(boost::any_cast<string>(m["OrderTypeList"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayAmountAfter") != m.end() && !m["PayAmountAfter"].empty()) {
      payAmountAfter = make_shared<long>(boost::any_cast<long>(m["PayAmountAfter"]));
    }
    if (m.find("PayAmountBefore") != m.end() && !m["PayAmountBefore"].empty()) {
      payAmountBefore = make_shared<long>(boost::any_cast<long>(m["PayAmountBefore"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SubPartnerName") != m.end() && !m["SubPartnerName"].empty()) {
      subPartnerName = make_shared<string>(boost::any_cast<string>(m["SubPartnerName"]));
    }
    if (m.find("SubPartnerUid") != m.end() && !m["SubPartnerUid"].empty()) {
      subPartnerUid = make_shared<long>(boost::any_cast<long>(m["SubPartnerUid"]));
    }
  }


  virtual ~GetSubPartnerOrderListShrinkRequest() = default;
};
class GetSubPartnerOrderListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> amountDiscount{};
  shared_ptr<double> amountDue{};
  shared_ptr<string> createdAt{};
  shared_ptr<double> deductedAmountByCoupons{};
  shared_ptr<double> discountedPrice{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<string> paidAt{};
  shared_ptr<long> payType{};
  shared_ptr<double> price{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> projectId{};
  shared_ptr<string> subPartnerName{};
  shared_ptr<long> subPartnerUid{};

  GetSubPartnerOrderListResponseBodyData() {}

  explicit GetSubPartnerOrderListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amountDiscount) {
      res["AmountDiscount"] = boost::any(*amountDiscount);
    }
    if (amountDue) {
      res["AmountDue"] = boost::any(*amountDue);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (deductedAmountByCoupons) {
      res["DeductedAmountByCoupons"] = boost::any(*deductedAmountByCoupons);
    }
    if (discountedPrice) {
      res["DiscountedPrice"] = boost::any(*discountedPrice);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (paidAt) {
      res["PaidAt"] = boost::any(*paidAt);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (subPartnerName) {
      res["SubPartnerName"] = boost::any(*subPartnerName);
    }
    if (subPartnerUid) {
      res["SubPartnerUid"] = boost::any(*subPartnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AmountDiscount") != m.end() && !m["AmountDiscount"].empty()) {
      amountDiscount = make_shared<double>(boost::any_cast<double>(m["AmountDiscount"]));
    }
    if (m.find("AmountDue") != m.end() && !m["AmountDue"].empty()) {
      amountDue = make_shared<double>(boost::any_cast<double>(m["AmountDue"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DeductedAmountByCoupons") != m.end() && !m["DeductedAmountByCoupons"].empty()) {
      deductedAmountByCoupons = make_shared<double>(boost::any_cast<double>(m["DeductedAmountByCoupons"]));
    }
    if (m.find("DiscountedPrice") != m.end() && !m["DiscountedPrice"].empty()) {
      discountedPrice = make_shared<double>(boost::any_cast<double>(m["DiscountedPrice"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PaidAt") != m.end() && !m["PaidAt"].empty()) {
      paidAt = make_shared<string>(boost::any_cast<string>(m["PaidAt"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SubPartnerName") != m.end() && !m["SubPartnerName"].empty()) {
      subPartnerName = make_shared<string>(boost::any_cast<string>(m["SubPartnerName"]));
    }
    if (m.find("SubPartnerUid") != m.end() && !m["SubPartnerUid"].empty()) {
      subPartnerUid = make_shared<long>(boost::any_cast<long>(m["SubPartnerUid"]));
    }
  }


  virtual ~GetSubPartnerOrderListResponseBodyData() = default;
};
class GetSubPartnerOrderListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetSubPartnerOrderListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetSubPartnerOrderListResponseBody() {}

  explicit GetSubPartnerOrderListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSubPartnerOrderListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubPartnerOrderListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSubPartnerOrderListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetSubPartnerOrderListResponseBody() = default;
};
class GetSubPartnerOrderListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubPartnerOrderListResponseBody> body{};

  GetSubPartnerOrderListResponse() {}

  explicit GetSubPartnerOrderListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubPartnerOrderListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubPartnerOrderListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubPartnerOrderListResponse() = default;
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
  GetBillDetailFileListResponse getBillDetailFileListWithOptions(shared_ptr<GetBillDetailFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBillDetailFileListResponse getBillDetailFileList(shared_ptr<GetBillDetailFileListRequest> request);
  GetCommissionDetailFileListResponse getCommissionDetailFileListWithOptions(shared_ptr<GetCommissionDetailFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCommissionDetailFileListResponse getCommissionDetailFileList(shared_ptr<GetCommissionDetailFileListRequest> request);
  GetCustomerOrderListResponse getCustomerOrderListWithOptions(shared_ptr<GetCustomerOrderListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerOrderListResponse getCustomerOrderList(shared_ptr<GetCustomerOrderListRequest> request);
  GetRenewalRateListResponse getRenewalRateListWithOptions(shared_ptr<GetRenewalRateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRenewalRateListResponse getRenewalRateList(shared_ptr<GetRenewalRateListRequest> request);
  GetSubPartnerListResponse getSubPartnerListWithOptions(shared_ptr<GetSubPartnerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubPartnerListResponse getSubPartnerList(shared_ptr<GetSubPartnerListRequest> request);
  GetSubPartnerOrderListResponse getSubPartnerOrderListWithOptions(shared_ptr<GetSubPartnerOrderListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubPartnerOrderListResponse getSubPartnerOrderList(shared_ptr<GetSubPartnerOrderListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Agency20250227

#endif
