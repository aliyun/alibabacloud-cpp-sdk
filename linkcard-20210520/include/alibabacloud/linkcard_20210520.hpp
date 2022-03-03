// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKCARD20210520_H_
#define ALIBABACLOUD_LINKCARD20210520_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkcard20210520 {
class GetCardDetailRequest : public Darabonba::Model {
public:
  shared_ptr<bool> destroyCard{};
  shared_ptr<string> iccid{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> showPsim{};

  GetCardDetailRequest() {}

  explicit GetCardDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destroyCard) {
      res["DestroyCard"] = boost::any(*destroyCard);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (showPsim) {
      res["ShowPsim"] = boost::any(*showPsim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestroyCard") != m.end() && !m["DestroyCard"].empty()) {
      destroyCard = make_shared<bool>(boost::any_cast<bool>(m["DestroyCard"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ShowPsim") != m.end() && !m["ShowPsim"].empty()) {
      showPsim = make_shared<bool>(boost::any_cast<bool>(m["ShowPsim"]));
    }
  }


  virtual ~GetCardDetailRequest() = default;
};
class GetCardDetailResponseBodyDataListPsimCards : public Darabonba::Model {
public:
  shared_ptr<string> apnName{};
  shared_ptr<string> certifyStatus{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> imsi{};
  shared_ptr<vector<string>> msisdn{};
  shared_ptr<string> osStatus{};
  shared_ptr<string> periodAddFlow{};
  shared_ptr<string> periodSmsUse{};
  shared_ptr<string> privateNetworkSegment{};
  shared_ptr<string> status{};
  shared_ptr<string> vendor{};

  GetCardDetailResponseBodyDataListPsimCards() {}

  explicit GetCardDetailResponseBodyDataListPsimCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (periodAddFlow) {
      res["PeriodAddFlow"] = boost::any(*periodAddFlow);
    }
    if (periodSmsUse) {
      res["PeriodSmsUse"] = boost::any(*periodSmsUse);
    }
    if (privateNetworkSegment) {
      res["PrivateNetworkSegment"] = boost::any(*privateNetworkSegment);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<string>(boost::any_cast<string>(m["CertifyStatus"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imsi"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imsi"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imsi = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Msisdn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Msisdn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msisdn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("PeriodAddFlow") != m.end() && !m["PeriodAddFlow"].empty()) {
      periodAddFlow = make_shared<string>(boost::any_cast<string>(m["PeriodAddFlow"]));
    }
    if (m.find("PeriodSmsUse") != m.end() && !m["PeriodSmsUse"].empty()) {
      periodSmsUse = make_shared<string>(boost::any_cast<string>(m["PeriodSmsUse"]));
    }
    if (m.find("PrivateNetworkSegment") != m.end() && !m["PrivateNetworkSegment"].empty()) {
      privateNetworkSegment = make_shared<string>(boost::any_cast<string>(m["PrivateNetworkSegment"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataListPsimCards() = default;
};
class GetCardDetailResponseBodyDataVsimCardInfoTagList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> tagName{};

  GetCardDetailResponseBodyDataVsimCardInfoTagList() {}

  explicit GetCardDetailResponseBodyDataVsimCardInfoTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataVsimCardInfoTagList() = default;
};
class GetCardDetailResponseBodyDataVsimCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> activeTime{};
  shared_ptr<string> activeType{};
  shared_ptr<string> aliFee{};
  shared_ptr<string> aliyunOrderId{};
  shared_ptr<string> apnName{};
  shared_ptr<bool> autoLimitResume{};
  shared_ptr<bool> autoRebindReuse{};
  shared_ptr<long> cardLimitSpeedThreshold{};
  shared_ptr<long> cardLimitStopThreshold{};
  shared_ptr<string> certifyStatus{};
  shared_ptr<string> certifyType{};
  shared_ptr<string> credentialInstanceId{};
  shared_ptr<long> credentialLimitSpeedThreshold{};
  shared_ptr<long> credentialLimitStopThreshold{};
  shared_ptr<string> credentialNo{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> dataLevel{};
  shared_ptr<string> dataType{};
  shared_ptr<string> deviceImei{};
  shared_ptr<string> directionalGroupId{};
  shared_ptr<string> directionalGroupName{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> flowThresholdUnit{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> imsi{};
  shared_ptr<bool> isAutoRecharge{};
  shared_ptr<vector<string>> msisdn{};
  shared_ptr<string> notifyId{};
  shared_ptr<string> openAccountTime{};
  shared_ptr<string> osStatus{};
  shared_ptr<string> period{};
  shared_ptr<string> periodAddFlow{};
  shared_ptr<string> periodRestFlow{};
  shared_ptr<string> periodSmsUse{};
  shared_ptr<string> privateNetworkSegment{};
  shared_ptr<string> simType{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetCardDetailResponseBodyDataVsimCardInfoTagList>> tagList{};
  shared_ptr<string> vendor{};
  shared_ptr<long> vsimInstanceId{};

  GetCardDetailResponseBodyDataVsimCardInfo() {}

  explicit GetCardDetailResponseBodyDataVsimCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeTime) {
      res["ActiveTime"] = boost::any(*activeTime);
    }
    if (activeType) {
      res["ActiveType"] = boost::any(*activeType);
    }
    if (aliFee) {
      res["AliFee"] = boost::any(*aliFee);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (apnName) {
      res["ApnName"] = boost::any(*apnName);
    }
    if (autoLimitResume) {
      res["AutoLimitResume"] = boost::any(*autoLimitResume);
    }
    if (autoRebindReuse) {
      res["AutoRebindReuse"] = boost::any(*autoRebindReuse);
    }
    if (cardLimitSpeedThreshold) {
      res["CardLimitSpeedThreshold"] = boost::any(*cardLimitSpeedThreshold);
    }
    if (cardLimitStopThreshold) {
      res["CardLimitStopThreshold"] = boost::any(*cardLimitStopThreshold);
    }
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (certifyType) {
      res["CertifyType"] = boost::any(*certifyType);
    }
    if (credentialInstanceId) {
      res["CredentialInstanceId"] = boost::any(*credentialInstanceId);
    }
    if (credentialLimitSpeedThreshold) {
      res["CredentialLimitSpeedThreshold"] = boost::any(*credentialLimitSpeedThreshold);
    }
    if (credentialLimitStopThreshold) {
      res["CredentialLimitStopThreshold"] = boost::any(*credentialLimitStopThreshold);
    }
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (dataLevel) {
      res["DataLevel"] = boost::any(*dataLevel);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (deviceImei) {
      res["DeviceImei"] = boost::any(*deviceImei);
    }
    if (directionalGroupId) {
      res["DirectionalGroupId"] = boost::any(*directionalGroupId);
    }
    if (directionalGroupName) {
      res["DirectionalGroupName"] = boost::any(*directionalGroupName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (flowThresholdUnit) {
      res["FlowThresholdUnit"] = boost::any(*flowThresholdUnit);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (isAutoRecharge) {
      res["IsAutoRecharge"] = boost::any(*isAutoRecharge);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
    }
    if (notifyId) {
      res["NotifyId"] = boost::any(*notifyId);
    }
    if (openAccountTime) {
      res["OpenAccountTime"] = boost::any(*openAccountTime);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodAddFlow) {
      res["PeriodAddFlow"] = boost::any(*periodAddFlow);
    }
    if (periodRestFlow) {
      res["PeriodRestFlow"] = boost::any(*periodRestFlow);
    }
    if (periodSmsUse) {
      res["PeriodSmsUse"] = boost::any(*periodSmsUse);
    }
    if (privateNetworkSegment) {
      res["PrivateNetworkSegment"] = boost::any(*privateNetworkSegment);
    }
    if (simType) {
      res["SimType"] = boost::any(*simType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    if (vsimInstanceId) {
      res["VsimInstanceId"] = boost::any(*vsimInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveTime") != m.end() && !m["ActiveTime"].empty()) {
      activeTime = make_shared<string>(boost::any_cast<string>(m["ActiveTime"]));
    }
    if (m.find("ActiveType") != m.end() && !m["ActiveType"].empty()) {
      activeType = make_shared<string>(boost::any_cast<string>(m["ActiveType"]));
    }
    if (m.find("AliFee") != m.end() && !m["AliFee"].empty()) {
      aliFee = make_shared<string>(boost::any_cast<string>(m["AliFee"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<string>(boost::any_cast<string>(m["AliyunOrderId"]));
    }
    if (m.find("ApnName") != m.end() && !m["ApnName"].empty()) {
      apnName = make_shared<string>(boost::any_cast<string>(m["ApnName"]));
    }
    if (m.find("AutoLimitResume") != m.end() && !m["AutoLimitResume"].empty()) {
      autoLimitResume = make_shared<bool>(boost::any_cast<bool>(m["AutoLimitResume"]));
    }
    if (m.find("AutoRebindReuse") != m.end() && !m["AutoRebindReuse"].empty()) {
      autoRebindReuse = make_shared<bool>(boost::any_cast<bool>(m["AutoRebindReuse"]));
    }
    if (m.find("CardLimitSpeedThreshold") != m.end() && !m["CardLimitSpeedThreshold"].empty()) {
      cardLimitSpeedThreshold = make_shared<long>(boost::any_cast<long>(m["CardLimitSpeedThreshold"]));
    }
    if (m.find("CardLimitStopThreshold") != m.end() && !m["CardLimitStopThreshold"].empty()) {
      cardLimitStopThreshold = make_shared<long>(boost::any_cast<long>(m["CardLimitStopThreshold"]));
    }
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<string>(boost::any_cast<string>(m["CertifyStatus"]));
    }
    if (m.find("CertifyType") != m.end() && !m["CertifyType"].empty()) {
      certifyType = make_shared<string>(boost::any_cast<string>(m["CertifyType"]));
    }
    if (m.find("CredentialInstanceId") != m.end() && !m["CredentialInstanceId"].empty()) {
      credentialInstanceId = make_shared<string>(boost::any_cast<string>(m["CredentialInstanceId"]));
    }
    if (m.find("CredentialLimitSpeedThreshold") != m.end() && !m["CredentialLimitSpeedThreshold"].empty()) {
      credentialLimitSpeedThreshold = make_shared<long>(boost::any_cast<long>(m["CredentialLimitSpeedThreshold"]));
    }
    if (m.find("CredentialLimitStopThreshold") != m.end() && !m["CredentialLimitStopThreshold"].empty()) {
      credentialLimitStopThreshold = make_shared<long>(boost::any_cast<long>(m["CredentialLimitStopThreshold"]));
    }
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DataLevel") != m.end() && !m["DataLevel"].empty()) {
      dataLevel = make_shared<string>(boost::any_cast<string>(m["DataLevel"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DeviceImei") != m.end() && !m["DeviceImei"].empty()) {
      deviceImei = make_shared<string>(boost::any_cast<string>(m["DeviceImei"]));
    }
    if (m.find("DirectionalGroupId") != m.end() && !m["DirectionalGroupId"].empty()) {
      directionalGroupId = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupId"]));
    }
    if (m.find("DirectionalGroupName") != m.end() && !m["DirectionalGroupName"].empty()) {
      directionalGroupName = make_shared<string>(boost::any_cast<string>(m["DirectionalGroupName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("FlowThresholdUnit") != m.end() && !m["FlowThresholdUnit"].empty()) {
      flowThresholdUnit = make_shared<string>(boost::any_cast<string>(m["FlowThresholdUnit"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Imsi"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Imsi"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imsi = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsAutoRecharge") != m.end() && !m["IsAutoRecharge"].empty()) {
      isAutoRecharge = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRecharge"]));
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Msisdn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Msisdn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msisdn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyId") != m.end() && !m["NotifyId"].empty()) {
      notifyId = make_shared<string>(boost::any_cast<string>(m["NotifyId"]));
    }
    if (m.find("OpenAccountTime") != m.end() && !m["OpenAccountTime"].empty()) {
      openAccountTime = make_shared<string>(boost::any_cast<string>(m["OpenAccountTime"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<string>(boost::any_cast<string>(m["OsStatus"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodAddFlow") != m.end() && !m["PeriodAddFlow"].empty()) {
      periodAddFlow = make_shared<string>(boost::any_cast<string>(m["PeriodAddFlow"]));
    }
    if (m.find("PeriodRestFlow") != m.end() && !m["PeriodRestFlow"].empty()) {
      periodRestFlow = make_shared<string>(boost::any_cast<string>(m["PeriodRestFlow"]));
    }
    if (m.find("PeriodSmsUse") != m.end() && !m["PeriodSmsUse"].empty()) {
      periodSmsUse = make_shared<string>(boost::any_cast<string>(m["PeriodSmsUse"]));
    }
    if (m.find("PrivateNetworkSegment") != m.end() && !m["PrivateNetworkSegment"].empty()) {
      privateNetworkSegment = make_shared<string>(boost::any_cast<string>(m["PrivateNetworkSegment"]));
    }
    if (m.find("SimType") != m.end() && !m["SimType"].empty()) {
      simType = make_shared<string>(boost::any_cast<string>(m["SimType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<GetCardDetailResponseBodyDataVsimCardInfoTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardDetailResponseBodyDataVsimCardInfoTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<GetCardDetailResponseBodyDataVsimCardInfoTagList>>(expect1);
      }
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
    if (m.find("VsimInstanceId") != m.end() && !m["VsimInstanceId"].empty()) {
      vsimInstanceId = make_shared<long>(boost::any_cast<long>(m["VsimInstanceId"]));
    }
  }


  virtual ~GetCardDetailResponseBodyDataVsimCardInfo() = default;
};
class GetCardDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCardDetailResponseBodyDataListPsimCards>> listPsimCards{};
  shared_ptr<GetCardDetailResponseBodyDataVsimCardInfo> vsimCardInfo{};

  GetCardDetailResponseBodyData() {}

  explicit GetCardDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listPsimCards) {
      vector<boost::any> temp1;
      for(auto item1:*listPsimCards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListPsimCards"] = boost::any(temp1);
    }
    if (vsimCardInfo) {
      res["VsimCardInfo"] = vsimCardInfo ? boost::any(vsimCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListPsimCards") != m.end() && !m["ListPsimCards"].empty()) {
      if (typeid(vector<boost::any>) == m["ListPsimCards"].type()) {
        vector<GetCardDetailResponseBodyDataListPsimCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListPsimCards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardDetailResponseBodyDataListPsimCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listPsimCards = make_shared<vector<GetCardDetailResponseBodyDataListPsimCards>>(expect1);
      }
    }
    if (m.find("VsimCardInfo") != m.end() && !m["VsimCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VsimCardInfo"].type()) {
        GetCardDetailResponseBodyDataVsimCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VsimCardInfo"]));
        vsimCardInfo = make_shared<GetCardDetailResponseBodyDataVsimCardInfo>(model1);
      }
    }
  }


  virtual ~GetCardDetailResponseBodyData() = default;
};
class GetCardDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCardDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCardDetailResponseBody() {}

  explicit GetCardDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        GetCardDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCardDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCardDetailResponseBody() = default;
};
class GetCardDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCardDetailResponseBody> body{};

  GetCardDetailResponse() {}

  explicit GetCardDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardDetailResponse() = default;
};
class GetCardFlowInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateList{};
  shared_ptr<string> iccid{};

  GetCardFlowInfoRequest() {}

  explicit GetCardFlowInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateList) {
      res["DateList"] = boost::any(*dateList);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateList") != m.end() && !m["DateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~GetCardFlowInfoRequest() = default;
};
class GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow : public Darabonba::Model {
public:
  shared_ptr<string> day{};
  shared_ptr<string> flow{};

  GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow() {}

  explicit GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow() = default;
};
class GetCardFlowInfoResponseBodyDataListCardMonthFlow : public Darabonba::Model {
public:
  shared_ptr<string> flowCount{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow>> listDayFlow{};
  shared_ptr<string> month{};

  GetCardFlowInfoResponseBodyDataListCardMonthFlow() {}

  explicit GetCardFlowInfoResponseBodyDataListCardMonthFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCount) {
      res["FlowCount"] = boost::any(*flowCount);
    }
    if (listDayFlow) {
      vector<boost::any> temp1;
      for(auto item1:*listDayFlow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListDayFlow"] = boost::any(temp1);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCount") != m.end() && !m["FlowCount"].empty()) {
      flowCount = make_shared<string>(boost::any_cast<string>(m["FlowCount"]));
    }
    if (m.find("ListDayFlow") != m.end() && !m["ListDayFlow"].empty()) {
      if (typeid(vector<boost::any>) == m["ListDayFlow"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListDayFlow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listDayFlow = make_shared<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlowListDayFlow>>(expect1);
      }
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListCardMonthFlow() = default;
};
class GetCardFlowInfoResponseBodyDataListPackageDTO : public Darabonba::Model {
public:
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> packageName{};
  shared_ptr<string> remark{};

  GetCardFlowInfoResponseBodyDataListPackageDTO() {}

  explicit GetCardFlowInfoResponseBodyDataListPackageDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListPackageDTO() = default;
};
class GetCardFlowInfoResponseBodyDataListVendorDetail : public Darabonba::Model {
public:
  shared_ptr<string> netWorkDelay{};
  shared_ptr<string> signalStrength{};
  shared_ptr<string> vendor{};

  GetCardFlowInfoResponseBodyDataListVendorDetail() {}

  explicit GetCardFlowInfoResponseBodyDataListVendorDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netWorkDelay) {
      res["NetWorkDelay"] = boost::any(*netWorkDelay);
    }
    if (signalStrength) {
      res["SignalStrength"] = boost::any(*signalStrength);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetWorkDelay") != m.end() && !m["NetWorkDelay"].empty()) {
      netWorkDelay = make_shared<string>(boost::any_cast<string>(m["NetWorkDelay"]));
    }
    if (m.find("SignalStrength") != m.end() && !m["SignalStrength"].empty()) {
      signalStrength = make_shared<string>(boost::any_cast<string>(m["SignalStrength"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBodyDataListVendorDetail() = default;
};
class GetCardFlowInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow>> listCardMonthFlow{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListPackageDTO>> listPackageDTO{};
  shared_ptr<vector<GetCardFlowInfoResponseBodyDataListVendorDetail>> listVendorDetail{};

  GetCardFlowInfoResponseBodyData() {}

  explicit GetCardFlowInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listCardMonthFlow) {
      vector<boost::any> temp1;
      for(auto item1:*listCardMonthFlow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListCardMonthFlow"] = boost::any(temp1);
    }
    if (listPackageDTO) {
      vector<boost::any> temp1;
      for(auto item1:*listPackageDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListPackageDTO"] = boost::any(temp1);
    }
    if (listVendorDetail) {
      vector<boost::any> temp1;
      for(auto item1:*listVendorDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListVendorDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListCardMonthFlow") != m.end() && !m["ListCardMonthFlow"].empty()) {
      if (typeid(vector<boost::any>) == m["ListCardMonthFlow"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListCardMonthFlow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListCardMonthFlow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listCardMonthFlow = make_shared<vector<GetCardFlowInfoResponseBodyDataListCardMonthFlow>>(expect1);
      }
    }
    if (m.find("ListPackageDTO") != m.end() && !m["ListPackageDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["ListPackageDTO"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListPackageDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListPackageDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListPackageDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listPackageDTO = make_shared<vector<GetCardFlowInfoResponseBodyDataListPackageDTO>>(expect1);
      }
    }
    if (m.find("ListVendorDetail") != m.end() && !m["ListVendorDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ListVendorDetail"].type()) {
        vector<GetCardFlowInfoResponseBodyDataListVendorDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListVendorDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCardFlowInfoResponseBodyDataListVendorDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listVendorDetail = make_shared<vector<GetCardFlowInfoResponseBodyDataListVendorDetail>>(expect1);
      }
    }
  }


  virtual ~GetCardFlowInfoResponseBodyData() = default;
};
class GetCardFlowInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCardFlowInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCardFlowInfoResponseBody() {}

  explicit GetCardFlowInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
        GetCardFlowInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCardFlowInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCardFlowInfoResponseBody() = default;
};
class GetCardFlowInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCardFlowInfoResponseBody> body{};

  GetCardFlowInfoResponse() {}

  explicit GetCardFlowInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardFlowInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardFlowInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardFlowInfoResponse() = default;
};
class GetCredentialPoolStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialNO{};
  shared_ptr<string> date{};

  GetCredentialPoolStatisticsRequest() {}

  explicit GetCredentialPoolStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialNO) {
      res["CredentialNO"] = boost::any(*credentialNO);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialNO") != m.end() && !m["CredentialNO"].empty()) {
      credentialNO = make_shared<string>(boost::any_cast<string>(m["CredentialNO"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~GetCredentialPoolStatisticsRequest() = default;
};
class GetCredentialPoolStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> cardActiveNum{};
  shared_ptr<long> cardTotalNum{};
  shared_ptr<string> credentialInstanceId{};
  shared_ptr<string> credentialNO{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> effectiveAvailableFlow{};
  shared_ptr<string> effectiveTotalFlow{};
  shared_ptr<long> monthFeatureFee{};
  shared_ptr<string> poolAvaiable{};
  shared_ptr<string> poolGrandTotal{};
  shared_ptr<string> poolGrandTotalUsed{};
  shared_ptr<string> poolOutUsed{};
  shared_ptr<string> poolUsed{};
  shared_ptr<long> smsUsed{};

  GetCredentialPoolStatisticsResponseBodyData() {}

  explicit GetCredentialPoolStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardActiveNum) {
      res["CardActiveNum"] = boost::any(*cardActiveNum);
    }
    if (cardTotalNum) {
      res["CardTotalNum"] = boost::any(*cardTotalNum);
    }
    if (credentialInstanceId) {
      res["CredentialInstanceId"] = boost::any(*credentialInstanceId);
    }
    if (credentialNO) {
      res["CredentialNO"] = boost::any(*credentialNO);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (effectiveAvailableFlow) {
      res["EffectiveAvailableFlow"] = boost::any(*effectiveAvailableFlow);
    }
    if (effectiveTotalFlow) {
      res["EffectiveTotalFlow"] = boost::any(*effectiveTotalFlow);
    }
    if (monthFeatureFee) {
      res["MonthFeatureFee"] = boost::any(*monthFeatureFee);
    }
    if (poolAvaiable) {
      res["PoolAvaiable"] = boost::any(*poolAvaiable);
    }
    if (poolGrandTotal) {
      res["PoolGrandTotal"] = boost::any(*poolGrandTotal);
    }
    if (poolGrandTotalUsed) {
      res["PoolGrandTotalUsed"] = boost::any(*poolGrandTotalUsed);
    }
    if (poolOutUsed) {
      res["PoolOutUsed"] = boost::any(*poolOutUsed);
    }
    if (poolUsed) {
      res["PoolUsed"] = boost::any(*poolUsed);
    }
    if (smsUsed) {
      res["SmsUsed"] = boost::any(*smsUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardActiveNum") != m.end() && !m["CardActiveNum"].empty()) {
      cardActiveNum = make_shared<long>(boost::any_cast<long>(m["CardActiveNum"]));
    }
    if (m.find("CardTotalNum") != m.end() && !m["CardTotalNum"].empty()) {
      cardTotalNum = make_shared<long>(boost::any_cast<long>(m["CardTotalNum"]));
    }
    if (m.find("CredentialInstanceId") != m.end() && !m["CredentialInstanceId"].empty()) {
      credentialInstanceId = make_shared<string>(boost::any_cast<string>(m["CredentialInstanceId"]));
    }
    if (m.find("CredentialNO") != m.end() && !m["CredentialNO"].empty()) {
      credentialNO = make_shared<string>(boost::any_cast<string>(m["CredentialNO"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("EffectiveAvailableFlow") != m.end() && !m["EffectiveAvailableFlow"].empty()) {
      effectiveAvailableFlow = make_shared<string>(boost::any_cast<string>(m["EffectiveAvailableFlow"]));
    }
    if (m.find("EffectiveTotalFlow") != m.end() && !m["EffectiveTotalFlow"].empty()) {
      effectiveTotalFlow = make_shared<string>(boost::any_cast<string>(m["EffectiveTotalFlow"]));
    }
    if (m.find("MonthFeatureFee") != m.end() && !m["MonthFeatureFee"].empty()) {
      monthFeatureFee = make_shared<long>(boost::any_cast<long>(m["MonthFeatureFee"]));
    }
    if (m.find("PoolAvaiable") != m.end() && !m["PoolAvaiable"].empty()) {
      poolAvaiable = make_shared<string>(boost::any_cast<string>(m["PoolAvaiable"]));
    }
    if (m.find("PoolGrandTotal") != m.end() && !m["PoolGrandTotal"].empty()) {
      poolGrandTotal = make_shared<string>(boost::any_cast<string>(m["PoolGrandTotal"]));
    }
    if (m.find("PoolGrandTotalUsed") != m.end() && !m["PoolGrandTotalUsed"].empty()) {
      poolGrandTotalUsed = make_shared<string>(boost::any_cast<string>(m["PoolGrandTotalUsed"]));
    }
    if (m.find("PoolOutUsed") != m.end() && !m["PoolOutUsed"].empty()) {
      poolOutUsed = make_shared<string>(boost::any_cast<string>(m["PoolOutUsed"]));
    }
    if (m.find("PoolUsed") != m.end() && !m["PoolUsed"].empty()) {
      poolUsed = make_shared<string>(boost::any_cast<string>(m["PoolUsed"]));
    }
    if (m.find("SmsUsed") != m.end() && !m["SmsUsed"].empty()) {
      smsUsed = make_shared<long>(boost::any_cast<long>(m["SmsUsed"]));
    }
  }


  virtual ~GetCredentialPoolStatisticsResponseBodyData() = default;
};
class GetCredentialPoolStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCredentialPoolStatisticsResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCredentialPoolStatisticsResponseBody() {}

  explicit GetCredentialPoolStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCredentialPoolStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCredentialPoolStatisticsResponseBodyData>(model1);
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


  virtual ~GetCredentialPoolStatisticsResponseBody() = default;
};
class GetCredentialPoolStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCredentialPoolStatisticsResponseBody> body{};

  GetCredentialPoolStatisticsResponse() {}

  explicit GetCredentialPoolStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCredentialPoolStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCredentialPoolStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetCredentialPoolStatisticsResponse() = default;
};
class RebindResumeSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  RebindResumeSingleCardRequest() {}

  explicit RebindResumeSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RebindResumeSingleCardRequest() = default;
};
class RebindResumeSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  RebindResumeSingleCardShrinkRequest() {}

  explicit RebindResumeSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~RebindResumeSingleCardShrinkRequest() = default;
};
class RebindResumeSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RebindResumeSingleCardResponseBody() {}

  explicit RebindResumeSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RebindResumeSingleCardResponseBody() = default;
};
class RebindResumeSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RebindResumeSingleCardResponseBody> body{};

  RebindResumeSingleCardResponse() {}

  explicit RebindResumeSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebindResumeSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebindResumeSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~RebindResumeSingleCardResponse() = default;
};
class ResumeSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  ResumeSingleCardRequest() {}

  explicit ResumeSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ResumeSingleCardRequest() = default;
};
class ResumeSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  ResumeSingleCardShrinkRequest() {}

  explicit ResumeSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~ResumeSingleCardShrinkRequest() = default;
};
class ResumeSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResumeSingleCardResponseBody() {}

  explicit ResumeSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResumeSingleCardResponseBody() = default;
};
class ResumeSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeSingleCardResponseBody> body{};

  ResumeSingleCardResponse() {}

  explicit ResumeSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeSingleCardResponse() = default;
};
class StopSingleCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<map<string, boost::any>> optMsisdns{};

  StopSingleCardRequest() {}

  explicit StopSingleCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdns) {
      res["OptMsisdns"] = boost::any(*optMsisdns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptMsisdns"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optMsisdns = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~StopSingleCardRequest() = default;
};
class StopSingleCardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};
  shared_ptr<string> optMsisdnsShrink{};

  StopSingleCardShrinkRequest() {}

  explicit StopSingleCardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (optMsisdnsShrink) {
      res["OptMsisdns"] = boost::any(*optMsisdnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("OptMsisdns") != m.end() && !m["OptMsisdns"].empty()) {
      optMsisdnsShrink = make_shared<string>(boost::any_cast<string>(m["OptMsisdns"]));
    }
  }


  virtual ~StopSingleCardShrinkRequest() = default;
};
class StopSingleCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> localizedMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopSingleCardResponseBody() {}

  explicit StopSingleCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (localizedMessage) {
      res["LocalizedMessage"] = boost::any(*localizedMessage);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LocalizedMessage") != m.end() && !m["LocalizedMessage"].empty()) {
      localizedMessage = make_shared<string>(boost::any_cast<string>(m["LocalizedMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopSingleCardResponseBody() = default;
};
class StopSingleCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopSingleCardResponseBody> body{};

  StopSingleCardResponse() {}

  explicit StopSingleCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopSingleCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopSingleCardResponseBody>(model1);
      }
    }
  }


  virtual ~StopSingleCardResponse() = default;
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
  GetCardDetailResponse getCardDetailWithOptions(shared_ptr<GetCardDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardDetailResponse getCardDetail(shared_ptr<GetCardDetailRequest> request);
  GetCardFlowInfoResponse getCardFlowInfoWithOptions(shared_ptr<GetCardFlowInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardFlowInfoResponse getCardFlowInfo(shared_ptr<GetCardFlowInfoRequest> request);
  GetCredentialPoolStatisticsResponse getCredentialPoolStatisticsWithOptions(shared_ptr<GetCredentialPoolStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCredentialPoolStatisticsResponse getCredentialPoolStatistics(shared_ptr<GetCredentialPoolStatisticsRequest> request);
  RebindResumeSingleCardResponse rebindResumeSingleCardWithOptions(shared_ptr<RebindResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebindResumeSingleCardResponse rebindResumeSingleCard(shared_ptr<RebindResumeSingleCardRequest> request);
  ResumeSingleCardResponse resumeSingleCardWithOptions(shared_ptr<ResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeSingleCardResponse resumeSingleCard(shared_ptr<ResumeSingleCardRequest> request);
  StopSingleCardResponse stopSingleCardWithOptions(shared_ptr<StopSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopSingleCardResponse stopSingleCard(shared_ptr<StopSingleCardRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkcard20210520

#endif
