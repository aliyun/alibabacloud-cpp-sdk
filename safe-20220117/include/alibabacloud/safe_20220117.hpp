// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SAFE20220117_H_
#define ALIBABACLOUD_SAFE20220117_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Safe20220117 {
class CancelBlockRequest : public Darabonba::Model {
public:
  shared_ptr<long> blockId{};
  shared_ptr<string> cancelBLockDesc{};
  shared_ptr<string> createEmpId{};

  CancelBlockRequest() {}

  explicit CancelBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (cancelBLockDesc) {
      res["CancelBLockDesc"] = boost::any(*cancelBLockDesc);
    }
    if (createEmpId) {
      res["CreateEmpId"] = boost::any(*createEmpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("CancelBLockDesc") != m.end() && !m["CancelBLockDesc"].empty()) {
      cancelBLockDesc = make_shared<string>(boost::any_cast<string>(m["CancelBLockDesc"]));
    }
    if (m.find("CreateEmpId") != m.end() && !m["CreateEmpId"].empty()) {
      createEmpId = make_shared<string>(boost::any_cast<string>(m["CreateEmpId"]));
    }
  }


  virtual ~CancelBlockRequest() = default;
};
class CancelBlockResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveInstanceId{};
  shared_ptr<bool> success{};

  CancelBlockResponseBodyData() {}

  explicit CancelBlockResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveInstanceId) {
      res["ApproveInstanceId"] = boost::any(*approveInstanceId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveInstanceId") != m.end() && !m["ApproveInstanceId"].empty()) {
      approveInstanceId = make_shared<string>(boost::any_cast<string>(m["ApproveInstanceId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelBlockResponseBodyData() = default;
};
class CancelBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CancelBlockResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelBlockResponseBody() {}

  explicit CancelBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CancelBlockResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CancelBlockResponseBodyData>(model1);
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


  virtual ~CancelBlockResponseBody() = default;
};
class CancelBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelBlockResponseBody> body{};

  CancelBlockResponse() {}

  explicit CancelBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBlockResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBlockResponse() = default;
};
class ChangeCancelRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  ChangeCancelRequest() {}

  explicit ChangeCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~ChangeCancelRequest() = default;
};
class ChangeCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeCancelResponseBody() {}

  explicit ChangeCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeCancelResponseBody() = default;
};
class ChangeCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeCancelResponseBody> body{};

  ChangeCancelResponse() {}

  explicit ChangeCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeCancelResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeCancelResponse() = default;
};
class ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO : public Darabonba::Model {
public:
  shared_ptr<string> approveDesc{};
  shared_ptr<string> approveTime{};
  shared_ptr<string> approverId{};
  shared_ptr<string> approverName{};
  shared_ptr<long> opinion{};

  ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO() {}

  explicit ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveDesc) {
      res["ApproveDesc"] = boost::any(*approveDesc);
    }
    if (approveTime) {
      res["ApproveTime"] = boost::any(*approveTime);
    }
    if (approverId) {
      res["ApproverId"] = boost::any(*approverId);
    }
    if (approverName) {
      res["ApproverName"] = boost::any(*approverName);
    }
    if (opinion) {
      res["Opinion"] = boost::any(*opinion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveDesc") != m.end() && !m["ApproveDesc"].empty()) {
      approveDesc = make_shared<string>(boost::any_cast<string>(m["ApproveDesc"]));
    }
    if (m.find("ApproveTime") != m.end() && !m["ApproveTime"].empty()) {
      approveTime = make_shared<string>(boost::any_cast<string>(m["ApproveTime"]));
    }
    if (m.find("ApproverId") != m.end() && !m["ApproverId"].empty()) {
      approverId = make_shared<string>(boost::any_cast<string>(m["ApproverId"]));
    }
    if (m.find("ApproverName") != m.end() && !m["ApproverName"].empty()) {
      approverName = make_shared<string>(boost::any_cast<string>(m["ApproverName"]));
    }
    if (m.find("Opinion") != m.end() && !m["Opinion"].empty()) {
      opinion = make_shared<long>(boost::any_cast<long>(m["Opinion"]));
    }
  }


  virtual ~ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO() = default;
};
class ChangeCheckRequestApproveFlowParamApproveNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO>> approverDTO{};
  shared_ptr<long> nodeStatus{};
  shared_ptr<string> processName{};
  shared_ptr<long> processNodeOrder{};
  shared_ptr<long> strategy{};

  ChangeCheckRequestApproveFlowParamApproveNodes() {}

  explicit ChangeCheckRequestApproveFlowParamApproveNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approverDTO) {
      vector<boost::any> temp1;
      for(auto item1:*approverDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproverDTO"] = boost::any(temp1);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (processName) {
      res["ProcessName"] = boost::any(*processName);
    }
    if (processNodeOrder) {
      res["ProcessNodeOrder"] = boost::any(*processNodeOrder);
    }
    if (strategy) {
      res["Strategy"] = boost::any(*strategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproverDTO") != m.end() && !m["ApproverDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproverDTO"].type()) {
        vector<ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproverDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverDTO = make_shared<vector<ChangeCheckRequestApproveFlowParamApproveNodesApproverDTO>>(expect1);
      }
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<long>(boost::any_cast<long>(m["NodeStatus"]));
    }
    if (m.find("ProcessName") != m.end() && !m["ProcessName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["ProcessName"]));
    }
    if (m.find("ProcessNodeOrder") != m.end() && !m["ProcessNodeOrder"].empty()) {
      processNodeOrder = make_shared<long>(boost::any_cast<long>(m["ProcessNodeOrder"]));
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      strategy = make_shared<long>(boost::any_cast<long>(m["Strategy"]));
    }
  }


  virtual ~ChangeCheckRequestApproveFlowParamApproveNodes() = default;
};
class ChangeCheckRequestApproveFlowParam : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestApproveFlowParamApproveNodes>> approveNodes{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> bgVid{};
  shared_ptr<long> flowStatus{};
  shared_ptr<long> timestamp{};

  ChangeCheckRequestApproveFlowParam() {}

  explicit ChangeCheckRequestApproveFlowParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveNodes) {
      vector<boost::any> temp1;
      for(auto item1:*approveNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproveNodes"] = boost::any(temp1);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveNodes") != m.end() && !m["ApproveNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproveNodes"].type()) {
        vector<ChangeCheckRequestApproveFlowParamApproveNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproveNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestApproveFlowParamApproveNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approveNodes = make_shared<vector<ChangeCheckRequestApproveFlowParamApproveNodes>>(expect1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<long>(boost::any_cast<long>(m["FlowStatus"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~ChangeCheckRequestApproveFlowParam() = default;
};
class ChangeCheckRequestBgCustomTemplateExtraDTO : public Darabonba::Model {
public:
  shared_ptr<string> bgCustomTemplate{};
  shared_ptr<long> bgCustomTemplateId{};
  shared_ptr<string> bgCustomTemplateInfo{};
  shared_ptr<string> bgCustomTemplateTitle{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> extraInfo{};

  ChangeCheckRequestBgCustomTemplateExtraDTO() {}

  explicit ChangeCheckRequestBgCustomTemplateExtraDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCustomTemplate) {
      res["BgCustomTemplate"] = boost::any(*bgCustomTemplate);
    }
    if (bgCustomTemplateId) {
      res["BgCustomTemplateId"] = boost::any(*bgCustomTemplateId);
    }
    if (bgCustomTemplateInfo) {
      res["BgCustomTemplateInfo"] = boost::any(*bgCustomTemplateInfo);
    }
    if (bgCustomTemplateTitle) {
      res["BgCustomTemplateTitle"] = boost::any(*bgCustomTemplateTitle);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCustomTemplate") != m.end() && !m["BgCustomTemplate"].empty()) {
      bgCustomTemplate = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplate"]));
    }
    if (m.find("BgCustomTemplateId") != m.end() && !m["BgCustomTemplateId"].empty()) {
      bgCustomTemplateId = make_shared<long>(boost::any_cast<long>(m["BgCustomTemplateId"]));
    }
    if (m.find("BgCustomTemplateInfo") != m.end() && !m["BgCustomTemplateInfo"].empty()) {
      bgCustomTemplateInfo = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateInfo"]));
    }
    if (m.find("BgCustomTemplateTitle") != m.end() && !m["BgCustomTemplateTitle"].empty()) {
      bgCustomTemplateTitle = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateTitle"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
  }


  virtual ~ChangeCheckRequestBgCustomTemplateExtraDTO() = default;
};
class ChangeCheckRequestBlockInfosHitInfos : public Darabonba::Model {
public:
  shared_ptr<string> hitInfo{};
  shared_ptr<string> hitObject{};
  shared_ptr<string> scope{};

  ChangeCheckRequestBlockInfosHitInfos() {}

  explicit ChangeCheckRequestBlockInfosHitInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfo) {
      res["HitInfo"] = boost::any(*hitInfo);
    }
    if (hitObject) {
      res["HitObject"] = boost::any(*hitObject);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfo") != m.end() && !m["HitInfo"].empty()) {
      hitInfo = make_shared<string>(boost::any_cast<string>(m["HitInfo"]));
    }
    if (m.find("HitObject") != m.end() && !m["HitObject"].empty()) {
      hitObject = make_shared<string>(boost::any_cast<string>(m["HitObject"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ChangeCheckRequestBlockInfosHitInfos() = default;
};
class ChangeCheckRequestBlockInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestBlockInfosHitInfos>> hitInfos{};
  shared_ptr<long> id{};

  ChangeCheckRequestBlockInfos() {}

  explicit ChangeCheckRequestBlockInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hitInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitInfos"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfos") != m.end() && !m["HitInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HitInfos"].type()) {
        vector<ChangeCheckRequestBlockInfosHitInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestBlockInfosHitInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitInfos = make_shared<vector<ChangeCheckRequestBlockInfosHitInfos>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ChangeCheckRequestBlockInfos() = default;
};
class ChangeCheckRequestCallBackInfo : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> popProduct{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ChangeCheckRequestCallBackInfo() {}

  explicit ChangeCheckRequestCallBackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (popProduct) {
      res["PopProduct"] = boost::any(*popProduct);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("PopProduct") != m.end() && !m["PopProduct"].empty()) {
      popProduct = make_shared<string>(boost::any_cast<string>(m["PopProduct"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ChangeCheckRequestCallBackInfo() = default;
};
class ChangeCheckRequestChangeTimes : public Darabonba::Model {
public:
  shared_ptr<long> changeEndTime{};
  shared_ptr<long> changeStartTime{};

  ChangeCheckRequestChangeTimes() {}

  explicit ChangeCheckRequestChangeTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
  }


  virtual ~ChangeCheckRequestChangeTimes() = default;
};
class ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() {}

  explicit ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() = default;
};
class ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers() {}

  explicit ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers() = default;
};
class ChangeCheckRequestDamagedChangeNotices : public Darabonba::Model {
public:
  shared_ptr<string> bgCancelNoticeContent{};
  shared_ptr<string> bgCancelNoticeEventId{};
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};
  shared_ptr<vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers>> sensitiveCustomers{};
  shared_ptr<string> type{};

  ChangeCheckRequestDamagedChangeNotices() {}

  explicit ChangeCheckRequestDamagedChangeNotices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCancelNoticeContent) {
      res["BgCancelNoticeContent"] = boost::any(*bgCancelNoticeContent);
    }
    if (bgCancelNoticeEventId) {
      res["BgCancelNoticeEventId"] = boost::any(*bgCancelNoticeEventId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCancelNoticeContent") != m.end() && !m["BgCancelNoticeContent"].empty()) {
      bgCancelNoticeContent = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeContent"]));
    }
    if (m.find("BgCancelNoticeEventId") != m.end() && !m["BgCancelNoticeEventId"].empty()) {
      bgCancelNoticeEventId = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeEventId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<ChangeCheckRequestDamagedChangeNoticesSensitiveCustomers>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ChangeCheckRequestDamagedChangeNotices() = default;
};
class ChangeCheckRequestInfluenceInfoNoticeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};

  ChangeCheckRequestInfluenceInfoNoticeInfos() {}

  explicit ChangeCheckRequestInfluenceInfoNoticeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~ChangeCheckRequestInfluenceInfoNoticeInfos() = default;
};
class ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo() {}

  explicit ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo() = default;
};
class ChangeCheckRequestInfluenceInfoSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  ChangeCheckRequestInfluenceInfoSensitiveCustomers() {}

  explicit ChangeCheckRequestInfluenceInfoSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<ChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~ChangeCheckRequestInfluenceInfoSensitiveCustomers() = default;
};
class ChangeCheckRequestInfluenceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckRequestInfluenceInfoNoticeInfos>> noticeInfos{};
  shared_ptr<vector<ChangeCheckRequestInfluenceInfoSensitiveCustomers>> sensitiveCustomers{};

  ChangeCheckRequestInfluenceInfo() {}

  explicit ChangeCheckRequestInfluenceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*noticeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeInfos"] = boost::any(temp1);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoticeInfos") != m.end() && !m["NoticeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeInfos"].type()) {
        vector<ChangeCheckRequestInfluenceInfoNoticeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestInfluenceInfoNoticeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeInfos = make_shared<vector<ChangeCheckRequestInfluenceInfoNoticeInfos>>(expect1);
      }
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<ChangeCheckRequestInfluenceInfoSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestInfluenceInfoSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<ChangeCheckRequestInfluenceInfoSensitiveCustomers>>(expect1);
      }
    }
  }


  virtual ~ChangeCheckRequestInfluenceInfo() = default;
};
class ChangeCheckRequestInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributionApp{};
  shared_ptr<vector<string>> influenceApp{};
  shared_ptr<vector<string>> instance{};
  shared_ptr<vector<string>> nc{};
  shared_ptr<vector<string>> uids{};

  ChangeCheckRequestInstance() {}

  explicit ChangeCheckRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributionApp) {
      res["AttributionApp"] = boost::any(*attributionApp);
    }
    if (influenceApp) {
      res["InfluenceApp"] = boost::any(*influenceApp);
    }
    if (instance) {
      res["Instance"] = boost::any(*instance);
    }
    if (nc) {
      res["Nc"] = boost::any(*nc);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributionApp") != m.end() && !m["AttributionApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttributionApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttributionApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributionApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InfluenceApp") != m.end() && !m["InfluenceApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InfluenceApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InfluenceApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      influenceApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Instance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instance = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nc") != m.end() && !m["Nc"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nc"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nc"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nc = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ChangeCheckRequestInstance() = default;
};
class ChangeCheckRequestProduct : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  ChangeCheckRequestProduct() {}

  explicit ChangeCheckRequestProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ChangeCheckRequestProduct() = default;
};
class ChangeCheckRequestReleasePackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> releasePackage{};

  ChangeCheckRequestReleasePackageInfos() {}

  explicit ChangeCheckRequestReleasePackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (releasePackage) {
      res["ReleasePackage"] = boost::any(*releasePackage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ReleasePackage") != m.end() && !m["ReleasePackage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReleasePackage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReleasePackage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      releasePackage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ChangeCheckRequestReleasePackageInfos() = default;
};
class ChangeCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> affectCustomer{};
  shared_ptr<ChangeCheckRequestApproveFlowParam> approveFlowParam{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<ChangeCheckRequestBgCustomTemplateExtraDTO> bgCustomTemplateExtraDTO{};
  shared_ptr<string> bgVid{};
  shared_ptr<vector<ChangeCheckRequestBlockInfos>> blockInfos{};
  shared_ptr<ChangeCheckRequestCallBackInfo> callBackInfo{};
  shared_ptr<string> changeDataType{};
  shared_ptr<string> changeDesc{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeEnv{};
  shared_ptr<string> changeItems{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptSubType{};
  shared_ptr<string> changeOptType{};
  shared_ptr<string> changeReason{};
  shared_ptr<string> changeRmarks{};
  shared_ptr<string> changeSchemes{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeSubTypeDesc{};
  shared_ptr<string> changeSystem{};
  shared_ptr<vector<ChangeCheckRequestChangeTimes>> changeTimes{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> changeValidation{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<vector<ChangeCheckRequestDamagedChangeNotices>> damagedChangeNotices{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<string>> follower{};
  shared_ptr<string> grayStatus{};
  shared_ptr<string> harmChangeNoticeEnum{};
  shared_ptr<string> incidence{};
  shared_ptr<ChangeCheckRequestInfluenceInfo> influenceInfo{};
  shared_ptr<ChangeCheckRequestInstance> instance{};
  shared_ptr<string> needModifyDoc{};
  shared_ptr<vector<ChangeCheckRequestProduct>> product{};
  shared_ptr<vector<ChangeCheckRequestReleasePackageInfos>> releasePackageInfos{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> reuseSourceOrderId{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> rollback{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<long> whiteType{};

  ChangeCheckRequest() {}

  explicit ChangeCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCustomer) {
      res["AffectCustomer"] = boost::any(*affectCustomer);
    }
    if (approveFlowParam) {
      res["ApproveFlowParam"] = approveFlowParam ? boost::any(approveFlowParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgCustomTemplateExtraDTO) {
      res["BgCustomTemplateExtraDTO"] = bgCustomTemplateExtraDTO ? boost::any(bgCustomTemplateExtraDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (blockInfos) {
      vector<boost::any> temp1;
      for(auto item1:*blockInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockInfos"] = boost::any(temp1);
    }
    if (callBackInfo) {
      res["CallBackInfo"] = callBackInfo ? boost::any(callBackInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changeDataType) {
      res["ChangeDataType"] = boost::any(*changeDataType);
    }
    if (changeDesc) {
      res["ChangeDesc"] = boost::any(*changeDesc);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeEnv) {
      res["ChangeEnv"] = boost::any(*changeEnv);
    }
    if (changeItems) {
      res["ChangeItems"] = boost::any(*changeItems);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptSubType) {
      res["ChangeOptSubType"] = boost::any(*changeOptSubType);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeReason) {
      res["ChangeReason"] = boost::any(*changeReason);
    }
    if (changeRmarks) {
      res["ChangeRmarks"] = boost::any(*changeRmarks);
    }
    if (changeSchemes) {
      res["ChangeSchemes"] = boost::any(*changeSchemes);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeSubTypeDesc) {
      res["ChangeSubTypeDesc"] = boost::any(*changeSubTypeDesc);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (changeTimes) {
      vector<boost::any> temp1;
      for(auto item1:*changeTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeTimes"] = boost::any(temp1);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (changeValidation) {
      res["ChangeValidation"] = boost::any(*changeValidation);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (damagedChangeNotices) {
      vector<boost::any> temp1;
      for(auto item1:*damagedChangeNotices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DamagedChangeNotices"] = boost::any(temp1);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (follower) {
      res["Follower"] = boost::any(*follower);
    }
    if (grayStatus) {
      res["GrayStatus"] = boost::any(*grayStatus);
    }
    if (harmChangeNoticeEnum) {
      res["HarmChangeNoticeEnum"] = boost::any(*harmChangeNoticeEnum);
    }
    if (incidence) {
      res["Incidence"] = boost::any(*incidence);
    }
    if (influenceInfo) {
      res["InfluenceInfo"] = influenceInfo ? boost::any(influenceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (needModifyDoc) {
      res["NeedModifyDoc"] = boost::any(*needModifyDoc);
    }
    if (product) {
      vector<boost::any> temp1;
      for(auto item1:*product){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Product"] = boost::any(temp1);
    }
    if (releasePackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*releasePackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReleasePackageInfos"] = boost::any(temp1);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (reuseSourceOrderId) {
      res["ReuseSourceOrderId"] = boost::any(*reuseSourceOrderId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (rollback) {
      res["Rollback"] = boost::any(*rollback);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCustomer") != m.end() && !m["AffectCustomer"].empty()) {
      affectCustomer = make_shared<string>(boost::any_cast<string>(m["AffectCustomer"]));
    }
    if (m.find("ApproveFlowParam") != m.end() && !m["ApproveFlowParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveFlowParam"].type()) {
        ChangeCheckRequestApproveFlowParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveFlowParam"]));
        approveFlowParam = make_shared<ChangeCheckRequestApproveFlowParam>(model1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgCustomTemplateExtraDTO") != m.end() && !m["BgCustomTemplateExtraDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BgCustomTemplateExtraDTO"].type()) {
        ChangeCheckRequestBgCustomTemplateExtraDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BgCustomTemplateExtraDTO"]));
        bgCustomTemplateExtraDTO = make_shared<ChangeCheckRequestBgCustomTemplateExtraDTO>(model1);
      }
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("BlockInfos") != m.end() && !m["BlockInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockInfos"].type()) {
        vector<ChangeCheckRequestBlockInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestBlockInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockInfos = make_shared<vector<ChangeCheckRequestBlockInfos>>(expect1);
      }
    }
    if (m.find("CallBackInfo") != m.end() && !m["CallBackInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallBackInfo"].type()) {
        ChangeCheckRequestCallBackInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallBackInfo"]));
        callBackInfo = make_shared<ChangeCheckRequestCallBackInfo>(model1);
      }
    }
    if (m.find("ChangeDataType") != m.end() && !m["ChangeDataType"].empty()) {
      changeDataType = make_shared<string>(boost::any_cast<string>(m["ChangeDataType"]));
    }
    if (m.find("ChangeDesc") != m.end() && !m["ChangeDesc"].empty()) {
      changeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeDesc"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeEnv") != m.end() && !m["ChangeEnv"].empty()) {
      changeEnv = make_shared<string>(boost::any_cast<string>(m["ChangeEnv"]));
    }
    if (m.find("ChangeItems") != m.end() && !m["ChangeItems"].empty()) {
      changeItems = make_shared<string>(boost::any_cast<string>(m["ChangeItems"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptSubType") != m.end() && !m["ChangeOptSubType"].empty()) {
      changeOptSubType = make_shared<string>(boost::any_cast<string>(m["ChangeOptSubType"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeReason") != m.end() && !m["ChangeReason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["ChangeReason"]));
    }
    if (m.find("ChangeRmarks") != m.end() && !m["ChangeRmarks"].empty()) {
      changeRmarks = make_shared<string>(boost::any_cast<string>(m["ChangeRmarks"]));
    }
    if (m.find("ChangeSchemes") != m.end() && !m["ChangeSchemes"].empty()) {
      changeSchemes = make_shared<string>(boost::any_cast<string>(m["ChangeSchemes"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeSubTypeDesc") != m.end() && !m["ChangeSubTypeDesc"].empty()) {
      changeSubTypeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeSubTypeDesc"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("ChangeTimes") != m.end() && !m["ChangeTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeTimes"].type()) {
        vector<ChangeCheckRequestChangeTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestChangeTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTimes = make_shared<vector<ChangeCheckRequestChangeTimes>>(expect1);
      }
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("ChangeValidation") != m.end() && !m["ChangeValidation"].empty()) {
      changeValidation = make_shared<string>(boost::any_cast<string>(m["ChangeValidation"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("DamagedChangeNotices") != m.end() && !m["DamagedChangeNotices"].empty()) {
      if (typeid(vector<boost::any>) == m["DamagedChangeNotices"].type()) {
        vector<ChangeCheckRequestDamagedChangeNotices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DamagedChangeNotices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestDamagedChangeNotices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        damagedChangeNotices = make_shared<vector<ChangeCheckRequestDamagedChangeNotices>>(expect1);
      }
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Follower") != m.end() && !m["Follower"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Follower"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Follower"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      follower = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrayStatus") != m.end() && !m["GrayStatus"].empty()) {
      grayStatus = make_shared<string>(boost::any_cast<string>(m["GrayStatus"]));
    }
    if (m.find("HarmChangeNoticeEnum") != m.end() && !m["HarmChangeNoticeEnum"].empty()) {
      harmChangeNoticeEnum = make_shared<string>(boost::any_cast<string>(m["HarmChangeNoticeEnum"]));
    }
    if (m.find("Incidence") != m.end() && !m["Incidence"].empty()) {
      incidence = make_shared<string>(boost::any_cast<string>(m["Incidence"]));
    }
    if (m.find("InfluenceInfo") != m.end() && !m["InfluenceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InfluenceInfo"].type()) {
        ChangeCheckRequestInfluenceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InfluenceInfo"]));
        influenceInfo = make_shared<ChangeCheckRequestInfluenceInfo>(model1);
      }
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        ChangeCheckRequestInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<ChangeCheckRequestInstance>(model1);
      }
    }
    if (m.find("NeedModifyDoc") != m.end() && !m["NeedModifyDoc"].empty()) {
      needModifyDoc = make_shared<string>(boost::any_cast<string>(m["NeedModifyDoc"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<ChangeCheckRequestProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<ChangeCheckRequestProduct>>(expect1);
      }
    }
    if (m.find("ReleasePackageInfos") != m.end() && !m["ReleasePackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ReleasePackageInfos"].type()) {
        vector<ChangeCheckRequestReleasePackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReleasePackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckRequestReleasePackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releasePackageInfos = make_shared<vector<ChangeCheckRequestReleasePackageInfos>>(expect1);
      }
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("ReuseSourceOrderId") != m.end() && !m["ReuseSourceOrderId"].empty()) {
      reuseSourceOrderId = make_shared<string>(boost::any_cast<string>(m["ReuseSourceOrderId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("Rollback") != m.end() && !m["Rollback"].empty()) {
      rollback = make_shared<string>(boost::any_cast<string>(m["Rollback"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~ChangeCheckRequest() = default;
};
class ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO : public Darabonba::Model {
public:
  shared_ptr<string> approveDesc{};
  shared_ptr<string> approveTime{};
  shared_ptr<string> approverId{};
  shared_ptr<string> approverName{};
  shared_ptr<long> opinion{};

  ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO() {}

  explicit ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveDesc) {
      res["ApproveDesc"] = boost::any(*approveDesc);
    }
    if (approveTime) {
      res["ApproveTime"] = boost::any(*approveTime);
    }
    if (approverId) {
      res["ApproverId"] = boost::any(*approverId);
    }
    if (approverName) {
      res["ApproverName"] = boost::any(*approverName);
    }
    if (opinion) {
      res["Opinion"] = boost::any(*opinion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveDesc") != m.end() && !m["ApproveDesc"].empty()) {
      approveDesc = make_shared<string>(boost::any_cast<string>(m["ApproveDesc"]));
    }
    if (m.find("ApproveTime") != m.end() && !m["ApproveTime"].empty()) {
      approveTime = make_shared<string>(boost::any_cast<string>(m["ApproveTime"]));
    }
    if (m.find("ApproverId") != m.end() && !m["ApproverId"].empty()) {
      approverId = make_shared<string>(boost::any_cast<string>(m["ApproverId"]));
    }
    if (m.find("ApproverName") != m.end() && !m["ApproverName"].empty()) {
      approverName = make_shared<string>(boost::any_cast<string>(m["ApproverName"]));
    }
    if (m.find("Opinion") != m.end() && !m["Opinion"].empty()) {
      opinion = make_shared<long>(boost::any_cast<long>(m["Opinion"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO() = default;
};
class ChangeCheckShrinkRequestApproveFlowParamApproveNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO>> approverDTO{};
  shared_ptr<long> nodeStatus{};
  shared_ptr<string> processName{};
  shared_ptr<long> processNodeOrder{};
  shared_ptr<long> strategy{};

  ChangeCheckShrinkRequestApproveFlowParamApproveNodes() {}

  explicit ChangeCheckShrinkRequestApproveFlowParamApproveNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approverDTO) {
      vector<boost::any> temp1;
      for(auto item1:*approverDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproverDTO"] = boost::any(temp1);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (processName) {
      res["ProcessName"] = boost::any(*processName);
    }
    if (processNodeOrder) {
      res["ProcessNodeOrder"] = boost::any(*processNodeOrder);
    }
    if (strategy) {
      res["Strategy"] = boost::any(*strategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproverDTO") != m.end() && !m["ApproverDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproverDTO"].type()) {
        vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproverDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverDTO = make_shared<vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO>>(expect1);
      }
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<long>(boost::any_cast<long>(m["NodeStatus"]));
    }
    if (m.find("ProcessName") != m.end() && !m["ProcessName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["ProcessName"]));
    }
    if (m.find("ProcessNodeOrder") != m.end() && !m["ProcessNodeOrder"].empty()) {
      processNodeOrder = make_shared<long>(boost::any_cast<long>(m["ProcessNodeOrder"]));
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      strategy = make_shared<long>(boost::any_cast<long>(m["Strategy"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestApproveFlowParamApproveNodes() = default;
};
class ChangeCheckShrinkRequestApproveFlowParam : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodes>> approveNodes{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> bgVid{};
  shared_ptr<long> flowStatus{};
  shared_ptr<long> timestamp{};

  ChangeCheckShrinkRequestApproveFlowParam() {}

  explicit ChangeCheckShrinkRequestApproveFlowParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveNodes) {
      vector<boost::any> temp1;
      for(auto item1:*approveNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproveNodes"] = boost::any(temp1);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveNodes") != m.end() && !m["ApproveNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproveNodes"].type()) {
        vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproveNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestApproveFlowParamApproveNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approveNodes = make_shared<vector<ChangeCheckShrinkRequestApproveFlowParamApproveNodes>>(expect1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<long>(boost::any_cast<long>(m["FlowStatus"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestApproveFlowParam() = default;
};
class ChangeCheckShrinkRequestBgCustomTemplateExtraDTO : public Darabonba::Model {
public:
  shared_ptr<string> bgCustomTemplate{};
  shared_ptr<long> bgCustomTemplateId{};
  shared_ptr<string> bgCustomTemplateInfo{};
  shared_ptr<string> bgCustomTemplateTitle{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> extraInfo{};

  ChangeCheckShrinkRequestBgCustomTemplateExtraDTO() {}

  explicit ChangeCheckShrinkRequestBgCustomTemplateExtraDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCustomTemplate) {
      res["BgCustomTemplate"] = boost::any(*bgCustomTemplate);
    }
    if (bgCustomTemplateId) {
      res["BgCustomTemplateId"] = boost::any(*bgCustomTemplateId);
    }
    if (bgCustomTemplateInfo) {
      res["BgCustomTemplateInfo"] = boost::any(*bgCustomTemplateInfo);
    }
    if (bgCustomTemplateTitle) {
      res["BgCustomTemplateTitle"] = boost::any(*bgCustomTemplateTitle);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCustomTemplate") != m.end() && !m["BgCustomTemplate"].empty()) {
      bgCustomTemplate = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplate"]));
    }
    if (m.find("BgCustomTemplateId") != m.end() && !m["BgCustomTemplateId"].empty()) {
      bgCustomTemplateId = make_shared<long>(boost::any_cast<long>(m["BgCustomTemplateId"]));
    }
    if (m.find("BgCustomTemplateInfo") != m.end() && !m["BgCustomTemplateInfo"].empty()) {
      bgCustomTemplateInfo = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateInfo"]));
    }
    if (m.find("BgCustomTemplateTitle") != m.end() && !m["BgCustomTemplateTitle"].empty()) {
      bgCustomTemplateTitle = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateTitle"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestBgCustomTemplateExtraDTO() = default;
};
class ChangeCheckShrinkRequestBlockInfosHitInfos : public Darabonba::Model {
public:
  shared_ptr<string> hitInfo{};
  shared_ptr<string> hitObject{};
  shared_ptr<string> scope{};

  ChangeCheckShrinkRequestBlockInfosHitInfos() {}

  explicit ChangeCheckShrinkRequestBlockInfosHitInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfo) {
      res["HitInfo"] = boost::any(*hitInfo);
    }
    if (hitObject) {
      res["HitObject"] = boost::any(*hitObject);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfo") != m.end() && !m["HitInfo"].empty()) {
      hitInfo = make_shared<string>(boost::any_cast<string>(m["HitInfo"]));
    }
    if (m.find("HitObject") != m.end() && !m["HitObject"].empty()) {
      hitObject = make_shared<string>(boost::any_cast<string>(m["HitObject"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestBlockInfosHitInfos() = default;
};
class ChangeCheckShrinkRequestBlockInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckShrinkRequestBlockInfosHitInfos>> hitInfos{};
  shared_ptr<long> id{};

  ChangeCheckShrinkRequestBlockInfos() {}

  explicit ChangeCheckShrinkRequestBlockInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hitInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitInfos"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfos") != m.end() && !m["HitInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HitInfos"].type()) {
        vector<ChangeCheckShrinkRequestBlockInfosHitInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestBlockInfosHitInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitInfos = make_shared<vector<ChangeCheckShrinkRequestBlockInfosHitInfos>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestBlockInfos() = default;
};
class ChangeCheckShrinkRequestCallBackInfo : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> popProduct{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ChangeCheckShrinkRequestCallBackInfo() {}

  explicit ChangeCheckShrinkRequestCallBackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (popProduct) {
      res["PopProduct"] = boost::any(*popProduct);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("PopProduct") != m.end() && !m["PopProduct"].empty()) {
      popProduct = make_shared<string>(boost::any_cast<string>(m["PopProduct"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestCallBackInfo() = default;
};
class ChangeCheckShrinkRequestChangeTimes : public Darabonba::Model {
public:
  shared_ptr<long> changeEndTime{};
  shared_ptr<long> changeStartTime{};

  ChangeCheckShrinkRequestChangeTimes() {}

  explicit ChangeCheckShrinkRequestChangeTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestChangeTimes() = default;
};
class ChangeCheckShrinkRequestInfluenceInfoNoticeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};

  ChangeCheckShrinkRequestInfluenceInfoNoticeInfos() {}

  explicit ChangeCheckShrinkRequestInfluenceInfoNoticeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestInfluenceInfoNoticeInfos() = default;
};
class ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo() {}

  explicit ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo() = default;
};
class ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers() {}

  explicit ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers() = default;
};
class ChangeCheckShrinkRequestInfluenceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCheckShrinkRequestInfluenceInfoNoticeInfos>> noticeInfos{};
  shared_ptr<vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers>> sensitiveCustomers{};

  ChangeCheckShrinkRequestInfluenceInfo() {}

  explicit ChangeCheckShrinkRequestInfluenceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*noticeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeInfos"] = boost::any(temp1);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoticeInfos") != m.end() && !m["NoticeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeInfos"].type()) {
        vector<ChangeCheckShrinkRequestInfluenceInfoNoticeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestInfluenceInfoNoticeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeInfos = make_shared<vector<ChangeCheckShrinkRequestInfluenceInfoNoticeInfos>>(expect1);
      }
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<ChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers>>(expect1);
      }
    }
  }


  virtual ~ChangeCheckShrinkRequestInfluenceInfo() = default;
};
class ChangeCheckShrinkRequestInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributionApp{};
  shared_ptr<vector<string>> influenceApp{};
  shared_ptr<vector<string>> instance{};
  shared_ptr<vector<string>> nc{};
  shared_ptr<vector<string>> uids{};

  ChangeCheckShrinkRequestInstance() {}

  explicit ChangeCheckShrinkRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributionApp) {
      res["AttributionApp"] = boost::any(*attributionApp);
    }
    if (influenceApp) {
      res["InfluenceApp"] = boost::any(*influenceApp);
    }
    if (instance) {
      res["Instance"] = boost::any(*instance);
    }
    if (nc) {
      res["Nc"] = boost::any(*nc);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributionApp") != m.end() && !m["AttributionApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttributionApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttributionApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributionApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InfluenceApp") != m.end() && !m["InfluenceApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InfluenceApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InfluenceApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      influenceApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Instance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instance = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nc") != m.end() && !m["Nc"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nc"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nc"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nc = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ChangeCheckShrinkRequestInstance() = default;
};
class ChangeCheckShrinkRequestProduct : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  ChangeCheckShrinkRequestProduct() {}

  explicit ChangeCheckShrinkRequestProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ChangeCheckShrinkRequestProduct() = default;
};
class ChangeCheckShrinkRequestReleasePackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> releasePackage{};

  ChangeCheckShrinkRequestReleasePackageInfos() {}

  explicit ChangeCheckShrinkRequestReleasePackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (releasePackage) {
      res["ReleasePackage"] = boost::any(*releasePackage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ReleasePackage") != m.end() && !m["ReleasePackage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReleasePackage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReleasePackage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      releasePackage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ChangeCheckShrinkRequestReleasePackageInfos() = default;
};
class ChangeCheckShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> affectCustomer{};
  shared_ptr<ChangeCheckShrinkRequestApproveFlowParam> approveFlowParam{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<ChangeCheckShrinkRequestBgCustomTemplateExtraDTO> bgCustomTemplateExtraDTO{};
  shared_ptr<string> bgVid{};
  shared_ptr<vector<ChangeCheckShrinkRequestBlockInfos>> blockInfos{};
  shared_ptr<ChangeCheckShrinkRequestCallBackInfo> callBackInfo{};
  shared_ptr<string> changeDataType{};
  shared_ptr<string> changeDesc{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeEnv{};
  shared_ptr<string> changeItems{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptSubType{};
  shared_ptr<string> changeOptType{};
  shared_ptr<string> changeReason{};
  shared_ptr<string> changeRmarks{};
  shared_ptr<string> changeSchemes{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeSubTypeDesc{};
  shared_ptr<string> changeSystem{};
  shared_ptr<vector<ChangeCheckShrinkRequestChangeTimes>> changeTimes{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> changeValidation{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> damagedChangeNoticesShrink{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<string>> follower{};
  shared_ptr<string> grayStatus{};
  shared_ptr<string> harmChangeNoticeEnum{};
  shared_ptr<string> incidence{};
  shared_ptr<ChangeCheckShrinkRequestInfluenceInfo> influenceInfo{};
  shared_ptr<ChangeCheckShrinkRequestInstance> instance{};
  shared_ptr<string> needModifyDoc{};
  shared_ptr<vector<ChangeCheckShrinkRequestProduct>> product{};
  shared_ptr<vector<ChangeCheckShrinkRequestReleasePackageInfos>> releasePackageInfos{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> reuseSourceOrderId{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> rollback{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<long> whiteType{};

  ChangeCheckShrinkRequest() {}

  explicit ChangeCheckShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCustomer) {
      res["AffectCustomer"] = boost::any(*affectCustomer);
    }
    if (approveFlowParam) {
      res["ApproveFlowParam"] = approveFlowParam ? boost::any(approveFlowParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgCustomTemplateExtraDTO) {
      res["BgCustomTemplateExtraDTO"] = bgCustomTemplateExtraDTO ? boost::any(bgCustomTemplateExtraDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (blockInfos) {
      vector<boost::any> temp1;
      for(auto item1:*blockInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockInfos"] = boost::any(temp1);
    }
    if (callBackInfo) {
      res["CallBackInfo"] = callBackInfo ? boost::any(callBackInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changeDataType) {
      res["ChangeDataType"] = boost::any(*changeDataType);
    }
    if (changeDesc) {
      res["ChangeDesc"] = boost::any(*changeDesc);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeEnv) {
      res["ChangeEnv"] = boost::any(*changeEnv);
    }
    if (changeItems) {
      res["ChangeItems"] = boost::any(*changeItems);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptSubType) {
      res["ChangeOptSubType"] = boost::any(*changeOptSubType);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeReason) {
      res["ChangeReason"] = boost::any(*changeReason);
    }
    if (changeRmarks) {
      res["ChangeRmarks"] = boost::any(*changeRmarks);
    }
    if (changeSchemes) {
      res["ChangeSchemes"] = boost::any(*changeSchemes);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeSubTypeDesc) {
      res["ChangeSubTypeDesc"] = boost::any(*changeSubTypeDesc);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (changeTimes) {
      vector<boost::any> temp1;
      for(auto item1:*changeTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeTimes"] = boost::any(temp1);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (changeValidation) {
      res["ChangeValidation"] = boost::any(*changeValidation);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (damagedChangeNoticesShrink) {
      res["DamagedChangeNotices"] = boost::any(*damagedChangeNoticesShrink);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (follower) {
      res["Follower"] = boost::any(*follower);
    }
    if (grayStatus) {
      res["GrayStatus"] = boost::any(*grayStatus);
    }
    if (harmChangeNoticeEnum) {
      res["HarmChangeNoticeEnum"] = boost::any(*harmChangeNoticeEnum);
    }
    if (incidence) {
      res["Incidence"] = boost::any(*incidence);
    }
    if (influenceInfo) {
      res["InfluenceInfo"] = influenceInfo ? boost::any(influenceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (needModifyDoc) {
      res["NeedModifyDoc"] = boost::any(*needModifyDoc);
    }
    if (product) {
      vector<boost::any> temp1;
      for(auto item1:*product){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Product"] = boost::any(temp1);
    }
    if (releasePackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*releasePackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReleasePackageInfos"] = boost::any(temp1);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (reuseSourceOrderId) {
      res["ReuseSourceOrderId"] = boost::any(*reuseSourceOrderId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (rollback) {
      res["Rollback"] = boost::any(*rollback);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCustomer") != m.end() && !m["AffectCustomer"].empty()) {
      affectCustomer = make_shared<string>(boost::any_cast<string>(m["AffectCustomer"]));
    }
    if (m.find("ApproveFlowParam") != m.end() && !m["ApproveFlowParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveFlowParam"].type()) {
        ChangeCheckShrinkRequestApproveFlowParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveFlowParam"]));
        approveFlowParam = make_shared<ChangeCheckShrinkRequestApproveFlowParam>(model1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgCustomTemplateExtraDTO") != m.end() && !m["BgCustomTemplateExtraDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BgCustomTemplateExtraDTO"].type()) {
        ChangeCheckShrinkRequestBgCustomTemplateExtraDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BgCustomTemplateExtraDTO"]));
        bgCustomTemplateExtraDTO = make_shared<ChangeCheckShrinkRequestBgCustomTemplateExtraDTO>(model1);
      }
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("BlockInfos") != m.end() && !m["BlockInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockInfos"].type()) {
        vector<ChangeCheckShrinkRequestBlockInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestBlockInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockInfos = make_shared<vector<ChangeCheckShrinkRequestBlockInfos>>(expect1);
      }
    }
    if (m.find("CallBackInfo") != m.end() && !m["CallBackInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallBackInfo"].type()) {
        ChangeCheckShrinkRequestCallBackInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallBackInfo"]));
        callBackInfo = make_shared<ChangeCheckShrinkRequestCallBackInfo>(model1);
      }
    }
    if (m.find("ChangeDataType") != m.end() && !m["ChangeDataType"].empty()) {
      changeDataType = make_shared<string>(boost::any_cast<string>(m["ChangeDataType"]));
    }
    if (m.find("ChangeDesc") != m.end() && !m["ChangeDesc"].empty()) {
      changeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeDesc"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeEnv") != m.end() && !m["ChangeEnv"].empty()) {
      changeEnv = make_shared<string>(boost::any_cast<string>(m["ChangeEnv"]));
    }
    if (m.find("ChangeItems") != m.end() && !m["ChangeItems"].empty()) {
      changeItems = make_shared<string>(boost::any_cast<string>(m["ChangeItems"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptSubType") != m.end() && !m["ChangeOptSubType"].empty()) {
      changeOptSubType = make_shared<string>(boost::any_cast<string>(m["ChangeOptSubType"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeReason") != m.end() && !m["ChangeReason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["ChangeReason"]));
    }
    if (m.find("ChangeRmarks") != m.end() && !m["ChangeRmarks"].empty()) {
      changeRmarks = make_shared<string>(boost::any_cast<string>(m["ChangeRmarks"]));
    }
    if (m.find("ChangeSchemes") != m.end() && !m["ChangeSchemes"].empty()) {
      changeSchemes = make_shared<string>(boost::any_cast<string>(m["ChangeSchemes"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeSubTypeDesc") != m.end() && !m["ChangeSubTypeDesc"].empty()) {
      changeSubTypeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeSubTypeDesc"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("ChangeTimes") != m.end() && !m["ChangeTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeTimes"].type()) {
        vector<ChangeCheckShrinkRequestChangeTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestChangeTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTimes = make_shared<vector<ChangeCheckShrinkRequestChangeTimes>>(expect1);
      }
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("ChangeValidation") != m.end() && !m["ChangeValidation"].empty()) {
      changeValidation = make_shared<string>(boost::any_cast<string>(m["ChangeValidation"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("DamagedChangeNotices") != m.end() && !m["DamagedChangeNotices"].empty()) {
      damagedChangeNoticesShrink = make_shared<string>(boost::any_cast<string>(m["DamagedChangeNotices"]));
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Follower") != m.end() && !m["Follower"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Follower"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Follower"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      follower = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrayStatus") != m.end() && !m["GrayStatus"].empty()) {
      grayStatus = make_shared<string>(boost::any_cast<string>(m["GrayStatus"]));
    }
    if (m.find("HarmChangeNoticeEnum") != m.end() && !m["HarmChangeNoticeEnum"].empty()) {
      harmChangeNoticeEnum = make_shared<string>(boost::any_cast<string>(m["HarmChangeNoticeEnum"]));
    }
    if (m.find("Incidence") != m.end() && !m["Incidence"].empty()) {
      incidence = make_shared<string>(boost::any_cast<string>(m["Incidence"]));
    }
    if (m.find("InfluenceInfo") != m.end() && !m["InfluenceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InfluenceInfo"].type()) {
        ChangeCheckShrinkRequestInfluenceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InfluenceInfo"]));
        influenceInfo = make_shared<ChangeCheckShrinkRequestInfluenceInfo>(model1);
      }
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        ChangeCheckShrinkRequestInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<ChangeCheckShrinkRequestInstance>(model1);
      }
    }
    if (m.find("NeedModifyDoc") != m.end() && !m["NeedModifyDoc"].empty()) {
      needModifyDoc = make_shared<string>(boost::any_cast<string>(m["NeedModifyDoc"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<ChangeCheckShrinkRequestProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<ChangeCheckShrinkRequestProduct>>(expect1);
      }
    }
    if (m.find("ReleasePackageInfos") != m.end() && !m["ReleasePackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ReleasePackageInfos"].type()) {
        vector<ChangeCheckShrinkRequestReleasePackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReleasePackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckShrinkRequestReleasePackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releasePackageInfos = make_shared<vector<ChangeCheckShrinkRequestReleasePackageInfos>>(expect1);
      }
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("ReuseSourceOrderId") != m.end() && !m["ReuseSourceOrderId"].empty()) {
      reuseSourceOrderId = make_shared<string>(boost::any_cast<string>(m["ReuseSourceOrderId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("Rollback") != m.end() && !m["Rollback"].empty()) {
      rollback = make_shared<string>(boost::any_cast<string>(m["Rollback"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~ChangeCheckShrinkRequest() = default;
};
class ChangeCheckResponseBodyDataRuleDetailUrlList : public Darabonba::Model {
public:
  shared_ptr<string> sceneEnum{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  ChangeCheckResponseBodyDataRuleDetailUrlList() {}

  explicit ChangeCheckResponseBodyDataRuleDetailUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneEnum) {
      res["SceneEnum"] = boost::any(*sceneEnum);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneEnum") != m.end() && !m["SceneEnum"].empty()) {
      sceneEnum = make_shared<string>(boost::any_cast<string>(m["SceneEnum"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ChangeCheckResponseBodyDataRuleDetailUrlList() = default;
};
class ChangeCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveResultUrl{};
  shared_ptr<string> bgCheckStatus{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> changeStatus{};
  shared_ptr<string> checkResultUrl{};
  shared_ptr<string> checkStatus{};
  shared_ptr<vector<string>> checkholdReason{};
  shared_ptr<vector<ChangeCheckResponseBodyDataRuleDetailUrlList>> ruleDetailUrlList{};
  shared_ptr<string> sourceOrderId{};

  ChangeCheckResponseBodyData() {}

  explicit ChangeCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveResultUrl) {
      res["ApproveResultUrl"] = boost::any(*approveResultUrl);
    }
    if (bgCheckStatus) {
      res["BgCheckStatus"] = boost::any(*bgCheckStatus);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (changeStatus) {
      res["ChangeStatus"] = boost::any(*changeStatus);
    }
    if (checkResultUrl) {
      res["CheckResultUrl"] = boost::any(*checkResultUrl);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkholdReason) {
      res["CheckholdReason"] = boost::any(*checkholdReason);
    }
    if (ruleDetailUrlList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleDetailUrlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleDetailUrlList"] = boost::any(temp1);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveResultUrl") != m.end() && !m["ApproveResultUrl"].empty()) {
      approveResultUrl = make_shared<string>(boost::any_cast<string>(m["ApproveResultUrl"]));
    }
    if (m.find("BgCheckStatus") != m.end() && !m["BgCheckStatus"].empty()) {
      bgCheckStatus = make_shared<string>(boost::any_cast<string>(m["BgCheckStatus"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("ChangeStatus") != m.end() && !m["ChangeStatus"].empty()) {
      changeStatus = make_shared<string>(boost::any_cast<string>(m["ChangeStatus"]));
    }
    if (m.find("CheckResultUrl") != m.end() && !m["CheckResultUrl"].empty()) {
      checkResultUrl = make_shared<string>(boost::any_cast<string>(m["CheckResultUrl"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckholdReason") != m.end() && !m["CheckholdReason"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CheckholdReason"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckholdReason"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checkholdReason = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RuleDetailUrlList") != m.end() && !m["RuleDetailUrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleDetailUrlList"].type()) {
        vector<ChangeCheckResponseBodyDataRuleDetailUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleDetailUrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCheckResponseBodyDataRuleDetailUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleDetailUrlList = make_shared<vector<ChangeCheckResponseBodyDataRuleDetailUrlList>>(expect1);
      }
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~ChangeCheckResponseBodyData() = default;
};
class ChangeCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ChangeCheckResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeCheckResponseBody() {}

  explicit ChangeCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChangeCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeCheckResponseBodyData>(model1);
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


  virtual ~ChangeCheckResponseBody() = default;
};
class ChangeCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeCheckResponseBody> body{};

  ChangeCheckResponse() {}

  explicit ChangeCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeCheckResponse() = default;
};
class ChangeEndRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeResult{};
  shared_ptr<long> curBatchNo{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> totalBatchNo{};

  ChangeEndRequest() {}

  explicit ChangeEndRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeResult) {
      res["ChangeResult"] = boost::any(*changeResult);
    }
    if (curBatchNo) {
      res["CurBatchNo"] = boost::any(*curBatchNo);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (totalBatchNo) {
      res["TotalBatchNo"] = boost::any(*totalBatchNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeResult") != m.end() && !m["ChangeResult"].empty()) {
      changeResult = make_shared<string>(boost::any_cast<string>(m["ChangeResult"]));
    }
    if (m.find("CurBatchNo") != m.end() && !m["CurBatchNo"].empty()) {
      curBatchNo = make_shared<long>(boost::any_cast<long>(m["CurBatchNo"]));
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("TotalBatchNo") != m.end() && !m["TotalBatchNo"].empty()) {
      totalBatchNo = make_shared<long>(boost::any_cast<long>(m["TotalBatchNo"]));
    }
  }


  virtual ~ChangeEndRequest() = default;
};
class ChangeEndResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeEndResponseBody() {}

  explicit ChangeEndResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeEndResponseBody() = default;
};
class ChangeEndResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeEndResponseBody> body{};

  ChangeEndResponse() {}

  explicit ChangeEndResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeEndResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeEndResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeEndResponse() = default;
};
class ChangeStartRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptType{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<long> curBatchNo{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> totalBatchNo{};

  ChangeStartRequest() {}

  explicit ChangeStartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (curBatchNo) {
      res["CurBatchNo"] = boost::any(*curBatchNo);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (totalBatchNo) {
      res["TotalBatchNo"] = boost::any(*totalBatchNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("CurBatchNo") != m.end() && !m["CurBatchNo"].empty()) {
      curBatchNo = make_shared<long>(boost::any_cast<long>(m["CurBatchNo"]));
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("TotalBatchNo") != m.end() && !m["TotalBatchNo"].empty()) {
      totalBatchNo = make_shared<long>(boost::any_cast<long>(m["TotalBatchNo"]));
    }
  }


  virtual ~ChangeStartRequest() = default;
};
class ChangeStartResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeStartResponseBody() {}

  explicit ChangeStartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeStartResponseBody() = default;
};
class ChangeStartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeStartResponseBody> body{};

  ChangeStartResponse() {}

  explicit ChangeStartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeStartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeStartResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeStartResponse() = default;
};
class CreateBlockRequestApproveStrategyNodes : public Darabonba::Model {
public:
  shared_ptr<long> approveRuleType{};
  shared_ptr<long> approveType{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeCode{};
  shared_ptr<long> priorityOrder{};
  shared_ptr<long> roleCode{};
  shared_ptr<vector<string>> roleValue{};
  shared_ptr<long> templateId{};

  CreateBlockRequestApproveStrategyNodes() {}

  explicit CreateBlockRequestApproveStrategyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveRuleType) {
      res["ApproveRuleType"] = boost::any(*approveRuleType);
    }
    if (approveType) {
      res["ApproveType"] = boost::any(*approveType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeCode) {
      res["NodeCode"] = boost::any(*nodeCode);
    }
    if (priorityOrder) {
      res["PriorityOrder"] = boost::any(*priorityOrder);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleValue) {
      res["RoleValue"] = boost::any(*roleValue);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveRuleType") != m.end() && !m["ApproveRuleType"].empty()) {
      approveRuleType = make_shared<long>(boost::any_cast<long>(m["ApproveRuleType"]));
    }
    if (m.find("ApproveType") != m.end() && !m["ApproveType"].empty()) {
      approveType = make_shared<long>(boost::any_cast<long>(m["ApproveType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeCode") != m.end() && !m["NodeCode"].empty()) {
      nodeCode = make_shared<string>(boost::any_cast<string>(m["NodeCode"]));
    }
    if (m.find("PriorityOrder") != m.end() && !m["PriorityOrder"].empty()) {
      priorityOrder = make_shared<long>(boost::any_cast<long>(m["PriorityOrder"]));
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<long>(boost::any_cast<long>(m["RoleCode"]));
    }
    if (m.find("RoleValue") != m.end() && !m["RoleValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleValue = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateBlockRequestApproveStrategyNodes() = default;
};
class CreateBlockRequestNoticeEnclosureInfos : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  CreateBlockRequestNoticeEnclosureInfos() {}

  explicit CreateBlockRequestNoticeEnclosureInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~CreateBlockRequestNoticeEnclosureInfos() = default;
};
class CreateBlockRequestScopesBlockScopeApp : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appName{};
  shared_ptr<long> type{};

  CreateBlockRequestScopesBlockScopeApp() {}

  explicit CreateBlockRequestScopesBlockScopeApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeApp() = default;
};
class CreateBlockRequestScopesBlockScopeBgSystem : public Darabonba::Model {
public:
  shared_ptr<vector<string>> relateCodes{};
  shared_ptr<string> selfCodeName{};

  CreateBlockRequestScopesBlockScopeBgSystem() {}

  explicit CreateBlockRequestScopesBlockScopeBgSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relateCodes) {
      res["RelateCodes"] = boost::any(*relateCodes);
    }
    if (selfCodeName) {
      res["SelfCodeName"] = boost::any(*selfCodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelateCodes") != m.end() && !m["RelateCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelateCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelateCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relateCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SelfCodeName") != m.end() && !m["SelfCodeName"].empty()) {
      selfCodeName = make_shared<string>(boost::any_cast<string>(m["SelfCodeName"]));
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeBgSystem() = default;
};
class CreateBlockRequestScopesBlockScopeClusterRelations : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appCodes{};
  shared_ptr<vector<string>> labelCodes{};
  shared_ptr<vector<string>> relateCodes{};
  shared_ptr<string> selfCode{};

  CreateBlockRequestScopesBlockScopeClusterRelations() {}

  explicit CreateBlockRequestScopesBlockScopeClusterRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCodes) {
      res["AppCodes"] = boost::any(*appCodes);
    }
    if (labelCodes) {
      res["LabelCodes"] = boost::any(*labelCodes);
    }
    if (relateCodes) {
      res["RelateCodes"] = boost::any(*relateCodes);
    }
    if (selfCode) {
      res["SelfCode"] = boost::any(*selfCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCodes") != m.end() && !m["AppCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LabelCodes") != m.end() && !m["LabelCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RelateCodes") != m.end() && !m["RelateCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelateCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelateCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relateCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SelfCode") != m.end() && !m["SelfCode"].empty()) {
      selfCode = make_shared<string>(boost::any_cast<string>(m["SelfCode"]));
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeClusterRelations() = default;
};
class CreateBlockRequestScopesBlockScopeCluster : public Darabonba::Model {
public:
  shared_ptr<vector<string>> codeNames{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeClusterRelations>> relations{};

  CreateBlockRequestScopesBlockScopeCluster() {}

  explicit CreateBlockRequestScopesBlockScopeCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeNames) {
      res["CodeNames"] = boost::any(*codeNames);
    }
    if (relations) {
      vector<boost::any> temp1;
      for(auto item1:*relations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Relations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeNames") != m.end() && !m["CodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      codeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Relations") != m.end() && !m["Relations"].empty()) {
      if (typeid(vector<boost::any>) == m["Relations"].type()) {
        vector<CreateBlockRequestScopesBlockScopeClusterRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Relations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeClusterRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relations = make_shared<vector<CreateBlockRequestScopesBlockScopeClusterRelations>>(expect1);
      }
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeCluster() = default;
};
class CreateBlockRequestScopesBlockScopeCustomerRelations : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appCodes{};
  shared_ptr<vector<string>> labelCodes{};
  shared_ptr<vector<string>> relateCodes{};
  shared_ptr<string> selfCode{};

  CreateBlockRequestScopesBlockScopeCustomerRelations() {}

  explicit CreateBlockRequestScopesBlockScopeCustomerRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCodes) {
      res["AppCodes"] = boost::any(*appCodes);
    }
    if (labelCodes) {
      res["LabelCodes"] = boost::any(*labelCodes);
    }
    if (relateCodes) {
      res["RelateCodes"] = boost::any(*relateCodes);
    }
    if (selfCode) {
      res["SelfCode"] = boost::any(*selfCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCodes") != m.end() && !m["AppCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LabelCodes") != m.end() && !m["LabelCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RelateCodes") != m.end() && !m["RelateCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelateCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelateCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relateCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SelfCode") != m.end() && !m["SelfCode"].empty()) {
      selfCode = make_shared<string>(boost::any_cast<string>(m["SelfCode"]));
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeCustomerRelations() = default;
};
class CreateBlockRequestScopesBlockScopeCustomer : public Darabonba::Model {
public:
  shared_ptr<vector<string>> codeNames{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeCustomerRelations>> relations{};
  shared_ptr<string> uid{};
  shared_ptr<vector<long>> viewCodes{};

  CreateBlockRequestScopesBlockScopeCustomer() {}

  explicit CreateBlockRequestScopesBlockScopeCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeNames) {
      res["CodeNames"] = boost::any(*codeNames);
    }
    if (relations) {
      vector<boost::any> temp1;
      for(auto item1:*relations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Relations"] = boost::any(temp1);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (viewCodes) {
      res["ViewCodes"] = boost::any(*viewCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeNames") != m.end() && !m["CodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      codeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Relations") != m.end() && !m["Relations"].empty()) {
      if (typeid(vector<boost::any>) == m["Relations"].type()) {
        vector<CreateBlockRequestScopesBlockScopeCustomerRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Relations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeCustomerRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relations = make_shared<vector<CreateBlockRequestScopesBlockScopeCustomerRelations>>(expect1);
      }
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("ViewCodes") != m.end() && !m["ViewCodes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ViewCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ViewCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      viewCodes = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeCustomer() = default;
};
class CreateBlockRequestScopesBlockScopeProductRelations : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appCodes{};
  shared_ptr<vector<string>> labelCodes{};
  shared_ptr<vector<string>> relateCodes{};
  shared_ptr<string> selfCode{};

  CreateBlockRequestScopesBlockScopeProductRelations() {}

  explicit CreateBlockRequestScopesBlockScopeProductRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCodes) {
      res["AppCodes"] = boost::any(*appCodes);
    }
    if (labelCodes) {
      res["LabelCodes"] = boost::any(*labelCodes);
    }
    if (relateCodes) {
      res["RelateCodes"] = boost::any(*relateCodes);
    }
    if (selfCode) {
      res["SelfCode"] = boost::any(*selfCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCodes") != m.end() && !m["AppCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LabelCodes") != m.end() && !m["LabelCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RelateCodes") != m.end() && !m["RelateCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelateCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelateCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relateCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SelfCode") != m.end() && !m["SelfCode"].empty()) {
      selfCode = make_shared<string>(boost::any_cast<string>(m["SelfCode"]));
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeProductRelations() = default;
};
class CreateBlockRequestScopesBlockScopeProduct : public Darabonba::Model {
public:
  shared_ptr<vector<string>> codeNames{};
  shared_ptr<string> key{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeProductRelations>> relations{};
  shared_ptr<vector<string>> viewCode{};

  CreateBlockRequestScopesBlockScopeProduct() {}

  explicit CreateBlockRequestScopesBlockScopeProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeNames) {
      res["CodeNames"] = boost::any(*codeNames);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (relations) {
      vector<boost::any> temp1;
      for(auto item1:*relations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Relations"] = boost::any(temp1);
    }
    if (viewCode) {
      res["ViewCode"] = boost::any(*viewCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeNames") != m.end() && !m["CodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      codeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Relations") != m.end() && !m["Relations"].empty()) {
      if (typeid(vector<boost::any>) == m["Relations"].type()) {
        vector<CreateBlockRequestScopesBlockScopeProductRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Relations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeProductRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relations = make_shared<vector<CreateBlockRequestScopesBlockScopeProductRelations>>(expect1);
      }
    }
    if (m.find("ViewCode") != m.end() && !m["ViewCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ViewCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ViewCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      viewCode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateBlockRequestScopesBlockScopeProduct() = default;
};
class CreateBlockRequestScopesBlockScope : public Darabonba::Model {
public:
  shared_ptr<CreateBlockRequestScopesBlockScopeApp> app{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeBgSystem>> bgSystem{};
  shared_ptr<CreateBlockRequestScopesBlockScopeCluster> cluster{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeCustomer>> customer{};
  shared_ptr<vector<string>> dept{};
  shared_ptr<string> express{};
  shared_ptr<vector<string>> infrastructure{};
  shared_ptr<vector<CreateBlockRequestScopesBlockScopeProduct>> product{};

  CreateBlockRequestScopesBlockScope() {}

  explicit CreateBlockRequestScopesBlockScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bgSystem) {
      vector<boost::any> temp1;
      for(auto item1:*bgSystem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BgSystem"] = boost::any(temp1);
    }
    if (cluster) {
      res["Cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customer) {
      vector<boost::any> temp1;
      for(auto item1:*customer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Customer"] = boost::any(temp1);
    }
    if (dept) {
      res["Dept"] = boost::any(*dept);
    }
    if (express) {
      res["Express"] = boost::any(*express);
    }
    if (infrastructure) {
      res["Infrastructure"] = boost::any(*infrastructure);
    }
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
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        CreateBlockRequestScopesBlockScopeApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<CreateBlockRequestScopesBlockScopeApp>(model1);
      }
    }
    if (m.find("BgSystem") != m.end() && !m["BgSystem"].empty()) {
      if (typeid(vector<boost::any>) == m["BgSystem"].type()) {
        vector<CreateBlockRequestScopesBlockScopeBgSystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BgSystem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeBgSystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bgSystem = make_shared<vector<CreateBlockRequestScopesBlockScopeBgSystem>>(expect1);
      }
    }
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cluster"].type()) {
        CreateBlockRequestScopesBlockScopeCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cluster"]));
        cluster = make_shared<CreateBlockRequestScopesBlockScopeCluster>(model1);
      }
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(vector<boost::any>) == m["Customer"].type()) {
        vector<CreateBlockRequestScopesBlockScopeCustomer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Customer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeCustomer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customer = make_shared<vector<CreateBlockRequestScopesBlockScopeCustomer>>(expect1);
      }
    }
    if (m.find("Dept") != m.end() && !m["Dept"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dept"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dept"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dept = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Express") != m.end() && !m["Express"].empty()) {
      express = make_shared<string>(boost::any_cast<string>(m["Express"]));
    }
    if (m.find("Infrastructure") != m.end() && !m["Infrastructure"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Infrastructure"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Infrastructure"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      infrastructure = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<CreateBlockRequestScopesBlockScopeProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopesBlockScopeProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<CreateBlockRequestScopesBlockScopeProduct>>(expect1);
      }
    }
  }


  virtual ~CreateBlockRequestScopesBlockScope() = default;
};
class CreateBlockRequestScopes : public Darabonba::Model {
public:
  shared_ptr<vector<long>> blockHarm{};
  shared_ptr<CreateBlockRequestScopesBlockScope> blockScope{};
  shared_ptr<vector<long>> effectTime{};
  shared_ptr<string> scopeRule{};
  shared_ptr<string> changeObjectRegex{};
  shared_ptr<vector<long>> riskLevels{};

  CreateBlockRequestScopes() {}

  explicit CreateBlockRequestScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockHarm) {
      res["BlockHarm"] = boost::any(*blockHarm);
    }
    if (blockScope) {
      res["BlockScope"] = blockScope ? boost::any(blockScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (scopeRule) {
      res["ScopeRule"] = boost::any(*scopeRule);
    }
    if (changeObjectRegex) {
      res["changeObjectRegex"] = boost::any(*changeObjectRegex);
    }
    if (riskLevels) {
      res["riskLevels"] = boost::any(*riskLevels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockHarm") != m.end() && !m["BlockHarm"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlockHarm"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlockHarm"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blockHarm = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BlockScope") != m.end() && !m["BlockScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockScope"].type()) {
        CreateBlockRequestScopesBlockScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockScope"]));
        blockScope = make_shared<CreateBlockRequestScopesBlockScope>(model1);
      }
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EffectTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EffectTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      effectTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ScopeRule") != m.end() && !m["ScopeRule"].empty()) {
      scopeRule = make_shared<string>(boost::any_cast<string>(m["ScopeRule"]));
    }
    if (m.find("changeObjectRegex") != m.end() && !m["changeObjectRegex"].empty()) {
      changeObjectRegex = make_shared<string>(boost::any_cast<string>(m["changeObjectRegex"]));
    }
    if (m.find("riskLevels") != m.end() && !m["riskLevels"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["riskLevels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["riskLevels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      riskLevels = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateBlockRequestScopes() = default;
};
class CreateBlockRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateBlockRequestApproveStrategyNodes>> approveStrategyNodes{};
  shared_ptr<long> blockId{};
  shared_ptr<string> director{};
  shared_ptr<long> isNeedApprove{};
  shared_ptr<long> isRecall{};
  shared_ptr<long> isTemplate{};
  shared_ptr<string> labelName{};
  shared_ptr<string> noticeDesc{};
  shared_ptr<vector<CreateBlockRequestNoticeEnclosureInfos>> noticeEnclosureInfos{};
  shared_ptr<string> noticeRequestLink{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> reason{};
  shared_ptr<long> scene{};
  shared_ptr<vector<CreateBlockRequestScopes>> scopes{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<long> versionId{};
  shared_ptr<string> creatorEmpId{};

  CreateBlockRequest() {}

  explicit CreateBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveStrategyNodes) {
      vector<boost::any> temp1;
      for(auto item1:*approveStrategyNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproveStrategyNodes"] = boost::any(temp1);
    }
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (director) {
      res["Director"] = boost::any(*director);
    }
    if (isNeedApprove) {
      res["IsNeedApprove"] = boost::any(*isNeedApprove);
    }
    if (isRecall) {
      res["IsRecall"] = boost::any(*isRecall);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (labelName) {
      res["LabelName"] = boost::any(*labelName);
    }
    if (noticeDesc) {
      res["NoticeDesc"] = boost::any(*noticeDesc);
    }
    if (noticeEnclosureInfos) {
      vector<boost::any> temp1;
      for(auto item1:*noticeEnclosureInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeEnclosureInfos"] = boost::any(temp1);
    }
    if (noticeRequestLink) {
      res["NoticeRequestLink"] = boost::any(*noticeRequestLink);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (scopes) {
      vector<boost::any> temp1;
      for(auto item1:*scopes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Scopes"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (creatorEmpId) {
      res["creatorEmpId"] = boost::any(*creatorEmpId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveStrategyNodes") != m.end() && !m["ApproveStrategyNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproveStrategyNodes"].type()) {
        vector<CreateBlockRequestApproveStrategyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproveStrategyNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestApproveStrategyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approveStrategyNodes = make_shared<vector<CreateBlockRequestApproveStrategyNodes>>(expect1);
      }
    }
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("Director") != m.end() && !m["Director"].empty()) {
      director = make_shared<string>(boost::any_cast<string>(m["Director"]));
    }
    if (m.find("IsNeedApprove") != m.end() && !m["IsNeedApprove"].empty()) {
      isNeedApprove = make_shared<long>(boost::any_cast<long>(m["IsNeedApprove"]));
    }
    if (m.find("IsRecall") != m.end() && !m["IsRecall"].empty()) {
      isRecall = make_shared<long>(boost::any_cast<long>(m["IsRecall"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<long>(boost::any_cast<long>(m["IsTemplate"]));
    }
    if (m.find("LabelName") != m.end() && !m["LabelName"].empty()) {
      labelName = make_shared<string>(boost::any_cast<string>(m["LabelName"]));
    }
    if (m.find("NoticeDesc") != m.end() && !m["NoticeDesc"].empty()) {
      noticeDesc = make_shared<string>(boost::any_cast<string>(m["NoticeDesc"]));
    }
    if (m.find("NoticeEnclosureInfos") != m.end() && !m["NoticeEnclosureInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeEnclosureInfos"].type()) {
        vector<CreateBlockRequestNoticeEnclosureInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeEnclosureInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestNoticeEnclosureInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeEnclosureInfos = make_shared<vector<CreateBlockRequestNoticeEnclosureInfos>>(expect1);
      }
    }
    if (m.find("NoticeRequestLink") != m.end() && !m["NoticeRequestLink"].empty()) {
      noticeRequestLink = make_shared<string>(boost::any_cast<string>(m["NoticeRequestLink"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<long>(boost::any_cast<long>(m["Scene"]));
    }
    if (m.find("Scopes") != m.end() && !m["Scopes"].empty()) {
      if (typeid(vector<boost::any>) == m["Scopes"].type()) {
        vector<CreateBlockRequestScopes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Scopes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBlockRequestScopes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopes = make_shared<vector<CreateBlockRequestScopes>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("creatorEmpId") != m.end() && !m["creatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["creatorEmpId"]));
    }
  }


  virtual ~CreateBlockRequest() = default;
};
class CreateBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBlockResponseBody() {}

  explicit CreateBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateBlockResponseBody() = default;
};
class CreateBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBlockResponseBody> body{};

  CreateBlockResponse() {}

  explicit CreateBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBlockResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBlockResponse() = default;
};
class CreateMaYiBlockRequestBlockTimes : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  CreateMaYiBlockRequestBlockTimes() {}

  explicit CreateMaYiBlockRequestBlockTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~CreateMaYiBlockRequestBlockTimes() = default;
};
class CreateMaYiBlockRequestScopeGroupBlockScopeParams : public Darabonba::Model {
public:
  shared_ptr<string> az{};
  shared_ptr<string> idc{};
  shared_ptr<string> region{};

  CreateMaYiBlockRequestScopeGroupBlockScopeParams() {}

  explicit CreateMaYiBlockRequestScopeGroupBlockScopeParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (az) {
      res["Az"] = boost::any(*az);
    }
    if (idc) {
      res["Idc"] = boost::any(*idc);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Az") != m.end() && !m["Az"].empty()) {
      az = make_shared<string>(boost::any_cast<string>(m["Az"]));
    }
    if (m.find("Idc") != m.end() && !m["Idc"].empty()) {
      idc = make_shared<string>(boost::any_cast<string>(m["Idc"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~CreateMaYiBlockRequestScopeGroupBlockScopeParams() = default;
};
class CreateMaYiBlockRequestScope : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMaYiBlockRequestScopeGroupBlockScopeParams>> groupBlockScopeParams{};

  CreateMaYiBlockRequestScope() {}

  explicit CreateMaYiBlockRequestScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupBlockScopeParams) {
      vector<boost::any> temp1;
      for(auto item1:*groupBlockScopeParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupBlockScopeParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupBlockScopeParams") != m.end() && !m["GroupBlockScopeParams"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupBlockScopeParams"].type()) {
        vector<CreateMaYiBlockRequestScopeGroupBlockScopeParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupBlockScopeParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMaYiBlockRequestScopeGroupBlockScopeParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupBlockScopeParams = make_shared<vector<CreateMaYiBlockRequestScopeGroupBlockScopeParams>>(expect1);
      }
    }
  }


  virtual ~CreateMaYiBlockRequestScope() = default;
};
class CreateMaYiBlockRequest : public Darabonba::Model {
public:
  shared_ptr<string> blockId{};
  shared_ptr<vector<CreateMaYiBlockRequestBlockTimes>> blockTimes{};
  shared_ptr<string> blockType{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<vector<string>> director{};
  shared_ptr<string> faultVersion{};
  shared_ptr<vector<string>> information{};
  shared_ptr<string> reason{};
  shared_ptr<CreateMaYiBlockRequestScope> scope{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  CreateMaYiBlockRequest() {}

  explicit CreateMaYiBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (blockTimes) {
      vector<boost::any> temp1;
      for(auto item1:*blockTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockTimes"] = boost::any(temp1);
    }
    if (blockType) {
      res["BlockType"] = boost::any(*blockType);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (director) {
      res["Director"] = boost::any(*director);
    }
    if (faultVersion) {
      res["FaultVersion"] = boost::any(*faultVersion);
    }
    if (information) {
      res["Information"] = boost::any(*information);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (scope) {
      res["Scope"] = scope ? boost::any(scope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<string>(boost::any_cast<string>(m["BlockId"]));
    }
    if (m.find("BlockTimes") != m.end() && !m["BlockTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockTimes"].type()) {
        vector<CreateMaYiBlockRequestBlockTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMaYiBlockRequestBlockTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockTimes = make_shared<vector<CreateMaYiBlockRequestBlockTimes>>(expect1);
      }
    }
    if (m.find("BlockType") != m.end() && !m["BlockType"].empty()) {
      blockType = make_shared<string>(boost::any_cast<string>(m["BlockType"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("Director") != m.end() && !m["Director"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Director"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Director"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      director = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FaultVersion") != m.end() && !m["FaultVersion"].empty()) {
      faultVersion = make_shared<string>(boost::any_cast<string>(m["FaultVersion"]));
    }
    if (m.find("Information") != m.end() && !m["Information"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Information"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Information"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      information = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scope"].type()) {
        CreateMaYiBlockRequestScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scope"]));
        scope = make_shared<CreateMaYiBlockRequestScope>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateMaYiBlockRequest() = default;
};
class CreateMaYiBlockShrinkRequestBlockTimes : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  CreateMaYiBlockShrinkRequestBlockTimes() {}

  explicit CreateMaYiBlockShrinkRequestBlockTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~CreateMaYiBlockShrinkRequestBlockTimes() = default;
};
class CreateMaYiBlockShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> blockId{};
  shared_ptr<vector<CreateMaYiBlockShrinkRequestBlockTimes>> blockTimes{};
  shared_ptr<string> blockType{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<vector<string>> director{};
  shared_ptr<string> faultVersion{};
  shared_ptr<vector<string>> information{};
  shared_ptr<string> reason{};
  shared_ptr<string> scopeShrink{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  CreateMaYiBlockShrinkRequest() {}

  explicit CreateMaYiBlockShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (blockTimes) {
      vector<boost::any> temp1;
      for(auto item1:*blockTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockTimes"] = boost::any(temp1);
    }
    if (blockType) {
      res["BlockType"] = boost::any(*blockType);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (director) {
      res["Director"] = boost::any(*director);
    }
    if (faultVersion) {
      res["FaultVersion"] = boost::any(*faultVersion);
    }
    if (information) {
      res["Information"] = boost::any(*information);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (scopeShrink) {
      res["Scope"] = boost::any(*scopeShrink);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<string>(boost::any_cast<string>(m["BlockId"]));
    }
    if (m.find("BlockTimes") != m.end() && !m["BlockTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockTimes"].type()) {
        vector<CreateMaYiBlockShrinkRequestBlockTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMaYiBlockShrinkRequestBlockTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockTimes = make_shared<vector<CreateMaYiBlockShrinkRequestBlockTimes>>(expect1);
      }
    }
    if (m.find("BlockType") != m.end() && !m["BlockType"].empty()) {
      blockType = make_shared<string>(boost::any_cast<string>(m["BlockType"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("Director") != m.end() && !m["Director"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Director"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Director"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      director = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FaultVersion") != m.end() && !m["FaultVersion"].empty()) {
      faultVersion = make_shared<string>(boost::any_cast<string>(m["FaultVersion"]));
    }
    if (m.find("Information") != m.end() && !m["Information"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Information"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Information"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      information = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scopeShrink = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateMaYiBlockShrinkRequest() = default;
};
class CreateMaYiBlockResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> blockId{};
  shared_ptr<string> blockUrl{};

  CreateMaYiBlockResponseBodyData() {}

  explicit CreateMaYiBlockResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (blockUrl) {
      res["BlockUrl"] = boost::any(*blockUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("BlockUrl") != m.end() && !m["BlockUrl"].empty()) {
      blockUrl = make_shared<string>(boost::any_cast<string>(m["BlockUrl"]));
    }
  }


  virtual ~CreateMaYiBlockResponseBodyData() = default;
};
class CreateMaYiBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateMaYiBlockResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateMaYiBlockResponseBody() {}

  explicit CreateMaYiBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateMaYiBlockResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateMaYiBlockResponseBodyData>(model1);
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


  virtual ~CreateMaYiBlockResponseBody() = default;
};
class CreateMaYiBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMaYiBlockResponseBody> body{};

  CreateMaYiBlockResponse() {}

  explicit CreateMaYiBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMaYiBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMaYiBlockResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMaYiBlockResponse() = default;
};
class CreateOperatorRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> bgObject{};
  shared_ptr<string> bgSystem{};
  shared_ptr<string> code{};
  shared_ptr<string> curEmpId{};
  shared_ptr<string> name{};
  shared_ptr<bool> noCheck{};
  shared_ptr<bool> noRisk{};
  shared_ptr<long> reqTimestamp{};

  CreateOperatorRequest() {}

  explicit CreateOperatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgObject) {
      res["BgObject"] = boost::any(*bgObject);
    }
    if (bgSystem) {
      res["BgSystem"] = boost::any(*bgSystem);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (curEmpId) {
      res["CurEmpId"] = boost::any(*curEmpId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noCheck) {
      res["NoCheck"] = boost::any(*noCheck);
    }
    if (noRisk) {
      res["NoRisk"] = boost::any(*noRisk);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgObject") != m.end() && !m["BgObject"].empty()) {
      bgObject = make_shared<string>(boost::any_cast<string>(m["BgObject"]));
    }
    if (m.find("BgSystem") != m.end() && !m["BgSystem"].empty()) {
      bgSystem = make_shared<string>(boost::any_cast<string>(m["BgSystem"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurEmpId") != m.end() && !m["CurEmpId"].empty()) {
      curEmpId = make_shared<string>(boost::any_cast<string>(m["CurEmpId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoCheck") != m.end() && !m["NoCheck"].empty()) {
      noCheck = make_shared<bool>(boost::any_cast<bool>(m["NoCheck"]));
    }
    if (m.find("NoRisk") != m.end() && !m["NoRisk"].empty()) {
      noRisk = make_shared<bool>(boost::any_cast<bool>(m["NoRisk"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
  }


  virtual ~CreateOperatorRequest() = default;
};
class CreateOperatorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> approveStrategyId{};
  shared_ptr<long> ruleId{};

  CreateOperatorResponseBodyData() {}

  explicit CreateOperatorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveStrategyId) {
      res["ApproveStrategyId"] = boost::any(*approveStrategyId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveStrategyId") != m.end() && !m["ApproveStrategyId"].empty()) {
      approveStrategyId = make_shared<long>(boost::any_cast<long>(m["ApproveStrategyId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~CreateOperatorResponseBodyData() = default;
};
class CreateOperatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateOperatorResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateOperatorResponseBody() {}

  explicit CreateOperatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateOperatorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateOperatorResponseBodyData>(model1);
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


  virtual ~CreateOperatorResponseBody() = default;
};
class CreateOperatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOperatorResponseBody> body{};

  CreateOperatorResponse() {}

  explicit CreateOperatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOperatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOperatorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOperatorResponse() = default;
};
class QueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<bool> needValidate{};
  shared_ptr<string> queryType{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  QueryRequest() {}

  explicit QueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (needValidate) {
      res["NeedValidate"] = boost::any(*needValidate);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("NeedValidate") != m.end() && !m["NeedValidate"].empty()) {
      needValidate = make_shared<bool>(boost::any_cast<bool>(m["NeedValidate"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~QueryRequest() = default;
};
class QueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryResponseBody() {}

  explicit QueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryResponseBody() = default;
};
class QueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResponseBody> body{};

  QueryResponse() {}

  explicit QueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResponse() = default;
};
class QueryApproveFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> stage{};

  QueryApproveFlowRequest() {}

  explicit QueryApproveFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
  }


  virtual ~QueryApproveFlowRequest() = default;
};
class QueryApproveFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryApproveFlowResponseBody() {}

  explicit QueryApproveFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryApproveFlowResponseBody() = default;
};
class QueryApproveFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryApproveFlowResponseBody> body{};

  QueryApproveFlowResponse() {}

  explicit QueryApproveFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryApproveFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryApproveFlowResponseBody>(model1);
      }
    }
  }


  virtual ~QueryApproveFlowResponse() = default;
};
class QueryBlockEventRequestRegionReqs : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> regions{};

  QueryBlockEventRequestRegionReqs() {}

  explicit QueryBlockEventRequestRegionReqs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryBlockEventRequestRegionReqs() = default;
};
class QueryBlockEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> bgSystemName{};
  shared_ptr<string> blockHarm{};
  shared_ptr<string> category{};
  shared_ptr<string> deptNo{};
  shared_ptr<long> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<bool> needRule{};
  shared_ptr<long> page{};
  shared_ptr<vector<string>> productCodes{};
  shared_ptr<vector<QueryBlockEventRequestRegionReqs>> regionReqs{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<vector<string>> scope{};
  shared_ptr<long> startTime{};

  QueryBlockEventRequest() {}

  explicit QueryBlockEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgSystemName) {
      res["BgSystemName"] = boost::any(*bgSystemName);
    }
    if (blockHarm) {
      res["BlockHarm"] = boost::any(*blockHarm);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deptNo) {
      res["DeptNo"] = boost::any(*deptNo);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (needRule) {
      res["NeedRule"] = boost::any(*needRule);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (productCodes) {
      res["ProductCodes"] = boost::any(*productCodes);
    }
    if (regionReqs) {
      vector<boost::any> temp1;
      for(auto item1:*regionReqs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionReqs"] = boost::any(temp1);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgSystemName") != m.end() && !m["BgSystemName"].empty()) {
      bgSystemName = make_shared<string>(boost::any_cast<string>(m["BgSystemName"]));
    }
    if (m.find("BlockHarm") != m.end() && !m["BlockHarm"].empty()) {
      blockHarm = make_shared<string>(boost::any_cast<string>(m["BlockHarm"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeptNo") != m.end() && !m["DeptNo"].empty()) {
      deptNo = make_shared<string>(boost::any_cast<string>(m["DeptNo"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NeedRule") != m.end() && !m["NeedRule"].empty()) {
      needRule = make_shared<bool>(boost::any_cast<bool>(m["NeedRule"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("ProductCodes") != m.end() && !m["ProductCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProductCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProductCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionReqs") != m.end() && !m["RegionReqs"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionReqs"].type()) {
        vector<QueryBlockEventRequestRegionReqs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionReqs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBlockEventRequestRegionReqs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionReqs = make_shared<vector<QueryBlockEventRequestRegionReqs>>(expect1);
      }
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Scope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryBlockEventRequest() = default;
};
class QueryBlockEventResponseBodyDataDataInfoEventTimesRule : public Darabonba::Model {
public:
  shared_ptr<string> level1{};
  shared_ptr<string> level2{};
  shared_ptr<string> level3{};
  shared_ptr<string> level4{};
  shared_ptr<string> level5{};
  shared_ptr<string> type{};

  QueryBlockEventResponseBodyDataDataInfoEventTimesRule() {}

  explicit QueryBlockEventResponseBodyDataDataInfoEventTimesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level1) {
      res["Level1"] = boost::any(*level1);
    }
    if (level2) {
      res["Level2"] = boost::any(*level2);
    }
    if (level3) {
      res["Level3"] = boost::any(*level3);
    }
    if (level4) {
      res["Level4"] = boost::any(*level4);
    }
    if (level5) {
      res["Level5"] = boost::any(*level5);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Level1") != m.end() && !m["Level1"].empty()) {
      level1 = make_shared<string>(boost::any_cast<string>(m["Level1"]));
    }
    if (m.find("Level2") != m.end() && !m["Level2"].empty()) {
      level2 = make_shared<string>(boost::any_cast<string>(m["Level2"]));
    }
    if (m.find("Level3") != m.end() && !m["Level3"].empty()) {
      level3 = make_shared<string>(boost::any_cast<string>(m["Level3"]));
    }
    if (m.find("Level4") != m.end() && !m["Level4"].empty()) {
      level4 = make_shared<string>(boost::any_cast<string>(m["Level4"]));
    }
    if (m.find("Level5") != m.end() && !m["Level5"].empty()) {
      level5 = make_shared<string>(boost::any_cast<string>(m["Level5"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyDataDataInfoEventTimesRule() = default;
};
class QueryBlockEventResponseBodyDataDataInfoEventTimes : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> express{};
  shared_ptr<vector<QueryBlockEventResponseBodyDataDataInfoEventTimesRule>> rule{};
  shared_ptr<long> startTime{};
  shared_ptr<long> ruleId{};

  QueryBlockEventResponseBodyDataDataInfoEventTimes() {}

  explicit QueryBlockEventResponseBodyDataDataInfoEventTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (express) {
      res["Express"] = boost::any(*express);
    }
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Express") != m.end() && !m["Express"].empty()) {
      express = make_shared<string>(boost::any_cast<string>(m["Express"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<QueryBlockEventResponseBodyDataDataInfoEventTimesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBlockEventResponseBodyDataDataInfoEventTimesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<QueryBlockEventResponseBodyDataDataInfoEventTimesRule>>(expect1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["ruleId"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyDataDataInfoEventTimes() = default;
};
class QueryBlockEventResponseBodyDataDataInfoLevelType : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> value{};

  QueryBlockEventResponseBodyDataDataInfoLevelType() {}

  explicit QueryBlockEventResponseBodyDataDataInfoLevelType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyDataDataInfoLevelType() = default;
};
class QueryBlockEventResponseBodyDataDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> empId{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<QueryBlockEventResponseBodyDataDataInfoEventTimes>> eventTimes{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> reason{};
  shared_ptr<long> startTime{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};
  shared_ptr<QueryBlockEventResponseBodyDataDataInfoLevelType> levelType{};
  shared_ptr<long> versionId{};

  QueryBlockEventResponseBodyDataDataInfo() {}

  explicit QueryBlockEventResponseBodyDataDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (empId) {
      res["EmpId"] = boost::any(*empId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventTimes) {
      vector<boost::any> temp1;
      for(auto item1:*eventTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTimes"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (levelType) {
      res["levelType"] = levelType ? boost::any(levelType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmpId") != m.end() && !m["EmpId"].empty()) {
      empId = make_shared<string>(boost::any_cast<string>(m["EmpId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventTimes") != m.end() && !m["EventTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTimes"].type()) {
        vector<QueryBlockEventResponseBodyDataDataInfoEventTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBlockEventResponseBodyDataDataInfoEventTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTimes = make_shared<vector<QueryBlockEventResponseBodyDataDataInfoEventTimes>>(expect1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("levelType") != m.end() && !m["levelType"].empty()) {
      if (typeid(map<string, boost::any>) == m["levelType"].type()) {
        QueryBlockEventResponseBodyDataDataInfoLevelType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["levelType"]));
        levelType = make_shared<QueryBlockEventResponseBodyDataDataInfoLevelType>(model1);
      }
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["versionId"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyDataDataInfo() = default;
};
class QueryBlockEventResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> page{};

  QueryBlockEventResponseBodyDataPagination() {}

  explicit QueryBlockEventResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyDataPagination() = default;
};
class QueryBlockEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBlockEventResponseBodyDataDataInfo>> dataInfo{};
  shared_ptr<map<string, string>> extraInfo{};
  shared_ptr<QueryBlockEventResponseBodyDataPagination> pagination{};
  shared_ptr<long> total{};

  QueryBlockEventResponseBodyData() {}

  explicit QueryBlockEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInfo"] = boost::any(temp1);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (pagination) {
      res["Pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInfo") != m.end() && !m["DataInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInfo"].type()) {
        vector<QueryBlockEventResponseBodyDataDataInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBlockEventResponseBodyDataDataInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInfo = make_shared<vector<QueryBlockEventResponseBodyDataDataInfo>>(expect1);
      }
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtraInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Pagination") != m.end() && !m["Pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pagination"].type()) {
        QueryBlockEventResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pagination"]));
        pagination = make_shared<QueryBlockEventResponseBodyDataPagination>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryBlockEventResponseBodyData() = default;
};
class QueryBlockEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryBlockEventResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryBlockEventResponseBody() {}

  explicit QueryBlockEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryBlockEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryBlockEventResponseBodyData>(model1);
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


  virtual ~QueryBlockEventResponseBody() = default;
};
class QueryBlockEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBlockEventResponseBody> body{};

  QueryBlockEventResponse() {}

  explicit QueryBlockEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBlockEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBlockEventResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBlockEventResponse() = default;
};
class QueryChangeInfoRequestLevelTreeTreeData : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> data{};
  shared_ptr<string> dataSubType{};
  shared_ptr<vector<string>> value{};

  QueryChangeInfoRequestLevelTreeTreeData() {}

  explicit QueryChangeInfoRequestLevelTreeTreeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataSubType) {
      res["DataSubType"] = boost::any(*dataSubType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      data = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("DataSubType") != m.end() && !m["DataSubType"].empty()) {
      dataSubType = make_shared<string>(boost::any_cast<string>(m["DataSubType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryChangeInfoRequestLevelTreeTreeData() = default;
};
class QueryChangeInfoRequestLevelTree : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<vector<QueryChangeInfoRequestLevelTreeTreeData>> treeData{};

  QueryChangeInfoRequestLevelTree() {}

  explicit QueryChangeInfoRequestLevelTree(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (treeData) {
      vector<boost::any> temp1;
      for(auto item1:*treeData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TreeData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("TreeData") != m.end() && !m["TreeData"].empty()) {
      if (typeid(vector<boost::any>) == m["TreeData"].type()) {
        vector<QueryChangeInfoRequestLevelTreeTreeData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TreeData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryChangeInfoRequestLevelTreeTreeData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        treeData = make_shared<vector<QueryChangeInfoRequestLevelTreeTreeData>>(expect1);
      }
    }
  }


  virtual ~QueryChangeInfoRequestLevelTree() = default;
};
class QueryChangeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<vector<string>> az{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> buId{};
  shared_ptr<string> changeSystem{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<QueryChangeInfoRequestLevelTree> levelTree{};
  shared_ptr<long> limit{};
  shared_ptr<long> page{};
  shared_ptr<vector<string>> product{};
  shared_ptr<vector<string>> region{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  QueryChangeInfoRequest() {}

  explicit QueryChangeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (az) {
      res["Az"] = boost::any(*az);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (levelTree) {
      res["LevelTree"] = levelTree ? boost::any(levelTree->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("Az") != m.end() && !m["Az"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Az"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Az"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      az = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<string>(boost::any_cast<string>(m["BuId"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("LevelTree") != m.end() && !m["LevelTree"].empty()) {
      if (typeid(map<string, boost::any>) == m["LevelTree"].type()) {
        QueryChangeInfoRequestLevelTree model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LevelTree"]));
        levelTree = make_shared<QueryChangeInfoRequestLevelTree>(model1);
      }
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Region"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      region = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryChangeInfoRequest() = default;
};
class QueryChangeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryChangeInfoResponseBody() {}

  explicit QueryChangeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryChangeInfoResponseBody() = default;
};
class QueryChangeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChangeInfoResponseBody> body{};

  QueryChangeInfoResponse() {}

  explicit QueryChangeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryChangeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChangeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChangeInfoResponse() = default;
};
class QueryCheckInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  QueryCheckInfoRequest() {}

  explicit QueryCheckInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~QueryCheckInfoRequest() = default;
};
class QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList : public Darabonba::Model {
public:
  shared_ptr<string> leafLevel{};
  shared_ptr<string> level1{};
  shared_ptr<string> level2{};
  shared_ptr<string> level3{};
  shared_ptr<string> level4{};
  shared_ptr<string> level5{};
  shared_ptr<string> path{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> type{};

  QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList() {}

  explicit QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (leafLevel) {
      res["LeafLevel"] = boost::any(*leafLevel);
    }
    if (level1) {
      res["Level1"] = boost::any(*level1);
    }
    if (level2) {
      res["Level2"] = boost::any(*level2);
    }
    if (level3) {
      res["Level3"] = boost::any(*level3);
    }
    if (level4) {
      res["Level4"] = boost::any(*level4);
    }
    if (level5) {
      res["Level5"] = boost::any(*level5);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LeafLevel") != m.end() && !m["LeafLevel"].empty()) {
      leafLevel = make_shared<string>(boost::any_cast<string>(m["LeafLevel"]));
    }
    if (m.find("Level1") != m.end() && !m["Level1"].empty()) {
      level1 = make_shared<string>(boost::any_cast<string>(m["Level1"]));
    }
    if (m.find("Level2") != m.end() && !m["Level2"].empty()) {
      level2 = make_shared<string>(boost::any_cast<string>(m["Level2"]));
    }
    if (m.find("Level3") != m.end() && !m["Level3"].empty()) {
      level3 = make_shared<string>(boost::any_cast<string>(m["Level3"]));
    }
    if (m.find("Level4") != m.end() && !m["Level4"].empty()) {
      level4 = make_shared<string>(boost::any_cast<string>(m["Level4"]));
    }
    if (m.find("Level5") != m.end() && !m["Level5"].empty()) {
      level5 = make_shared<string>(boost::any_cast<string>(m["Level5"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList() = default;
};
class QueryCheckInfoResponseBodyDataCheckDetailListBlockRule : public Darabonba::Model {
public:
  shared_ptr<string> blockHarm{};
  shared_ptr<long> blockId{};
  shared_ptr<string> express{};
  shared_ptr<long> scopeEndTime{};
  shared_ptr<vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList>> scopeNodeList{};
  shared_ptr<long> scopeRuleId{};
  shared_ptr<long> scopeStartTime{};

  QueryCheckInfoResponseBodyDataCheckDetailListBlockRule() {}

  explicit QueryCheckInfoResponseBodyDataCheckDetailListBlockRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockHarm) {
      res["BlockHarm"] = boost::any(*blockHarm);
    }
    if (blockId) {
      res["BlockId"] = boost::any(*blockId);
    }
    if (express) {
      res["Express"] = boost::any(*express);
    }
    if (scopeEndTime) {
      res["ScopeEndTime"] = boost::any(*scopeEndTime);
    }
    if (scopeNodeList) {
      vector<boost::any> temp1;
      for(auto item1:*scopeNodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScopeNodeList"] = boost::any(temp1);
    }
    if (scopeRuleId) {
      res["ScopeRuleId"] = boost::any(*scopeRuleId);
    }
    if (scopeStartTime) {
      res["ScopeStartTime"] = boost::any(*scopeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockHarm") != m.end() && !m["BlockHarm"].empty()) {
      blockHarm = make_shared<string>(boost::any_cast<string>(m["BlockHarm"]));
    }
    if (m.find("BlockId") != m.end() && !m["BlockId"].empty()) {
      blockId = make_shared<long>(boost::any_cast<long>(m["BlockId"]));
    }
    if (m.find("Express") != m.end() && !m["Express"].empty()) {
      express = make_shared<string>(boost::any_cast<string>(m["Express"]));
    }
    if (m.find("ScopeEndTime") != m.end() && !m["ScopeEndTime"].empty()) {
      scopeEndTime = make_shared<long>(boost::any_cast<long>(m["ScopeEndTime"]));
    }
    if (m.find("ScopeNodeList") != m.end() && !m["ScopeNodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScopeNodeList"].type()) {
        vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScopeNodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopeNodeList = make_shared<vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRuleScopeNodeList>>(expect1);
      }
    }
    if (m.find("ScopeRuleId") != m.end() && !m["ScopeRuleId"].empty()) {
      scopeRuleId = make_shared<long>(boost::any_cast<long>(m["ScopeRuleId"]));
    }
    if (m.find("ScopeStartTime") != m.end() && !m["ScopeStartTime"].empty()) {
      scopeStartTime = make_shared<long>(boost::any_cast<long>(m["ScopeStartTime"]));
    }
  }


  virtual ~QueryCheckInfoResponseBodyDataCheckDetailListBlockRule() = default;
};
class QueryCheckInfoResponseBodyDataCheckDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRule>> blockRule{};
  shared_ptr<string> checkholdReason{};
  shared_ptr<string> desc{};
  shared_ptr<string> picInfo{};
  shared_ptr<string> riskExplain{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  QueryCheckInfoResponseBodyDataCheckDetailList() {}

  explicit QueryCheckInfoResponseBodyDataCheckDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockRule) {
      vector<boost::any> temp1;
      for(auto item1:*blockRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockRule"] = boost::any(temp1);
    }
    if (checkholdReason) {
      res["CheckholdReason"] = boost::any(*checkholdReason);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (picInfo) {
      res["PicInfo"] = boost::any(*picInfo);
    }
    if (riskExplain) {
      res["RiskExplain"] = boost::any(*riskExplain);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockRule") != m.end() && !m["BlockRule"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockRule"].type()) {
        vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCheckInfoResponseBodyDataCheckDetailListBlockRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockRule = make_shared<vector<QueryCheckInfoResponseBodyDataCheckDetailListBlockRule>>(expect1);
      }
    }
    if (m.find("CheckholdReason") != m.end() && !m["CheckholdReason"].empty()) {
      checkholdReason = make_shared<string>(boost::any_cast<string>(m["CheckholdReason"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("PicInfo") != m.end() && !m["PicInfo"].empty()) {
      picInfo = make_shared<string>(boost::any_cast<string>(m["PicInfo"]));
    }
    if (m.find("RiskExplain") != m.end() && !m["RiskExplain"].empty()) {
      riskExplain = make_shared<string>(boost::any_cast<string>(m["RiskExplain"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryCheckInfoResponseBodyDataCheckDetailList() = default;
};
class QueryCheckInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCheckInfoResponseBodyDataCheckDetailList>> checkDetailList{};
  shared_ptr<string> checkResultUrl{};

  QueryCheckInfoResponseBodyData() {}

  explicit QueryCheckInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*checkDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckDetailList"] = boost::any(temp1);
    }
    if (checkResultUrl) {
      res["CheckResultUrl"] = boost::any(*checkResultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckDetailList") != m.end() && !m["CheckDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckDetailList"].type()) {
        vector<QueryCheckInfoResponseBodyDataCheckDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCheckInfoResponseBodyDataCheckDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkDetailList = make_shared<vector<QueryCheckInfoResponseBodyDataCheckDetailList>>(expect1);
      }
    }
    if (m.find("CheckResultUrl") != m.end() && !m["CheckResultUrl"].empty()) {
      checkResultUrl = make_shared<string>(boost::any_cast<string>(m["CheckResultUrl"]));
    }
  }


  virtual ~QueryCheckInfoResponseBodyData() = default;
};
class QueryCheckInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryCheckInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCheckInfoResponseBody() {}

  explicit QueryCheckInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCheckInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCheckInfoResponseBodyData>(model1);
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


  virtual ~QueryCheckInfoResponseBody() = default;
};
class QueryCheckInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCheckInfoResponseBody> body{};

  QueryCheckInfoResponse() {}

  explicit QueryCheckInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCheckInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCheckInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCheckInfoResponse() = default;
};
class QueryCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<vector<string>> product{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> type{};

  QueryCustomerRequest() {}

  explicit QueryCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
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
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryCustomerRequest() = default;
};
class QueryCustomerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> product{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  QueryCustomerResponseBodyData() {}

  explicit QueryCustomerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryCustomerResponseBodyData() = default;
};
class QueryCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryCustomerResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCustomerResponseBody() {}

  explicit QueryCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryCustomerResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCustomerResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryCustomerResponseBodyData>>(expect1);
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


  virtual ~QueryCustomerResponseBody() = default;
};
class QueryCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCustomerResponseBody> body{};

  QueryCustomerResponse() {}

  explicit QueryCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCustomerResponse() = default;
};
class QueryExecuteInfoRequestLevelTreeTreeData : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> data{};
  shared_ptr<string> dataSubType{};
  shared_ptr<vector<string>> value{};

  QueryExecuteInfoRequestLevelTreeTreeData() {}

  explicit QueryExecuteInfoRequestLevelTreeTreeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataSubType) {
      res["DataSubType"] = boost::any(*dataSubType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      data = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("DataSubType") != m.end() && !m["DataSubType"].empty()) {
      dataSubType = make_shared<string>(boost::any_cast<string>(m["DataSubType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryExecuteInfoRequestLevelTreeTreeData() = default;
};
class QueryExecuteInfoRequestLevelTree : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<vector<QueryExecuteInfoRequestLevelTreeTreeData>> treeData{};

  QueryExecuteInfoRequestLevelTree() {}

  explicit QueryExecuteInfoRequestLevelTree(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (treeData) {
      vector<boost::any> temp1;
      for(auto item1:*treeData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TreeData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("TreeData") != m.end() && !m["TreeData"].empty()) {
      if (typeid(vector<boost::any>) == m["TreeData"].type()) {
        vector<QueryExecuteInfoRequestLevelTreeTreeData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TreeData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryExecuteInfoRequestLevelTreeTreeData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        treeData = make_shared<vector<QueryExecuteInfoRequestLevelTreeTreeData>>(expect1);
      }
    }
  }


  virtual ~QueryExecuteInfoRequestLevelTree() = default;
};
class QueryExecuteInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<vector<string>> az{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> buId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> exVid{};
  shared_ptr<string> keyword{};
  shared_ptr<QueryExecuteInfoRequestLevelTree> levelTree{};
  shared_ptr<long> limit{};
  shared_ptr<long> page{};
  shared_ptr<vector<string>> product{};
  shared_ptr<vector<string>> region{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> startTime{};

  QueryExecuteInfoRequest() {}

  explicit QueryExecuteInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (az) {
      res["Az"] = boost::any(*az);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (exVid) {
      res["ExVid"] = boost::any(*exVid);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (levelTree) {
      res["LevelTree"] = levelTree ? boost::any(levelTree->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("Az") != m.end() && !m["Az"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Az"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Az"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      az = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<string>(boost::any_cast<string>(m["BuId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExVid") != m.end() && !m["ExVid"].empty()) {
      exVid = make_shared<string>(boost::any_cast<string>(m["ExVid"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("LevelTree") != m.end() && !m["LevelTree"].empty()) {
      if (typeid(map<string, boost::any>) == m["LevelTree"].type()) {
        QueryExecuteInfoRequestLevelTree model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LevelTree"]));
        levelTree = make_shared<QueryExecuteInfoRequestLevelTree>(model1);
      }
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Region"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      region = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryExecuteInfoRequest() = default;
};
class QueryExecuteInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryExecuteInfoResponseBody() {}

  explicit QueryExecuteInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryExecuteInfoResponseBody() = default;
};
class QueryExecuteInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryExecuteInfoResponseBody> body{};

  QueryExecuteInfoResponse() {}

  explicit QueryExecuteInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryExecuteInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryExecuteInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryExecuteInfoResponse() = default;
};
class QueryInnerProductInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> limit{};
  shared_ptr<long> page{};
  shared_ptr<string> productCode{};
  shared_ptr<long> reqTimestamp{};

  QueryInnerProductInfoRequest() {}

  explicit QueryInnerProductInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
  }


  virtual ~QueryInnerProductInfoRequest() = default;
};
class QueryInnerProductInfoResponseBodyDataDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> innerProductCode{};
  shared_ptr<string> innerProductName{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};

  QueryInnerProductInfoResponseBodyDataDataInfo() {}

  explicit QueryInnerProductInfoResponseBodyDataDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (innerProductCode) {
      res["InnerProductCode"] = boost::any(*innerProductCode);
    }
    if (innerProductName) {
      res["InnerProductName"] = boost::any(*innerProductName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InnerProductCode") != m.end() && !m["InnerProductCode"].empty()) {
      innerProductCode = make_shared<string>(boost::any_cast<string>(m["InnerProductCode"]));
    }
    if (m.find("InnerProductName") != m.end() && !m["InnerProductName"].empty()) {
      innerProductName = make_shared<string>(boost::any_cast<string>(m["InnerProductName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~QueryInnerProductInfoResponseBodyDataDataInfo() = default;
};
class QueryInnerProductInfoResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> page{};

  QueryInnerProductInfoResponseBodyDataPagination() {}

  explicit QueryInnerProductInfoResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~QueryInnerProductInfoResponseBodyDataPagination() = default;
};
class QueryInnerProductInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInnerProductInfoResponseBodyDataDataInfo>> dataInfo{};
  shared_ptr<QueryInnerProductInfoResponseBodyDataPagination> pagination{};
  shared_ptr<long> total{};

  QueryInnerProductInfoResponseBodyData() {}

  explicit QueryInnerProductInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInfo"] = boost::any(temp1);
    }
    if (pagination) {
      res["Pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInfo") != m.end() && !m["DataInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInfo"].type()) {
        vector<QueryInnerProductInfoResponseBodyDataDataInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInnerProductInfoResponseBodyDataDataInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInfo = make_shared<vector<QueryInnerProductInfoResponseBodyDataDataInfo>>(expect1);
      }
    }
    if (m.find("Pagination") != m.end() && !m["Pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pagination"].type()) {
        QueryInnerProductInfoResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pagination"]));
        pagination = make_shared<QueryInnerProductInfoResponseBodyDataPagination>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryInnerProductInfoResponseBodyData() = default;
};
class QueryInnerProductInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryInnerProductInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryInnerProductInfoResponseBody() {}

  explicit QueryInnerProductInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryInnerProductInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryInnerProductInfoResponseBodyData>(model1);
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


  virtual ~QueryInnerProductInfoResponseBody() = default;
};
class QueryInnerProductInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryInnerProductInfoResponseBody> body{};

  QueryInnerProductInfoResponse() {}

  explicit QueryInnerProductInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInnerProductInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInnerProductInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInnerProductInfoResponse() = default;
};
class QueryRegionAzRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> limit{};
  shared_ptr<long> page{};
  shared_ptr<string> product{};
  shared_ptr<long> reqTimestamp{};

  QueryRegionAzRequest() {}

  explicit QueryRegionAzRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
  }


  virtual ~QueryRegionAzRequest() = default;
};
class QueryRegionAzResponseBodyDataDataInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> azList{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> regionName{};

  QueryRegionAzResponseBodyDataDataInfo() {}

  explicit QueryRegionAzResponseBodyDataDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azList) {
      res["AzList"] = boost::any(*azList);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzList") != m.end() && !m["AzList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AzList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AzList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      azList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~QueryRegionAzResponseBodyDataDataInfo() = default;
};
class QueryRegionAzResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> page{};

  QueryRegionAzResponseBodyDataPagination() {}

  explicit QueryRegionAzResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~QueryRegionAzResponseBodyDataPagination() = default;
};
class QueryRegionAzResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRegionAzResponseBodyDataDataInfo>> dataInfo{};
  shared_ptr<QueryRegionAzResponseBodyDataPagination> pagination{};
  shared_ptr<long> total{};

  QueryRegionAzResponseBodyData() {}

  explicit QueryRegionAzResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInfo"] = boost::any(temp1);
    }
    if (pagination) {
      res["Pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInfo") != m.end() && !m["DataInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInfo"].type()) {
        vector<QueryRegionAzResponseBodyDataDataInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRegionAzResponseBodyDataDataInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInfo = make_shared<vector<QueryRegionAzResponseBodyDataDataInfo>>(expect1);
      }
    }
    if (m.find("Pagination") != m.end() && !m["Pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pagination"].type()) {
        QueryRegionAzResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pagination"]));
        pagination = make_shared<QueryRegionAzResponseBodyDataPagination>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryRegionAzResponseBodyData() = default;
};
class QueryRegionAzResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryRegionAzResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRegionAzResponseBody() {}

  explicit QueryRegionAzResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRegionAzResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRegionAzResponseBodyData>(model1);
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


  virtual ~QueryRegionAzResponseBody() = default;
};
class QueryRegionAzResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRegionAzResponseBody> body{};

  QueryRegionAzResponse() {}

  explicit QueryRegionAzResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRegionAzResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRegionAzResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRegionAzResponse() = default;
};
class SafeChangeCancelRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> operateEmpNo{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  SafeChangeCancelRequest() {}

  explicit SafeChangeCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (operateEmpNo) {
      res["OperateEmpNo"] = boost::any(*operateEmpNo);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("OperateEmpNo") != m.end() && !m["OperateEmpNo"].empty()) {
      operateEmpNo = make_shared<string>(boost::any_cast<string>(m["OperateEmpNo"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeCancelRequest() = default;
};
class SafeChangeCancelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sourceOrderId{};

  SafeChangeCancelResponseBodyData() {}

  explicit SafeChangeCancelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeCancelResponseBodyData() = default;
};
class SafeChangeCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeCancelResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeCancelResponseBody() {}

  explicit SafeChangeCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeCancelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeCancelResponseBodyData>(model1);
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


  virtual ~SafeChangeCancelResponseBody() = default;
};
class SafeChangeCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeCancelResponseBody> body{};

  SafeChangeCancelResponse() {}

  explicit SafeChangeCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeCancelResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeCancelResponse() = default;
};
class SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO : public Darabonba::Model {
public:
  shared_ptr<string> approveDesc{};
  shared_ptr<long> approveTime{};
  shared_ptr<string> approverId{};
  shared_ptr<string> approverName{};
  shared_ptr<long> opinion{};

  SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO() {}

  explicit SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveDesc) {
      res["ApproveDesc"] = boost::any(*approveDesc);
    }
    if (approveTime) {
      res["ApproveTime"] = boost::any(*approveTime);
    }
    if (approverId) {
      res["ApproverId"] = boost::any(*approverId);
    }
    if (approverName) {
      res["ApproverName"] = boost::any(*approverName);
    }
    if (opinion) {
      res["Opinion"] = boost::any(*opinion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveDesc") != m.end() && !m["ApproveDesc"].empty()) {
      approveDesc = make_shared<string>(boost::any_cast<string>(m["ApproveDesc"]));
    }
    if (m.find("ApproveTime") != m.end() && !m["ApproveTime"].empty()) {
      approveTime = make_shared<long>(boost::any_cast<long>(m["ApproveTime"]));
    }
    if (m.find("ApproverId") != m.end() && !m["ApproverId"].empty()) {
      approverId = make_shared<string>(boost::any_cast<string>(m["ApproverId"]));
    }
    if (m.find("ApproverName") != m.end() && !m["ApproverName"].empty()) {
      approverName = make_shared<string>(boost::any_cast<string>(m["ApproverName"]));
    }
    if (m.find("Opinion") != m.end() && !m["Opinion"].empty()) {
      opinion = make_shared<long>(boost::any_cast<long>(m["Opinion"]));
    }
  }


  virtual ~SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO() = default;
};
class SafeChangeCheckRequestApproveFlowParamApproveNodes : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO>> approverDTO{};
  shared_ptr<long> nodeStatus{};
  shared_ptr<string> processName{};
  shared_ptr<long> processNodeOrder{};
  shared_ptr<long> strategy{};

  SafeChangeCheckRequestApproveFlowParamApproveNodes() {}

  explicit SafeChangeCheckRequestApproveFlowParamApproveNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approverDTO) {
      vector<boost::any> temp1;
      for(auto item1:*approverDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproverDTO"] = boost::any(temp1);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (processName) {
      res["ProcessName"] = boost::any(*processName);
    }
    if (processNodeOrder) {
      res["ProcessNodeOrder"] = boost::any(*processNodeOrder);
    }
    if (strategy) {
      res["Strategy"] = boost::any(*strategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproverDTO") != m.end() && !m["ApproverDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproverDTO"].type()) {
        vector<SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproverDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverDTO = make_shared<vector<SafeChangeCheckRequestApproveFlowParamApproveNodesApproverDTO>>(expect1);
      }
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<long>(boost::any_cast<long>(m["NodeStatus"]));
    }
    if (m.find("ProcessName") != m.end() && !m["ProcessName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["ProcessName"]));
    }
    if (m.find("ProcessNodeOrder") != m.end() && !m["ProcessNodeOrder"].empty()) {
      processNodeOrder = make_shared<long>(boost::any_cast<long>(m["ProcessNodeOrder"]));
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      strategy = make_shared<long>(boost::any_cast<long>(m["Strategy"]));
    }
  }


  virtual ~SafeChangeCheckRequestApproveFlowParamApproveNodes() = default;
};
class SafeChangeCheckRequestApproveFlowParam : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestApproveFlowParamApproveNodes>> approveNodes{};
  shared_ptr<long> flowStatus{};

  SafeChangeCheckRequestApproveFlowParam() {}

  explicit SafeChangeCheckRequestApproveFlowParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveNodes) {
      vector<boost::any> temp1;
      for(auto item1:*approveNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproveNodes"] = boost::any(temp1);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveNodes") != m.end() && !m["ApproveNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproveNodes"].type()) {
        vector<SafeChangeCheckRequestApproveFlowParamApproveNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproveNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestApproveFlowParamApproveNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approveNodes = make_shared<vector<SafeChangeCheckRequestApproveFlowParamApproveNodes>>(expect1);
      }
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<long>(boost::any_cast<long>(m["FlowStatus"]));
    }
  }


  virtual ~SafeChangeCheckRequestApproveFlowParam() = default;
};
class SafeChangeCheckRequestBgCustomTemplateExtraDTO : public Darabonba::Model {
public:
  shared_ptr<string> bgCustomTemplateInfo{};

  SafeChangeCheckRequestBgCustomTemplateExtraDTO() {}

  explicit SafeChangeCheckRequestBgCustomTemplateExtraDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCustomTemplateInfo) {
      res["BgCustomTemplateInfo"] = boost::any(*bgCustomTemplateInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCustomTemplateInfo") != m.end() && !m["BgCustomTemplateInfo"].empty()) {
      bgCustomTemplateInfo = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateInfo"]));
    }
  }


  virtual ~SafeChangeCheckRequestBgCustomTemplateExtraDTO() = default;
};
class SafeChangeCheckRequestBlockInfosHitInfos : public Darabonba::Model {
public:
  shared_ptr<string> hitInfo{};
  shared_ptr<string> hitObject{};
  shared_ptr<string> scope{};

  SafeChangeCheckRequestBlockInfosHitInfos() {}

  explicit SafeChangeCheckRequestBlockInfosHitInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfo) {
      res["HitInfo"] = boost::any(*hitInfo);
    }
    if (hitObject) {
      res["HitObject"] = boost::any(*hitObject);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfo") != m.end() && !m["HitInfo"].empty()) {
      hitInfo = make_shared<string>(boost::any_cast<string>(m["HitInfo"]));
    }
    if (m.find("HitObject") != m.end() && !m["HitObject"].empty()) {
      hitObject = make_shared<string>(boost::any_cast<string>(m["HitObject"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~SafeChangeCheckRequestBlockInfosHitInfos() = default;
};
class SafeChangeCheckRequestBlockInfos : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestBlockInfosHitInfos>> hitInfos{};
  shared_ptr<long> id{};

  SafeChangeCheckRequestBlockInfos() {}

  explicit SafeChangeCheckRequestBlockInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hitInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitInfos"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfos") != m.end() && !m["HitInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HitInfos"].type()) {
        vector<SafeChangeCheckRequestBlockInfosHitInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestBlockInfosHitInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitInfos = make_shared<vector<SafeChangeCheckRequestBlockInfosHitInfos>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~SafeChangeCheckRequestBlockInfos() = default;
};
class SafeChangeCheckRequestCallBackInfo : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> popProduct{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  SafeChangeCheckRequestCallBackInfo() {}

  explicit SafeChangeCheckRequestCallBackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (popProduct) {
      res["PopProduct"] = boost::any(*popProduct);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("PopProduct") != m.end() && !m["PopProduct"].empty()) {
      popProduct = make_shared<string>(boost::any_cast<string>(m["PopProduct"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SafeChangeCheckRequestCallBackInfo() = default;
};
class SafeChangeCheckRequestChangeTimes : public Darabonba::Model {
public:
  shared_ptr<long> changeEndTime{};
  shared_ptr<long> changeStartTime{};

  SafeChangeCheckRequestChangeTimes() {}

  explicit SafeChangeCheckRequestChangeTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
  }


  virtual ~SafeChangeCheckRequestChangeTimes() = default;
};
class SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() {}

  explicit SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() = default;
};
class SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers() {}

  explicit SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers() = default;
};
class SafeChangeCheckRequestDamagedChangeNotices : public Darabonba::Model {
public:
  shared_ptr<string> bgCancelNoticeContent{};
  shared_ptr<string> bgCancelNoticeEventId{};
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};
  shared_ptr<vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers>> sensitiveCustomers{};
  shared_ptr<string> type{};

  SafeChangeCheckRequestDamagedChangeNotices() {}

  explicit SafeChangeCheckRequestDamagedChangeNotices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCancelNoticeContent) {
      res["BgCancelNoticeContent"] = boost::any(*bgCancelNoticeContent);
    }
    if (bgCancelNoticeEventId) {
      res["BgCancelNoticeEventId"] = boost::any(*bgCancelNoticeEventId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCancelNoticeContent") != m.end() && !m["BgCancelNoticeContent"].empty()) {
      bgCancelNoticeContent = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeContent"]));
    }
    if (m.find("BgCancelNoticeEventId") != m.end() && !m["BgCancelNoticeEventId"].empty()) {
      bgCancelNoticeEventId = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeEventId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<SafeChangeCheckRequestDamagedChangeNoticesSensitiveCustomers>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SafeChangeCheckRequestDamagedChangeNotices() = default;
};
class SafeChangeCheckRequestHarmNoticeCombineParam : public Darabonba::Model {
public:
  shared_ptr<bool> combine{};
  shared_ptr<string> combineMark{};
  shared_ptr<string> combineRule{};

  SafeChangeCheckRequestHarmNoticeCombineParam() {}

  explicit SafeChangeCheckRequestHarmNoticeCombineParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (combine) {
      res["Combine"] = boost::any(*combine);
    }
    if (combineMark) {
      res["CombineMark"] = boost::any(*combineMark);
    }
    if (combineRule) {
      res["CombineRule"] = boost::any(*combineRule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Combine") != m.end() && !m["Combine"].empty()) {
      combine = make_shared<bool>(boost::any_cast<bool>(m["Combine"]));
    }
    if (m.find("CombineMark") != m.end() && !m["CombineMark"].empty()) {
      combineMark = make_shared<string>(boost::any_cast<string>(m["CombineMark"]));
    }
    if (m.find("CombineRule") != m.end() && !m["CombineRule"].empty()) {
      combineRule = make_shared<string>(boost::any_cast<string>(m["CombineRule"]));
    }
  }


  virtual ~SafeChangeCheckRequestHarmNoticeCombineParam() = default;
};
class SafeChangeCheckRequestInfluenceInfoNoticeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};

  SafeChangeCheckRequestInfluenceInfoNoticeInfos() {}

  explicit SafeChangeCheckRequestInfluenceInfoNoticeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~SafeChangeCheckRequestInfluenceInfoNoticeInfos() = default;
};
class SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo() {}

  explicit SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo() = default;
};
class SafeChangeCheckRequestInfluenceInfoSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  SafeChangeCheckRequestInfluenceInfoSensitiveCustomers() {}

  explicit SafeChangeCheckRequestInfluenceInfoSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~SafeChangeCheckRequestInfluenceInfoSensitiveCustomers() = default;
};
class SafeChangeCheckRequestInfluenceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckRequestInfluenceInfoNoticeInfos>> noticeInfos{};
  shared_ptr<vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomers>> sensitiveCustomers{};

  SafeChangeCheckRequestInfluenceInfo() {}

  explicit SafeChangeCheckRequestInfluenceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*noticeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeInfos"] = boost::any(temp1);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoticeInfos") != m.end() && !m["NoticeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeInfos"].type()) {
        vector<SafeChangeCheckRequestInfluenceInfoNoticeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestInfluenceInfoNoticeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeInfos = make_shared<vector<SafeChangeCheckRequestInfluenceInfoNoticeInfos>>(expect1);
      }
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestInfluenceInfoSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<SafeChangeCheckRequestInfluenceInfoSensitiveCustomers>>(expect1);
      }
    }
  }


  virtual ~SafeChangeCheckRequestInfluenceInfo() = default;
};
class SafeChangeCheckRequestInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nc{};
  shared_ptr<vector<string>> uids{};
  shared_ptr<vector<string>> attributionApp{};
  shared_ptr<vector<string>> influenceApp{};
  shared_ptr<vector<string>> instance{};

  SafeChangeCheckRequestInstance() {}

  explicit SafeChangeCheckRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nc) {
      res["Nc"] = boost::any(*nc);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    if (attributionApp) {
      res["attributionApp"] = boost::any(*attributionApp);
    }
    if (influenceApp) {
      res["influenceApp"] = boost::any(*influenceApp);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nc") != m.end() && !m["Nc"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nc"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nc"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nc = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("attributionApp") != m.end() && !m["attributionApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attributionApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attributionApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributionApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("influenceApp") != m.end() && !m["influenceApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["influenceApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["influenceApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      influenceApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SafeChangeCheckRequestInstance() = default;
};
class SafeChangeCheckRequestProduct : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  SafeChangeCheckRequestProduct() {}

  explicit SafeChangeCheckRequestProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SafeChangeCheckRequestProduct() = default;
};
class SafeChangeCheckRequestReleasePackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> releasePackage{};

  SafeChangeCheckRequestReleasePackageInfos() {}

  explicit SafeChangeCheckRequestReleasePackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (releasePackage) {
      res["ReleasePackage"] = boost::any(*releasePackage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ReleasePackage") != m.end() && !m["ReleasePackage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReleasePackage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReleasePackage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      releasePackage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SafeChangeCheckRequestReleasePackageInfos() = default;
};
class SafeChangeCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> affectCustomer{};
  shared_ptr<SafeChangeCheckRequestApproveFlowParam> approveFlowParam{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<SafeChangeCheckRequestBgCustomTemplateExtraDTO> bgCustomTemplateExtraDTO{};
  shared_ptr<vector<SafeChangeCheckRequestBlockInfos>> blockInfos{};
  shared_ptr<SafeChangeCheckRequestCallBackInfo> callBackInfo{};
  shared_ptr<string> changeDataType{};
  shared_ptr<string> changeDesc{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeEnv{};
  shared_ptr<string> changeItems{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptSubType{};
  shared_ptr<string> changeOptType{};
  shared_ptr<string> changeReason{};
  shared_ptr<string> changeRmarks{};
  shared_ptr<string> changeSchemes{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeSubTypeDesc{};
  shared_ptr<string> changeSystem{};
  shared_ptr<vector<SafeChangeCheckRequestChangeTimes>> changeTimes{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> changeValidation{};
  shared_ptr<vector<string>> checker{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<vector<SafeChangeCheckRequestDamagedChangeNotices>> damagedChangeNotices{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<string>> follower{};
  shared_ptr<string> grayStatus{};
  shared_ptr<string> harmChangeNoticeEnum{};
  shared_ptr<SafeChangeCheckRequestHarmNoticeCombineParam> harmNoticeCombineParam{};
  shared_ptr<string> incidence{};
  shared_ptr<SafeChangeCheckRequestInfluenceInfo> influenceInfo{};
  shared_ptr<SafeChangeCheckRequestInstance> instance{};
  shared_ptr<string> needModifyDoc{};
  shared_ptr<string> operateEmpNo{};
  shared_ptr<vector<SafeChangeCheckRequestProduct>> product{};
  shared_ptr<vector<SafeChangeCheckRequestReleasePackageInfos>> releasePackageInfos{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> reuseSourceOrderId{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> rollback{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<long> whiteType{};

  SafeChangeCheckRequest() {}

  explicit SafeChangeCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCustomer) {
      res["AffectCustomer"] = boost::any(*affectCustomer);
    }
    if (approveFlowParam) {
      res["ApproveFlowParam"] = approveFlowParam ? boost::any(approveFlowParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgCustomTemplateExtraDTO) {
      res["BgCustomTemplateExtraDTO"] = bgCustomTemplateExtraDTO ? boost::any(bgCustomTemplateExtraDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (blockInfos) {
      vector<boost::any> temp1;
      for(auto item1:*blockInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockInfos"] = boost::any(temp1);
    }
    if (callBackInfo) {
      res["CallBackInfo"] = callBackInfo ? boost::any(callBackInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changeDataType) {
      res["ChangeDataType"] = boost::any(*changeDataType);
    }
    if (changeDesc) {
      res["ChangeDesc"] = boost::any(*changeDesc);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeEnv) {
      res["ChangeEnv"] = boost::any(*changeEnv);
    }
    if (changeItems) {
      res["ChangeItems"] = boost::any(*changeItems);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptSubType) {
      res["ChangeOptSubType"] = boost::any(*changeOptSubType);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeReason) {
      res["ChangeReason"] = boost::any(*changeReason);
    }
    if (changeRmarks) {
      res["ChangeRmarks"] = boost::any(*changeRmarks);
    }
    if (changeSchemes) {
      res["ChangeSchemes"] = boost::any(*changeSchemes);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeSubTypeDesc) {
      res["ChangeSubTypeDesc"] = boost::any(*changeSubTypeDesc);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (changeTimes) {
      vector<boost::any> temp1;
      for(auto item1:*changeTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeTimes"] = boost::any(temp1);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (changeValidation) {
      res["ChangeValidation"] = boost::any(*changeValidation);
    }
    if (checker) {
      res["Checker"] = boost::any(*checker);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (damagedChangeNotices) {
      vector<boost::any> temp1;
      for(auto item1:*damagedChangeNotices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DamagedChangeNotices"] = boost::any(temp1);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (follower) {
      res["Follower"] = boost::any(*follower);
    }
    if (grayStatus) {
      res["GrayStatus"] = boost::any(*grayStatus);
    }
    if (harmChangeNoticeEnum) {
      res["HarmChangeNoticeEnum"] = boost::any(*harmChangeNoticeEnum);
    }
    if (harmNoticeCombineParam) {
      res["HarmNoticeCombineParam"] = harmNoticeCombineParam ? boost::any(harmNoticeCombineParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (incidence) {
      res["Incidence"] = boost::any(*incidence);
    }
    if (influenceInfo) {
      res["InfluenceInfo"] = influenceInfo ? boost::any(influenceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (needModifyDoc) {
      res["NeedModifyDoc"] = boost::any(*needModifyDoc);
    }
    if (operateEmpNo) {
      res["OperateEmpNo"] = boost::any(*operateEmpNo);
    }
    if (product) {
      vector<boost::any> temp1;
      for(auto item1:*product){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Product"] = boost::any(temp1);
    }
    if (releasePackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*releasePackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReleasePackageInfos"] = boost::any(temp1);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (reuseSourceOrderId) {
      res["ReuseSourceOrderId"] = boost::any(*reuseSourceOrderId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (rollback) {
      res["Rollback"] = boost::any(*rollback);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (whiteType) {
      res["whiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCustomer") != m.end() && !m["AffectCustomer"].empty()) {
      affectCustomer = make_shared<string>(boost::any_cast<string>(m["AffectCustomer"]));
    }
    if (m.find("ApproveFlowParam") != m.end() && !m["ApproveFlowParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveFlowParam"].type()) {
        SafeChangeCheckRequestApproveFlowParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveFlowParam"]));
        approveFlowParam = make_shared<SafeChangeCheckRequestApproveFlowParam>(model1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgCustomTemplateExtraDTO") != m.end() && !m["BgCustomTemplateExtraDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BgCustomTemplateExtraDTO"].type()) {
        SafeChangeCheckRequestBgCustomTemplateExtraDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BgCustomTemplateExtraDTO"]));
        bgCustomTemplateExtraDTO = make_shared<SafeChangeCheckRequestBgCustomTemplateExtraDTO>(model1);
      }
    }
    if (m.find("BlockInfos") != m.end() && !m["BlockInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockInfos"].type()) {
        vector<SafeChangeCheckRequestBlockInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestBlockInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockInfos = make_shared<vector<SafeChangeCheckRequestBlockInfos>>(expect1);
      }
    }
    if (m.find("CallBackInfo") != m.end() && !m["CallBackInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallBackInfo"].type()) {
        SafeChangeCheckRequestCallBackInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallBackInfo"]));
        callBackInfo = make_shared<SafeChangeCheckRequestCallBackInfo>(model1);
      }
    }
    if (m.find("ChangeDataType") != m.end() && !m["ChangeDataType"].empty()) {
      changeDataType = make_shared<string>(boost::any_cast<string>(m["ChangeDataType"]));
    }
    if (m.find("ChangeDesc") != m.end() && !m["ChangeDesc"].empty()) {
      changeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeDesc"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeEnv") != m.end() && !m["ChangeEnv"].empty()) {
      changeEnv = make_shared<string>(boost::any_cast<string>(m["ChangeEnv"]));
    }
    if (m.find("ChangeItems") != m.end() && !m["ChangeItems"].empty()) {
      changeItems = make_shared<string>(boost::any_cast<string>(m["ChangeItems"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptSubType") != m.end() && !m["ChangeOptSubType"].empty()) {
      changeOptSubType = make_shared<string>(boost::any_cast<string>(m["ChangeOptSubType"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeReason") != m.end() && !m["ChangeReason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["ChangeReason"]));
    }
    if (m.find("ChangeRmarks") != m.end() && !m["ChangeRmarks"].empty()) {
      changeRmarks = make_shared<string>(boost::any_cast<string>(m["ChangeRmarks"]));
    }
    if (m.find("ChangeSchemes") != m.end() && !m["ChangeSchemes"].empty()) {
      changeSchemes = make_shared<string>(boost::any_cast<string>(m["ChangeSchemes"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeSubTypeDesc") != m.end() && !m["ChangeSubTypeDesc"].empty()) {
      changeSubTypeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeSubTypeDesc"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("ChangeTimes") != m.end() && !m["ChangeTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeTimes"].type()) {
        vector<SafeChangeCheckRequestChangeTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestChangeTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTimes = make_shared<vector<SafeChangeCheckRequestChangeTimes>>(expect1);
      }
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("ChangeValidation") != m.end() && !m["ChangeValidation"].empty()) {
      changeValidation = make_shared<string>(boost::any_cast<string>(m["ChangeValidation"]));
    }
    if (m.find("Checker") != m.end() && !m["Checker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Checker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Checker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("DamagedChangeNotices") != m.end() && !m["DamagedChangeNotices"].empty()) {
      if (typeid(vector<boost::any>) == m["DamagedChangeNotices"].type()) {
        vector<SafeChangeCheckRequestDamagedChangeNotices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DamagedChangeNotices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestDamagedChangeNotices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        damagedChangeNotices = make_shared<vector<SafeChangeCheckRequestDamagedChangeNotices>>(expect1);
      }
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Follower") != m.end() && !m["Follower"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Follower"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Follower"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      follower = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrayStatus") != m.end() && !m["GrayStatus"].empty()) {
      grayStatus = make_shared<string>(boost::any_cast<string>(m["GrayStatus"]));
    }
    if (m.find("HarmChangeNoticeEnum") != m.end() && !m["HarmChangeNoticeEnum"].empty()) {
      harmChangeNoticeEnum = make_shared<string>(boost::any_cast<string>(m["HarmChangeNoticeEnum"]));
    }
    if (m.find("HarmNoticeCombineParam") != m.end() && !m["HarmNoticeCombineParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["HarmNoticeCombineParam"].type()) {
        SafeChangeCheckRequestHarmNoticeCombineParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HarmNoticeCombineParam"]));
        harmNoticeCombineParam = make_shared<SafeChangeCheckRequestHarmNoticeCombineParam>(model1);
      }
    }
    if (m.find("Incidence") != m.end() && !m["Incidence"].empty()) {
      incidence = make_shared<string>(boost::any_cast<string>(m["Incidence"]));
    }
    if (m.find("InfluenceInfo") != m.end() && !m["InfluenceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InfluenceInfo"].type()) {
        SafeChangeCheckRequestInfluenceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InfluenceInfo"]));
        influenceInfo = make_shared<SafeChangeCheckRequestInfluenceInfo>(model1);
      }
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        SafeChangeCheckRequestInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<SafeChangeCheckRequestInstance>(model1);
      }
    }
    if (m.find("NeedModifyDoc") != m.end() && !m["NeedModifyDoc"].empty()) {
      needModifyDoc = make_shared<string>(boost::any_cast<string>(m["NeedModifyDoc"]));
    }
    if (m.find("OperateEmpNo") != m.end() && !m["OperateEmpNo"].empty()) {
      operateEmpNo = make_shared<string>(boost::any_cast<string>(m["OperateEmpNo"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<SafeChangeCheckRequestProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<SafeChangeCheckRequestProduct>>(expect1);
      }
    }
    if (m.find("ReleasePackageInfos") != m.end() && !m["ReleasePackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ReleasePackageInfos"].type()) {
        vector<SafeChangeCheckRequestReleasePackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReleasePackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckRequestReleasePackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releasePackageInfos = make_shared<vector<SafeChangeCheckRequestReleasePackageInfos>>(expect1);
      }
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("ReuseSourceOrderId") != m.end() && !m["ReuseSourceOrderId"].empty()) {
      reuseSourceOrderId = make_shared<string>(boost::any_cast<string>(m["ReuseSourceOrderId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("Rollback") != m.end() && !m["Rollback"].empty()) {
      rollback = make_shared<string>(boost::any_cast<string>(m["Rollback"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("whiteType") != m.end() && !m["whiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["whiteType"]));
    }
  }


  virtual ~SafeChangeCheckRequest() = default;
};
class SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO : public Darabonba::Model {
public:
  shared_ptr<string> approveDesc{};
  shared_ptr<long> approveTime{};
  shared_ptr<string> approverId{};
  shared_ptr<string> approverName{};
  shared_ptr<long> opinion{};

  SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO() {}

  explicit SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveDesc) {
      res["ApproveDesc"] = boost::any(*approveDesc);
    }
    if (approveTime) {
      res["ApproveTime"] = boost::any(*approveTime);
    }
    if (approverId) {
      res["ApproverId"] = boost::any(*approverId);
    }
    if (approverName) {
      res["ApproverName"] = boost::any(*approverName);
    }
    if (opinion) {
      res["Opinion"] = boost::any(*opinion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveDesc") != m.end() && !m["ApproveDesc"].empty()) {
      approveDesc = make_shared<string>(boost::any_cast<string>(m["ApproveDesc"]));
    }
    if (m.find("ApproveTime") != m.end() && !m["ApproveTime"].empty()) {
      approveTime = make_shared<long>(boost::any_cast<long>(m["ApproveTime"]));
    }
    if (m.find("ApproverId") != m.end() && !m["ApproverId"].empty()) {
      approverId = make_shared<string>(boost::any_cast<string>(m["ApproverId"]));
    }
    if (m.find("ApproverName") != m.end() && !m["ApproverName"].empty()) {
      approverName = make_shared<string>(boost::any_cast<string>(m["ApproverName"]));
    }
    if (m.find("Opinion") != m.end() && !m["Opinion"].empty()) {
      opinion = make_shared<long>(boost::any_cast<long>(m["Opinion"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO() = default;
};
class SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO>> approverDTO{};
  shared_ptr<long> nodeStatus{};
  shared_ptr<string> processName{};
  shared_ptr<long> processNodeOrder{};
  shared_ptr<long> strategy{};

  SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes() {}

  explicit SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approverDTO) {
      vector<boost::any> temp1;
      for(auto item1:*approverDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproverDTO"] = boost::any(temp1);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (processName) {
      res["ProcessName"] = boost::any(*processName);
    }
    if (processNodeOrder) {
      res["ProcessNodeOrder"] = boost::any(*processNodeOrder);
    }
    if (strategy) {
      res["Strategy"] = boost::any(*strategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproverDTO") != m.end() && !m["ApproverDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproverDTO"].type()) {
        vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproverDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approverDTO = make_shared<vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodesApproverDTO>>(expect1);
      }
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<long>(boost::any_cast<long>(m["NodeStatus"]));
    }
    if (m.find("ProcessName") != m.end() && !m["ProcessName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["ProcessName"]));
    }
    if (m.find("ProcessNodeOrder") != m.end() && !m["ProcessNodeOrder"].empty()) {
      processNodeOrder = make_shared<long>(boost::any_cast<long>(m["ProcessNodeOrder"]));
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      strategy = make_shared<long>(boost::any_cast<long>(m["Strategy"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes() = default;
};
class SafeChangeCheckShrinkRequestApproveFlowParam : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes>> approveNodes{};
  shared_ptr<long> flowStatus{};

  SafeChangeCheckShrinkRequestApproveFlowParam() {}

  explicit SafeChangeCheckShrinkRequestApproveFlowParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveNodes) {
      vector<boost::any> temp1;
      for(auto item1:*approveNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApproveNodes"] = boost::any(temp1);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveNodes") != m.end() && !m["ApproveNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ApproveNodes"].type()) {
        vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApproveNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        approveNodes = make_shared<vector<SafeChangeCheckShrinkRequestApproveFlowParamApproveNodes>>(expect1);
      }
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<long>(boost::any_cast<long>(m["FlowStatus"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestApproveFlowParam() = default;
};
class SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO : public Darabonba::Model {
public:
  shared_ptr<string> bgCustomTemplateInfo{};

  SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO() {}

  explicit SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCustomTemplateInfo) {
      res["BgCustomTemplateInfo"] = boost::any(*bgCustomTemplateInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCustomTemplateInfo") != m.end() && !m["BgCustomTemplateInfo"].empty()) {
      bgCustomTemplateInfo = make_shared<string>(boost::any_cast<string>(m["BgCustomTemplateInfo"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO() = default;
};
class SafeChangeCheckShrinkRequestBlockInfosHitInfos : public Darabonba::Model {
public:
  shared_ptr<string> hitInfo{};
  shared_ptr<string> hitObject{};
  shared_ptr<string> scope{};

  SafeChangeCheckShrinkRequestBlockInfosHitInfos() {}

  explicit SafeChangeCheckShrinkRequestBlockInfosHitInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfo) {
      res["HitInfo"] = boost::any(*hitInfo);
    }
    if (hitObject) {
      res["HitObject"] = boost::any(*hitObject);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfo") != m.end() && !m["HitInfo"].empty()) {
      hitInfo = make_shared<string>(boost::any_cast<string>(m["HitInfo"]));
    }
    if (m.find("HitObject") != m.end() && !m["HitObject"].empty()) {
      hitObject = make_shared<string>(boost::any_cast<string>(m["HitObject"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestBlockInfosHitInfos() = default;
};
class SafeChangeCheckShrinkRequestBlockInfos : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestBlockInfosHitInfos>> hitInfos{};
  shared_ptr<long> id{};

  SafeChangeCheckShrinkRequestBlockInfos() {}

  explicit SafeChangeCheckShrinkRequestBlockInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hitInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitInfos"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitInfos") != m.end() && !m["HitInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HitInfos"].type()) {
        vector<SafeChangeCheckShrinkRequestBlockInfosHitInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestBlockInfosHitInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitInfos = make_shared<vector<SafeChangeCheckShrinkRequestBlockInfosHitInfos>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestBlockInfos() = default;
};
class SafeChangeCheckShrinkRequestCallBackInfo : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> popProduct{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  SafeChangeCheckShrinkRequestCallBackInfo() {}

  explicit SafeChangeCheckShrinkRequestCallBackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (popProduct) {
      res["PopProduct"] = boost::any(*popProduct);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("PopProduct") != m.end() && !m["PopProduct"].empty()) {
      popProduct = make_shared<string>(boost::any_cast<string>(m["PopProduct"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestCallBackInfo() = default;
};
class SafeChangeCheckShrinkRequestChangeTimes : public Darabonba::Model {
public:
  shared_ptr<long> changeEndTime{};
  shared_ptr<long> changeStartTime{};

  SafeChangeCheckShrinkRequestChangeTimes() {}

  explicit SafeChangeCheckShrinkRequestChangeTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestChangeTimes() = default;
};
class SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() {}

  explicit SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo() = default;
};
class SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers() {}

  explicit SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers() = default;
};
class SafeChangeCheckShrinkRequestDamagedChangeNotices : public Darabonba::Model {
public:
  shared_ptr<string> bgCancelNoticeContent{};
  shared_ptr<string> bgCancelNoticeEventId{};
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers>> sensitiveCustomers{};
  shared_ptr<string> type{};

  SafeChangeCheckShrinkRequestDamagedChangeNotices() {}

  explicit SafeChangeCheckShrinkRequestDamagedChangeNotices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgCancelNoticeContent) {
      res["BgCancelNoticeContent"] = boost::any(*bgCancelNoticeContent);
    }
    if (bgCancelNoticeEventId) {
      res["BgCancelNoticeEventId"] = boost::any(*bgCancelNoticeEventId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgCancelNoticeContent") != m.end() && !m["BgCancelNoticeContent"].empty()) {
      bgCancelNoticeContent = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeContent"]));
    }
    if (m.find("BgCancelNoticeEventId") != m.end() && !m["BgCancelNoticeEventId"].empty()) {
      bgCancelNoticeEventId = make_shared<string>(boost::any_cast<string>(m["BgCancelNoticeEventId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<SafeChangeCheckShrinkRequestDamagedChangeNoticesSensitiveCustomers>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestDamagedChangeNotices() = default;
};
class SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};

  SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos() {}

  explicit SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos() = default;
};
class SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo() {}

  explicit SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo() = default;
};
class SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo>> customerInfo{};
  shared_ptr<string> productCode{};

  SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers() {}

  explicit SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*customerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomerInfo"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomerInfo"].type()) {
        vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customerInfo = make_shared<vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomersCustomerInfo>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers() = default;
};
class SafeChangeCheckShrinkRequestInfluenceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos>> noticeInfos{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers>> sensitiveCustomers{};

  SafeChangeCheckShrinkRequestInfluenceInfo() {}

  explicit SafeChangeCheckShrinkRequestInfluenceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*noticeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeInfos"] = boost::any(temp1);
    }
    if (sensitiveCustomers) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveCustomers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveCustomers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoticeInfos") != m.end() && !m["NoticeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeInfos"].type()) {
        vector<SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeInfos = make_shared<vector<SafeChangeCheckShrinkRequestInfluenceInfoNoticeInfos>>(expect1);
      }
    }
    if (m.find("SensitiveCustomers") != m.end() && !m["SensitiveCustomers"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveCustomers"].type()) {
        vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveCustomers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveCustomers = make_shared<vector<SafeChangeCheckShrinkRequestInfluenceInfoSensitiveCustomers>>(expect1);
      }
    }
  }


  virtual ~SafeChangeCheckShrinkRequestInfluenceInfo() = default;
};
class SafeChangeCheckShrinkRequestInstance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nc{};
  shared_ptr<vector<string>> uids{};
  shared_ptr<vector<string>> attributionApp{};
  shared_ptr<vector<string>> influenceApp{};
  shared_ptr<vector<string>> instance{};

  SafeChangeCheckShrinkRequestInstance() {}

  explicit SafeChangeCheckShrinkRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nc) {
      res["Nc"] = boost::any(*nc);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    if (attributionApp) {
      res["attributionApp"] = boost::any(*attributionApp);
    }
    if (influenceApp) {
      res["influenceApp"] = boost::any(*influenceApp);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nc") != m.end() && !m["Nc"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nc"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nc"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nc = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("attributionApp") != m.end() && !m["attributionApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attributionApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attributionApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributionApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("influenceApp") != m.end() && !m["influenceApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["influenceApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["influenceApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      influenceApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SafeChangeCheckShrinkRequestInstance() = default;
};
class SafeChangeCheckShrinkRequestProduct : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  SafeChangeCheckShrinkRequestProduct() {}

  explicit SafeChangeCheckShrinkRequestProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequestProduct() = default;
};
class SafeChangeCheckShrinkRequestReleasePackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> releasePackage{};

  SafeChangeCheckShrinkRequestReleasePackageInfos() {}

  explicit SafeChangeCheckShrinkRequestReleasePackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (releasePackage) {
      res["ReleasePackage"] = boost::any(*releasePackage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ReleasePackage") != m.end() && !m["ReleasePackage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReleasePackage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReleasePackage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      releasePackage = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SafeChangeCheckShrinkRequestReleasePackageInfos() = default;
};
class SafeChangeCheckShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> affectCustomer{};
  shared_ptr<SafeChangeCheckShrinkRequestApproveFlowParam> approveFlowParam{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO> bgCustomTemplateExtraDTO{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestBlockInfos>> blockInfos{};
  shared_ptr<SafeChangeCheckShrinkRequestCallBackInfo> callBackInfo{};
  shared_ptr<string> changeDataType{};
  shared_ptr<string> changeDesc{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeEnv{};
  shared_ptr<string> changeItems{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptSubType{};
  shared_ptr<string> changeOptType{};
  shared_ptr<string> changeReason{};
  shared_ptr<string> changeRmarks{};
  shared_ptr<string> changeSchemes{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeSubTypeDesc{};
  shared_ptr<string> changeSystem{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestChangeTimes>> changeTimes{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> changeValidation{};
  shared_ptr<vector<string>> checker{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestDamagedChangeNotices>> damagedChangeNotices{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<string>> follower{};
  shared_ptr<string> grayStatus{};
  shared_ptr<string> harmChangeNoticeEnum{};
  shared_ptr<string> harmNoticeCombineParamShrink{};
  shared_ptr<string> incidence{};
  shared_ptr<SafeChangeCheckShrinkRequestInfluenceInfo> influenceInfo{};
  shared_ptr<SafeChangeCheckShrinkRequestInstance> instance{};
  shared_ptr<string> needModifyDoc{};
  shared_ptr<string> operateEmpNo{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestProduct>> product{};
  shared_ptr<vector<SafeChangeCheckShrinkRequestReleasePackageInfos>> releasePackageInfos{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> reuseSourceOrderId{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> rollback{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<long> whiteType{};

  SafeChangeCheckShrinkRequest() {}

  explicit SafeChangeCheckShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCustomer) {
      res["AffectCustomer"] = boost::any(*affectCustomer);
    }
    if (approveFlowParam) {
      res["ApproveFlowParam"] = approveFlowParam ? boost::any(approveFlowParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (bgCustomTemplateExtraDTO) {
      res["BgCustomTemplateExtraDTO"] = bgCustomTemplateExtraDTO ? boost::any(bgCustomTemplateExtraDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (blockInfos) {
      vector<boost::any> temp1;
      for(auto item1:*blockInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockInfos"] = boost::any(temp1);
    }
    if (callBackInfo) {
      res["CallBackInfo"] = callBackInfo ? boost::any(callBackInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changeDataType) {
      res["ChangeDataType"] = boost::any(*changeDataType);
    }
    if (changeDesc) {
      res["ChangeDesc"] = boost::any(*changeDesc);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeEnv) {
      res["ChangeEnv"] = boost::any(*changeEnv);
    }
    if (changeItems) {
      res["ChangeItems"] = boost::any(*changeItems);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptSubType) {
      res["ChangeOptSubType"] = boost::any(*changeOptSubType);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeReason) {
      res["ChangeReason"] = boost::any(*changeReason);
    }
    if (changeRmarks) {
      res["ChangeRmarks"] = boost::any(*changeRmarks);
    }
    if (changeSchemes) {
      res["ChangeSchemes"] = boost::any(*changeSchemes);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeSubTypeDesc) {
      res["ChangeSubTypeDesc"] = boost::any(*changeSubTypeDesc);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (changeTimes) {
      vector<boost::any> temp1;
      for(auto item1:*changeTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeTimes"] = boost::any(temp1);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (changeValidation) {
      res["ChangeValidation"] = boost::any(*changeValidation);
    }
    if (checker) {
      res["Checker"] = boost::any(*checker);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (damagedChangeNotices) {
      vector<boost::any> temp1;
      for(auto item1:*damagedChangeNotices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DamagedChangeNotices"] = boost::any(temp1);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (follower) {
      res["Follower"] = boost::any(*follower);
    }
    if (grayStatus) {
      res["GrayStatus"] = boost::any(*grayStatus);
    }
    if (harmChangeNoticeEnum) {
      res["HarmChangeNoticeEnum"] = boost::any(*harmChangeNoticeEnum);
    }
    if (harmNoticeCombineParamShrink) {
      res["HarmNoticeCombineParam"] = boost::any(*harmNoticeCombineParamShrink);
    }
    if (incidence) {
      res["Incidence"] = boost::any(*incidence);
    }
    if (influenceInfo) {
      res["InfluenceInfo"] = influenceInfo ? boost::any(influenceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (needModifyDoc) {
      res["NeedModifyDoc"] = boost::any(*needModifyDoc);
    }
    if (operateEmpNo) {
      res["OperateEmpNo"] = boost::any(*operateEmpNo);
    }
    if (product) {
      vector<boost::any> temp1;
      for(auto item1:*product){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Product"] = boost::any(temp1);
    }
    if (releasePackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*releasePackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReleasePackageInfos"] = boost::any(temp1);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (reuseSourceOrderId) {
      res["ReuseSourceOrderId"] = boost::any(*reuseSourceOrderId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (rollback) {
      res["Rollback"] = boost::any(*rollback);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (whiteType) {
      res["whiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCustomer") != m.end() && !m["AffectCustomer"].empty()) {
      affectCustomer = make_shared<string>(boost::any_cast<string>(m["AffectCustomer"]));
    }
    if (m.find("ApproveFlowParam") != m.end() && !m["ApproveFlowParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveFlowParam"].type()) {
        SafeChangeCheckShrinkRequestApproveFlowParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveFlowParam"]));
        approveFlowParam = make_shared<SafeChangeCheckShrinkRequestApproveFlowParam>(model1);
      }
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("BgCustomTemplateExtraDTO") != m.end() && !m["BgCustomTemplateExtraDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BgCustomTemplateExtraDTO"].type()) {
        SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BgCustomTemplateExtraDTO"]));
        bgCustomTemplateExtraDTO = make_shared<SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO>(model1);
      }
    }
    if (m.find("BlockInfos") != m.end() && !m["BlockInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockInfos"].type()) {
        vector<SafeChangeCheckShrinkRequestBlockInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestBlockInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockInfos = make_shared<vector<SafeChangeCheckShrinkRequestBlockInfos>>(expect1);
      }
    }
    if (m.find("CallBackInfo") != m.end() && !m["CallBackInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallBackInfo"].type()) {
        SafeChangeCheckShrinkRequestCallBackInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallBackInfo"]));
        callBackInfo = make_shared<SafeChangeCheckShrinkRequestCallBackInfo>(model1);
      }
    }
    if (m.find("ChangeDataType") != m.end() && !m["ChangeDataType"].empty()) {
      changeDataType = make_shared<string>(boost::any_cast<string>(m["ChangeDataType"]));
    }
    if (m.find("ChangeDesc") != m.end() && !m["ChangeDesc"].empty()) {
      changeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeDesc"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeEnv") != m.end() && !m["ChangeEnv"].empty()) {
      changeEnv = make_shared<string>(boost::any_cast<string>(m["ChangeEnv"]));
    }
    if (m.find("ChangeItems") != m.end() && !m["ChangeItems"].empty()) {
      changeItems = make_shared<string>(boost::any_cast<string>(m["ChangeItems"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptSubType") != m.end() && !m["ChangeOptSubType"].empty()) {
      changeOptSubType = make_shared<string>(boost::any_cast<string>(m["ChangeOptSubType"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeReason") != m.end() && !m["ChangeReason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["ChangeReason"]));
    }
    if (m.find("ChangeRmarks") != m.end() && !m["ChangeRmarks"].empty()) {
      changeRmarks = make_shared<string>(boost::any_cast<string>(m["ChangeRmarks"]));
    }
    if (m.find("ChangeSchemes") != m.end() && !m["ChangeSchemes"].empty()) {
      changeSchemes = make_shared<string>(boost::any_cast<string>(m["ChangeSchemes"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeSubTypeDesc") != m.end() && !m["ChangeSubTypeDesc"].empty()) {
      changeSubTypeDesc = make_shared<string>(boost::any_cast<string>(m["ChangeSubTypeDesc"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("ChangeTimes") != m.end() && !m["ChangeTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeTimes"].type()) {
        vector<SafeChangeCheckShrinkRequestChangeTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestChangeTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTimes = make_shared<vector<SafeChangeCheckShrinkRequestChangeTimes>>(expect1);
      }
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("ChangeValidation") != m.end() && !m["ChangeValidation"].empty()) {
      changeValidation = make_shared<string>(boost::any_cast<string>(m["ChangeValidation"]));
    }
    if (m.find("Checker") != m.end() && !m["Checker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Checker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Checker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("DamagedChangeNotices") != m.end() && !m["DamagedChangeNotices"].empty()) {
      if (typeid(vector<boost::any>) == m["DamagedChangeNotices"].type()) {
        vector<SafeChangeCheckShrinkRequestDamagedChangeNotices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DamagedChangeNotices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestDamagedChangeNotices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        damagedChangeNotices = make_shared<vector<SafeChangeCheckShrinkRequestDamagedChangeNotices>>(expect1);
      }
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Follower") != m.end() && !m["Follower"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Follower"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Follower"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      follower = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrayStatus") != m.end() && !m["GrayStatus"].empty()) {
      grayStatus = make_shared<string>(boost::any_cast<string>(m["GrayStatus"]));
    }
    if (m.find("HarmChangeNoticeEnum") != m.end() && !m["HarmChangeNoticeEnum"].empty()) {
      harmChangeNoticeEnum = make_shared<string>(boost::any_cast<string>(m["HarmChangeNoticeEnum"]));
    }
    if (m.find("HarmNoticeCombineParam") != m.end() && !m["HarmNoticeCombineParam"].empty()) {
      harmNoticeCombineParamShrink = make_shared<string>(boost::any_cast<string>(m["HarmNoticeCombineParam"]));
    }
    if (m.find("Incidence") != m.end() && !m["Incidence"].empty()) {
      incidence = make_shared<string>(boost::any_cast<string>(m["Incidence"]));
    }
    if (m.find("InfluenceInfo") != m.end() && !m["InfluenceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InfluenceInfo"].type()) {
        SafeChangeCheckShrinkRequestInfluenceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InfluenceInfo"]));
        influenceInfo = make_shared<SafeChangeCheckShrinkRequestInfluenceInfo>(model1);
      }
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        SafeChangeCheckShrinkRequestInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<SafeChangeCheckShrinkRequestInstance>(model1);
      }
    }
    if (m.find("NeedModifyDoc") != m.end() && !m["NeedModifyDoc"].empty()) {
      needModifyDoc = make_shared<string>(boost::any_cast<string>(m["NeedModifyDoc"]));
    }
    if (m.find("OperateEmpNo") != m.end() && !m["OperateEmpNo"].empty()) {
      operateEmpNo = make_shared<string>(boost::any_cast<string>(m["OperateEmpNo"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      if (typeid(vector<boost::any>) == m["Product"].type()) {
        vector<SafeChangeCheckShrinkRequestProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Product"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        product = make_shared<vector<SafeChangeCheckShrinkRequestProduct>>(expect1);
      }
    }
    if (m.find("ReleasePackageInfos") != m.end() && !m["ReleasePackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ReleasePackageInfos"].type()) {
        vector<SafeChangeCheckShrinkRequestReleasePackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReleasePackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckShrinkRequestReleasePackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releasePackageInfos = make_shared<vector<SafeChangeCheckShrinkRequestReleasePackageInfos>>(expect1);
      }
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("ReuseSourceOrderId") != m.end() && !m["ReuseSourceOrderId"].empty()) {
      reuseSourceOrderId = make_shared<string>(boost::any_cast<string>(m["ReuseSourceOrderId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("Rollback") != m.end() && !m["Rollback"].empty()) {
      rollback = make_shared<string>(boost::any_cast<string>(m["Rollback"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("whiteType") != m.end() && !m["whiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["whiteType"]));
    }
  }


  virtual ~SafeChangeCheckShrinkRequest() = default;
};
class SafeChangeCheckResponseBodyDataRuleDetailUrlList : public Darabonba::Model {
public:
  shared_ptr<string> sceneEnum{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  SafeChangeCheckResponseBodyDataRuleDetailUrlList() {}

  explicit SafeChangeCheckResponseBodyDataRuleDetailUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneEnum) {
      res["SceneEnum"] = boost::any(*sceneEnum);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneEnum") != m.end() && !m["SceneEnum"].empty()) {
      sceneEnum = make_shared<string>(boost::any_cast<string>(m["SceneEnum"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SafeChangeCheckResponseBodyDataRuleDetailUrlList() = default;
};
class SafeChangeCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveResultUrl{};
  shared_ptr<string> bgCheckStatus{};
  shared_ptr<string> bgVid{};
  shared_ptr<string> checkResultUrl{};
  shared_ptr<string> checkStatus{};
  shared_ptr<vector<string>> checkholdReason{};
  shared_ptr<vector<SafeChangeCheckResponseBodyDataRuleDetailUrlList>> ruleDetailUrlList{};
  shared_ptr<string> sourceOrderId{};

  SafeChangeCheckResponseBodyData() {}

  explicit SafeChangeCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveResultUrl) {
      res["ApproveResultUrl"] = boost::any(*approveResultUrl);
    }
    if (bgCheckStatus) {
      res["BgCheckStatus"] = boost::any(*bgCheckStatus);
    }
    if (bgVid) {
      res["BgVid"] = boost::any(*bgVid);
    }
    if (checkResultUrl) {
      res["CheckResultUrl"] = boost::any(*checkResultUrl);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkholdReason) {
      res["CheckholdReason"] = boost::any(*checkholdReason);
    }
    if (ruleDetailUrlList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleDetailUrlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleDetailUrlList"] = boost::any(temp1);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveResultUrl") != m.end() && !m["ApproveResultUrl"].empty()) {
      approveResultUrl = make_shared<string>(boost::any_cast<string>(m["ApproveResultUrl"]));
    }
    if (m.find("BgCheckStatus") != m.end() && !m["BgCheckStatus"].empty()) {
      bgCheckStatus = make_shared<string>(boost::any_cast<string>(m["BgCheckStatus"]));
    }
    if (m.find("BgVid") != m.end() && !m["BgVid"].empty()) {
      bgVid = make_shared<string>(boost::any_cast<string>(m["BgVid"]));
    }
    if (m.find("CheckResultUrl") != m.end() && !m["CheckResultUrl"].empty()) {
      checkResultUrl = make_shared<string>(boost::any_cast<string>(m["CheckResultUrl"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckholdReason") != m.end() && !m["CheckholdReason"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CheckholdReason"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckholdReason"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checkholdReason = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RuleDetailUrlList") != m.end() && !m["RuleDetailUrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleDetailUrlList"].type()) {
        vector<SafeChangeCheckResponseBodyDataRuleDetailUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleDetailUrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeCheckResponseBodyDataRuleDetailUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleDetailUrlList = make_shared<vector<SafeChangeCheckResponseBodyDataRuleDetailUrlList>>(expect1);
      }
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeCheckResponseBodyData() = default;
};
class SafeChangeCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeCheckResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeCheckResponseBody() {}

  explicit SafeChangeCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeCheckResponseBodyData>(model1);
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


  virtual ~SafeChangeCheckResponseBody() = default;
};
class SafeChangeCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeCheckResponseBody> body{};

  SafeChangeCheckResponse() {}

  explicit SafeChangeCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeCheckResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeCheckResponse() = default;
};
class SafeChangeEndRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeResult{};
  shared_ptr<long> curBatchNo{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> totalBatchNo{};

  SafeChangeEndRequest() {}

  explicit SafeChangeEndRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeResult) {
      res["ChangeResult"] = boost::any(*changeResult);
    }
    if (curBatchNo) {
      res["CurBatchNo"] = boost::any(*curBatchNo);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (totalBatchNo) {
      res["TotalBatchNo"] = boost::any(*totalBatchNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeResult") != m.end() && !m["ChangeResult"].empty()) {
      changeResult = make_shared<string>(boost::any_cast<string>(m["ChangeResult"]));
    }
    if (m.find("CurBatchNo") != m.end() && !m["CurBatchNo"].empty()) {
      curBatchNo = make_shared<long>(boost::any_cast<long>(m["CurBatchNo"]));
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("TotalBatchNo") != m.end() && !m["TotalBatchNo"].empty()) {
      totalBatchNo = make_shared<long>(boost::any_cast<long>(m["TotalBatchNo"]));
    }
  }


  virtual ~SafeChangeEndRequest() = default;
};
class SafeChangeEndResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  SafeChangeEndResponseBodyData() {}

  explicit SafeChangeEndResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SafeChangeEndResponseBodyData() = default;
};
class SafeChangeEndResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeEndResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeEndResponseBody() {}

  explicit SafeChangeEndResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeEndResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeEndResponseBodyData>(model1);
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


  virtual ~SafeChangeEndResponseBody() = default;
};
class SafeChangeEndResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeEndResponseBody> body{};

  SafeChangeEndResponse() {}

  explicit SafeChangeEndResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeEndResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeEndResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeEndResponse() = default;
};
class SafeChangeQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<bool> needValidate{};
  shared_ptr<string> queryType{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<bool> returnType{};
  shared_ptr<string> sourceOrderId{};

  SafeChangeQueryRequest() {}

  explicit SafeChangeQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (needValidate) {
      res["NeedValidate"] = boost::any(*needValidate);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (returnType) {
      res["ReturnType"] = boost::any(*returnType);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("NeedValidate") != m.end() && !m["NeedValidate"].empty()) {
      needValidate = make_shared<bool>(boost::any_cast<bool>(m["NeedValidate"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("ReturnType") != m.end() && !m["ReturnType"].empty()) {
      returnType = make_shared<bool>(boost::any_cast<bool>(m["ReturnType"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeQueryRequest() = default;
};
class SafeChangeQueryResponseBodyDataChangeTimes : public Darabonba::Model {
public:
  shared_ptr<long> changeEndTime{};
  shared_ptr<long> changeStartTime{};

  SafeChangeQueryResponseBodyDataChangeTimes() {}

  explicit SafeChangeQueryResponseBodyDataChangeTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
  }


  virtual ~SafeChangeQueryResponseBodyDataChangeTimes() = default;
};
class SafeChangeQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveResultUrl{};
  shared_ptr<string> approveStatus{};
  shared_ptr<string> changeCancel{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptType{};
  shared_ptr<string> changeResult{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeStatus{};
  shared_ptr<string> changeSystem{};
  shared_ptr<vector<SafeChangeQueryResponseBodyDataChangeTimes>> changeTimes{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> checkResultUrl{};
  shared_ptr<string> checkStatus{};
  shared_ptr<vector<string>> checkholdReason{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<string> executorEmpName{};
  shared_ptr<string> sourceOrderId{};

  SafeChangeQueryResponseBodyData() {}

  explicit SafeChangeQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveResultUrl) {
      res["ApproveResultUrl"] = boost::any(*approveResultUrl);
    }
    if (approveStatus) {
      res["ApproveStatus"] = boost::any(*approveStatus);
    }
    if (changeCancel) {
      res["ChangeCancel"] = boost::any(*changeCancel);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeResult) {
      res["ChangeResult"] = boost::any(*changeResult);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeStatus) {
      res["ChangeStatus"] = boost::any(*changeStatus);
    }
    if (changeSystem) {
      res["ChangeSystem"] = boost::any(*changeSystem);
    }
    if (changeTimes) {
      vector<boost::any> temp1;
      for(auto item1:*changeTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeTimes"] = boost::any(temp1);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (checkResultUrl) {
      res["CheckResultUrl"] = boost::any(*checkResultUrl);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkholdReason) {
      res["CheckholdReason"] = boost::any(*checkholdReason);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (executorEmpName) {
      res["ExecutorEmpName"] = boost::any(*executorEmpName);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveResultUrl") != m.end() && !m["ApproveResultUrl"].empty()) {
      approveResultUrl = make_shared<string>(boost::any_cast<string>(m["ApproveResultUrl"]));
    }
    if (m.find("ApproveStatus") != m.end() && !m["ApproveStatus"].empty()) {
      approveStatus = make_shared<string>(boost::any_cast<string>(m["ApproveStatus"]));
    }
    if (m.find("ChangeCancel") != m.end() && !m["ChangeCancel"].empty()) {
      changeCancel = make_shared<string>(boost::any_cast<string>(m["ChangeCancel"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeResult") != m.end() && !m["ChangeResult"].empty()) {
      changeResult = make_shared<string>(boost::any_cast<string>(m["ChangeResult"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeStatus") != m.end() && !m["ChangeStatus"].empty()) {
      changeStatus = make_shared<string>(boost::any_cast<string>(m["ChangeStatus"]));
    }
    if (m.find("ChangeSystem") != m.end() && !m["ChangeSystem"].empty()) {
      changeSystem = make_shared<string>(boost::any_cast<string>(m["ChangeSystem"]));
    }
    if (m.find("ChangeTimes") != m.end() && !m["ChangeTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeTimes"].type()) {
        vector<SafeChangeQueryResponseBodyDataChangeTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeQueryResponseBodyDataChangeTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeTimes = make_shared<vector<SafeChangeQueryResponseBodyDataChangeTimes>>(expect1);
      }
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("CheckResultUrl") != m.end() && !m["CheckResultUrl"].empty()) {
      checkResultUrl = make_shared<string>(boost::any_cast<string>(m["CheckResultUrl"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckholdReason") != m.end() && !m["CheckholdReason"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CheckholdReason"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckholdReason"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checkholdReason = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ExecutorEmpName") != m.end() && !m["ExecutorEmpName"].empty()) {
      executorEmpName = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpName"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeQueryResponseBodyData() = default;
};
class SafeChangeQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeQueryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeQueryResponseBody() {}

  explicit SafeChangeQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeQueryResponseBodyData>(model1);
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


  virtual ~SafeChangeQueryResponseBody() = default;
};
class SafeChangeQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeQueryResponseBody> body{};

  SafeChangeQueryResponse() {}

  explicit SafeChangeQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeQueryResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeQueryResponse() = default;
};
class SafeChangeQueryApproveFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<string> stage{};

  SafeChangeQueryApproveFlowRequest() {}

  explicit SafeChangeQueryApproveFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
  }


  virtual ~SafeChangeQueryApproveFlowRequest() = default;
};
class SafeChangeQueryApproveFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveStrategy{};
  shared_ptr<string> approver{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeStatus{};

  SafeChangeQueryApproveFlowResponseBodyData() {}

  explicit SafeChangeQueryApproveFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveStrategy) {
      res["ApproveStrategy"] = boost::any(*approveStrategy);
    }
    if (approver) {
      res["Approver"] = boost::any(*approver);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveStrategy") != m.end() && !m["ApproveStrategy"].empty()) {
      approveStrategy = make_shared<string>(boost::any_cast<string>(m["ApproveStrategy"]));
    }
    if (m.find("Approver") != m.end() && !m["Approver"].empty()) {
      approver = make_shared<string>(boost::any_cast<string>(m["Approver"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
  }


  virtual ~SafeChangeQueryApproveFlowResponseBodyData() = default;
};
class SafeChangeQueryApproveFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<SafeChangeQueryApproveFlowResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeQueryApproveFlowResponseBody() {}

  explicit SafeChangeQueryApproveFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SafeChangeQueryApproveFlowResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SafeChangeQueryApproveFlowResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SafeChangeQueryApproveFlowResponseBodyData>>(expect1);
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


  virtual ~SafeChangeQueryApproveFlowResponseBody() = default;
};
class SafeChangeQueryApproveFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeQueryApproveFlowResponseBody> body{};

  SafeChangeQueryApproveFlowResponse() {}

  explicit SafeChangeQueryApproveFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeQueryApproveFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeQueryApproveFlowResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeQueryApproveFlowResponse() = default;
};
class SafeChangeStartRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> changeEndTime{};
  shared_ptr<string> changeObject{};
  shared_ptr<string> changeOptType{};
  shared_ptr<long> changeStartTime{};
  shared_ptr<string> changeTitle{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<long> curBatchNo{};
  shared_ptr<string> executorEmpId{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};
  shared_ptr<long> totalBatchNo{};

  SafeChangeStartRequest() {}

  explicit SafeChangeStartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    if (changeObject) {
      res["ChangeObject"] = boost::any(*changeObject);
    }
    if (changeOptType) {
      res["ChangeOptType"] = boost::any(*changeOptType);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeTitle) {
      res["ChangeTitle"] = boost::any(*changeTitle);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (curBatchNo) {
      res["CurBatchNo"] = boost::any(*curBatchNo);
    }
    if (executorEmpId) {
      res["ExecutorEmpId"] = boost::any(*executorEmpId);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    if (totalBatchNo) {
      res["TotalBatchNo"] = boost::any(*totalBatchNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<long>(boost::any_cast<long>(m["ChangeEndTime"]));
    }
    if (m.find("ChangeObject") != m.end() && !m["ChangeObject"].empty()) {
      changeObject = make_shared<string>(boost::any_cast<string>(m["ChangeObject"]));
    }
    if (m.find("ChangeOptType") != m.end() && !m["ChangeOptType"].empty()) {
      changeOptType = make_shared<string>(boost::any_cast<string>(m["ChangeOptType"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<long>(boost::any_cast<long>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeTitle") != m.end() && !m["ChangeTitle"].empty()) {
      changeTitle = make_shared<string>(boost::any_cast<string>(m["ChangeTitle"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("CurBatchNo") != m.end() && !m["CurBatchNo"].empty()) {
      curBatchNo = make_shared<long>(boost::any_cast<long>(m["CurBatchNo"]));
    }
    if (m.find("ExecutorEmpId") != m.end() && !m["ExecutorEmpId"].empty()) {
      executorEmpId = make_shared<string>(boost::any_cast<string>(m["ExecutorEmpId"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
    if (m.find("TotalBatchNo") != m.end() && !m["TotalBatchNo"].empty()) {
      totalBatchNo = make_shared<long>(boost::any_cast<long>(m["TotalBatchNo"]));
    }
  }


  virtual ~SafeChangeStartRequest() = default;
};
class SafeChangeStartResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveResultUrl{};
  shared_ptr<string> checkResultUrl{};
  shared_ptr<string> status{};
  shared_ptr<string> subSatus{};

  SafeChangeStartResponseBodyData() {}

  explicit SafeChangeStartResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveResultUrl) {
      res["ApproveResultUrl"] = boost::any(*approveResultUrl);
    }
    if (checkResultUrl) {
      res["CheckResultUrl"] = boost::any(*checkResultUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subSatus) {
      res["SubSatus"] = boost::any(*subSatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveResultUrl") != m.end() && !m["ApproveResultUrl"].empty()) {
      approveResultUrl = make_shared<string>(boost::any_cast<string>(m["ApproveResultUrl"]));
    }
    if (m.find("CheckResultUrl") != m.end() && !m["CheckResultUrl"].empty()) {
      checkResultUrl = make_shared<string>(boost::any_cast<string>(m["CheckResultUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubSatus") != m.end() && !m["SubSatus"].empty()) {
      subSatus = make_shared<string>(boost::any_cast<string>(m["SubSatus"]));
    }
  }


  virtual ~SafeChangeStartResponseBodyData() = default;
};
class SafeChangeStartResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeStartResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeStartResponseBody() {}

  explicit SafeChangeStartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeStartResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeStartResponseBodyData>(model1);
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


  virtual ~SafeChangeStartResponseBody() = default;
};
class SafeChangeStartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeStartResponseBody> body{};

  SafeChangeStartResponse() {}

  explicit SafeChangeStartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeStartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeStartResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeStartResponse() = default;
};
class SafeChangeStartApproveRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  SafeChangeStartApproveRequest() {}

  explicit SafeChangeStartApproveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~SafeChangeStartApproveRequest() = default;
};
class SafeChangeStartApproveResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> approveStatus{};

  SafeChangeStartApproveResponseBodyData() {}

  explicit SafeChangeStartApproveResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approveStatus) {
      res["ApproveStatus"] = boost::any(*approveStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApproveStatus") != m.end() && !m["ApproveStatus"].empty()) {
      approveStatus = make_shared<string>(boost::any_cast<string>(m["ApproveStatus"]));
    }
  }


  virtual ~SafeChangeStartApproveResponseBodyData() = default;
};
class SafeChangeStartApproveResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeChangeStartApproveResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeChangeStartApproveResponseBody() {}

  explicit SafeChangeStartApproveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeChangeStartApproveResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeChangeStartApproveResponseBodyData>(model1);
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


  virtual ~SafeChangeStartApproveResponseBody() = default;
};
class SafeChangeStartApproveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeChangeStartApproveResponseBody> body{};

  SafeChangeStartApproveResponse() {}

  explicit SafeChangeStartApproveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeChangeStartApproveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeChangeStartApproveResponseBody>(model1);
      }
    }
  }


  virtual ~SafeChangeStartApproveResponse() = default;
};
class SafeScopeDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> category{};
  shared_ptr<string> codeList{};
  shared_ptr<string> factor{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> idList{};
  shared_ptr<string> item{};
  shared_ptr<long> limit{};
  shared_ptr<bool> needTotalCount{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderDirection{};
  shared_ptr<long> page{};
  shared_ptr<string> parentCode{};
  shared_ptr<long> parentId{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionNameEn{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> searchValue{};
  shared_ptr<long> type{};
  shared_ptr<string> uid{};

  SafeScopeDataRequest() {}

  explicit SafeScopeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (codeList) {
      res["CodeList"] = boost::any(*codeList);
    }
    if (factor) {
      res["Factor"] = boost::any(*factor);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (idList) {
      res["IdList"] = boost::any(*idList);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (needTotalCount) {
      res["NeedTotalCount"] = boost::any(*needTotalCount);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderDirection) {
      res["OrderDirection"] = boost::any(*orderDirection);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionNameEn) {
      res["RegionNameEn"] = boost::any(*regionNameEn);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (searchValue) {
      res["SearchValue"] = boost::any(*searchValue);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CodeList") != m.end() && !m["CodeList"].empty()) {
      codeList = make_shared<string>(boost::any_cast<string>(m["CodeList"]));
    }
    if (m.find("Factor") != m.end() && !m["Factor"].empty()) {
      factor = make_shared<string>(boost::any_cast<string>(m["Factor"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("IdList") != m.end() && !m["IdList"].empty()) {
      idList = make_shared<string>(boost::any_cast<string>(m["IdList"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NeedTotalCount") != m.end() && !m["NeedTotalCount"].empty()) {
      needTotalCount = make_shared<bool>(boost::any_cast<bool>(m["NeedTotalCount"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderDirection") != m.end() && !m["OrderDirection"].empty()) {
      orderDirection = make_shared<string>(boost::any_cast<string>(m["OrderDirection"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionNameEn") != m.end() && !m["RegionNameEn"].empty()) {
      regionNameEn = make_shared<string>(boost::any_cast<string>(m["RegionNameEn"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SearchValue") != m.end() && !m["SearchValue"].empty()) {
      searchValue = make_shared<string>(boost::any_cast<string>(m["SearchValue"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SafeScopeDataRequest() = default;
};
class SafeScopeDataResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> page{};

  SafeScopeDataResponseBodyDataPagination() {}

  explicit SafeScopeDataResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~SafeScopeDataResponseBodyDataPagination() = default;
};
class SafeScopeDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> data{};
  shared_ptr<map<string, string>> extraInfo{};
  shared_ptr<SafeScopeDataResponseBodyDataPagination> pagination{};
  shared_ptr<long> total{};

  SafeScopeDataResponseBodyData() {}

  explicit SafeScopeDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (pagination) {
      res["Pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      data = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtraInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Pagination") != m.end() && !m["Pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pagination"].type()) {
        SafeScopeDataResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pagination"]));
        pagination = make_shared<SafeScopeDataResponseBodyDataPagination>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~SafeScopeDataResponseBodyData() = default;
};
class SafeScopeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SafeScopeDataResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SafeScopeDataResponseBody() {}

  explicit SafeScopeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SafeScopeDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SafeScopeDataResponseBodyData>(model1);
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


  virtual ~SafeScopeDataResponseBody() = default;
};
class SafeScopeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SafeScopeDataResponseBody> body{};

  SafeScopeDataResponse() {}

  explicit SafeScopeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SafeScopeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SafeScopeDataResponseBody>(model1);
      }
    }
  }


  virtual ~SafeScopeDataResponse() = default;
};
class StartApproveRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<string> creatorEmpId{};
  shared_ptr<string> extraInfo{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<string> sourceOrderId{};

  StartApproveRequest() {}

  explicit StartApproveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (creatorEmpId) {
      res["CreatorEmpId"] = boost::any(*creatorEmpId);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (sourceOrderId) {
      res["SourceOrderId"] = boost::any(*sourceOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("CreatorEmpId") != m.end() && !m["CreatorEmpId"].empty()) {
      creatorEmpId = make_shared<string>(boost::any_cast<string>(m["CreatorEmpId"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SourceOrderId") != m.end() && !m["SourceOrderId"].empty()) {
      sourceOrderId = make_shared<string>(boost::any_cast<string>(m["SourceOrderId"]));
    }
  }


  virtual ~StartApproveRequest() = default;
};
class StartApproveResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartApproveResponseBody() {}

  explicit StartApproveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartApproveResponseBody() = default;
};
class StartApproveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartApproveResponseBody> body{};

  StartApproveResponse() {}

  explicit StartApproveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartApproveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartApproveResponseBody>(model1);
      }
    }
  }


  virtual ~StartApproveResponse() = default;
};
class SyncProductRequestSyncProductListInnerProductList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  SyncProductRequestSyncProductListInnerProductList() {}

  explicit SyncProductRequestSyncProductListInnerProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SyncProductRequestSyncProductListInnerProductList() = default;
};
class SyncProductRequestSyncProductList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<SyncProductRequestSyncProductListInnerProductList>> innerProductList{};
  shared_ptr<string> name{};

  SyncProductRequestSyncProductList() {}

  explicit SyncProductRequestSyncProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (innerProductList) {
      vector<boost::any> temp1;
      for(auto item1:*innerProductList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InnerProductList"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InnerProductList") != m.end() && !m["InnerProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["InnerProductList"].type()) {
        vector<SyncProductRequestSyncProductListInnerProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InnerProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncProductRequestSyncProductListInnerProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        innerProductList = make_shared<vector<SyncProductRequestSyncProductListInnerProductList>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SyncProductRequestSyncProductList() = default;
};
class SyncProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> authSign{};
  shared_ptr<long> reqTimestamp{};
  shared_ptr<vector<SyncProductRequestSyncProductList>> syncProductList{};

  SyncProductRequest() {}

  explicit SyncProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authSign) {
      res["AuthSign"] = boost::any(*authSign);
    }
    if (reqTimestamp) {
      res["ReqTimestamp"] = boost::any(*reqTimestamp);
    }
    if (syncProductList) {
      vector<boost::any> temp1;
      for(auto item1:*syncProductList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SyncProductList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthSign") != m.end() && !m["AuthSign"].empty()) {
      authSign = make_shared<string>(boost::any_cast<string>(m["AuthSign"]));
    }
    if (m.find("ReqTimestamp") != m.end() && !m["ReqTimestamp"].empty()) {
      reqTimestamp = make_shared<long>(boost::any_cast<long>(m["ReqTimestamp"]));
    }
    if (m.find("SyncProductList") != m.end() && !m["SyncProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["SyncProductList"].type()) {
        vector<SyncProductRequestSyncProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SyncProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncProductRequestSyncProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        syncProductList = make_shared<vector<SyncProductRequestSyncProductList>>(expect1);
      }
    }
  }


  virtual ~SyncProductRequest() = default;
};
class SyncProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncProductResponseBody() {}

  explicit SyncProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncProductResponseBody() = default;
};
class SyncProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncProductResponseBody> body{};

  SyncProductResponse() {}

  explicit SyncProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncProductResponseBody>(model1);
      }
    }
  }


  virtual ~SyncProductResponse() = default;
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
  CancelBlockResponse cancelBlockWithOptions(shared_ptr<CancelBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBlockResponse cancelBlock(shared_ptr<CancelBlockRequest> request);
  ChangeCancelResponse changeCancelWithOptions(shared_ptr<ChangeCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeCancelResponse changeCancel(shared_ptr<ChangeCancelRequest> request);
  ChangeCheckResponse changeCheckWithOptions(shared_ptr<ChangeCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeCheckResponse changeCheck(shared_ptr<ChangeCheckRequest> request);
  ChangeEndResponse changeEndWithOptions(shared_ptr<ChangeEndRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeEndResponse changeEnd(shared_ptr<ChangeEndRequest> request);
  ChangeStartResponse changeStartWithOptions(shared_ptr<ChangeStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeStartResponse changeStart(shared_ptr<ChangeStartRequest> request);
  CreateBlockResponse createBlockWithOptions(shared_ptr<CreateBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBlockResponse createBlock(shared_ptr<CreateBlockRequest> request);
  CreateMaYiBlockResponse createMaYiBlockWithOptions(shared_ptr<CreateMaYiBlockRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMaYiBlockResponse createMaYiBlock(shared_ptr<CreateMaYiBlockRequest> request);
  CreateOperatorResponse createOperatorWithOptions(shared_ptr<CreateOperatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOperatorResponse createOperator(shared_ptr<CreateOperatorRequest> request);
  QueryResponse queryWithOptions(shared_ptr<QueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResponse query(shared_ptr<QueryRequest> request);
  QueryApproveFlowResponse queryApproveFlowWithOptions(shared_ptr<QueryApproveFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryApproveFlowResponse queryApproveFlow(shared_ptr<QueryApproveFlowRequest> request);
  QueryBlockEventResponse queryBlockEventWithOptions(shared_ptr<QueryBlockEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBlockEventResponse queryBlockEvent(shared_ptr<QueryBlockEventRequest> request);
  QueryChangeInfoResponse queryChangeInfoWithOptions(shared_ptr<QueryChangeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChangeInfoResponse queryChangeInfo(shared_ptr<QueryChangeInfoRequest> request);
  QueryCheckInfoResponse queryCheckInfoWithOptions(shared_ptr<QueryCheckInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCheckInfoResponse queryCheckInfo(shared_ptr<QueryCheckInfoRequest> request);
  QueryCustomerResponse queryCustomerWithOptions(shared_ptr<QueryCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCustomerResponse queryCustomer(shared_ptr<QueryCustomerRequest> request);
  QueryExecuteInfoResponse queryExecuteInfoWithOptions(shared_ptr<QueryExecuteInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryExecuteInfoResponse queryExecuteInfo(shared_ptr<QueryExecuteInfoRequest> request);
  QueryInnerProductInfoResponse queryInnerProductInfoWithOptions(shared_ptr<QueryInnerProductInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInnerProductInfoResponse queryInnerProductInfo(shared_ptr<QueryInnerProductInfoRequest> request);
  QueryRegionAzResponse queryRegionAzWithOptions(shared_ptr<QueryRegionAzRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRegionAzResponse queryRegionAz(shared_ptr<QueryRegionAzRequest> request);
  SafeChangeCancelResponse safeChangeCancelWithOptions(shared_ptr<SafeChangeCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeCancelResponse safeChangeCancel(shared_ptr<SafeChangeCancelRequest> request);
  SafeChangeCheckResponse safeChangeCheckWithOptions(shared_ptr<SafeChangeCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeCheckResponse safeChangeCheck(shared_ptr<SafeChangeCheckRequest> request);
  SafeChangeEndResponse safeChangeEndWithOptions(shared_ptr<SafeChangeEndRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeEndResponse safeChangeEnd(shared_ptr<SafeChangeEndRequest> request);
  SafeChangeQueryResponse safeChangeQueryWithOptions(shared_ptr<SafeChangeQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeQueryResponse safeChangeQuery(shared_ptr<SafeChangeQueryRequest> request);
  SafeChangeQueryApproveFlowResponse safeChangeQueryApproveFlowWithOptions(shared_ptr<SafeChangeQueryApproveFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeQueryApproveFlowResponse safeChangeQueryApproveFlow(shared_ptr<SafeChangeQueryApproveFlowRequest> request);
  SafeChangeStartResponse safeChangeStartWithOptions(shared_ptr<SafeChangeStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeStartResponse safeChangeStart(shared_ptr<SafeChangeStartRequest> request);
  SafeChangeStartApproveResponse safeChangeStartApproveWithOptions(shared_ptr<SafeChangeStartApproveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeChangeStartApproveResponse safeChangeStartApprove(shared_ptr<SafeChangeStartApproveRequest> request);
  SafeScopeDataResponse safeScopeDataWithOptions(shared_ptr<SafeScopeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SafeScopeDataResponse safeScopeData(shared_ptr<SafeScopeDataRequest> request);
  StartApproveResponse startApproveWithOptions(shared_ptr<StartApproveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartApproveResponse startApprove(shared_ptr<StartApproveRequest> request);
  SyncProductResponse syncProductWithOptions(shared_ptr<SyncProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncProductResponse syncProduct(shared_ptr<SyncProductRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Safe20220117

#endif
