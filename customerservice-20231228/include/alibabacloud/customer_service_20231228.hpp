// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CUSTOMERSERVICE20231228_H_
#define ALIBABACLOUD_CUSTOMERSERVICE20231228_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CustomerService20231228 {
class DataValue : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> name{};
  shared_ptr<string> fileName{};
  shared_ptr<string> url{};
  shared_ptr<string> uploadTime{};
  shared_ptr<string> orderId{};
  shared_ptr<string> applyId{};

  DataValue() {}

  explicit DataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (uploadTime) {
      res["uploadTime"] = boost::any(*uploadTime);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (applyId) {
      res["applyId"] = boost::any(*applyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("uploadTime") != m.end() && !m["uploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["uploadTime"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("applyId") != m.end() && !m["applyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["applyId"]));
    }
  }


  virtual ~DataValue() = default;
};
class GetDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> scene{};

  GetDownloadUrlRequest() {}

  explicit GetDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["fileId"] = boost::any(*fileId);
    }
    if (fileKey) {
      res["fileKey"] = boost::any(*fileKey);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileId") != m.end() && !m["fileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["fileId"]));
    }
    if (m.find("fileKey") != m.end() && !m["fileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["fileKey"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
  }


  virtual ~GetDownloadUrlRequest() = default;
};
class GetDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDownloadUrlResponseBody() {}

  explicit GetDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDownloadUrlResponseBody() = default;
};
class GetDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDownloadUrlResponseBody> body{};

  GetDownloadUrlResponse() {}

  explicit GetDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetDownloadUrlResponse() = default;
};
class GetEnterpriseSupportPlanDetailRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> freeOrderApplyCodes{};
  shared_ptr<vector<long>> orderIds{};

  GetEnterpriseSupportPlanDetailRequest() {}

  explicit GetEnterpriseSupportPlanDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (freeOrderApplyCodes) {
      res["freeOrderApplyCodes"] = boost::any(*freeOrderApplyCodes);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("freeOrderApplyCodes") != m.end() && !m["freeOrderApplyCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["freeOrderApplyCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["freeOrderApplyCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      freeOrderApplyCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailRequest() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups : public Darabonba::Model {
public:
  shared_ptr<string> mainDingDepartmentId{};
  shared_ptr<string> mainDingGroupId{};
  shared_ptr<string> mainDingGroupName{};
  shared_ptr<string> subDingDepartmentId{};
  shared_ptr<string> subDingGroupId{};
  shared_ptr<string> subDingGroupName{};

  GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mainDingDepartmentId) {
      res["mainDingDepartmentId"] = boost::any(*mainDingDepartmentId);
    }
    if (mainDingGroupId) {
      res["mainDingGroupId"] = boost::any(*mainDingGroupId);
    }
    if (mainDingGroupName) {
      res["mainDingGroupName"] = boost::any(*mainDingGroupName);
    }
    if (subDingDepartmentId) {
      res["subDingDepartmentId"] = boost::any(*subDingDepartmentId);
    }
    if (subDingGroupId) {
      res["subDingGroupId"] = boost::any(*subDingGroupId);
    }
    if (subDingGroupName) {
      res["subDingGroupName"] = boost::any(*subDingGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mainDingDepartmentId") != m.end() && !m["mainDingDepartmentId"].empty()) {
      mainDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["mainDingDepartmentId"]));
    }
    if (m.find("mainDingGroupId") != m.end() && !m["mainDingGroupId"].empty()) {
      mainDingGroupId = make_shared<string>(boost::any_cast<string>(m["mainDingGroupId"]));
    }
    if (m.find("mainDingGroupName") != m.end() && !m["mainDingGroupName"].empty()) {
      mainDingGroupName = make_shared<string>(boost::any_cast<string>(m["mainDingGroupName"]));
    }
    if (m.find("subDingDepartmentId") != m.end() && !m["subDingDepartmentId"].empty()) {
      subDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["subDingDepartmentId"]));
    }
    if (m.find("subDingGroupId") != m.end() && !m["subDingGroupId"].empty()) {
      subDingGroupId = make_shared<string>(boost::any_cast<string>(m["subDingGroupId"]));
    }
    if (m.find("subDingGroupName") != m.end() && !m["subDingGroupName"].empty()) {
      subDingGroupName = make_shared<string>(boost::any_cast<string>(m["subDingGroupName"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataDocs : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> name{};
  shared_ptr<string> orderId{};
  shared_ptr<string> uploadTime{};
  shared_ptr<string> url{};

  GetEnterpriseSupportPlanDetailResponseBodyDataDocs() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (uploadTime) {
      res["uploadTime"] = boost::any(*uploadTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("uploadTime") != m.end() && !m["uploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["uploadTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataDocs() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> docName{};
  shared_ptr<string> docSubmitTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> orderId{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (docName) {
      res["docName"] = boost::any(*docName);
    }
    if (docSubmitTime) {
      res["docSubmitTime"] = boost::any(*docSubmitTime);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("docName") != m.end() && !m["docName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["docName"]));
    }
    if (m.find("docSubmitTime") != m.end() && !m["docSubmitTime"].empty()) {
      docSubmitTime = make_shared<string>(boost::any_cast<string>(m["docSubmitTime"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finishTime"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode : public Darabonba::Model {
public:
  shared_ptr<string> auditTime{};
  shared_ptr<string> status{};
  shared_ptr<string> statusName{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditTime) {
      res["auditTime"] = boost::any(*auditTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusName) {
      res["statusName"] = boost::any(*statusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auditTime") != m.end() && !m["auditTime"].empty()) {
      auditTime = make_shared<string>(boost::any_cast<string>(m["auditTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusName") != m.end() && !m["statusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["statusName"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> applyTime{};
  shared_ptr<long> uid{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyTime) {
      res["applyTime"] = boost::any(*applyTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyTime") != m.end() && !m["applyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["applyTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> payTime{};
  shared_ptr<long> uid{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payTime) {
      res["payTime"] = boost::any(*payTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("payTime") != m.end() && !m["payTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["payTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode> docNode{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode> finishNode{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode> freeOrderAuditNode{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode> freeOrderNode{};
  shared_ptr<string> name{};
  shared_ptr<long> orderDate{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode> orderNode{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation> serviceImplementation{};
  shared_ptr<long> status{};

  GetEnterpriseSupportPlanDetailResponseBodyDataNodes() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docNode) {
      res["docNode"] = docNode ? boost::any(docNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishNode) {
      res["finishNode"] = finishNode ? boost::any(finishNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderAuditNode) {
      res["freeOrderAuditNode"] = freeOrderAuditNode ? boost::any(freeOrderAuditNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderNode) {
      res["freeOrderNode"] = freeOrderNode ? boost::any(freeOrderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderDate) {
      res["orderDate"] = boost::any(*orderDate);
    }
    if (orderNode) {
      res["orderNode"] = orderNode ? boost::any(orderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceImplementation) {
      res["serviceImplementation"] = serviceImplementation ? boost::any(serviceImplementation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docNode") != m.end() && !m["docNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["docNode"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["docNode"]));
        docNode = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesDocNode>(model1);
      }
    }
    if (m.find("finishNode") != m.end() && !m["finishNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["finishNode"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["finishNode"]));
        finishNode = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFinishNode>(model1);
      }
    }
    if (m.find("freeOrderAuditNode") != m.end() && !m["freeOrderAuditNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderAuditNode"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderAuditNode"]));
        freeOrderAuditNode = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderAuditNode>(model1);
      }
    }
    if (m.find("freeOrderNode") != m.end() && !m["freeOrderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderNode"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderNode"]));
        freeOrderNode = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesFreeOrderNode>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderDate") != m.end() && !m["orderDate"].empty()) {
      orderDate = make_shared<long>(boost::any_cast<long>(m["orderDate"]));
    }
    if (m.find("orderNode") != m.end() && !m["orderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["orderNode"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["orderNode"]));
        orderNode = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesOrderNode>(model1);
      }
    }
    if (m.find("serviceImplementation") != m.end() && !m["serviceImplementation"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceImplementation"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceImplementation"]));
        serviceImplementation = make_shared<GetEnterpriseSupportPlanDetailResponseBodyDataNodesServiceImplementation>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataNodes() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> name1{};

  GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (name1) {
      res["name1"] = boost::any(*name1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("name1") != m.end() && !m["name1"].empty()) {
      name1 = make_shared<string>(boost::any_cast<string>(m["name1"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList>> operateList{};

  GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operateList) {
      vector<boost::any> temp1;
      for(auto item1:*operateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operateList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operateList") != m.end() && !m["operateList"].empty()) {
      if (typeid(vector<boost::any>) == m["operateList"].type()) {
        vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateList = make_shared<vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItemsOperateList>>(expect1);
      }
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems() = default;
};
class GetEnterpriseSupportPlanDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canApplyFreeOrder{};
  shared_ptr<long> customerId{};
  shared_ptr<vector<GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups>> dingGroups{};
  shared_ptr<vector<GetEnterpriseSupportPlanDetailResponseBodyDataDocs>> docs{};
  shared_ptr<string> endTime{};
  shared_ptr<string> firstPayTime{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<long> freeOrderApplyId{};
  shared_ptr<string> freeOrderApplyTime{};
  shared_ptr<string> freeOrderApprovedTime{};
  shared_ptr<string> freeOrderExpectStartTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<GetEnterpriseSupportPlanDetailResponseBodyDataNodes>> nodes{};
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems>> serviceItems{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceStatusName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> sortTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskNum{};

  GetEnterpriseSupportPlanDetailResponseBodyData() {}

  explicit GetEnterpriseSupportPlanDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canApplyFreeOrder) {
      res["canApplyFreeOrder"] = boost::any(*canApplyFreeOrder);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (dingGroups) {
      vector<boost::any> temp1;
      for(auto item1:*dingGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dingGroups"] = boost::any(temp1);
    }
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["docs"] = boost::any(temp1);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (firstPayTime) {
      res["firstPayTime"] = boost::any(*firstPayTime);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (freeOrderApplyId) {
      res["freeOrderApplyId"] = boost::any(*freeOrderApplyId);
    }
    if (freeOrderApplyTime) {
      res["freeOrderApplyTime"] = boost::any(*freeOrderApplyTime);
    }
    if (freeOrderApprovedTime) {
      res["freeOrderApprovedTime"] = boost::any(*freeOrderApprovedTime);
    }
    if (freeOrderExpectStartTime) {
      res["freeOrderExpectStartTime"] = boost::any(*freeOrderExpectStartTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodes"] = boost::any(temp1);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    if (serviceItems) {
      vector<boost::any> temp1;
      for(auto item1:*serviceItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceItems"] = boost::any(temp1);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceStatusName) {
      res["serviceStatusName"] = boost::any(*serviceStatusName);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (sortTime) {
      res["sortTime"] = boost::any(*sortTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskNum) {
      res["taskNum"] = boost::any(*taskNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canApplyFreeOrder") != m.end() && !m["canApplyFreeOrder"].empty()) {
      canApplyFreeOrder = make_shared<bool>(boost::any_cast<bool>(m["canApplyFreeOrder"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["customerId"]));
    }
    if (m.find("dingGroups") != m.end() && !m["dingGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["dingGroups"].type()) {
        vector<GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dingGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dingGroups = make_shared<vector<GetEnterpriseSupportPlanDetailResponseBodyDataDingGroups>>(expect1);
      }
    }
    if (m.find("docs") != m.end() && !m["docs"].empty()) {
      if (typeid(vector<boost::any>) == m["docs"].type()) {
        vector<GetEnterpriseSupportPlanDetailResponseBodyDataDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseSupportPlanDetailResponseBodyDataDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<GetEnterpriseSupportPlanDetailResponseBodyDataDocs>>(expect1);
      }
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("firstPayTime") != m.end() && !m["firstPayTime"].empty()) {
      firstPayTime = make_shared<string>(boost::any_cast<string>(m["firstPayTime"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("freeOrderApplyId") != m.end() && !m["freeOrderApplyId"].empty()) {
      freeOrderApplyId = make_shared<long>(boost::any_cast<long>(m["freeOrderApplyId"]));
    }
    if (m.find("freeOrderApplyTime") != m.end() && !m["freeOrderApplyTime"].empty()) {
      freeOrderApplyTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyTime"]));
    }
    if (m.find("freeOrderApprovedTime") != m.end() && !m["freeOrderApprovedTime"].empty()) {
      freeOrderApprovedTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApprovedTime"]));
    }
    if (m.find("freeOrderExpectStartTime") != m.end() && !m["freeOrderExpectStartTime"].empty()) {
      freeOrderExpectStartTime = make_shared<string>(boost::any_cast<string>(m["freeOrderExpectStartTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<GetEnterpriseSupportPlanDetailResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseSupportPlanDetailResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<GetEnterpriseSupportPlanDetailResponseBodyDataNodes>>(expect1);
      }
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("serviceItems") != m.end() && !m["serviceItems"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceItems"].type()) {
        vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceItems = make_shared<vector<GetEnterpriseSupportPlanDetailResponseBodyDataServiceItems>>(expect1);
      }
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceStatusName") != m.end() && !m["serviceStatusName"].empty()) {
      serviceStatusName = make_shared<string>(boost::any_cast<string>(m["serviceStatusName"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("sortTime") != m.end() && !m["sortTime"].empty()) {
      sortTime = make_shared<string>(boost::any_cast<string>(m["sortTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("taskNum") != m.end() && !m["taskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["taskNum"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBodyData() = default;
};
class GetEnterpriseSupportPlanDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseSupportPlanDetailResponseBody() {}

  explicit GetEnterpriseSupportPlanDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnterpriseSupportPlanDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnterpriseSupportPlanDetailResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponseBody() = default;
};
class GetEnterpriseSupportPlanDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseSupportPlanDetailResponseBody> body{};

  GetEnterpriseSupportPlanDetailResponse() {}

  explicit GetEnterpriseSupportPlanDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseSupportPlanDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseSupportPlanDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseSupportPlanDetailResponse() = default;
};
class GetPreViewUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyCode{};
  shared_ptr<long> fileId{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> orderId{};
  shared_ptr<string> scene{};

  GetPreViewUrlRequest() {}

  explicit GetPreViewUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyCode) {
      res["applyCode"] = boost::any(*applyCode);
    }
    if (fileId) {
      res["fileId"] = boost::any(*fileId);
    }
    if (fileKey) {
      res["fileKey"] = boost::any(*fileKey);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyCode") != m.end() && !m["applyCode"].empty()) {
      applyCode = make_shared<string>(boost::any_cast<string>(m["applyCode"]));
    }
    if (m.find("fileId") != m.end() && !m["fileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["fileId"]));
    }
    if (m.find("fileKey") != m.end() && !m["fileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["fileKey"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
  }


  virtual ~GetPreViewUrlRequest() = default;
};
class GetPreViewUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPreViewUrlResponseBody() {}

  explicit GetPreViewUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPreViewUrlResponseBody() = default;
};
class GetPreViewUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPreViewUrlResponseBody> body{};

  GetPreViewUrlResponse() {}

  explicit GetPreViewUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPreViewUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPreViewUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPreViewUrlResponse() = default;
};
class GetServiceDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyCode{};

  GetServiceDetailRequest() {}

  explicit GetServiceDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyCode) {
      res["applyCode"] = boost::any(*applyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyCode") != m.end() && !m["applyCode"].empty()) {
      applyCode = make_shared<string>(boost::any_cast<string>(m["applyCode"]));
    }
  }


  virtual ~GetServiceDetailRequest() = default;
};
class GetServiceDetailResponseBodyDataAppointments : public Darabonba::Model {
public:
  shared_ptr<long> huhangId{};
  shared_ptr<long> purchaseCode{};
  shared_ptr<string> purchaseDesc{};
  shared_ptr<long> supportDays{};
  shared_ptr<long> travelDays{};

  GetServiceDetailResponseBodyDataAppointments() {}

  explicit GetServiceDetailResponseBodyDataAppointments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (huhangId) {
      res["huhangId"] = boost::any(*huhangId);
    }
    if (purchaseCode) {
      res["purchaseCode"] = boost::any(*purchaseCode);
    }
    if (purchaseDesc) {
      res["purchaseDesc"] = boost::any(*purchaseDesc);
    }
    if (supportDays) {
      res["supportDays"] = boost::any(*supportDays);
    }
    if (travelDays) {
      res["travelDays"] = boost::any(*travelDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("huhangId") != m.end() && !m["huhangId"].empty()) {
      huhangId = make_shared<long>(boost::any_cast<long>(m["huhangId"]));
    }
    if (m.find("purchaseCode") != m.end() && !m["purchaseCode"].empty()) {
      purchaseCode = make_shared<long>(boost::any_cast<long>(m["purchaseCode"]));
    }
    if (m.find("purchaseDesc") != m.end() && !m["purchaseDesc"].empty()) {
      purchaseDesc = make_shared<string>(boost::any_cast<string>(m["purchaseDesc"]));
    }
    if (m.find("supportDays") != m.end() && !m["supportDays"].empty()) {
      supportDays = make_shared<long>(boost::any_cast<long>(m["supportDays"]));
    }
    if (m.find("travelDays") != m.end() && !m["travelDays"].empty()) {
      travelDays = make_shared<long>(boost::any_cast<long>(m["travelDays"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataAppointments() = default;
};
class GetServiceDetailResponseBodyDataPayOrders : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> compassCommodityCode{};
  shared_ptr<string> compassCommodityName{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<map<string, boost::any>> operate{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> payAmount{};
  shared_ptr<string> payTime{};
  shared_ptr<string> productName{};
  shared_ptr<string> reneWalUrl{};
  shared_ptr<map<string, boost::any>> serviceContentMap{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<long> supportDays{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPayOrders() {}

  explicit GetServiceDetailResponseBodyDataPayOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (compassCommodityCode) {
      res["compassCommodityCode"] = boost::any(*compassCommodityCode);
    }
    if (compassCommodityName) {
      res["compassCommodityName"] = boost::any(*compassCommodityName);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (operate) {
      res["operate"] = boost::any(*operate);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (originalPrice) {
      res["originalPrice"] = boost::any(*originalPrice);
    }
    if (payAmount) {
      res["payAmount"] = boost::any(*payAmount);
    }
    if (payTime) {
      res["payTime"] = boost::any(*payTime);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (reneWalUrl) {
      res["reneWalUrl"] = boost::any(*reneWalUrl);
    }
    if (serviceContentMap) {
      res["serviceContentMap"] = boost::any(*serviceContentMap);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportDays) {
      res["supportDays"] = boost::any(*supportDays);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["amount"]));
    }
    if (m.find("compassCommodityCode") != m.end() && !m["compassCommodityCode"].empty()) {
      compassCommodityCode = make_shared<string>(boost::any_cast<string>(m["compassCommodityCode"]));
    }
    if (m.find("compassCommodityName") != m.end() && !m["compassCommodityName"].empty()) {
      compassCommodityName = make_shared<string>(boost::any_cast<string>(m["compassCommodityName"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("operate") != m.end() && !m["operate"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["operate"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operate = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("originalPrice") != m.end() && !m["originalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["originalPrice"]));
    }
    if (m.find("payAmount") != m.end() && !m["payAmount"].empty()) {
      payAmount = make_shared<double>(boost::any_cast<double>(m["payAmount"]));
    }
    if (m.find("payTime") != m.end() && !m["payTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["payTime"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("reneWalUrl") != m.end() && !m["reneWalUrl"].empty()) {
      reneWalUrl = make_shared<string>(boost::any_cast<string>(m["reneWalUrl"]));
    }
    if (m.find("serviceContentMap") != m.end() && !m["serviceContentMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["serviceContentMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceContentMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportDays") != m.end() && !m["supportDays"].empty()) {
      supportDays = make_shared<long>(boost::any_cast<long>(m["supportDays"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPayOrders() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  GetServiceDetailResponseBodyDataPerformanceOrdersExtList() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersExtList() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports>> serviceReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers>> tamEngineers{};

  GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacksTamEngineers>>(expect1);
      }
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers() = default;
};
class GetServiceDetailResponseBodyDataPerformanceOrders : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<long> packCount{};
  shared_ptr<vector<map<string, boost::any>>> packDetails{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks>> performancePacks{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports>> serviceReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers>> tamEngineers{};

  GetServiceDetailResponseBodyDataPerformanceOrders() {}

  explicit GetServiceDetailResponseBodyDataPerformanceOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (packCount) {
      res["packCount"] = boost::any(*packCount);
    }
    if (packDetails) {
      res["packDetails"] = boost::any(*packDetails);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (performancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*performancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performancePacks"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("packCount") != m.end() && !m["packCount"].empty()) {
      packCount = make_shared<long>(boost::any_cast<long>(m["packCount"]));
    }
    if (m.find("packDetails") != m.end() && !m["packDetails"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["packDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["packDetails"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      packDetails = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("performancePacks") != m.end() && !m["performancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["performancePacks"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performancePacks = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersPerformancePacks>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrdersTamEngineers>>(expect1);
      }
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformanceOrders() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  GetServiceDetailResponseBodyDataPerformancePacksExtList() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksExtList() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformancePacksServiceReports() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksServiceReports() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacksTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  GetServiceDetailResponseBodyDataPerformancePacksTamEngineers() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacksTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacksTamEngineers() = default;
};
class GetServiceDetailResponseBodyDataPerformancePacks : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceReports>> serviceReports{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacksTamEngineers>> tamEngineers{};

  GetServiceDetailResponseBodyDataPerformancePacks() {}

  explicit GetServiceDetailResponseBodyDataPerformancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacksTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacksTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacksTamEngineers>>(expect1);
      }
    }
  }


  virtual ~GetServiceDetailResponseBodyDataPerformancePacks() = default;
};
class GetServiceDetailResponseBodyDataServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  GetServiceDetailResponseBodyDataServiceReports() {}

  explicit GetServiceDetailResponseBodyDataServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyDataServiceReports() = default;
};
class GetServiceDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applierId{};
  shared_ptr<string> applyCode{};
  shared_ptr<long> applyTime{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataAppointments>> appointments{};
  shared_ptr<string> buyUrl{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> customerName{};
  shared_ptr<bool> cycleService{};
  shared_ptr<long> executedCount{};
  shared_ptr<long> finishCount{};
  shared_ptr<map<string, boost::any>> formMap{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<vector<map<string, boost::any>>> packDetails{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPayOrders>> payOrders{};
  shared_ptr<string> payUrl{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformanceOrders>> performanceOrders{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataPerformancePacks>> performancePacks{};
  shared_ptr<string> reneWalUrl{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};
  shared_ptr<vector<GetServiceDetailResponseBodyDataServiceReports>> serviceReports{};
  shared_ptr<vector<long>> serviceTimeRange{};
  shared_ptr<string> status{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> statusStr{};
  shared_ptr<string> termOfValidity{};
  shared_ptr<long> totalPack{};
  shared_ptr<string> type{};
  shared_ptr<long> usePack{};

  GetServiceDetailResponseBodyData() {}

  explicit GetServiceDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applierId) {
      res["applierId"] = boost::any(*applierId);
    }
    if (applyCode) {
      res["applyCode"] = boost::any(*applyCode);
    }
    if (applyTime) {
      res["applyTime"] = boost::any(*applyTime);
    }
    if (appointments) {
      vector<boost::any> temp1;
      for(auto item1:*appointments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["appointments"] = boost::any(temp1);
    }
    if (buyUrl) {
      res["buyUrl"] = boost::any(*buyUrl);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (customerName) {
      res["customerName"] = boost::any(*customerName);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (executedCount) {
      res["executedCount"] = boost::any(*executedCount);
    }
    if (finishCount) {
      res["finishCount"] = boost::any(*finishCount);
    }
    if (formMap) {
      res["formMap"] = boost::any(*formMap);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (packDetails) {
      res["packDetails"] = boost::any(*packDetails);
    }
    if (payOrders) {
      vector<boost::any> temp1;
      for(auto item1:*payOrders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["payOrders"] = boost::any(temp1);
    }
    if (payUrl) {
      res["payUrl"] = boost::any(*payUrl);
    }
    if (performanceOrders) {
      vector<boost::any> temp1;
      for(auto item1:*performanceOrders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceOrders"] = boost::any(temp1);
    }
    if (performancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*performancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performancePacks"] = boost::any(temp1);
    }
    if (reneWalUrl) {
      res["reneWalUrl"] = boost::any(*reneWalUrl);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceTimeRange) {
      res["serviceTimeRange"] = boost::any(*serviceTimeRange);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (termOfValidity) {
      res["termOfValidity"] = boost::any(*termOfValidity);
    }
    if (totalPack) {
      res["totalPack"] = boost::any(*totalPack);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (usePack) {
      res["usePack"] = boost::any(*usePack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applierId") != m.end() && !m["applierId"].empty()) {
      applierId = make_shared<string>(boost::any_cast<string>(m["applierId"]));
    }
    if (m.find("applyCode") != m.end() && !m["applyCode"].empty()) {
      applyCode = make_shared<string>(boost::any_cast<string>(m["applyCode"]));
    }
    if (m.find("applyTime") != m.end() && !m["applyTime"].empty()) {
      applyTime = make_shared<long>(boost::any_cast<long>(m["applyTime"]));
    }
    if (m.find("appointments") != m.end() && !m["appointments"].empty()) {
      if (typeid(vector<boost::any>) == m["appointments"].type()) {
        vector<GetServiceDetailResponseBodyDataAppointments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["appointments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataAppointments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appointments = make_shared<vector<GetServiceDetailResponseBodyDataAppointments>>(expect1);
      }
    }
    if (m.find("buyUrl") != m.end() && !m["buyUrl"].empty()) {
      buyUrl = make_shared<string>(boost::any_cast<string>(m["buyUrl"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("customerName") != m.end() && !m["customerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["customerName"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("executedCount") != m.end() && !m["executedCount"].empty()) {
      executedCount = make_shared<long>(boost::any_cast<long>(m["executedCount"]));
    }
    if (m.find("finishCount") != m.end() && !m["finishCount"].empty()) {
      finishCount = make_shared<long>(boost::any_cast<long>(m["finishCount"]));
    }
    if (m.find("formMap") != m.end() && !m["formMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["formMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      formMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("packDetails") != m.end() && !m["packDetails"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["packDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["packDetails"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      packDetails = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("payOrders") != m.end() && !m["payOrders"].empty()) {
      if (typeid(vector<boost::any>) == m["payOrders"].type()) {
        vector<GetServiceDetailResponseBodyDataPayOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["payOrders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPayOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        payOrders = make_shared<vector<GetServiceDetailResponseBodyDataPayOrders>>(expect1);
      }
    }
    if (m.find("payUrl") != m.end() && !m["payUrl"].empty()) {
      payUrl = make_shared<string>(boost::any_cast<string>(m["payUrl"]));
    }
    if (m.find("performanceOrders") != m.end() && !m["performanceOrders"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceOrders"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformanceOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceOrders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformanceOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceOrders = make_shared<vector<GetServiceDetailResponseBodyDataPerformanceOrders>>(expect1);
      }
    }
    if (m.find("performancePacks") != m.end() && !m["performancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["performancePacks"].type()) {
        vector<GetServiceDetailResponseBodyDataPerformancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataPerformancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performancePacks = make_shared<vector<GetServiceDetailResponseBodyDataPerformancePacks>>(expect1);
      }
    }
    if (m.find("reneWalUrl") != m.end() && !m["reneWalUrl"].empty()) {
      reneWalUrl = make_shared<string>(boost::any_cast<string>(m["reneWalUrl"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<GetServiceDetailResponseBodyDataServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceDetailResponseBodyDataServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<GetServiceDetailResponseBodyDataServiceReports>>(expect1);
      }
    }
    if (m.find("serviceTimeRange") != m.end() && !m["serviceTimeRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceTimeRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceTimeRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceTimeRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("termOfValidity") != m.end() && !m["termOfValidity"].empty()) {
      termOfValidity = make_shared<string>(boost::any_cast<string>(m["termOfValidity"]));
    }
    if (m.find("totalPack") != m.end() && !m["totalPack"].empty()) {
      totalPack = make_shared<long>(boost::any_cast<long>(m["totalPack"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("usePack") != m.end() && !m["usePack"].empty()) {
      usePack = make_shared<long>(boost::any_cast<long>(m["usePack"]));
    }
  }


  virtual ~GetServiceDetailResponseBodyData() = default;
};
class GetServiceDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetServiceDetailResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetServiceDetailResponseBody() {}

  explicit GetServiceDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetServiceDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetServiceDetailResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetServiceDetailResponseBody() = default;
};
class GetServiceDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceDetailResponseBody> body{};

  GetServiceDetailResponse() {}

  explicit GetServiceDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceDetailResponse() = default;
};
class GetYunQiTaskByRecordIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  GetYunQiTaskByRecordIdRequest() {}

  explicit GetYunQiTaskByRecordIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["recordId"]));
    }
  }


  virtual ~GetYunQiTaskByRecordIdRequest() = default;
};
class GetYunQiTaskByRecordIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chatId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> evaluationStar{};
  shared_ptr<string> important{};
  shared_ptr<string> mainDingDepartmentId{};
  shared_ptr<string> mainDingGroupId{};
  shared_ptr<string> mainDingGroupName{};
  shared_ptr<string> productName{};
  shared_ptr<string> recordId{};
  shared_ptr<string> status{};
  shared_ptr<string> subDingDepartmentId{};
  shared_ptr<string> subDingGroupId{};
  shared_ptr<string> subDingGroupName{};
  shared_ptr<string> title{};

  GetYunQiTaskByRecordIdResponseBodyData() {}

  explicit GetYunQiTaskByRecordIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (evaluationStar) {
      res["evaluationStar"] = boost::any(*evaluationStar);
    }
    if (important) {
      res["important"] = boost::any(*important);
    }
    if (mainDingDepartmentId) {
      res["mainDingDepartmentId"] = boost::any(*mainDingDepartmentId);
    }
    if (mainDingGroupId) {
      res["mainDingGroupId"] = boost::any(*mainDingGroupId);
    }
    if (mainDingGroupName) {
      res["mainDingGroupName"] = boost::any(*mainDingGroupName);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subDingDepartmentId) {
      res["subDingDepartmentId"] = boost::any(*subDingDepartmentId);
    }
    if (subDingGroupId) {
      res["subDingGroupId"] = boost::any(*subDingGroupId);
    }
    if (subDingGroupName) {
      res["subDingGroupName"] = boost::any(*subDingGroupName);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("evaluationStar") != m.end() && !m["evaluationStar"].empty()) {
      evaluationStar = make_shared<long>(boost::any_cast<long>(m["evaluationStar"]));
    }
    if (m.find("important") != m.end() && !m["important"].empty()) {
      important = make_shared<string>(boost::any_cast<string>(m["important"]));
    }
    if (m.find("mainDingDepartmentId") != m.end() && !m["mainDingDepartmentId"].empty()) {
      mainDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["mainDingDepartmentId"]));
    }
    if (m.find("mainDingGroupId") != m.end() && !m["mainDingGroupId"].empty()) {
      mainDingGroupId = make_shared<string>(boost::any_cast<string>(m["mainDingGroupId"]));
    }
    if (m.find("mainDingGroupName") != m.end() && !m["mainDingGroupName"].empty()) {
      mainDingGroupName = make_shared<string>(boost::any_cast<string>(m["mainDingGroupName"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["recordId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subDingDepartmentId") != m.end() && !m["subDingDepartmentId"].empty()) {
      subDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["subDingDepartmentId"]));
    }
    if (m.find("subDingGroupId") != m.end() && !m["subDingGroupId"].empty()) {
      subDingGroupId = make_shared<string>(boost::any_cast<string>(m["subDingGroupId"]));
    }
    if (m.find("subDingGroupName") != m.end() && !m["subDingGroupName"].empty()) {
      subDingGroupName = make_shared<string>(boost::any_cast<string>(m["subDingGroupName"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~GetYunQiTaskByRecordIdResponseBodyData() = default;
};
class GetYunQiTaskByRecordIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetYunQiTaskByRecordIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetYunQiTaskByRecordIdResponseBody() {}

  explicit GetYunQiTaskByRecordIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetYunQiTaskByRecordIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetYunQiTaskByRecordIdResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetYunQiTaskByRecordIdResponseBody() = default;
};
class GetYunQiTaskByRecordIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetYunQiTaskByRecordIdResponseBody> body{};

  GetYunQiTaskByRecordIdResponse() {}

  explicit GetYunQiTaskByRecordIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetYunQiTaskByRecordIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetYunQiTaskByRecordIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetYunQiTaskByRecordIdResponse() = default;
};
class ListDocsGroupByYearRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applyCodes{};
  shared_ptr<string> fileNameKeyword{};
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<string> productCode{};
  shared_ptr<string> scene{};

  ListDocsGroupByYearRequest() {}

  explicit ListDocsGroupByYearRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyCodes) {
      res["applyCodes"] = boost::any(*applyCodes);
    }
    if (fileNameKeyword) {
      res["fileNameKeyword"] = boost::any(*fileNameKeyword);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyCodes") != m.end() && !m["applyCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["applyCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["applyCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applyCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fileNameKeyword") != m.end() && !m["fileNameKeyword"].empty()) {
      fileNameKeyword = make_shared<string>(boost::any_cast<string>(m["fileNameKeyword"]));
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
  }


  virtual ~ListDocsGroupByYearRequest() = default;
};
class ListDocsGroupByYearResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, vector<DataValue>>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDocsGroupByYearResponseBody() {}

  explicit ListDocsGroupByYearResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      map<string, boost::any> temp1;
      for(auto item1:*data){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        map<string, vector<DataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["data"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        data = make_shared<map<string, vector<DataValue>>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListDocsGroupByYearResponseBody() = default;
};
class ListDocsGroupByYearResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDocsGroupByYearResponseBody> body{};

  ListDocsGroupByYearResponse() {}

  explicit ListDocsGroupByYearResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDocsGroupByYearResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDocsGroupByYearResponseBody>(model1);
      }
    }
  }


  virtual ~ListDocsGroupByYearResponse() = default;
};
class ListEnterpriseSupportPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListEnterpriseSupportPlanRequest() {}

  explicit ListEnterpriseSupportPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanRequest() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataDocs : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> name{};
  shared_ptr<string> orderId{};
  shared_ptr<string> uploadTime{};
  shared_ptr<string> url{};

  ListEnterpriseSupportPlanResponseBodyDataDocs() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (uploadTime) {
      res["uploadTime"] = boost::any(*uploadTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("uploadTime") != m.end() && !m["uploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["uploadTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataDocs() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesDocNode : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> docName{};
  shared_ptr<string> docSubmitTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> orderId{};

  ListEnterpriseSupportPlanResponseBodyDataNodesDocNode() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesDocNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (docName) {
      res["docName"] = boost::any(*docName);
    }
    if (docSubmitTime) {
      res["docSubmitTime"] = boost::any(*docSubmitTime);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("docName") != m.end() && !m["docName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["docName"]));
    }
    if (m.find("docSubmitTime") != m.end() && !m["docSubmitTime"].empty()) {
      docSubmitTime = make_shared<string>(boost::any_cast<string>(m["docSubmitTime"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesDocNode() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};

  ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finishTime"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode : public Darabonba::Model {
public:
  shared_ptr<string> auditTime{};
  shared_ptr<string> status{};
  shared_ptr<string> statusName{};

  ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditTime) {
      res["auditTime"] = boost::any(*auditTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusName) {
      res["statusName"] = boost::any(*statusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auditTime") != m.end() && !m["auditTime"].empty()) {
      auditTime = make_shared<string>(boost::any_cast<string>(m["auditTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusName") != m.end() && !m["statusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["statusName"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> applyTime{};
  shared_ptr<long> uid{};

  ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyTime) {
      res["applyTime"] = boost::any(*applyTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyTime") != m.end() && !m["applyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["applyTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> payTime{};
  shared_ptr<long> uid{};

  ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payTime) {
      res["payTime"] = boost::any(*payTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("payTime") != m.end() && !m["payTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["payTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesDocNode> docNode{};
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode> finishNode{};
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode> freeOrderAuditNode{};
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode> freeOrderNode{};
  shared_ptr<string> name{};
  shared_ptr<long> orderDate{};
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode> orderNode{};
  shared_ptr<ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation> serviceImplementation{};
  shared_ptr<long> status{};

  ListEnterpriseSupportPlanResponseBodyDataNodes() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docNode) {
      res["docNode"] = docNode ? boost::any(docNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishNode) {
      res["finishNode"] = finishNode ? boost::any(finishNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderAuditNode) {
      res["freeOrderAuditNode"] = freeOrderAuditNode ? boost::any(freeOrderAuditNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderNode) {
      res["freeOrderNode"] = freeOrderNode ? boost::any(freeOrderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderDate) {
      res["orderDate"] = boost::any(*orderDate);
    }
    if (orderNode) {
      res["orderNode"] = orderNode ? boost::any(orderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceImplementation) {
      res["serviceImplementation"] = serviceImplementation ? boost::any(serviceImplementation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docNode") != m.end() && !m["docNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["docNode"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesDocNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["docNode"]));
        docNode = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesDocNode>(model1);
      }
    }
    if (m.find("finishNode") != m.end() && !m["finishNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["finishNode"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["finishNode"]));
        finishNode = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesFinishNode>(model1);
      }
    }
    if (m.find("freeOrderAuditNode") != m.end() && !m["freeOrderAuditNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderAuditNode"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderAuditNode"]));
        freeOrderAuditNode = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderAuditNode>(model1);
      }
    }
    if (m.find("freeOrderNode") != m.end() && !m["freeOrderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderNode"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderNode"]));
        freeOrderNode = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesFreeOrderNode>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderDate") != m.end() && !m["orderDate"].empty()) {
      orderDate = make_shared<long>(boost::any_cast<long>(m["orderDate"]));
    }
    if (m.find("orderNode") != m.end() && !m["orderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["orderNode"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["orderNode"]));
        orderNode = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesOrderNode>(model1);
      }
    }
    if (m.find("serviceImplementation") != m.end() && !m["serviceImplementation"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceImplementation"].type()) {
        ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceImplementation"]));
        serviceImplementation = make_shared<ListEnterpriseSupportPlanResponseBodyDataNodesServiceImplementation>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataNodes() = default;
};
class ListEnterpriseSupportPlanResponseBodyDataOperateInfos : public Darabonba::Model {
public:
  shared_ptr<bool> canClick{};
  shared_ptr<string> text{};
  shared_ptr<string> url{};

  ListEnterpriseSupportPlanResponseBodyDataOperateInfos() {}

  explicit ListEnterpriseSupportPlanResponseBodyDataOperateInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canClick) {
      res["canClick"] = boost::any(*canClick);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canClick") != m.end() && !m["canClick"].empty()) {
      canClick = make_shared<bool>(boost::any_cast<bool>(m["canClick"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyDataOperateInfos() = default;
};
class ListEnterpriseSupportPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canApplyFreeOrder{};
  shared_ptr<long> customerId{};
  shared_ptr<vector<ListEnterpriseSupportPlanResponseBodyDataDocs>> docs{};
  shared_ptr<string> endTime{};
  shared_ptr<string> firstPayTime{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<long> freeOrderApplyId{};
  shared_ptr<string> freeOrderApplyTime{};
  shared_ptr<string> freeOrderApprovedTime{};
  shared_ptr<string> freeOrderExpectStartTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ListEnterpriseSupportPlanResponseBodyDataNodes>> nodes{};
  shared_ptr<vector<ListEnterpriseSupportPlanResponseBodyDataOperateInfos>> operateInfos{};
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceStatusName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> sortTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskNum{};

  ListEnterpriseSupportPlanResponseBodyData() {}

  explicit ListEnterpriseSupportPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canApplyFreeOrder) {
      res["canApplyFreeOrder"] = boost::any(*canApplyFreeOrder);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["docs"] = boost::any(temp1);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (firstPayTime) {
      res["firstPayTime"] = boost::any(*firstPayTime);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (freeOrderApplyId) {
      res["freeOrderApplyId"] = boost::any(*freeOrderApplyId);
    }
    if (freeOrderApplyTime) {
      res["freeOrderApplyTime"] = boost::any(*freeOrderApplyTime);
    }
    if (freeOrderApprovedTime) {
      res["freeOrderApprovedTime"] = boost::any(*freeOrderApprovedTime);
    }
    if (freeOrderExpectStartTime) {
      res["freeOrderExpectStartTime"] = boost::any(*freeOrderExpectStartTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodes"] = boost::any(temp1);
    }
    if (operateInfos) {
      vector<boost::any> temp1;
      for(auto item1:*operateInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operateInfos"] = boost::any(temp1);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceStatusName) {
      res["serviceStatusName"] = boost::any(*serviceStatusName);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (sortTime) {
      res["sortTime"] = boost::any(*sortTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskNum) {
      res["taskNum"] = boost::any(*taskNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canApplyFreeOrder") != m.end() && !m["canApplyFreeOrder"].empty()) {
      canApplyFreeOrder = make_shared<bool>(boost::any_cast<bool>(m["canApplyFreeOrder"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["customerId"]));
    }
    if (m.find("docs") != m.end() && !m["docs"].empty()) {
      if (typeid(vector<boost::any>) == m["docs"].type()) {
        vector<ListEnterpriseSupportPlanResponseBodyDataDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanResponseBodyDataDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<ListEnterpriseSupportPlanResponseBodyDataDocs>>(expect1);
      }
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("firstPayTime") != m.end() && !m["firstPayTime"].empty()) {
      firstPayTime = make_shared<string>(boost::any_cast<string>(m["firstPayTime"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("freeOrderApplyId") != m.end() && !m["freeOrderApplyId"].empty()) {
      freeOrderApplyId = make_shared<long>(boost::any_cast<long>(m["freeOrderApplyId"]));
    }
    if (m.find("freeOrderApplyTime") != m.end() && !m["freeOrderApplyTime"].empty()) {
      freeOrderApplyTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyTime"]));
    }
    if (m.find("freeOrderApprovedTime") != m.end() && !m["freeOrderApprovedTime"].empty()) {
      freeOrderApprovedTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApprovedTime"]));
    }
    if (m.find("freeOrderExpectStartTime") != m.end() && !m["freeOrderExpectStartTime"].empty()) {
      freeOrderExpectStartTime = make_shared<string>(boost::any_cast<string>(m["freeOrderExpectStartTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<ListEnterpriseSupportPlanResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListEnterpriseSupportPlanResponseBodyDataNodes>>(expect1);
      }
    }
    if (m.find("operateInfos") != m.end() && !m["operateInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["operateInfos"].type()) {
        vector<ListEnterpriseSupportPlanResponseBodyDataOperateInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operateInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanResponseBodyDataOperateInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateInfos = make_shared<vector<ListEnterpriseSupportPlanResponseBodyDataOperateInfos>>(expect1);
      }
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceStatusName") != m.end() && !m["serviceStatusName"].empty()) {
      serviceStatusName = make_shared<string>(boost::any_cast<string>(m["serviceStatusName"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("sortTime") != m.end() && !m["sortTime"].empty()) {
      sortTime = make_shared<string>(boost::any_cast<string>(m["sortTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("taskNum") != m.end() && !m["taskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["taskNum"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBodyData() = default;
};
class ListEnterpriseSupportPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnterpriseSupportPlanResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEnterpriseSupportPlanResponseBody() {}

  explicit ListEnterpriseSupportPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListEnterpriseSupportPlanResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEnterpriseSupportPlanResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanResponseBody() = default;
};
class ListEnterpriseSupportPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnterpriseSupportPlanResponseBody> body{};

  ListEnterpriseSupportPlanResponse() {}

  explicit ListEnterpriseSupportPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnterpriseSupportPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseSupportPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseSupportPlanResponse() = default;
};
class ListEnterpriseSupportPlanSimpleRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListEnterpriseSupportPlanSimpleRequest() {}

  explicit ListEnterpriseSupportPlanSimpleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleRequest() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataDocs : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> name{};
  shared_ptr<string> orderId{};
  shared_ptr<string> uploadTime{};
  shared_ptr<string> url{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataDocs() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (uploadTime) {
      res["uploadTime"] = boost::any(*uploadTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("uploadTime") != m.end() && !m["uploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["uploadTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataDocs() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> docName{};
  shared_ptr<string> docSubmitTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<string> orderId{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (docName) {
      res["docName"] = boost::any(*docName);
    }
    if (docSubmitTime) {
      res["docSubmitTime"] = boost::any(*docSubmitTime);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["docId"]));
    }
    if (m.find("docName") != m.end() && !m["docName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["docName"]));
    }
    if (m.find("docSubmitTime") != m.end() && !m["docSubmitTime"].empty()) {
      docSubmitTime = make_shared<string>(boost::any_cast<string>(m["docSubmitTime"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finishTime"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode : public Darabonba::Model {
public:
  shared_ptr<string> auditTime{};
  shared_ptr<string> status{};
  shared_ptr<string> statusName{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditTime) {
      res["auditTime"] = boost::any(*auditTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusName) {
      res["statusName"] = boost::any(*statusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auditTime") != m.end() && !m["auditTime"].empty()) {
      auditTime = make_shared<string>(boost::any_cast<string>(m["auditTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusName") != m.end() && !m["statusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["statusName"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> applyTime{};
  shared_ptr<long> uid{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyTime) {
      res["applyTime"] = boost::any(*applyTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyTime") != m.end() && !m["applyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["applyTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode : public Darabonba::Model {
public:
  shared_ptr<string> payTime{};
  shared_ptr<long> uid{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payTime) {
      res["payTime"] = boost::any(*payTime);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("payTime") != m.end() && !m["payTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["payTime"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode> docNode{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode> finishNode{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode> freeOrderAuditNode{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode> freeOrderNode{};
  shared_ptr<string> name{};
  shared_ptr<long> orderDate{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode> orderNode{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation> serviceImplementation{};
  shared_ptr<long> status{};

  ListEnterpriseSupportPlanSimpleResponseBodyDataNodes() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docNode) {
      res["docNode"] = docNode ? boost::any(docNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishNode) {
      res["finishNode"] = finishNode ? boost::any(finishNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderAuditNode) {
      res["freeOrderAuditNode"] = freeOrderAuditNode ? boost::any(freeOrderAuditNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (freeOrderNode) {
      res["freeOrderNode"] = freeOrderNode ? boost::any(freeOrderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderDate) {
      res["orderDate"] = boost::any(*orderDate);
    }
    if (orderNode) {
      res["orderNode"] = orderNode ? boost::any(orderNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceImplementation) {
      res["serviceImplementation"] = serviceImplementation ? boost::any(serviceImplementation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docNode") != m.end() && !m["docNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["docNode"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["docNode"]));
        docNode = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesDocNode>(model1);
      }
    }
    if (m.find("finishNode") != m.end() && !m["finishNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["finishNode"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["finishNode"]));
        finishNode = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFinishNode>(model1);
      }
    }
    if (m.find("freeOrderAuditNode") != m.end() && !m["freeOrderAuditNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderAuditNode"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderAuditNode"]));
        freeOrderAuditNode = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderAuditNode>(model1);
      }
    }
    if (m.find("freeOrderNode") != m.end() && !m["freeOrderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["freeOrderNode"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["freeOrderNode"]));
        freeOrderNode = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesFreeOrderNode>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderDate") != m.end() && !m["orderDate"].empty()) {
      orderDate = make_shared<long>(boost::any_cast<long>(m["orderDate"]));
    }
    if (m.find("orderNode") != m.end() && !m["orderNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["orderNode"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["orderNode"]));
        orderNode = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesOrderNode>(model1);
      }
    }
    if (m.find("serviceImplementation") != m.end() && !m["serviceImplementation"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceImplementation"].type()) {
        ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceImplementation"]));
        serviceImplementation = make_shared<ListEnterpriseSupportPlanSimpleResponseBodyDataNodesServiceImplementation>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyDataNodes() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canApplyFreeOrder{};
  shared_ptr<long> customerId{};
  shared_ptr<vector<ListEnterpriseSupportPlanSimpleResponseBodyDataDocs>> docs{};
  shared_ptr<string> endTime{};
  shared_ptr<string> firstPayTime{};
  shared_ptr<string> freeOrderApplyCode{};
  shared_ptr<long> freeOrderApplyId{};
  shared_ptr<string> freeOrderApplyTime{};
  shared_ptr<string> freeOrderApprovedTime{};
  shared_ptr<string> freeOrderExpectStartTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ListEnterpriseSupportPlanSimpleResponseBodyDataNodes>> nodes{};
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceStatusName{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> sortTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskNum{};

  ListEnterpriseSupportPlanSimpleResponseBodyData() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canApplyFreeOrder) {
      res["canApplyFreeOrder"] = boost::any(*canApplyFreeOrder);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["docs"] = boost::any(temp1);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (firstPayTime) {
      res["firstPayTime"] = boost::any(*firstPayTime);
    }
    if (freeOrderApplyCode) {
      res["freeOrderApplyCode"] = boost::any(*freeOrderApplyCode);
    }
    if (freeOrderApplyId) {
      res["freeOrderApplyId"] = boost::any(*freeOrderApplyId);
    }
    if (freeOrderApplyTime) {
      res["freeOrderApplyTime"] = boost::any(*freeOrderApplyTime);
    }
    if (freeOrderApprovedTime) {
      res["freeOrderApprovedTime"] = boost::any(*freeOrderApprovedTime);
    }
    if (freeOrderExpectStartTime) {
      res["freeOrderExpectStartTime"] = boost::any(*freeOrderExpectStartTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodes"] = boost::any(temp1);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceStatusName) {
      res["serviceStatusName"] = boost::any(*serviceStatusName);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (sortTime) {
      res["sortTime"] = boost::any(*sortTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskNum) {
      res["taskNum"] = boost::any(*taskNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canApplyFreeOrder") != m.end() && !m["canApplyFreeOrder"].empty()) {
      canApplyFreeOrder = make_shared<bool>(boost::any_cast<bool>(m["canApplyFreeOrder"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["customerId"]));
    }
    if (m.find("docs") != m.end() && !m["docs"].empty()) {
      if (typeid(vector<boost::any>) == m["docs"].type()) {
        vector<ListEnterpriseSupportPlanSimpleResponseBodyDataDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanSimpleResponseBodyDataDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<ListEnterpriseSupportPlanSimpleResponseBodyDataDocs>>(expect1);
      }
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("firstPayTime") != m.end() && !m["firstPayTime"].empty()) {
      firstPayTime = make_shared<string>(boost::any_cast<string>(m["firstPayTime"]));
    }
    if (m.find("freeOrderApplyCode") != m.end() && !m["freeOrderApplyCode"].empty()) {
      freeOrderApplyCode = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyCode"]));
    }
    if (m.find("freeOrderApplyId") != m.end() && !m["freeOrderApplyId"].empty()) {
      freeOrderApplyId = make_shared<long>(boost::any_cast<long>(m["freeOrderApplyId"]));
    }
    if (m.find("freeOrderApplyTime") != m.end() && !m["freeOrderApplyTime"].empty()) {
      freeOrderApplyTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApplyTime"]));
    }
    if (m.find("freeOrderApprovedTime") != m.end() && !m["freeOrderApprovedTime"].empty()) {
      freeOrderApprovedTime = make_shared<string>(boost::any_cast<string>(m["freeOrderApprovedTime"]));
    }
    if (m.find("freeOrderExpectStartTime") != m.end() && !m["freeOrderExpectStartTime"].empty()) {
      freeOrderExpectStartTime = make_shared<string>(boost::any_cast<string>(m["freeOrderExpectStartTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<ListEnterpriseSupportPlanSimpleResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanSimpleResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListEnterpriseSupportPlanSimpleResponseBodyDataNodes>>(expect1);
      }
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceStatusName") != m.end() && !m["serviceStatusName"].empty()) {
      serviceStatusName = make_shared<string>(boost::any_cast<string>(m["serviceStatusName"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("sortTime") != m.end() && !m["sortTime"].empty()) {
      sortTime = make_shared<string>(boost::any_cast<string>(m["sortTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("taskNum") != m.end() && !m["taskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["taskNum"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBodyData() = default;
};
class ListEnterpriseSupportPlanSimpleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnterpriseSupportPlanSimpleResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEnterpriseSupportPlanSimpleResponseBody() {}

  explicit ListEnterpriseSupportPlanSimpleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListEnterpriseSupportPlanSimpleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseSupportPlanSimpleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEnterpriseSupportPlanSimpleResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponseBody() = default;
};
class ListEnterpriseSupportPlanSimpleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnterpriseSupportPlanSimpleResponseBody> body{};

  ListEnterpriseSupportPlanSimpleResponse() {}

  explicit ListEnterpriseSupportPlanSimpleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnterpriseSupportPlanSimpleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseSupportPlanSimpleResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseSupportPlanSimpleResponse() = default;
};
class ListServiceApplyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applyType{};
  shared_ptr<long> endDate{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productCode{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};

  ListServiceApplyRequest() {}

  explicit ListServiceApplyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyType) {
      res["applyType"] = boost::any(*applyType);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyType") != m.end() && !m["applyType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["applyType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["applyType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applyType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<long>(boost::any_cast<long>(m["productCode"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListServiceApplyRequest() = default;
};
class ListServiceApplyResponseBodyDataListAppointments : public Darabonba::Model {
public:
  shared_ptr<long> huhangId{};
  shared_ptr<long> purchaseCode{};
  shared_ptr<string> purchaseDesc{};
  shared_ptr<long> supportDays{};
  shared_ptr<long> travelDays{};

  ListServiceApplyResponseBodyDataListAppointments() {}

  explicit ListServiceApplyResponseBodyDataListAppointments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (huhangId) {
      res["huhangId"] = boost::any(*huhangId);
    }
    if (purchaseCode) {
      res["purchaseCode"] = boost::any(*purchaseCode);
    }
    if (purchaseDesc) {
      res["purchaseDesc"] = boost::any(*purchaseDesc);
    }
    if (supportDays) {
      res["supportDays"] = boost::any(*supportDays);
    }
    if (travelDays) {
      res["travelDays"] = boost::any(*travelDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("huhangId") != m.end() && !m["huhangId"].empty()) {
      huhangId = make_shared<long>(boost::any_cast<long>(m["huhangId"]));
    }
    if (m.find("purchaseCode") != m.end() && !m["purchaseCode"].empty()) {
      purchaseCode = make_shared<long>(boost::any_cast<long>(m["purchaseCode"]));
    }
    if (m.find("purchaseDesc") != m.end() && !m["purchaseDesc"].empty()) {
      purchaseDesc = make_shared<string>(boost::any_cast<string>(m["purchaseDesc"]));
    }
    if (m.find("supportDays") != m.end() && !m["supportDays"].empty()) {
      supportDays = make_shared<long>(boost::any_cast<long>(m["supportDays"]));
    }
    if (m.find("travelDays") != m.end() && !m["travelDays"].empty()) {
      travelDays = make_shared<long>(boost::any_cast<long>(m["travelDays"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListAppointments() = default;
};
class ListServiceApplyResponseBodyDataListPayOrders : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> compassCommodityCode{};
  shared_ptr<string> compassCommodityName{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<map<string, boost::any>> operate{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> payAmount{};
  shared_ptr<string> payTime{};
  shared_ptr<string> productName{};
  shared_ptr<string> reneWalUrl{};
  shared_ptr<map<string, boost::any>> serviceContentMap{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<long> supportDays{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPayOrders() {}

  explicit ListServiceApplyResponseBodyDataListPayOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (compassCommodityCode) {
      res["compassCommodityCode"] = boost::any(*compassCommodityCode);
    }
    if (compassCommodityName) {
      res["compassCommodityName"] = boost::any(*compassCommodityName);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (operate) {
      res["operate"] = boost::any(*operate);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (originalPrice) {
      res["originalPrice"] = boost::any(*originalPrice);
    }
    if (payAmount) {
      res["payAmount"] = boost::any(*payAmount);
    }
    if (payTime) {
      res["payTime"] = boost::any(*payTime);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (reneWalUrl) {
      res["reneWalUrl"] = boost::any(*reneWalUrl);
    }
    if (serviceContentMap) {
      res["serviceContentMap"] = boost::any(*serviceContentMap);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportDays) {
      res["supportDays"] = boost::any(*supportDays);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["amount"]));
    }
    if (m.find("compassCommodityCode") != m.end() && !m["compassCommodityCode"].empty()) {
      compassCommodityCode = make_shared<string>(boost::any_cast<string>(m["compassCommodityCode"]));
    }
    if (m.find("compassCommodityName") != m.end() && !m["compassCommodityName"].empty()) {
      compassCommodityName = make_shared<string>(boost::any_cast<string>(m["compassCommodityName"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("operate") != m.end() && !m["operate"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["operate"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operate = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("originalPrice") != m.end() && !m["originalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["originalPrice"]));
    }
    if (m.find("payAmount") != m.end() && !m["payAmount"].empty()) {
      payAmount = make_shared<double>(boost::any_cast<double>(m["payAmount"]));
    }
    if (m.find("payTime") != m.end() && !m["payTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["payTime"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("reneWalUrl") != m.end() && !m["reneWalUrl"].empty()) {
      reneWalUrl = make_shared<string>(boost::any_cast<string>(m["reneWalUrl"]));
    }
    if (m.find("serviceContentMap") != m.end() && !m["serviceContentMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["serviceContentMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceContentMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportDays") != m.end() && !m["supportDays"].empty()) {
      supportDays = make_shared<long>(boost::any_cast<long>(m["supportDays"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPayOrders() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersExtList() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersExtList() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> ntmCommodityCode{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports>> serviceReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers>> tamEngineers{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (ntmCommodityCode) {
      res["ntmCommodityCode"] = boost::any(*ntmCommodityCode);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("ntmCommodityCode") != m.end() && !m["ntmCommodityCode"].empty()) {
      ntmCommodityCode = make_shared<string>(boost::any_cast<string>(m["ntmCommodityCode"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacksTamEngineers>>(expect1);
      }
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers() = default;
};
class ListServiceApplyResponseBodyDataListPerformanceOrders : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> ntmCommodityCode{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<long> packCount{};
  shared_ptr<vector<map<string, boost::any>>> packDetails{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks>> performancePacks{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports>> serviceReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers>> tamEngineers{};

  ListServiceApplyResponseBodyDataListPerformanceOrders() {}

  explicit ListServiceApplyResponseBodyDataListPerformanceOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (ntmCommodityCode) {
      res["ntmCommodityCode"] = boost::any(*ntmCommodityCode);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (packCount) {
      res["packCount"] = boost::any(*packCount);
    }
    if (packDetails) {
      res["packDetails"] = boost::any(*packDetails);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (performancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*performancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performancePacks"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("ntmCommodityCode") != m.end() && !m["ntmCommodityCode"].empty()) {
      ntmCommodityCode = make_shared<string>(boost::any_cast<string>(m["ntmCommodityCode"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("packCount") != m.end() && !m["packCount"].empty()) {
      packCount = make_shared<long>(boost::any_cast<long>(m["packCount"]));
    }
    if (m.find("packDetails") != m.end() && !m["packDetails"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["packDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["packDetails"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      packDetails = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("performancePacks") != m.end() && !m["performancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["performancePacks"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performancePacks = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersPerformancePacks>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrdersTamEngineers>>(expect1);
      }
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformanceOrders() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksExtList : public Darabonba::Model {
public:
  shared_ptr<string> keyCode{};
  shared_ptr<string> name{};
  shared_ptr<boost::any> value{};
  shared_ptr<string> view{};

  ListServiceApplyResponseBodyDataListPerformancePacksExtList() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksExtList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyCode) {
      res["keyCode"] = boost::any(*keyCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (view) {
      res["view"] = boost::any(*view);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyCode") != m.end() && !m["keyCode"].empty()) {
      keyCode = make_shared<string>(boost::any_cast<string>(m["keyCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
    if (m.find("view") != m.end() && !m["view"].empty()) {
      view = make_shared<string>(boost::any_cast<string>(m["view"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksExtList() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<boost::any> extendInfo{};
  shared_ptr<long> index{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> status{};

  ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendInfo) {
      res["extendInfo"] = boost::any(*extendInfo);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (nodeName) {
      res["nodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendInfo") != m.end() && !m["extendInfo"].empty()) {
      extendInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["extendInfo"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("nodeName") != m.end() && !m["nodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["nodeName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformancePacksServiceReports() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksServiceReports() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers : public Darabonba::Model {
public:
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> hrStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> lastName{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> name{};
  shared_ptr<string> nickNameEn{};
  shared_ptr<long> realmId{};
  shared_ptr<string> workid{};

  ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hrStatus) {
      res["hrStatus"] = boost::any(*hrStatus);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastName) {
      res["lastName"] = boost::any(*lastName);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickNameEn) {
      res["nickNameEn"] = boost::any(*nickNameEn);
    }
    if (realmId) {
      res["realmId"] = boost::any(*realmId);
    }
    if (workid) {
      res["workid"] = boost::any(*workid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hrStatus") != m.end() && !m["hrStatus"].empty()) {
      hrStatus = make_shared<string>(boost::any_cast<string>(m["hrStatus"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastName") != m.end() && !m["lastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["lastName"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickNameEn") != m.end() && !m["nickNameEn"].empty()) {
      nickNameEn = make_shared<string>(boost::any_cast<string>(m["nickNameEn"]));
    }
    if (m.find("realmId") != m.end() && !m["realmId"].empty()) {
      realmId = make_shared<long>(boost::any_cast<long>(m["realmId"]));
    }
    if (m.find("workid") != m.end() && !m["workid"].empty()) {
      workid = make_shared<string>(boost::any_cast<string>(m["workid"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers() = default;
};
class ListServiceApplyResponseBodyDataListPerformancePacks : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList>> applyFileVOList{};
  shared_ptr<string> appointmentCode{};
  shared_ptr<long> appointmentEndTime{};
  shared_ptr<string> appointmentId{};
  shared_ptr<long> appointmentPassTime{};
  shared_ptr<long> appointmentTime{};
  shared_ptr<string> commodityDesc{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<bool> cycleService{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksExtList>> extList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<string> ntmCommodityCode{};
  shared_ptr<boost::any> orderDetail{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS>> performanceNodeDTOS{};
  shared_ptr<long> purchasePackCode{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports>> serviceMonthReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceReports>> serviceReports{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes>> serviceSchemes{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<vector<long>> supportTime{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers>> tamEngineers{};

  ListServiceApplyResponseBodyDataListPerformancePacks() {}

  explicit ListServiceApplyResponseBodyDataListPerformancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyFileVOList) {
      vector<boost::any> temp1;
      for(auto item1:*applyFileVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applyFileVOList"] = boost::any(temp1);
    }
    if (appointmentCode) {
      res["appointmentCode"] = boost::any(*appointmentCode);
    }
    if (appointmentEndTime) {
      res["appointmentEndTime"] = boost::any(*appointmentEndTime);
    }
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (appointmentPassTime) {
      res["appointmentPassTime"] = boost::any(*appointmentPassTime);
    }
    if (appointmentTime) {
      res["appointmentTime"] = boost::any(*appointmentTime);
    }
    if (commodityDesc) {
      res["commodityDesc"] = boost::any(*commodityDesc);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (extList) {
      vector<boost::any> temp1;
      for(auto item1:*extList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extList"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (ntmCommodityCode) {
      res["ntmCommodityCode"] = boost::any(*ntmCommodityCode);
    }
    if (orderDetail) {
      res["orderDetail"] = boost::any(*orderDetail);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (performanceNodeDTOS) {
      vector<boost::any> temp1;
      for(auto item1:*performanceNodeDTOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceNodeDTOS"] = boost::any(temp1);
    }
    if (purchasePackCode) {
      res["purchasePackCode"] = boost::any(*purchasePackCode);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (serviceMonthReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMonthReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceMonthReports"] = boost::any(temp1);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceSchemes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSchemes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceSchemes"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (supportTime) {
      res["supportTime"] = boost::any(*supportTime);
    }
    if (tamEngineers) {
      vector<boost::any> temp1;
      for(auto item1:*tamEngineers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tamEngineers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyFileVOList") != m.end() && !m["applyFileVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["applyFileVOList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applyFileVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applyFileVOList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksApplyFileVOList>>(expect1);
      }
    }
    if (m.find("appointmentCode") != m.end() && !m["appointmentCode"].empty()) {
      appointmentCode = make_shared<string>(boost::any_cast<string>(m["appointmentCode"]));
    }
    if (m.find("appointmentEndTime") != m.end() && !m["appointmentEndTime"].empty()) {
      appointmentEndTime = make_shared<long>(boost::any_cast<long>(m["appointmentEndTime"]));
    }
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("appointmentPassTime") != m.end() && !m["appointmentPassTime"].empty()) {
      appointmentPassTime = make_shared<long>(boost::any_cast<long>(m["appointmentPassTime"]));
    }
    if (m.find("appointmentTime") != m.end() && !m["appointmentTime"].empty()) {
      appointmentTime = make_shared<long>(boost::any_cast<long>(m["appointmentTime"]));
    }
    if (m.find("commodityDesc") != m.end() && !m["commodityDesc"].empty()) {
      commodityDesc = make_shared<string>(boost::any_cast<string>(m["commodityDesc"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("extList") != m.end() && !m["extList"].empty()) {
      if (typeid(vector<boost::any>) == m["extList"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksExtList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksExtList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extList = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksExtList>>(expect1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("ntmCommodityCode") != m.end() && !m["ntmCommodityCode"].empty()) {
      ntmCommodityCode = make_shared<string>(boost::any_cast<string>(m["ntmCommodityCode"]));
    }
    if (m.find("orderDetail") != m.end() && !m["orderDetail"].empty()) {
      orderDetail = make_shared<boost::any>(boost::any_cast<boost::any>(m["orderDetail"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["orderId"]));
    }
    if (m.find("performanceNodeDTOS") != m.end() && !m["performanceNodeDTOS"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceNodeDTOS"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceNodeDTOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceNodeDTOS = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksPerformanceNodeDTOS>>(expect1);
      }
    }
    if (m.find("purchasePackCode") != m.end() && !m["purchasePackCode"].empty()) {
      purchasePackCode = make_shared<long>(boost::any_cast<long>(m["purchasePackCode"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("serviceMonthReports") != m.end() && !m["serviceMonthReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceMonthReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceMonthReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMonthReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceMonthReports>>(expect1);
      }
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceReports>>(expect1);
      }
    }
    if (m.find("serviceSchemes") != m.end() && !m["serviceSchemes"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceSchemes"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceSchemes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSchemes = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksServiceSchemes>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("supportTime") != m.end() && !m["supportTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["supportTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      supportTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("tamEngineers") != m.end() && !m["tamEngineers"].empty()) {
      if (typeid(vector<boost::any>) == m["tamEngineers"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tamEngineers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tamEngineers = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacksTamEngineers>>(expect1);
      }
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListPerformancePacks() = default;
};
class ListServiceApplyResponseBodyDataListServiceReports : public Darabonba::Model {
public:
  shared_ptr<string> appointmentId{};
  shared_ptr<string> batchGroup{};
  shared_ptr<string> customerId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remarke{};
  shared_ptr<long> serviceApplyId{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  ListServiceApplyResponseBodyDataListServiceReports() {}

  explicit ListServiceApplyResponseBodyDataListServiceReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointmentId) {
      res["appointmentId"] = boost::any(*appointmentId);
    }
    if (batchGroup) {
      res["batchGroup"] = boost::any(*batchGroup);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (remarke) {
      res["remarke"] = boost::any(*remarke);
    }
    if (serviceApplyId) {
      res["serviceApplyId"] = boost::any(*serviceApplyId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appointmentId") != m.end() && !m["appointmentId"].empty()) {
      appointmentId = make_shared<string>(boost::any_cast<string>(m["appointmentId"]));
    }
    if (m.find("batchGroup") != m.end() && !m["batchGroup"].empty()) {
      batchGroup = make_shared<string>(boost::any_cast<string>(m["batchGroup"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("remarke") != m.end() && !m["remarke"].empty()) {
      remarke = make_shared<string>(boost::any_cast<string>(m["remarke"]));
    }
    if (m.find("serviceApplyId") != m.end() && !m["serviceApplyId"].empty()) {
      serviceApplyId = make_shared<long>(boost::any_cast<long>(m["serviceApplyId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataListServiceReports() = default;
};
class ListServiceApplyResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> applierId{};
  shared_ptr<string> applyCode{};
  shared_ptr<vector<vector<string>>> applyComponentDetails{};
  shared_ptr<long> applyTime{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListAppointments>> appointments{};
  shared_ptr<string> buyUrl{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> customerName{};
  shared_ptr<bool> cycleService{};
  shared_ptr<long> executedCount{};
  shared_ptr<long> finishCount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mergeSolutionAndReporterOneStep{};
  shared_ptr<string> modifierEmpId{};
  shared_ptr<vector<map<string, boost::any>>> packDetails{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPayOrders>> payOrders{};
  shared_ptr<string> payUrl{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformanceOrders>> performanceOrders{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListPerformancePacks>> performancePacks{};
  shared_ptr<string> reneWalUrl{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataListServiceReports>> serviceReports{};
  shared_ptr<vector<long>> serviceTimeRange{};
  shared_ptr<string> status{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> statusStr{};
  shared_ptr<string> termOfValidity{};
  shared_ptr<long> totalPack{};
  shared_ptr<string> type{};
  shared_ptr<long> usePack{};

  ListServiceApplyResponseBodyDataList() {}

  explicit ListServiceApplyResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applierId) {
      res["applierId"] = boost::any(*applierId);
    }
    if (applyCode) {
      res["applyCode"] = boost::any(*applyCode);
    }
    if (applyComponentDetails) {
      res["applyComponentDetails"] = boost::any(*applyComponentDetails);
    }
    if (applyTime) {
      res["applyTime"] = boost::any(*applyTime);
    }
    if (appointments) {
      vector<boost::any> temp1;
      for(auto item1:*appointments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["appointments"] = boost::any(temp1);
    }
    if (buyUrl) {
      res["buyUrl"] = boost::any(*buyUrl);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (customerName) {
      res["customerName"] = boost::any(*customerName);
    }
    if (cycleService) {
      res["cycleService"] = boost::any(*cycleService);
    }
    if (executedCount) {
      res["executedCount"] = boost::any(*executedCount);
    }
    if (finishCount) {
      res["finishCount"] = boost::any(*finishCount);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeSolutionAndReporterOneStep) {
      res["mergeSolutionAndReporterOneStep"] = boost::any(*mergeSolutionAndReporterOneStep);
    }
    if (modifierEmpId) {
      res["modifierEmpId"] = boost::any(*modifierEmpId);
    }
    if (packDetails) {
      res["packDetails"] = boost::any(*packDetails);
    }
    if (payOrders) {
      vector<boost::any> temp1;
      for(auto item1:*payOrders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["payOrders"] = boost::any(temp1);
    }
    if (payUrl) {
      res["payUrl"] = boost::any(*payUrl);
    }
    if (performanceOrders) {
      vector<boost::any> temp1;
      for(auto item1:*performanceOrders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performanceOrders"] = boost::any(temp1);
    }
    if (performancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*performancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["performancePacks"] = boost::any(temp1);
    }
    if (reneWalUrl) {
      res["reneWalUrl"] = boost::any(*reneWalUrl);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceReports) {
      vector<boost::any> temp1;
      for(auto item1:*serviceReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceReports"] = boost::any(temp1);
    }
    if (serviceTimeRange) {
      res["serviceTimeRange"] = boost::any(*serviceTimeRange);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (statusStr) {
      res["statusStr"] = boost::any(*statusStr);
    }
    if (termOfValidity) {
      res["termOfValidity"] = boost::any(*termOfValidity);
    }
    if (totalPack) {
      res["totalPack"] = boost::any(*totalPack);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (usePack) {
      res["usePack"] = boost::any(*usePack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applierId") != m.end() && !m["applierId"].empty()) {
      applierId = make_shared<string>(boost::any_cast<string>(m["applierId"]));
    }
    if (m.find("applyCode") != m.end() && !m["applyCode"].empty()) {
      applyCode = make_shared<string>(boost::any_cast<string>(m["applyCode"]));
    }
    if (m.find("applyComponentDetails") != m.end() && !m["applyComponentDetails"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["applyComponentDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["applyComponentDetails"]);
        for (auto item:vec1) {
          vector<string> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<string>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      applyComponentDetails = make_shared<vector<vector<string>>>(toVec1);
    }
    if (m.find("applyTime") != m.end() && !m["applyTime"].empty()) {
      applyTime = make_shared<long>(boost::any_cast<long>(m["applyTime"]));
    }
    if (m.find("appointments") != m.end() && !m["appointments"].empty()) {
      if (typeid(vector<boost::any>) == m["appointments"].type()) {
        vector<ListServiceApplyResponseBodyDataListAppointments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["appointments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListAppointments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appointments = make_shared<vector<ListServiceApplyResponseBodyDataListAppointments>>(expect1);
      }
    }
    if (m.find("buyUrl") != m.end() && !m["buyUrl"].empty()) {
      buyUrl = make_shared<string>(boost::any_cast<string>(m["buyUrl"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
    if (m.find("customerName") != m.end() && !m["customerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["customerName"]));
    }
    if (m.find("cycleService") != m.end() && !m["cycleService"].empty()) {
      cycleService = make_shared<bool>(boost::any_cast<bool>(m["cycleService"]));
    }
    if (m.find("executedCount") != m.end() && !m["executedCount"].empty()) {
      executedCount = make_shared<long>(boost::any_cast<long>(m["executedCount"]));
    }
    if (m.find("finishCount") != m.end() && !m["finishCount"].empty()) {
      finishCount = make_shared<long>(boost::any_cast<long>(m["finishCount"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeSolutionAndReporterOneStep") != m.end() && !m["mergeSolutionAndReporterOneStep"].empty()) {
      mergeSolutionAndReporterOneStep = make_shared<bool>(boost::any_cast<bool>(m["mergeSolutionAndReporterOneStep"]));
    }
    if (m.find("modifierEmpId") != m.end() && !m["modifierEmpId"].empty()) {
      modifierEmpId = make_shared<string>(boost::any_cast<string>(m["modifierEmpId"]));
    }
    if (m.find("packDetails") != m.end() && !m["packDetails"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["packDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["packDetails"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      packDetails = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("payOrders") != m.end() && !m["payOrders"].empty()) {
      if (typeid(vector<boost::any>) == m["payOrders"].type()) {
        vector<ListServiceApplyResponseBodyDataListPayOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["payOrders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPayOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        payOrders = make_shared<vector<ListServiceApplyResponseBodyDataListPayOrders>>(expect1);
      }
    }
    if (m.find("payUrl") != m.end() && !m["payUrl"].empty()) {
      payUrl = make_shared<string>(boost::any_cast<string>(m["payUrl"]));
    }
    if (m.find("performanceOrders") != m.end() && !m["performanceOrders"].empty()) {
      if (typeid(vector<boost::any>) == m["performanceOrders"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformanceOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performanceOrders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformanceOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceOrders = make_shared<vector<ListServiceApplyResponseBodyDataListPerformanceOrders>>(expect1);
      }
    }
    if (m.find("performancePacks") != m.end() && !m["performancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["performancePacks"].type()) {
        vector<ListServiceApplyResponseBodyDataListPerformancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["performancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListPerformancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performancePacks = make_shared<vector<ListServiceApplyResponseBodyDataListPerformancePacks>>(expect1);
      }
    }
    if (m.find("reneWalUrl") != m.end() && !m["reneWalUrl"].empty()) {
      reneWalUrl = make_shared<string>(boost::any_cast<string>(m["reneWalUrl"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceReports") != m.end() && !m["serviceReports"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceReports"].type()) {
        vector<ListServiceApplyResponseBodyDataListServiceReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataListServiceReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceReports = make_shared<vector<ListServiceApplyResponseBodyDataListServiceReports>>(expect1);
      }
    }
    if (m.find("serviceTimeRange") != m.end() && !m["serviceTimeRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceTimeRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceTimeRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceTimeRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("statusStr") != m.end() && !m["statusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["statusStr"]));
    }
    if (m.find("termOfValidity") != m.end() && !m["termOfValidity"].empty()) {
      termOfValidity = make_shared<string>(boost::any_cast<string>(m["termOfValidity"]));
    }
    if (m.find("totalPack") != m.end() && !m["totalPack"].empty()) {
      totalPack = make_shared<long>(boost::any_cast<long>(m["totalPack"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("usePack") != m.end() && !m["usePack"].empty()) {
      usePack = make_shared<long>(boost::any_cast<long>(m["usePack"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyDataList() = default;
};
class ListServiceApplyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<boost::any> extend{};
  shared_ptr<vector<ListServiceApplyResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListServiceApplyResponseBodyData() {}

  explicit ListServiceApplyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      extend = make_shared<boost::any>(boost::any_cast<boost::any>(m["extend"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListServiceApplyResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceApplyResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListServiceApplyResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListServiceApplyResponseBodyData() = default;
};
class ListServiceApplyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListServiceApplyResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListServiceApplyResponseBody() {}

  explicit ListServiceApplyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListServiceApplyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListServiceApplyResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListServiceApplyResponseBody() = default;
};
class ListServiceApplyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceApplyResponseBody> body{};

  ListServiceApplyResponse() {}

  explicit ListServiceApplyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceApplyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceApplyResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceApplyResponse() = default;
};
class ListYunQiTaskByUidRequest : public Darabonba::Model {
public:
  shared_ptr<long> createTimeEnd{};
  shared_ptr<long> createTimeStart{};
  shared_ptr<vector<string>> freeOrderApplyCodes{};
  shared_ptr<vector<long>> freeOrderApplyIds{};
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> statusList{};

  ListYunQiTaskByUidRequest() {}

  explicit ListYunQiTaskByUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["createTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["createTimeStart"] = boost::any(*createTimeStart);
    }
    if (freeOrderApplyCodes) {
      res["freeOrderApplyCodes"] = boost::any(*freeOrderApplyCodes);
    }
    if (freeOrderApplyIds) {
      res["freeOrderApplyIds"] = boost::any(*freeOrderApplyIds);
    }
    if (orderIds) {
      res["orderIds"] = boost::any(*orderIds);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTimeEnd") != m.end() && !m["createTimeEnd"].empty()) {
      createTimeEnd = make_shared<long>(boost::any_cast<long>(m["createTimeEnd"]));
    }
    if (m.find("createTimeStart") != m.end() && !m["createTimeStart"].empty()) {
      createTimeStart = make_shared<long>(boost::any_cast<long>(m["createTimeStart"]));
    }
    if (m.find("freeOrderApplyCodes") != m.end() && !m["freeOrderApplyCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["freeOrderApplyCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["freeOrderApplyCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      freeOrderApplyCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("freeOrderApplyIds") != m.end() && !m["freeOrderApplyIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["freeOrderApplyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["freeOrderApplyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      freeOrderApplyIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("orderIds") != m.end() && !m["orderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["orderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["statusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["statusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListYunQiTaskByUidRequest() = default;
};
class ListYunQiTaskByUidResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> chatId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> evaluationStar{};
  shared_ptr<string> important{};
  shared_ptr<string> mainDingDepartmentId{};
  shared_ptr<string> mainDingGroupId{};
  shared_ptr<string> mainDingGroupName{};
  shared_ptr<string> productName{};
  shared_ptr<string> recordId{};
  shared_ptr<string> status{};
  shared_ptr<string> subDingDepartmentId{};
  shared_ptr<string> subDingGroupId{};
  shared_ptr<string> subDingGroupName{};
  shared_ptr<string> title{};

  ListYunQiTaskByUidResponseBodyDataList() {}

  explicit ListYunQiTaskByUidResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (evaluationStar) {
      res["evaluationStar"] = boost::any(*evaluationStar);
    }
    if (important) {
      res["important"] = boost::any(*important);
    }
    if (mainDingDepartmentId) {
      res["mainDingDepartmentId"] = boost::any(*mainDingDepartmentId);
    }
    if (mainDingGroupId) {
      res["mainDingGroupId"] = boost::any(*mainDingGroupId);
    }
    if (mainDingGroupName) {
      res["mainDingGroupName"] = boost::any(*mainDingGroupName);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subDingDepartmentId) {
      res["subDingDepartmentId"] = boost::any(*subDingDepartmentId);
    }
    if (subDingGroupId) {
      res["subDingGroupId"] = boost::any(*subDingGroupId);
    }
    if (subDingGroupName) {
      res["subDingGroupName"] = boost::any(*subDingGroupName);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("evaluationStar") != m.end() && !m["evaluationStar"].empty()) {
      evaluationStar = make_shared<long>(boost::any_cast<long>(m["evaluationStar"]));
    }
    if (m.find("important") != m.end() && !m["important"].empty()) {
      important = make_shared<string>(boost::any_cast<string>(m["important"]));
    }
    if (m.find("mainDingDepartmentId") != m.end() && !m["mainDingDepartmentId"].empty()) {
      mainDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["mainDingDepartmentId"]));
    }
    if (m.find("mainDingGroupId") != m.end() && !m["mainDingGroupId"].empty()) {
      mainDingGroupId = make_shared<string>(boost::any_cast<string>(m["mainDingGroupId"]));
    }
    if (m.find("mainDingGroupName") != m.end() && !m["mainDingGroupName"].empty()) {
      mainDingGroupName = make_shared<string>(boost::any_cast<string>(m["mainDingGroupName"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["recordId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subDingDepartmentId") != m.end() && !m["subDingDepartmentId"].empty()) {
      subDingDepartmentId = make_shared<string>(boost::any_cast<string>(m["subDingDepartmentId"]));
    }
    if (m.find("subDingGroupId") != m.end() && !m["subDingGroupId"].empty()) {
      subDingGroupId = make_shared<string>(boost::any_cast<string>(m["subDingGroupId"]));
    }
    if (m.find("subDingGroupName") != m.end() && !m["subDingGroupName"].empty()) {
      subDingGroupName = make_shared<string>(boost::any_cast<string>(m["subDingGroupName"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListYunQiTaskByUidResponseBodyDataList() = default;
};
class ListYunQiTaskByUidResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<boost::any> extend{};
  shared_ptr<vector<ListYunQiTaskByUidResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListYunQiTaskByUidResponseBodyData() {}

  explicit ListYunQiTaskByUidResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      extend = make_shared<boost::any>(boost::any_cast<boost::any>(m["extend"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListYunQiTaskByUidResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListYunQiTaskByUidResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListYunQiTaskByUidResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListYunQiTaskByUidResponseBodyData() = default;
};
class ListYunQiTaskByUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListYunQiTaskByUidResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListYunQiTaskByUidResponseBody() {}

  explicit ListYunQiTaskByUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListYunQiTaskByUidResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListYunQiTaskByUidResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListYunQiTaskByUidResponseBody() = default;
};
class ListYunQiTaskByUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListYunQiTaskByUidResponseBody> body{};

  ListYunQiTaskByUidResponse() {}

  explicit ListYunQiTaskByUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListYunQiTaskByUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListYunQiTaskByUidResponseBody>(model1);
      }
    }
  }


  virtual ~ListYunQiTaskByUidResponse() = default;
};
class MarkFileReadedRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyCode{};
  shared_ptr<long> fileId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> scene{};

  MarkFileReadedRequest() {}

  explicit MarkFileReadedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyCode) {
      res["applyCode"] = boost::any(*applyCode);
    }
    if (fileId) {
      res["fileId"] = boost::any(*fileId);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyCode") != m.end() && !m["applyCode"].empty()) {
      applyCode = make_shared<string>(boost::any_cast<string>(m["applyCode"]));
    }
    if (m.find("fileId") != m.end() && !m["fileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["fileId"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
  }


  virtual ~MarkFileReadedRequest() = default;
};
class MarkFileReadedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MarkFileReadedResponseBody() {}

  explicit MarkFileReadedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~MarkFileReadedResponseBody() = default;
};
class MarkFileReadedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MarkFileReadedResponseBody> body{};

  MarkFileReadedResponse() {}

  explicit MarkFileReadedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MarkFileReadedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MarkFileReadedResponseBody>(model1);
      }
    }
  }


  virtual ~MarkFileReadedResponse() = default;
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
  GetDownloadUrlResponse getDownloadUrlWithOptions(shared_ptr<GetDownloadUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDownloadUrlResponse getDownloadUrl(shared_ptr<GetDownloadUrlRequest> request);
  GetEnterpriseSupportPlanDetailResponse getEnterpriseSupportPlanDetailWithOptions(shared_ptr<GetEnterpriseSupportPlanDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseSupportPlanDetailResponse getEnterpriseSupportPlanDetail(shared_ptr<GetEnterpriseSupportPlanDetailRequest> request);
  GetPreViewUrlResponse getPreViewUrlWithOptions(shared_ptr<GetPreViewUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPreViewUrlResponse getPreViewUrl(shared_ptr<GetPreViewUrlRequest> request);
  GetServiceDetailResponse getServiceDetailWithOptions(shared_ptr<GetServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceDetailResponse getServiceDetail(shared_ptr<GetServiceDetailRequest> request);
  GetYunQiTaskByRecordIdResponse getYunQiTaskByRecordIdWithOptions(shared_ptr<GetYunQiTaskByRecordIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetYunQiTaskByRecordIdResponse getYunQiTaskByRecordId(shared_ptr<GetYunQiTaskByRecordIdRequest> request);
  ListDocsGroupByYearResponse listDocsGroupByYearWithOptions(shared_ptr<ListDocsGroupByYearRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDocsGroupByYearResponse listDocsGroupByYear(shared_ptr<ListDocsGroupByYearRequest> request);
  ListEnterpriseSupportPlanResponse listEnterpriseSupportPlanWithOptions(shared_ptr<ListEnterpriseSupportPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseSupportPlanResponse listEnterpriseSupportPlan(shared_ptr<ListEnterpriseSupportPlanRequest> request);
  ListEnterpriseSupportPlanSimpleResponse listEnterpriseSupportPlanSimpleWithOptions(shared_ptr<ListEnterpriseSupportPlanSimpleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseSupportPlanSimpleResponse listEnterpriseSupportPlanSimple(shared_ptr<ListEnterpriseSupportPlanSimpleRequest> request);
  ListServiceApplyResponse listServiceApplyWithOptions(shared_ptr<ListServiceApplyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceApplyResponse listServiceApply(shared_ptr<ListServiceApplyRequest> request);
  ListYunQiTaskByUidResponse listYunQiTaskByUidWithOptions(shared_ptr<ListYunQiTaskByUidRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListYunQiTaskByUidResponse listYunQiTaskByUid(shared_ptr<ListYunQiTaskByUidRequest> request);
  MarkFileReadedResponse markFileReadedWithOptions(shared_ptr<MarkFileReadedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MarkFileReadedResponse markFileReaded(shared_ptr<MarkFileReadedRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CustomerService20231228

#endif
