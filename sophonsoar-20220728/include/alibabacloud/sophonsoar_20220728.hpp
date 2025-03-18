// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SOPHONSOAR20220728_H_
#define ALIBABACLOUD_SOPHONSOAR20220728_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sophonsoar20220728 {
class BatchModifyInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  BatchModifyInstanceStatusRequest() {}

  explicit BatchModifyInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~BatchModifyInstanceStatusRequest() = default;
};
class BatchModifyInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchModifyInstanceStatusResponseBody() {}

  explicit BatchModifyInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchModifyInstanceStatusResponseBody() = default;
};
class BatchModifyInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchModifyInstanceStatusResponseBody> body{};

  BatchModifyInstanceStatusResponse() {}

  explicit BatchModifyInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchModifyInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchModifyInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~BatchModifyInstanceStatusResponse() = default;
};
class ComparePlaybooksRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> newPlaybookReleaseId{};
  shared_ptr<long> oldPlaybookReleaseId{};
  shared_ptr<string> playbookUuid{};

  ComparePlaybooksRequest() {}

  explicit ComparePlaybooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newPlaybookReleaseId) {
      res["NewPlaybookReleaseId"] = boost::any(*newPlaybookReleaseId);
    }
    if (oldPlaybookReleaseId) {
      res["OldPlaybookReleaseId"] = boost::any(*oldPlaybookReleaseId);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewPlaybookReleaseId") != m.end() && !m["NewPlaybookReleaseId"].empty()) {
      newPlaybookReleaseId = make_shared<long>(boost::any_cast<long>(m["NewPlaybookReleaseId"]));
    }
    if (m.find("OldPlaybookReleaseId") != m.end() && !m["OldPlaybookReleaseId"].empty()) {
      oldPlaybookReleaseId = make_shared<long>(boost::any_cast<long>(m["OldPlaybookReleaseId"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~ComparePlaybooksRequest() = default;
};
class ComparePlaybooksResponseBodyCompareResult : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> new_{};
  shared_ptr<bool> same{};

  ComparePlaybooksResponseBodyCompareResult() {}

  explicit ComparePlaybooksResponseBodyCompareResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (new_) {
      res["New"] = boost::any(*new_);
    }
    if (same) {
      res["Same"] = boost::any(*same);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("New") != m.end() && !m["New"].empty()) {
      new_ = make_shared<bool>(boost::any_cast<bool>(m["New"]));
    }
    if (m.find("Same") != m.end() && !m["Same"].empty()) {
      same = make_shared<bool>(boost::any_cast<bool>(m["Same"]));
    }
  }


  virtual ~ComparePlaybooksResponseBodyCompareResult() = default;
};
class ComparePlaybooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ComparePlaybooksResponseBodyCompareResult> compareResult{};
  shared_ptr<string> requestId{};

  ComparePlaybooksResponseBody() {}

  explicit ComparePlaybooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareResult) {
      res["CompareResult"] = compareResult ? boost::any(compareResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareResult") != m.end() && !m["CompareResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompareResult"].type()) {
        ComparePlaybooksResponseBodyCompareResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompareResult"]));
        compareResult = make_shared<ComparePlaybooksResponseBodyCompareResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ComparePlaybooksResponseBody() = default;
};
class ComparePlaybooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ComparePlaybooksResponseBody> body{};

  ComparePlaybooksResponse() {}

  explicit ComparePlaybooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ComparePlaybooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ComparePlaybooksResponseBody>(model1);
      }
    }
  }


  virtual ~ComparePlaybooksResponse() = default;
};
class ConvertPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};
  shared_ptr<string> taskflow{};

  ConvertPlaybookRequest() {}

  explicit ConvertPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (taskflow) {
      res["Taskflow"] = boost::any(*taskflow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("Taskflow") != m.end() && !m["Taskflow"].empty()) {
      taskflow = make_shared<string>(boost::any_cast<string>(m["Taskflow"]));
    }
  }


  virtual ~ConvertPlaybookRequest() = default;
};
class ConvertPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> requestId{};

  ConvertPlaybookResponseBody() {}

  explicit ConvertPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConvertPlaybookResponseBody() = default;
};
class ConvertPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertPlaybookResponseBody> body{};

  ConvertPlaybookResponse() {}

  explicit ConvertPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertPlaybookResponse() = default;
};
class CopyPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> lang{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};
  shared_ptr<string> sourcePlaybookUuid{};

  CopyPlaybookRequest() {}

  explicit CopyPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (releaseVersion) {
      res["ReleaseVersion"] = boost::any(*releaseVersion);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (sourcePlaybookUuid) {
      res["SourcePlaybookUuid"] = boost::any(*sourcePlaybookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ReleaseVersion") != m.end() && !m["ReleaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["ReleaseVersion"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SourcePlaybookUuid") != m.end() && !m["SourcePlaybookUuid"].empty()) {
      sourcePlaybookUuid = make_shared<string>(boost::any_cast<string>(m["SourcePlaybookUuid"]));
    }
  }


  virtual ~CopyPlaybookRequest() = default;
};
class CopyPlaybookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> failNum{};
  shared_ptr<double> failRate{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> historyMd5{};
  shared_ptr<string> inputParams{};
  shared_ptr<long> lastRuntime{};
  shared_ptr<string> logicReleaseTaskflowMd5{};
  shared_ptr<string> outputParams{};
  shared_ptr<string> ownType{};
  shared_ptr<long> permission{};
  shared_ptr<long> playbookStatus{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<long> succNum{};
  shared_ptr<string> tenantId{};

  CopyPlaybookResponseBodyData() {}

  explicit CopyPlaybookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (failNum) {
      res["FailNum"] = boost::any(*failNum);
    }
    if (failRate) {
      res["FailRate"] = boost::any(*failRate);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (historyMd5) {
      res["HistoryMd5"] = boost::any(*historyMd5);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (lastRuntime) {
      res["LastRuntime"] = boost::any(*lastRuntime);
    }
    if (logicReleaseTaskflowMd5) {
      res["LogicReleaseTaskflowMd5"] = boost::any(*logicReleaseTaskflowMd5);
    }
    if (outputParams) {
      res["OutputParams"] = boost::any(*outputParams);
    }
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (playbookStatus) {
      res["PlaybookStatus"] = boost::any(*playbookStatus);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (succNum) {
      res["SuccNum"] = boost::any(*succNum);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FailNum") != m.end() && !m["FailNum"].empty()) {
      failNum = make_shared<long>(boost::any_cast<long>(m["FailNum"]));
    }
    if (m.find("FailRate") != m.end() && !m["FailRate"].empty()) {
      failRate = make_shared<double>(boost::any_cast<double>(m["FailRate"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("HistoryMd5") != m.end() && !m["HistoryMd5"].empty()) {
      historyMd5 = make_shared<long>(boost::any_cast<long>(m["HistoryMd5"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("LastRuntime") != m.end() && !m["LastRuntime"].empty()) {
      lastRuntime = make_shared<long>(boost::any_cast<long>(m["LastRuntime"]));
    }
    if (m.find("LogicReleaseTaskflowMd5") != m.end() && !m["LogicReleaseTaskflowMd5"].empty()) {
      logicReleaseTaskflowMd5 = make_shared<string>(boost::any_cast<string>(m["LogicReleaseTaskflowMd5"]));
    }
    if (m.find("OutputParams") != m.end() && !m["OutputParams"].empty()) {
      outputParams = make_shared<string>(boost::any_cast<string>(m["OutputParams"]));
    }
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<string>(boost::any_cast<string>(m["OwnType"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<long>(boost::any_cast<long>(m["Permission"]));
    }
    if (m.find("PlaybookStatus") != m.end() && !m["PlaybookStatus"].empty()) {
      playbookStatus = make_shared<long>(boost::any_cast<long>(m["PlaybookStatus"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("SuccNum") != m.end() && !m["SuccNum"].empty()) {
      succNum = make_shared<long>(boost::any_cast<long>(m["SuccNum"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CopyPlaybookResponseBodyData() = default;
};
class CopyPlaybookResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  CopyPlaybookResponseBodyPage() {}

  explicit CopyPlaybookResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CopyPlaybookResponseBodyPage() = default;
};
class CopyPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<CopyPlaybookResponseBodyData> data{};
  shared_ptr<CopyPlaybookResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  CopyPlaybookResponseBody() {}

  explicit CopyPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CopyPlaybookResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CopyPlaybookResponseBodyData>(model1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        CopyPlaybookResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<CopyPlaybookResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CopyPlaybookResponseBody() = default;
};
class CopyPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyPlaybookResponseBody> body{};

  CopyPlaybookResponse() {}

  explicit CopyPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CopyPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~CopyPlaybookResponse() = default;
};
class CreatePlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> lang{};
  shared_ptr<string> taskflowType{};

  CreatePlaybookRequest() {}

  explicit CreatePlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskflowType) {
      res["TaskflowType"] = boost::any(*taskflowType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskflowType") != m.end() && !m["TaskflowType"].empty()) {
      taskflowType = make_shared<string>(boost::any_cast<string>(m["TaskflowType"]));
    }
  }


  virtual ~CreatePlaybookRequest() = default;
};
class CreatePlaybookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> playbookUuid{};

  CreatePlaybookResponseBodyData() {}

  explicit CreatePlaybookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~CreatePlaybookResponseBodyData() = default;
};
class CreatePlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePlaybookResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreatePlaybookResponseBody() {}

  explicit CreatePlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePlaybookResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePlaybookResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePlaybookResponseBody() = default;
};
class CreatePlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePlaybookResponseBody> body{};

  CreatePlaybookResponse() {}

  explicit CreatePlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePlaybookResponse() = default;
};
class DebugPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> record{};
  shared_ptr<string> taskflow{};

  DebugPlaybookRequest() {}

  explicit DebugPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    if (taskflow) {
      res["Taskflow"] = boost::any(*taskflow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      record = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
    if (m.find("Taskflow") != m.end() && !m["Taskflow"].empty()) {
      taskflow = make_shared<string>(boost::any_cast<string>(m["Taskflow"]));
    }
  }


  virtual ~DebugPlaybookRequest() = default;
};
class DebugPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> requestUuid{};

  DebugPlaybookResponseBody() {}

  explicit DebugPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
  }


  virtual ~DebugPlaybookResponseBody() = default;
};
class DebugPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DebugPlaybookResponseBody> body{};

  DebugPlaybookResponse() {}

  explicit DebugPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DebugPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DebugPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DebugPlaybookResponse() = default;
};
class DeleteComponentAssetRequest : public Darabonba::Model {
public:
  shared_ptr<long> assetId{};
  shared_ptr<string> lang{};

  DeleteComponentAssetRequest() {}

  explicit DeleteComponentAssetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<long>(boost::any_cast<long>(m["AssetId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DeleteComponentAssetRequest() = default;
};
class DeleteComponentAssetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteComponentAssetResponseBody() {}

  explicit DeleteComponentAssetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteComponentAssetResponseBody() = default;
};
class DeleteComponentAssetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteComponentAssetResponseBody> body{};

  DeleteComponentAssetResponse() {}

  explicit DeleteComponentAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteComponentAssetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteComponentAssetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteComponentAssetResponse() = default;
};
class DeletePlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DeletePlaybookRequest() {}

  explicit DeletePlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DeletePlaybookRequest() = default;
};
class DeletePlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePlaybookResponseBody() {}

  explicit DeletePlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePlaybookResponseBody() = default;
};
class DeletePlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePlaybookResponseBody> body{};

  DeletePlaybookResponse() {}

  explicit DeletePlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePlaybookResponse() = default;
};
class DescribeComponentAssetFormRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> lang{};

  DescribeComponentAssetFormRequest() {}

  explicit DescribeComponentAssetFormRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeComponentAssetFormRequest() = default;
};
class DescribeComponentAssetFormResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> componentAssetForm{};
  shared_ptr<string> requestId{};

  DescribeComponentAssetFormResponseBody() {}

  explicit DescribeComponentAssetFormResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentAssetForm) {
      res["ComponentAssetForm"] = boost::any(*componentAssetForm);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentAssetForm") != m.end() && !m["ComponentAssetForm"].empty()) {
      componentAssetForm = make_shared<string>(boost::any_cast<string>(m["ComponentAssetForm"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComponentAssetFormResponseBody() = default;
};
class DescribeComponentAssetFormResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentAssetFormResponseBody> body{};

  DescribeComponentAssetFormResponse() {}

  explicit DescribeComponentAssetFormResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentAssetFormResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentAssetFormResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentAssetFormResponse() = default;
};
class DescribeComponentAssetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> lang{};

  DescribeComponentAssetsRequest() {}

  explicit DescribeComponentAssetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeComponentAssetsRequest() = default;
};
class DescribeComponentAssetsResponseBodyComponentAssets : public Darabonba::Model {
public:
  shared_ptr<string> assetUuid{};
  shared_ptr<string> componentname{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};

  DescribeComponentAssetsResponseBodyComponentAssets() {}

  explicit DescribeComponentAssetsResponseBodyComponentAssets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetUuid) {
      res["AssetUuid"] = boost::any(*assetUuid);
    }
    if (componentname) {
      res["Componentname"] = boost::any(*componentname);
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetUuid") != m.end() && !m["AssetUuid"].empty()) {
      assetUuid = make_shared<string>(boost::any_cast<string>(m["AssetUuid"]));
    }
    if (m.find("Componentname") != m.end() && !m["Componentname"].empty()) {
      componentname = make_shared<string>(boost::any_cast<string>(m["Componentname"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~DescribeComponentAssetsResponseBodyComponentAssets() = default;
};
class DescribeComponentAssetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeComponentAssetsResponseBodyComponentAssets>> componentAssets{};
  shared_ptr<string> requestId{};

  DescribeComponentAssetsResponseBody() {}

  explicit DescribeComponentAssetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentAssets) {
      vector<boost::any> temp1;
      for(auto item1:*componentAssets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentAssets"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentAssets") != m.end() && !m["ComponentAssets"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentAssets"].type()) {
        vector<DescribeComponentAssetsResponseBodyComponentAssets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentAssets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeComponentAssetsResponseBodyComponentAssets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentAssets = make_shared<vector<DescribeComponentAssetsResponseBodyComponentAssets>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComponentAssetsResponseBody() = default;
};
class DescribeComponentAssetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentAssetsResponseBody> body{};

  DescribeComponentAssetsResponse() {}

  explicit DescribeComponentAssetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentAssetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentAssetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentAssetsResponse() = default;
};
class DescribeComponentListRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DescribeComponentListRequest() {}

  explicit DescribeComponentListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeComponentListRequest() = default;
};
class DescribeComponentListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> components{};
  shared_ptr<string> requestId{};

  DescribeComponentListResponseBody() {}

  explicit DescribeComponentListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComponentListResponseBody() = default;
};
class DescribeComponentListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentListResponseBody> body{};

  DescribeComponentListResponse() {}

  explicit DescribeComponentListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentListResponse() = default;
};
class DescribeComponentPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DescribeComponentPlaybookRequest() {}

  explicit DescribeComponentPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeComponentPlaybookRequest() = default;
};
class DescribeComponentPlaybookResponseBodyPlaybooks : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> inputParams{};

  DescribeComponentPlaybookResponseBodyPlaybooks() {}

  explicit DescribeComponentPlaybookResponseBodyPlaybooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
  }


  virtual ~DescribeComponentPlaybookResponseBodyPlaybooks() = default;
};
class DescribeComponentPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeComponentPlaybookResponseBodyPlaybooks>> playbooks{};
  shared_ptr<string> requestId{};

  DescribeComponentPlaybookResponseBody() {}

  explicit DescribeComponentPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbooks) {
      vector<boost::any> temp1;
      for(auto item1:*playbooks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Playbooks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Playbooks") != m.end() && !m["Playbooks"].empty()) {
      if (typeid(vector<boost::any>) == m["Playbooks"].type()) {
        vector<DescribeComponentPlaybookResponseBodyPlaybooks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Playbooks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeComponentPlaybookResponseBodyPlaybooks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playbooks = make_shared<vector<DescribeComponentPlaybookResponseBodyPlaybooks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComponentPlaybookResponseBody() = default;
};
class DescribeComponentPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentPlaybookResponseBody> body{};

  DescribeComponentPlaybookResponse() {}

  explicit DescribeComponentPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentPlaybookResponse() = default;
};
class DescribeComponentsJsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribeComponentsJsRequest() {}

  explicit DescribeComponentsJsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeComponentsJsRequest() = default;
};
class DescribeComponentsJsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> componentsJs{};
  shared_ptr<string> requestId{};

  DescribeComponentsJsResponseBody() {}

  explicit DescribeComponentsJsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentsJs) {
      res["ComponentsJs"] = boost::any(*componentsJs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentsJs") != m.end() && !m["ComponentsJs"].empty()) {
      componentsJs = make_shared<string>(boost::any_cast<string>(m["ComponentsJs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComponentsJsResponseBody() = default;
};
class DescribeComponentsJsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeComponentsJsResponseBody> body{};

  DescribeComponentsJsResponse() {}

  explicit DescribeComponentsJsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComponentsJsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComponentsJsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComponentsJsResponse() = default;
};
class DescribeDistinctReleasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> taskflowMd5{};

  DescribeDistinctReleasesRequest() {}

  explicit DescribeDistinctReleasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
  }


  virtual ~DescribeDistinctReleasesRequest() = default;
};
class DescribeDistinctReleasesResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> taskflowMd5{};
  shared_ptr<string> taskflowType{};

  DescribeDistinctReleasesResponseBodyRecords() {}

  explicit DescribeDistinctReleasesResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    if (taskflowType) {
      res["TaskflowType"] = boost::any(*taskflowType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
    if (m.find("TaskflowType") != m.end() && !m["TaskflowType"].empty()) {
      taskflowType = make_shared<string>(boost::any_cast<string>(m["TaskflowType"]));
    }
  }


  virtual ~DescribeDistinctReleasesResponseBodyRecords() = default;
};
class DescribeDistinctReleasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDistinctReleasesResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeDistinctReleasesResponseBody() {}

  explicit DescribeDistinctReleasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeDistinctReleasesResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDistinctReleasesResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeDistinctReleasesResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDistinctReleasesResponseBody() = default;
};
class DescribeDistinctReleasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDistinctReleasesResponseBody> body{};

  DescribeDistinctReleasesResponse() {}

  explicit DescribeDistinctReleasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDistinctReleasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDistinctReleasesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDistinctReleasesResponse() = default;
};
class DescribeEnumItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> enumType{};
  shared_ptr<string> lang{};

  DescribeEnumItemsRequest() {}

  explicit DescribeEnumItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enumType) {
      res["EnumType"] = boost::any(*enumType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnumType") != m.end() && !m["EnumType"].empty()) {
      enumType = make_shared<string>(boost::any_cast<string>(m["EnumType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeEnumItemsRequest() = default;
};
class DescribeEnumItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeEnumItemsResponseBodyData() {}

  explicit DescribeEnumItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeEnumItemsResponseBodyData() = default;
};
class DescribeEnumItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnumItemsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeEnumItemsResponseBody() {}

  explicit DescribeEnumItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeEnumItemsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnumItemsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeEnumItemsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEnumItemsResponseBody() = default;
};
class DescribeEnumItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEnumItemsResponseBody> body{};

  DescribeEnumItemsResponse() {}

  explicit DescribeEnumItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEnumItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEnumItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEnumItemsResponse() = default;
};
class DescribeExecutePlaybooksRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputMode{};
  shared_ptr<string> lang{};
  shared_ptr<string> paramType{};
  shared_ptr<string> playbookName{};
  shared_ptr<string> uuid{};

  DescribeExecutePlaybooksRequest() {}

  explicit DescribeExecutePlaybooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputMode) {
      res["InputMode"] = boost::any(*inputMode);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (playbookName) {
      res["PlaybookName"] = boost::any(*playbookName);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputMode") != m.end() && !m["InputMode"].empty()) {
      inputMode = make_shared<string>(boost::any_cast<string>(m["InputMode"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("PlaybookName") != m.end() && !m["PlaybookName"].empty()) {
      playbookName = make_shared<string>(boost::any_cast<string>(m["PlaybookName"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~DescribeExecutePlaybooksRequest() = default;
};
class DescribeExecutePlaybooksResponseBodyPlaybookMetrics : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> paramConfig{};
  shared_ptr<string> paramType{};
  shared_ptr<string> uuid{};

  DescribeExecutePlaybooksResponseBodyPlaybookMetrics() {}

  explicit DescribeExecutePlaybooksResponseBodyPlaybookMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (paramConfig) {
      res["ParamConfig"] = boost::any(*paramConfig);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ParamConfig") != m.end() && !m["ParamConfig"].empty()) {
      paramConfig = make_shared<string>(boost::any_cast<string>(m["ParamConfig"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~DescribeExecutePlaybooksResponseBodyPlaybookMetrics() = default;
};
class DescribeExecutePlaybooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics>> playbookMetrics{};
  shared_ptr<string> requestId{};

  DescribeExecutePlaybooksResponseBody() {}

  explicit DescribeExecutePlaybooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*playbookMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlaybookMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookMetrics") != m.end() && !m["PlaybookMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PlaybookMetrics"].type()) {
        vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlaybookMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExecutePlaybooksResponseBodyPlaybookMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playbookMetrics = make_shared<vector<DescribeExecutePlaybooksResponseBodyPlaybookMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeExecutePlaybooksResponseBody() = default;
};
class DescribeExecutePlaybooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExecutePlaybooksResponseBody> body{};

  DescribeExecutePlaybooksResponse() {}

  explicit DescribeExecutePlaybooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExecutePlaybooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExecutePlaybooksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExecutePlaybooksResponse() = default;
};
class DescribeFieldRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> queryKey{};

  DescribeFieldRequest() {}

  explicit DescribeFieldRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (queryKey) {
      res["QueryKey"] = boost::any(*queryKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("QueryKey") != m.end() && !m["QueryKey"].empty()) {
      queryKey = make_shared<string>(boost::any_cast<string>(m["QueryKey"]));
    }
  }


  virtual ~DescribeFieldRequest() = default;
};
class DescribeFieldResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fields{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  DescribeFieldResponseBody() {}

  explicit DescribeFieldResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFieldResponseBody() = default;
};
class DescribeFieldResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFieldResponseBody> body{};

  DescribeFieldResponse() {}

  explicit DescribeFieldResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFieldResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFieldResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFieldResponse() = default;
};
class DescribeGroupProductionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  DescribeGroupProductionsRequest() {}

  explicit DescribeGroupProductionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeGroupProductionsRequest() = default;
};
class DescribeGroupProductionsResponseBodyDataProductionsPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> type{};

  DescribeGroupProductionsResponseBodyDataProductionsPolicyList() {}

  explicit DescribeGroupProductionsResponseBodyDataProductionsPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeGroupProductionsResponseBodyDataProductionsPolicyList() = default;
};
class DescribeGroupProductionsResponseBodyDataProductions : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> defaultDomain{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> fullDomains{};
  shared_ptr<string> group{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeGroupProductionsResponseBodyDataProductionsPolicyList>> policyList{};
  shared_ptr<string> ramCode{};
  shared_ptr<string> shortName{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> versions{};

  DescribeGroupProductionsResponseBodyDataProductions() {}

  explicit DescribeGroupProductionsResponseBodyDataProductions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fullDomains) {
      res["FullDomains"] = boost::any(*fullDomains);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyList) {
      vector<boost::any> temp1;
      for(auto item1:*policyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyList"] = boost::any(temp1);
    }
    if (ramCode) {
      res["RamCode"] = boost::any(*ramCode);
    }
    if (shortName) {
      res["ShortName"] = boost::any(*shortName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (versions) {
      res["Versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<string>(boost::any_cast<string>(m["DefaultDomain"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FullDomains") != m.end() && !m["FullDomains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FullDomains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FullDomains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fullDomains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyList") != m.end() && !m["PolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyList"].type()) {
        vector<DescribeGroupProductionsResponseBodyDataProductionsPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupProductionsResponseBodyDataProductionsPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyList = make_shared<vector<DescribeGroupProductionsResponseBodyDataProductionsPolicyList>>(expect1);
      }
    }
    if (m.find("RamCode") != m.end() && !m["RamCode"].empty()) {
      ramCode = make_shared<string>(boost::any_cast<string>(m["RamCode"]));
    }
    if (m.find("ShortName") != m.end() && !m["ShortName"].empty()) {
      shortName = make_shared<string>(boost::any_cast<string>(m["ShortName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Versions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeGroupProductionsResponseBodyDataProductions() = default;
};
class DescribeGroupProductionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<DescribeGroupProductionsResponseBodyDataProductions>> productions{};

  DescribeGroupProductionsResponseBodyData() {}

  explicit DescribeGroupProductionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (productions) {
      vector<boost::any> temp1;
      for(auto item1:*productions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Productions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Productions") != m.end() && !m["Productions"].empty()) {
      if (typeid(vector<boost::any>) == m["Productions"].type()) {
        vector<DescribeGroupProductionsResponseBodyDataProductions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Productions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupProductionsResponseBodyDataProductions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productions = make_shared<vector<DescribeGroupProductionsResponseBodyDataProductions>>(expect1);
      }
    }
  }


  virtual ~DescribeGroupProductionsResponseBodyData() = default;
};
class DescribeGroupProductionsResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeGroupProductionsResponseBodyPage() {}

  explicit DescribeGroupProductionsResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeGroupProductionsResponseBodyPage() = default;
};
class DescribeGroupProductionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGroupProductionsResponseBodyData>> data{};
  shared_ptr<DescribeGroupProductionsResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  DescribeGroupProductionsResponseBody() {}

  explicit DescribeGroupProductionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeGroupProductionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupProductionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeGroupProductionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribeGroupProductionsResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribeGroupProductionsResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGroupProductionsResponseBody() = default;
};
class DescribeGroupProductionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGroupProductionsResponseBody> body{};

  DescribeGroupProductionsResponse() {}

  explicit DescribeGroupProductionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGroupProductionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGroupProductionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGroupProductionsResponse() = default;
};
class DescribeLatestRecordSchemaRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DescribeLatestRecordSchemaRequest() {}

  explicit DescribeLatestRecordSchemaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeLatestRecordSchemaRequest() = default;
};
class DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> componentName{};
  shared_ptr<string> nodeName{};
  shared_ptr<vector<string>> outputFields{};

  DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema() {}

  explicit DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (outputFields) {
      res["OutputFields"] = boost::any(*outputFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("OutputFields") != m.end() && !m["OutputFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OutputFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OutputFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      outputFields = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema() = default;
};
class DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema>> nodeSchema{};

  DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema() {}

  explicit DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeSchema) {
      vector<boost::any> temp1;
      for(auto item1:*nodeSchema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeSchema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeSchema") != m.end() && !m["NodeSchema"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeSchema"].type()) {
        vector<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeSchema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeSchema = make_shared<vector<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema() = default;
};
class DescribeLatestRecordSchemaResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema> playbookNodeSchema{};
  shared_ptr<string> requestId{};

  DescribeLatestRecordSchemaResponseBody() {}

  explicit DescribeLatestRecordSchemaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookNodeSchema) {
      res["PlaybookNodeSchema"] = playbookNodeSchema ? boost::any(playbookNodeSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookNodeSchema") != m.end() && !m["PlaybookNodeSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlaybookNodeSchema"].type()) {
        DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlaybookNodeSchema"]));
        playbookNodeSchema = make_shared<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLatestRecordSchemaResponseBody() = default;
};
class DescribeLatestRecordSchemaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLatestRecordSchemaResponseBody> body{};

  DescribeLatestRecordSchemaResponse() {}

  explicit DescribeLatestRecordSchemaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLatestRecordSchemaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLatestRecordSchemaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLatestRecordSchemaResponse() = default;
};
class DescribeNodeParamTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> playbookUuid{};

  DescribeNodeParamTagsRequest() {}

  explicit DescribeNodeParamTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeNodeParamTagsRequest() = default;
};
class DescribeNodeParamTagsResponseBodyParamReferredPaths : public Darabonba::Model {
public:
  shared_ptr<string> paramName{};
  shared_ptr<vector<string>> referredPath{};

  DescribeNodeParamTagsResponseBodyParamReferredPaths() {}

  explicit DescribeNodeParamTagsResponseBodyParamReferredPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (referredPath) {
      res["ReferredPath"] = boost::any(*referredPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ReferredPath") != m.end() && !m["ReferredPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReferredPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReferredPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referredPath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNodeParamTagsResponseBodyParamReferredPaths() = default;
};
class DescribeNodeParamTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNodeParamTagsResponseBodyParamReferredPaths>> paramReferredPaths{};
  shared_ptr<string> requestId{};

  DescribeNodeParamTagsResponseBody() {}

  explicit DescribeNodeParamTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramReferredPaths) {
      vector<boost::any> temp1;
      for(auto item1:*paramReferredPaths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamReferredPaths"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamReferredPaths") != m.end() && !m["ParamReferredPaths"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamReferredPaths"].type()) {
        vector<DescribeNodeParamTagsResponseBodyParamReferredPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamReferredPaths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNodeParamTagsResponseBodyParamReferredPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramReferredPaths = make_shared<vector<DescribeNodeParamTagsResponseBodyParamReferredPaths>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNodeParamTagsResponseBody() = default;
};
class DescribeNodeParamTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNodeParamTagsResponseBody> body{};

  DescribeNodeParamTagsResponse() {}

  explicit DescribeNodeParamTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNodeParamTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodeParamTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodeParamTagsResponse() = default;
};
class DescribeNodeUsedInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> playbookUuid{};

  DescribeNodeUsedInfosRequest() {}

  explicit DescribeNodeUsedInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribeNodeUsedInfosRequest() = default;
};
class DescribeNodeUsedInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodeUsedInfos{};
  shared_ptr<string> requestId{};

  DescribeNodeUsedInfosResponseBody() {}

  explicit DescribeNodeUsedInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeUsedInfos) {
      res["NodeUsedInfos"] = boost::any(*nodeUsedInfos);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeUsedInfos") != m.end() && !m["NodeUsedInfos"].empty()) {
      nodeUsedInfos = make_shared<string>(boost::any_cast<string>(m["NodeUsedInfos"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNodeUsedInfosResponseBody() = default;
};
class DescribeNodeUsedInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNodeUsedInfosResponseBody> body{};

  DescribeNodeUsedInfosResponse() {}

  explicit DescribeNodeUsedInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNodeUsedInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodeUsedInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodeUsedInfosResponse() = default;
};
class DescribeNotifyTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  DescribeNotifyTemplateListRequest() {}

  explicit DescribeNotifyTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeNotifyTemplateListRequest() = default;
};
class DescribeNotifyTemplateListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> eventId{};
  shared_ptr<string> params{};
  shared_ptr<string> subject{};
  shared_ptr<string> templateName{};

  DescribeNotifyTemplateListResponseBodyData() {}

  explicit DescribeNotifyTemplateListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~DescribeNotifyTemplateListResponseBodyData() = default;
};
class DescribeNotifyTemplateListResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeNotifyTemplateListResponseBodyPage() {}

  explicit DescribeNotifyTemplateListResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeNotifyTemplateListResponseBodyPage() = default;
};
class DescribeNotifyTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNotifyTemplateListResponseBodyData>> data{};
  shared_ptr<DescribeNotifyTemplateListResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  DescribeNotifyTemplateListResponseBody() {}

  explicit DescribeNotifyTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeNotifyTemplateListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNotifyTemplateListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeNotifyTemplateListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribeNotifyTemplateListResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribeNotifyTemplateListResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNotifyTemplateListResponseBody() = default;
};
class DescribeNotifyTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNotifyTemplateListResponseBody> body{};

  DescribeNotifyTemplateListResponse() {}

  explicit DescribeNotifyTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNotifyTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNotifyTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNotifyTemplateListResponse() = default;
};
class DescribeOpenApiInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> popCode{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  DescribeOpenApiInfoRequest() {}

  explicit DescribeOpenApiInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeOpenApiInfoRequest() = default;
};
class DescribeOpenApiInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputParams{};
  shared_ptr<string> outputParams{};
  shared_ptr<string> responseDemo{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  DescribeOpenApiInfoResponseBodyData() {}

  explicit DescribeOpenApiInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (outputParams) {
      res["OutputParams"] = boost::any(*outputParams);
    }
    if (responseDemo) {
      res["ResponseDemo"] = boost::any(*responseDemo);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("OutputParams") != m.end() && !m["OutputParams"].empty()) {
      outputParams = make_shared<string>(boost::any_cast<string>(m["OutputParams"]));
    }
    if (m.find("ResponseDemo") != m.end() && !m["ResponseDemo"].empty()) {
      responseDemo = make_shared<string>(boost::any_cast<string>(m["ResponseDemo"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeOpenApiInfoResponseBodyData() = default;
};
class DescribeOpenApiInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOpenApiInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeOpenApiInfoResponseBody() {}

  explicit DescribeOpenApiInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeOpenApiInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeOpenApiInfoResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOpenApiInfoResponseBody() = default;
};
class DescribeOpenApiInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpenApiInfoResponseBody> body{};

  DescribeOpenApiInfoResponse() {}

  explicit DescribeOpenApiInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOpenApiInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpenApiInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpenApiInfoResponse() = default;
};
class DescribeOpenApiListRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> popCode{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  DescribeOpenApiListRequest() {}

  explicit DescribeOpenApiListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeOpenApiListRequest() = default;
};
class DescribeOpenApiListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> directories{};
  shared_ptr<string> version{};

  DescribeOpenApiListResponseBodyData() {}

  explicit DescribeOpenApiListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (directories) {
      res["Directories"] = boost::any(*directories);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Directories") != m.end() && !m["Directories"].empty()) {
      directories = make_shared<boost::any>(boost::any_cast<boost::any>(m["Directories"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeOpenApiListResponseBodyData() = default;
};
class DescribeOpenApiListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOpenApiListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeOpenApiListResponseBody() {}

  explicit DescribeOpenApiListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeOpenApiListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeOpenApiListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOpenApiListResponseBody() = default;
};
class DescribeOpenApiListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpenApiListResponseBody> body{};

  DescribeOpenApiListResponse() {}

  explicit DescribeOpenApiListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOpenApiListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpenApiListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpenApiListResponse() = default;
};
class DescribePlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<long> debugFlag{};
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> taskflowMd5{};

  DescribePlaybookRequest() {}

  explicit DescribePlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugFlag) {
      res["DebugFlag"] = boost::any(*debugFlag);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugFlag") != m.end() && !m["DebugFlag"].empty()) {
      debugFlag = make_shared<long>(boost::any_cast<long>(m["DebugFlag"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
  }


  virtual ~DescribePlaybookRequest() = default;
};
class DescribePlaybookResponseBodyPlaybook : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> failExeNum{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> inputParams{};
  shared_ptr<long> lastExeTime{};
  shared_ptr<bool> onlineActive{};
  shared_ptr<string> onlineReleaseTaskflowMd5{};
  shared_ptr<string> ownType{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<long> successExeNum{};
  shared_ptr<string> taskflow{};
  shared_ptr<string> taskflowType{};

  DescribePlaybookResponseBodyPlaybook() {}

  explicit DescribePlaybookResponseBodyPlaybook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (failExeNum) {
      res["FailExeNum"] = boost::any(*failExeNum);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (lastExeTime) {
      res["LastExeTime"] = boost::any(*lastExeTime);
    }
    if (onlineActive) {
      res["OnlineActive"] = boost::any(*onlineActive);
    }
    if (onlineReleaseTaskflowMd5) {
      res["OnlineReleaseTaskflowMd5"] = boost::any(*onlineReleaseTaskflowMd5);
    }
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (successExeNum) {
      res["SuccessExeNum"] = boost::any(*successExeNum);
    }
    if (taskflow) {
      res["Taskflow"] = boost::any(*taskflow);
    }
    if (taskflowType) {
      res["TaskflowType"] = boost::any(*taskflowType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FailExeNum") != m.end() && !m["FailExeNum"].empty()) {
      failExeNum = make_shared<long>(boost::any_cast<long>(m["FailExeNum"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("LastExeTime") != m.end() && !m["LastExeTime"].empty()) {
      lastExeTime = make_shared<long>(boost::any_cast<long>(m["LastExeTime"]));
    }
    if (m.find("OnlineActive") != m.end() && !m["OnlineActive"].empty()) {
      onlineActive = make_shared<bool>(boost::any_cast<bool>(m["OnlineActive"]));
    }
    if (m.find("OnlineReleaseTaskflowMd5") != m.end() && !m["OnlineReleaseTaskflowMd5"].empty()) {
      onlineReleaseTaskflowMd5 = make_shared<string>(boost::any_cast<string>(m["OnlineReleaseTaskflowMd5"]));
    }
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<string>(boost::any_cast<string>(m["OwnType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("SuccessExeNum") != m.end() && !m["SuccessExeNum"].empty()) {
      successExeNum = make_shared<long>(boost::any_cast<long>(m["SuccessExeNum"]));
    }
    if (m.find("Taskflow") != m.end() && !m["Taskflow"].empty()) {
      taskflow = make_shared<string>(boost::any_cast<string>(m["Taskflow"]));
    }
    if (m.find("TaskflowType") != m.end() && !m["TaskflowType"].empty()) {
      taskflowType = make_shared<string>(boost::any_cast<string>(m["TaskflowType"]));
    }
  }


  virtual ~DescribePlaybookResponseBodyPlaybook() = default;
};
class DescribePlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookResponseBodyPlaybook> playbook{};
  shared_ptr<string> requestId{};

  DescribePlaybookResponseBody() {}

  explicit DescribePlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbook) {
      res["Playbook"] = playbook ? boost::any(playbook->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Playbook") != m.end() && !m["Playbook"].empty()) {
      if (typeid(map<string, boost::any>) == m["Playbook"].type()) {
        DescribePlaybookResponseBodyPlaybook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Playbook"]));
        playbook = make_shared<DescribePlaybookResponseBodyPlaybook>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookResponseBody() = default;
};
class DescribePlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookResponseBody> body{};

  DescribePlaybookResponse() {}

  explicit DescribePlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookResponse() = default;
};
class DescribePlaybookInputOutputRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybookInputOutputRequest() {}

  explicit DescribePlaybookInputOutputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybookInputOutputRequest() = default;
};
class DescribePlaybookInputOutputResponseBodyConfig : public Darabonba::Model {
public:
  shared_ptr<string> exeConfig{};
  shared_ptr<string> inputParams{};
  shared_ptr<string> outputParams{};
  shared_ptr<string> paramType{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybookInputOutputResponseBodyConfig() {}

  explicit DescribePlaybookInputOutputResponseBodyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exeConfig) {
      res["ExeConfig"] = boost::any(*exeConfig);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (outputParams) {
      res["OutputParams"] = boost::any(*outputParams);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExeConfig") != m.end() && !m["ExeConfig"].empty()) {
      exeConfig = make_shared<string>(boost::any_cast<string>(m["ExeConfig"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("OutputParams") != m.end() && !m["OutputParams"].empty()) {
      outputParams = make_shared<string>(boost::any_cast<string>(m["OutputParams"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybookInputOutputResponseBodyConfig() = default;
};
class DescribePlaybookInputOutputResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookInputOutputResponseBodyConfig> config{};
  shared_ptr<string> requestId{};

  DescribePlaybookInputOutputResponseBody() {}

  explicit DescribePlaybookInputOutputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        DescribePlaybookInputOutputResponseBodyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<DescribePlaybookInputOutputResponseBodyConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookInputOutputResponseBody() = default;
};
class DescribePlaybookInputOutputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookInputOutputResponseBody> body{};

  DescribePlaybookInputOutputResponse() {}

  explicit DescribePlaybookInputOutputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookInputOutputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookInputOutputResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookInputOutputResponse() = default;
};
class DescribePlaybookMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybookMetricsRequest() {}

  explicit DescribePlaybookMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybookMetricsRequest() = default;
};
class DescribePlaybookMetricsResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> failNum{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> historyMd5{};
  shared_ptr<long> lastRuntime{};
  shared_ptr<string> ownType{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<long> succNum{};

  DescribePlaybookMetricsResponseBodyMetrics() {}

  explicit DescribePlaybookMetricsResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (failNum) {
      res["FailNum"] = boost::any(*failNum);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (historyMd5) {
      res["HistoryMd5"] = boost::any(*historyMd5);
    }
    if (lastRuntime) {
      res["LastRuntime"] = boost::any(*lastRuntime);
    }
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (succNum) {
      res["SuccNum"] = boost::any(*succNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FailNum") != m.end() && !m["FailNum"].empty()) {
      failNum = make_shared<long>(boost::any_cast<long>(m["FailNum"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("HistoryMd5") != m.end() && !m["HistoryMd5"].empty()) {
      historyMd5 = make_shared<long>(boost::any_cast<long>(m["HistoryMd5"]));
    }
    if (m.find("LastRuntime") != m.end() && !m["LastRuntime"].empty()) {
      lastRuntime = make_shared<long>(boost::any_cast<long>(m["LastRuntime"]));
    }
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<string>(boost::any_cast<string>(m["OwnType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("SuccNum") != m.end() && !m["SuccNum"].empty()) {
      succNum = make_shared<long>(boost::any_cast<long>(m["SuccNum"]));
    }
  }


  virtual ~DescribePlaybookMetricsResponseBodyMetrics() = default;
};
class DescribePlaybookMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookMetricsResponseBodyMetrics> metrics{};
  shared_ptr<string> requestId{};

  DescribePlaybookMetricsResponseBody() {}

  explicit DescribePlaybookMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      res["Metrics"] = metrics ? boost::any(metrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metrics"].type()) {
        DescribePlaybookMetricsResponseBodyMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metrics"]));
        metrics = make_shared<DescribePlaybookMetricsResponseBodyMetrics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookMetricsResponseBody() = default;
};
class DescribePlaybookMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookMetricsResponseBody> body{};

  DescribePlaybookMetricsResponse() {}

  explicit DescribePlaybookMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookMetricsResponse() = default;
};
class DescribePlaybookNodesOutputRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybookNodesOutputRequest() {}

  explicit DescribePlaybookNodesOutputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybookNodesOutputRequest() = default;
};
class DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeOutput{};

  DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput() {}

  explicit DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeOutput) {
      res["NodeOutput"] = boost::any(*nodeOutput);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeOutput") != m.end() && !m["NodeOutput"].empty()) {
      nodeOutput = make_shared<string>(boost::any_cast<string>(m["NodeOutput"]));
    }
  }


  virtual ~DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput() = default;
};
class DescribePlaybookNodesOutputResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput> playbookNodesOutput{};
  shared_ptr<string> requestId{};

  DescribePlaybookNodesOutputResponseBody() {}

  explicit DescribePlaybookNodesOutputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookNodesOutput) {
      res["PlaybookNodesOutput"] = playbookNodesOutput ? boost::any(playbookNodesOutput->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookNodesOutput") != m.end() && !m["PlaybookNodesOutput"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlaybookNodesOutput"].type()) {
        DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlaybookNodesOutput"]));
        playbookNodesOutput = make_shared<DescribePlaybookNodesOutputResponseBodyPlaybookNodesOutput>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookNodesOutputResponseBody() = default;
};
class DescribePlaybookNodesOutputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookNodesOutputResponseBody> body{};

  DescribePlaybookNodesOutputResponse() {}

  explicit DescribePlaybookNodesOutputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookNodesOutputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookNodesOutputResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookNodesOutputResponse() = default;
};
class DescribePlaybookNumberMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribePlaybookNumberMetricsRequest() {}

  explicit DescribePlaybookNumberMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribePlaybookNumberMetricsRequest() = default;
};
class DescribePlaybookNumberMetricsResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<long> startUpNum{};
  shared_ptr<long> totalNum{};

  DescribePlaybookNumberMetricsResponseBodyMetrics() {}

  explicit DescribePlaybookNumberMetricsResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startUpNum) {
      res["StartUpNum"] = boost::any(*startUpNum);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartUpNum") != m.end() && !m["StartUpNum"].empty()) {
      startUpNum = make_shared<long>(boost::any_cast<long>(m["StartUpNum"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~DescribePlaybookNumberMetricsResponseBodyMetrics() = default;
};
class DescribePlaybookNumberMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookNumberMetricsResponseBodyMetrics> metrics{};
  shared_ptr<string> requestId{};

  DescribePlaybookNumberMetricsResponseBody() {}

  explicit DescribePlaybookNumberMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      res["Metrics"] = metrics ? boost::any(metrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metrics"].type()) {
        DescribePlaybookNumberMetricsResponseBodyMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metrics"]));
        metrics = make_shared<DescribePlaybookNumberMetricsResponseBodyMetrics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookNumberMetricsResponseBody() = default;
};
class DescribePlaybookNumberMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookNumberMetricsResponseBody> body{};

  DescribePlaybookNumberMetricsResponse() {}

  explicit DescribePlaybookNumberMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookNumberMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookNumberMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookNumberMetricsResponse() = default;
};
class DescribePlaybookReleasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybookReleasesRequest() {}

  explicit DescribePlaybookReleasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybookReleasesRequest() = default;
};
class DescribePlaybookReleasesResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribePlaybookReleasesResponseBodyPage() {}

  explicit DescribePlaybookReleasesResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePlaybookReleasesResponseBodyPage() = default;
};
class DescribePlaybookReleasesResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> taskflowMd5{};

  DescribePlaybookReleasesResponseBodyRecords() {}

  explicit DescribePlaybookReleasesResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
  }


  virtual ~DescribePlaybookReleasesResponseBodyRecords() = default;
};
class DescribePlaybookReleasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybookReleasesResponseBodyPage> page{};
  shared_ptr<vector<DescribePlaybookReleasesResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribePlaybookReleasesResponseBody() {}

  explicit DescribePlaybookReleasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribePlaybookReleasesResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribePlaybookReleasesResponseBodyPage>(model1);
      }
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribePlaybookReleasesResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePlaybookReleasesResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribePlaybookReleasesResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybookReleasesResponseBody() = default;
};
class DescribePlaybookReleasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybookReleasesResponseBody> body{};

  DescribePlaybookReleasesResponse() {}

  explicit DescribePlaybookReleasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybookReleasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybookReleasesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybookReleasesResponse() = default;
};
class DescribePlaybooksRequest : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<long> endMillis{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> ownType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paramTypes{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> playbookUuids{};
  shared_ptr<string> sort{};
  shared_ptr<long> startMillis{};

  DescribePlaybooksRequest() {}

  explicit DescribePlaybooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (endMillis) {
      res["EndMillis"] = boost::any(*endMillis);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paramTypes) {
      res["ParamTypes"] = boost::any(*paramTypes);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (playbookUuids) {
      res["PlaybookUuids"] = boost::any(*playbookUuids);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startMillis) {
      res["StartMillis"] = boost::any(*startMillis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("EndMillis") != m.end() && !m["EndMillis"].empty()) {
      endMillis = make_shared<long>(boost::any_cast<long>(m["EndMillis"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<string>(boost::any_cast<string>(m["OwnType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParamTypes") != m.end() && !m["ParamTypes"].empty()) {
      paramTypes = make_shared<string>(boost::any_cast<string>(m["ParamTypes"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("PlaybookUuids") != m.end() && !m["PlaybookUuids"].empty()) {
      playbookUuids = make_shared<string>(boost::any_cast<string>(m["PlaybookUuids"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartMillis") != m.end() && !m["StartMillis"].empty()) {
      startMillis = make_shared<long>(boost::any_cast<long>(m["StartMillis"]));
    }
  }


  virtual ~DescribePlaybooksRequest() = default;
};
class DescribePlaybooksResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribePlaybooksResponseBodyPage() {}

  explicit DescribePlaybooksResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePlaybooksResponseBodyPage() = default;
};
class DescribePlaybooksResponseBodyPlaybooks : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<string> displayName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> lastRuntime{};
  shared_ptr<string> ownType{};
  shared_ptr<string> paramType{};
  shared_ptr<string> playbookUuid{};

  DescribePlaybooksResponseBodyPlaybooks() {}

  explicit DescribePlaybooksResponseBodyPlaybooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lastRuntime) {
      res["LastRuntime"] = boost::any(*lastRuntime);
    }
    if (ownType) {
      res["OwnType"] = boost::any(*ownType);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LastRuntime") != m.end() && !m["LastRuntime"].empty()) {
      lastRuntime = make_shared<long>(boost::any_cast<long>(m["LastRuntime"]));
    }
    if (m.find("OwnType") != m.end() && !m["OwnType"].empty()) {
      ownType = make_shared<string>(boost::any_cast<string>(m["OwnType"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~DescribePlaybooksResponseBodyPlaybooks() = default;
};
class DescribePlaybooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePlaybooksResponseBodyPage> page{};
  shared_ptr<vector<DescribePlaybooksResponseBodyPlaybooks>> playbooks{};
  shared_ptr<string> requestId{};

  DescribePlaybooksResponseBody() {}

  explicit DescribePlaybooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (playbooks) {
      vector<boost::any> temp1;
      for(auto item1:*playbooks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Playbooks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribePlaybooksResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribePlaybooksResponseBodyPage>(model1);
      }
    }
    if (m.find("Playbooks") != m.end() && !m["Playbooks"].empty()) {
      if (typeid(vector<boost::any>) == m["Playbooks"].type()) {
        vector<DescribePlaybooksResponseBodyPlaybooks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Playbooks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePlaybooksResponseBodyPlaybooks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playbooks = make_shared<vector<DescribePlaybooksResponseBodyPlaybooks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePlaybooksResponseBody() = default;
};
class DescribePlaybooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlaybooksResponseBody> body{};

  DescribePlaybooksResponse() {}

  explicit DescribePlaybooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlaybooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlaybooksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlaybooksResponse() = default;
};
class DescribePopApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> env{};
  shared_ptr<string> popCode{};

  DescribePopApiRequest() {}

  explicit DescribePopApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
  }


  virtual ~DescribePopApiRequest() = default;
};
class DescribePopApiResponseBodyOpenApiMetaList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> exampleValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};

  DescribePopApiResponseBodyOpenApiMetaList() {}

  explicit DescribePopApiResponseBodyOpenApiMetaList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (exampleValue) {
      res["ExampleValue"] = boost::any(*exampleValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
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
    if (m.find("ExampleValue") != m.end() && !m["ExampleValue"].empty()) {
      exampleValue = make_shared<string>(boost::any_cast<string>(m["ExampleValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribePopApiResponseBodyOpenApiMetaList() = default;
};
class DescribePopApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<vector<DescribePopApiResponseBodyOpenApiMetaList>> openApiMetaList{};
  shared_ptr<string> popCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> version{};

  DescribePopApiResponseBody() {}

  explicit DescribePopApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (openApiMetaList) {
      vector<boost::any> temp1;
      for(auto item1:*openApiMetaList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpenApiMetaList"] = boost::any(temp1);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("OpenApiMetaList") != m.end() && !m["OpenApiMetaList"].empty()) {
      if (typeid(vector<boost::any>) == m["OpenApiMetaList"].type()) {
        vector<DescribePopApiResponseBodyOpenApiMetaList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpenApiMetaList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePopApiResponseBodyOpenApiMetaList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        openApiMetaList = make_shared<vector<DescribePopApiResponseBodyOpenApiMetaList>>(expect1);
      }
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribePopApiResponseBody() = default;
};
class DescribePopApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePopApiResponseBody> body{};

  DescribePopApiResponse() {}

  explicit DescribePopApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePopApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePopApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePopApiResponse() = default;
};
class DescribePopApiItemListRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> env{};
  shared_ptr<string> lang{};
  shared_ptr<string> popCode{};

  DescribePopApiItemListRequest() {}

  explicit DescribePopApiItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
  }


  virtual ~DescribePopApiItemListRequest() = default;
};
class DescribePopApiItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> names{};
  shared_ptr<string> popCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<string> version{};

  DescribePopApiItemListResponseBody() {}

  explicit DescribePopApiItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (popCode) {
      res["PopCode"] = boost::any(*popCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Names"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Names"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      names = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PopCode") != m.end() && !m["PopCode"].empty()) {
      popCode = make_shared<string>(boost::any_cast<string>(m["PopCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribePopApiItemListResponseBody() = default;
};
class DescribePopApiItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePopApiItemListResponseBody> body{};

  DescribePopApiItemListResponse() {}

  explicit DescribePopApiItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePopApiItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePopApiItemListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePopApiItemListResponse() = default;
};
class DescribeProcessStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> roleFor{};
  shared_ptr<string> roleType{};

  DescribeProcessStatisticsRequest() {}

  explicit DescribeProcessStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<string>(boost::any_cast<string>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeProcessStatisticsRequest() = default;
};
class DescribeProcessStatisticsResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<long> banFileNum{};
  shared_ptr<long> banIpNum{};
  shared_ptr<long> banProcessNum{};
  shared_ptr<long> taskNum{};

  DescribeProcessStatisticsResponseBodyMetrics() {}

  explicit DescribeProcessStatisticsResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (banFileNum) {
      res["BanFileNum"] = boost::any(*banFileNum);
    }
    if (banIpNum) {
      res["BanIpNum"] = boost::any(*banIpNum);
    }
    if (banProcessNum) {
      res["BanProcessNum"] = boost::any(*banProcessNum);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BanFileNum") != m.end() && !m["BanFileNum"].empty()) {
      banFileNum = make_shared<long>(boost::any_cast<long>(m["BanFileNum"]));
    }
    if (m.find("BanIpNum") != m.end() && !m["BanIpNum"].empty()) {
      banIpNum = make_shared<long>(boost::any_cast<long>(m["BanIpNum"]));
    }
    if (m.find("BanProcessNum") != m.end() && !m["BanProcessNum"].empty()) {
      banProcessNum = make_shared<long>(boost::any_cast<long>(m["BanProcessNum"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
  }


  virtual ~DescribeProcessStatisticsResponseBodyMetrics() = default;
};
class DescribeProcessStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeProcessStatisticsResponseBodyMetrics> metrics{};
  shared_ptr<string> requestId{};

  DescribeProcessStatisticsResponseBody() {}

  explicit DescribeProcessStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      res["Metrics"] = metrics ? boost::any(metrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metrics"].type()) {
        DescribeProcessStatisticsResponseBodyMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metrics"]));
        metrics = make_shared<DescribeProcessStatisticsResponseBodyMetrics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProcessStatisticsResponseBody() = default;
};
class DescribeProcessStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProcessStatisticsResponseBody> body{};

  DescribeProcessStatisticsResponse() {}

  explicit DescribeProcessStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessStatisticsResponse() = default;
};
class DescribeProcessTaskCountRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> entityUuidList{};
  shared_ptr<string> lang{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  DescribeProcessTaskCountRequest() {}

  explicit DescribeProcessTaskCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityUuidList) {
      res["EntityUuidList"] = boost::any(*entityUuidList);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityUuidList") != m.end() && !m["EntityUuidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityUuidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityUuidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityUuidList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeProcessTaskCountRequest() = default;
};
class DescribeProcessTaskCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> entityUuid{};

  DescribeProcessTaskCountResponseBodyData() {}

  explicit DescribeProcessTaskCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
    }
  }


  virtual ~DescribeProcessTaskCountResponseBodyData() = default;
};
class DescribeProcessTaskCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProcessTaskCountResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeProcessTaskCountResponseBody() {}

  explicit DescribeProcessTaskCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeProcessTaskCountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProcessTaskCountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeProcessTaskCountResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProcessTaskCountResponseBody() = default;
};
class DescribeProcessTaskCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProcessTaskCountResponseBody> body{};

  DescribeProcessTaskCountResponse() {}

  explicit DescribeProcessTaskCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessTaskCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessTaskCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessTaskCountResponse() = default;
};
class DescribeProcessTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> entityUuid{};
  shared_ptr<string> eventUuid{};
  shared_ptr<string> orderField{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paramContent{};
  shared_ptr<long> processActionEnd{};
  shared_ptr<long> processActionStart{};
  shared_ptr<long> processRemoveEnd{};
  shared_ptr<long> processRemoveStart{};
  shared_ptr<string> processStrategyUuid{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> scope{};
  shared_ptr<string> source{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> triggerSource{};
  shared_ptr<string> yunCode{};

  DescribeProcessTasksRequest() {}

  explicit DescribeProcessTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
    }
    if (eventUuid) {
      res["EventUuid"] = boost::any(*eventUuid);
    }
    if (orderField) {
      res["OrderField"] = boost::any(*orderField);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paramContent) {
      res["ParamContent"] = boost::any(*paramContent);
    }
    if (processActionEnd) {
      res["ProcessActionEnd"] = boost::any(*processActionEnd);
    }
    if (processActionStart) {
      res["ProcessActionStart"] = boost::any(*processActionStart);
    }
    if (processRemoveEnd) {
      res["ProcessRemoveEnd"] = boost::any(*processRemoveEnd);
    }
    if (processRemoveStart) {
      res["ProcessRemoveStart"] = boost::any(*processRemoveStart);
    }
    if (processStrategyUuid) {
      res["ProcessStrategyUuid"] = boost::any(*processStrategyUuid);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (triggerSource) {
      res["TriggerSource"] = boost::any(*triggerSource);
    }
    if (yunCode) {
      res["YunCode"] = boost::any(*yunCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
    }
    if (m.find("EventUuid") != m.end() && !m["EventUuid"].empty()) {
      eventUuid = make_shared<string>(boost::any_cast<string>(m["EventUuid"]));
    }
    if (m.find("OrderField") != m.end() && !m["OrderField"].empty()) {
      orderField = make_shared<string>(boost::any_cast<string>(m["OrderField"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParamContent") != m.end() && !m["ParamContent"].empty()) {
      paramContent = make_shared<string>(boost::any_cast<string>(m["ParamContent"]));
    }
    if (m.find("ProcessActionEnd") != m.end() && !m["ProcessActionEnd"].empty()) {
      processActionEnd = make_shared<long>(boost::any_cast<long>(m["ProcessActionEnd"]));
    }
    if (m.find("ProcessActionStart") != m.end() && !m["ProcessActionStart"].empty()) {
      processActionStart = make_shared<long>(boost::any_cast<long>(m["ProcessActionStart"]));
    }
    if (m.find("ProcessRemoveEnd") != m.end() && !m["ProcessRemoveEnd"].empty()) {
      processRemoveEnd = make_shared<long>(boost::any_cast<long>(m["ProcessRemoveEnd"]));
    }
    if (m.find("ProcessRemoveStart") != m.end() && !m["ProcessRemoveStart"].empty()) {
      processRemoveStart = make_shared<long>(boost::any_cast<long>(m["ProcessRemoveStart"]));
    }
    if (m.find("ProcessStrategyUuid") != m.end() && !m["ProcessStrategyUuid"].empty()) {
      processStrategyUuid = make_shared<string>(boost::any_cast<string>(m["ProcessStrategyUuid"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TriggerSource") != m.end() && !m["TriggerSource"].empty()) {
      triggerSource = make_shared<string>(boost::any_cast<string>(m["TriggerSource"]));
    }
    if (m.find("YunCode") != m.end() && !m["YunCode"].empty()) {
      yunCode = make_shared<string>(boost::any_cast<string>(m["YunCode"]));
    }
  }


  virtual ~DescribeProcessTasksRequest() = default;
};
class DescribeProcessTasksResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeProcessTasksResponseBodyPage() {}

  explicit DescribeProcessTasksResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProcessTasksResponseBodyPage() = default;
};
class DescribeProcessTasksResponseBodyProcessTasks : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> entityUuid{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> errTip{};
  shared_ptr<string> eventUuid{};
  shared_ptr<long> gmtCreateMillis{};
  shared_ptr<long> gmtModifiedMillis{};
  shared_ptr<string> inputParams{};
  shared_ptr<string> processStrategyUuid{};
  shared_ptr<long> processTime{};
  shared_ptr<long> removeTime{};
  shared_ptr<string> reqUuid{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> scope{};
  shared_ptr<string> source{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> triggerSource{};
  shared_ptr<string> yunCode{};

  DescribeProcessTasksResponseBodyProcessTasks() {}

  explicit DescribeProcessTasksResponseBodyProcessTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (entityUuid) {
      res["EntityUuid"] = boost::any(*entityUuid);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (errTip) {
      res["ErrTip"] = boost::any(*errTip);
    }
    if (eventUuid) {
      res["EventUuid"] = boost::any(*eventUuid);
    }
    if (gmtCreateMillis) {
      res["GmtCreateMillis"] = boost::any(*gmtCreateMillis);
    }
    if (gmtModifiedMillis) {
      res["GmtModifiedMillis"] = boost::any(*gmtModifiedMillis);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (processStrategyUuid) {
      res["ProcessStrategyUuid"] = boost::any(*processStrategyUuid);
    }
    if (processTime) {
      res["ProcessTime"] = boost::any(*processTime);
    }
    if (removeTime) {
      res["RemoveTime"] = boost::any(*removeTime);
    }
    if (reqUuid) {
      res["ReqUuid"] = boost::any(*reqUuid);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (triggerSource) {
      res["TriggerSource"] = boost::any(*triggerSource);
    }
    if (yunCode) {
      res["YunCode"] = boost::any(*yunCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("EntityUuid") != m.end() && !m["EntityUuid"].empty()) {
      entityUuid = make_shared<string>(boost::any_cast<string>(m["EntityUuid"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("ErrTip") != m.end() && !m["ErrTip"].empty()) {
      errTip = make_shared<string>(boost::any_cast<string>(m["ErrTip"]));
    }
    if (m.find("EventUuid") != m.end() && !m["EventUuid"].empty()) {
      eventUuid = make_shared<string>(boost::any_cast<string>(m["EventUuid"]));
    }
    if (m.find("GmtCreateMillis") != m.end() && !m["GmtCreateMillis"].empty()) {
      gmtCreateMillis = make_shared<long>(boost::any_cast<long>(m["GmtCreateMillis"]));
    }
    if (m.find("GmtModifiedMillis") != m.end() && !m["GmtModifiedMillis"].empty()) {
      gmtModifiedMillis = make_shared<long>(boost::any_cast<long>(m["GmtModifiedMillis"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("ProcessStrategyUuid") != m.end() && !m["ProcessStrategyUuid"].empty()) {
      processStrategyUuid = make_shared<string>(boost::any_cast<string>(m["ProcessStrategyUuid"]));
    }
    if (m.find("ProcessTime") != m.end() && !m["ProcessTime"].empty()) {
      processTime = make_shared<long>(boost::any_cast<long>(m["ProcessTime"]));
    }
    if (m.find("RemoveTime") != m.end() && !m["RemoveTime"].empty()) {
      removeTime = make_shared<long>(boost::any_cast<long>(m["RemoveTime"]));
    }
    if (m.find("ReqUuid") != m.end() && !m["ReqUuid"].empty()) {
      reqUuid = make_shared<string>(boost::any_cast<string>(m["ReqUuid"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TriggerSource") != m.end() && !m["TriggerSource"].empty()) {
      triggerSource = make_shared<string>(boost::any_cast<string>(m["TriggerSource"]));
    }
    if (m.find("YunCode") != m.end() && !m["YunCode"].empty()) {
      yunCode = make_shared<string>(boost::any_cast<string>(m["YunCode"]));
    }
  }


  virtual ~DescribeProcessTasksResponseBodyProcessTasks() = default;
};
class DescribeProcessTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeProcessTasksResponseBodyPage> page{};
  shared_ptr<vector<DescribeProcessTasksResponseBodyProcessTasks>> processTasks{};
  shared_ptr<string> requestId{};

  DescribeProcessTasksResponseBody() {}

  explicit DescribeProcessTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (processTasks) {
      vector<boost::any> temp1;
      for(auto item1:*processTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProcessTasks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribeProcessTasksResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribeProcessTasksResponseBodyPage>(model1);
      }
    }
    if (m.find("ProcessTasks") != m.end() && !m["ProcessTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["ProcessTasks"].type()) {
        vector<DescribeProcessTasksResponseBodyProcessTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProcessTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProcessTasksResponseBodyProcessTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        processTasks = make_shared<vector<DescribeProcessTasksResponseBodyProcessTasks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProcessTasksResponseBody() = default;
};
class DescribeProcessTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProcessTasksResponseBody> body{};

  DescribeProcessTasksResponse() {}

  explicit DescribeProcessTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessTasksResponse() = default;
};
class DescribeSoarRecordActionOutputListRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionUuid{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeSoarRecordActionOutputListRequest() {}

  explicit DescribeSoarRecordActionOutputListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionUuid) {
      res["ActionUuid"] = boost::any(*actionUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionUuid") != m.end() && !m["ActionUuid"].empty()) {
      actionUuid = make_shared<string>(boost::any_cast<string>(m["ActionUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeSoarRecordActionOutputListRequest() = default;
};
class DescribeSoarRecordActionOutputListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> actionOutputs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeSoarRecordActionOutputListResponseBody() {}

  explicit DescribeSoarRecordActionOutputListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionOutputs) {
      res["ActionOutputs"] = boost::any(*actionOutputs);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionOutputs") != m.end() && !m["ActionOutputs"].empty()) {
      actionOutputs = make_shared<string>(boost::any_cast<string>(m["ActionOutputs"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSoarRecordActionOutputListResponseBody() = default;
};
class DescribeSoarRecordActionOutputListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSoarRecordActionOutputListResponseBody> body{};

  DescribeSoarRecordActionOutputListResponse() {}

  explicit DescribeSoarRecordActionOutputListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSoarRecordActionOutputListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSoarRecordActionOutputListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSoarRecordActionOutputListResponse() = default;
};
class DescribeSoarRecordInOutputRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionUuid{};
  shared_ptr<string> lang{};

  DescribeSoarRecordInOutputRequest() {}

  explicit DescribeSoarRecordInOutputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionUuid) {
      res["ActionUuid"] = boost::any(*actionUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionUuid") != m.end() && !m["ActionUuid"].empty()) {
      actionUuid = make_shared<string>(boost::any_cast<string>(m["ActionUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeSoarRecordInOutputRequest() = default;
};
class DescribeSoarRecordInOutputResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> inOutputInfo{};
  shared_ptr<string> requestId{};

  DescribeSoarRecordInOutputResponseBody() {}

  explicit DescribeSoarRecordInOutputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inOutputInfo) {
      res["InOutputInfo"] = boost::any(*inOutputInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InOutputInfo") != m.end() && !m["InOutputInfo"].empty()) {
      inOutputInfo = make_shared<string>(boost::any_cast<string>(m["InOutputInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSoarRecordInOutputResponseBody() = default;
};
class DescribeSoarRecordInOutputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSoarRecordInOutputResponseBody> body{};

  DescribeSoarRecordInOutputResponse() {}

  explicit DescribeSoarRecordInOutputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSoarRecordInOutputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSoarRecordInOutputResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSoarRecordInOutputResponse() = default;
};
class DescribeSoarRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endMillis{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> requestUuid{};
  shared_ptr<long> startMillis{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskflowMd5{};
  shared_ptr<string> triggerUser{};

  DescribeSoarRecordsRequest() {}

  explicit DescribeSoarRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endMillis) {
      res["EndMillis"] = boost::any(*endMillis);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    if (startMillis) {
      res["StartMillis"] = boost::any(*startMillis);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    if (triggerUser) {
      res["TriggerUser"] = boost::any(*triggerUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndMillis") != m.end() && !m["EndMillis"].empty()) {
      endMillis = make_shared<long>(boost::any_cast<long>(m["EndMillis"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
    if (m.find("StartMillis") != m.end() && !m["StartMillis"].empty()) {
      startMillis = make_shared<long>(boost::any_cast<long>(m["StartMillis"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
    if (m.find("TriggerUser") != m.end() && !m["TriggerUser"].empty()) {
      triggerUser = make_shared<string>(boost::any_cast<string>(m["TriggerUser"]));
    }
  }


  virtual ~DescribeSoarRecordsRequest() = default;
};
class DescribeSoarRecordsResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeSoarRecordsResponseBodyPage() {}

  explicit DescribeSoarRecordsResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSoarRecordsResponseBodyPage() = default;
};
class DescribeSoarRecordsResponseBodySoarExecuteRecords : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> rawEventReq{};
  shared_ptr<string> requestUuid{};
  shared_ptr<string> resultMessage{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskflowMd5{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> triggerUser{};

  DescribeSoarRecordsResponseBodySoarExecuteRecords() {}

  explicit DescribeSoarRecordsResponseBodySoarExecuteRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (rawEventReq) {
      res["RawEventReq"] = boost::any(*rawEventReq);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskflowMd5) {
      res["TaskflowMd5"] = boost::any(*taskflowMd5);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (triggerUser) {
      res["TriggerUser"] = boost::any(*triggerUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RawEventReq") != m.end() && !m["RawEventReq"].empty()) {
      rawEventReq = make_shared<string>(boost::any_cast<string>(m["RawEventReq"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskflowMd5") != m.end() && !m["TaskflowMd5"].empty()) {
      taskflowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskflowMd5"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("TriggerUser") != m.end() && !m["TriggerUser"].empty()) {
      triggerUser = make_shared<string>(boost::any_cast<string>(m["TriggerUser"]));
    }
  }


  virtual ~DescribeSoarRecordsResponseBodySoarExecuteRecords() = default;
};
class DescribeSoarRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSoarRecordsResponseBodyPage> page{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSoarRecordsResponseBodySoarExecuteRecords>> soarExecuteRecords{};

  DescribeSoarRecordsResponseBody() {}

  explicit DescribeSoarRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (soarExecuteRecords) {
      vector<boost::any> temp1;
      for(auto item1:*soarExecuteRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SoarExecuteRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribeSoarRecordsResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribeSoarRecordsResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SoarExecuteRecords") != m.end() && !m["SoarExecuteRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["SoarExecuteRecords"].type()) {
        vector<DescribeSoarRecordsResponseBodySoarExecuteRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SoarExecuteRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSoarRecordsResponseBodySoarExecuteRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        soarExecuteRecords = make_shared<vector<DescribeSoarRecordsResponseBodySoarExecuteRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeSoarRecordsResponseBody() = default;
};
class DescribeSoarRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSoarRecordsResponseBody> body{};

  DescribeSoarRecordsResponse() {}

  explicit DescribeSoarRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSoarRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSoarRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSoarRecordsResponse() = default;
};
class DescribeSoarTaskAndActionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> requestUuid{};

  DescribeSoarTaskAndActionsRequest() {}

  explicit DescribeSoarTaskAndActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
  }


  virtual ~DescribeSoarTaskAndActionsRequest() = default;
};
class DescribeSoarTaskAndActionsResponseBodyDetailsActions : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionUuid{};
  shared_ptr<string> assetName{};
  shared_ptr<string> component{};
  shared_ptr<long> endTime{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> requestUuid{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> triggerUser{};

  DescribeSoarTaskAndActionsResponseBodyDetailsActions() {}

  explicit DescribeSoarTaskAndActionsResponseBodyDetailsActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionUuid) {
      res["ActionUuid"] = boost::any(*actionUuid);
    }
    if (assetName) {
      res["AssetName"] = boost::any(*assetName);
    }
    if (component) {
      res["Component"] = boost::any(*component);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (triggerUser) {
      res["TriggerUser"] = boost::any(*triggerUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionUuid") != m.end() && !m["ActionUuid"].empty()) {
      actionUuid = make_shared<string>(boost::any_cast<string>(m["ActionUuid"]));
    }
    if (m.find("AssetName") != m.end() && !m["AssetName"].empty()) {
      assetName = make_shared<string>(boost::any_cast<string>(m["AssetName"]));
    }
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["Component"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TriggerUser") != m.end() && !m["TriggerUser"].empty()) {
      triggerUser = make_shared<string>(boost::any_cast<string>(m["TriggerUser"]));
    }
  }


  virtual ~DescribeSoarTaskAndActionsResponseBodyDetailsActions() = default;
};
class DescribeSoarTaskAndActionsResponseBodyDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSoarTaskAndActionsResponseBodyDetailsActions>> actions{};
  shared_ptr<long> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> rawEventReq{};
  shared_ptr<string> requestUuid{};
  shared_ptr<string> resultLevel{};
  shared_ptr<string> resultMessage{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskFlowMd5{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskTenantId{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> triggerUser{};

  DescribeSoarTaskAndActionsResponseBodyDetails() {}

  explicit DescribeSoarTaskAndActionsResponseBodyDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Actions"] = boost::any(temp1);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (rawEventReq) {
      res["RawEventReq"] = boost::any(*rawEventReq);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    if (resultLevel) {
      res["ResultLevel"] = boost::any(*resultLevel);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskFlowMd5) {
      res["TaskFlowMd5"] = boost::any(*taskFlowMd5);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskTenantId) {
      res["TaskTenantId"] = boost::any(*taskTenantId);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (triggerUser) {
      res["TriggerUser"] = boost::any(*triggerUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      if (typeid(vector<boost::any>) == m["Actions"].type()) {
        vector<DescribeSoarTaskAndActionsResponseBodyDetailsActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSoarTaskAndActionsResponseBodyDetailsActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<DescribeSoarTaskAndActionsResponseBodyDetailsActions>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RawEventReq") != m.end() && !m["RawEventReq"].empty()) {
      rawEventReq = make_shared<string>(boost::any_cast<string>(m["RawEventReq"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
    if (m.find("ResultLevel") != m.end() && !m["ResultLevel"].empty()) {
      resultLevel = make_shared<string>(boost::any_cast<string>(m["ResultLevel"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskFlowMd5") != m.end() && !m["TaskFlowMd5"].empty()) {
      taskFlowMd5 = make_shared<string>(boost::any_cast<string>(m["TaskFlowMd5"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskTenantId") != m.end() && !m["TaskTenantId"].empty()) {
      taskTenantId = make_shared<string>(boost::any_cast<string>(m["TaskTenantId"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("TriggerUser") != m.end() && !m["TriggerUser"].empty()) {
      triggerUser = make_shared<string>(boost::any_cast<string>(m["TriggerUser"]));
    }
  }


  virtual ~DescribeSoarTaskAndActionsResponseBodyDetails() = default;
};
class DescribeSoarTaskAndActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSoarTaskAndActionsResponseBodyDetails> details{};
  shared_ptr<string> requestId{};

  DescribeSoarTaskAndActionsResponseBody() {}

  explicit DescribeSoarTaskAndActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      res["Details"] = details ? boost::any(details->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(map<string, boost::any>) == m["Details"].type()) {
        DescribeSoarTaskAndActionsResponseBodyDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Details"]));
        details = make_shared<DescribeSoarTaskAndActionsResponseBodyDetails>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSoarTaskAndActionsResponseBody() = default;
};
class DescribeSoarTaskAndActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSoarTaskAndActionsResponseBody> body{};

  DescribeSoarTaskAndActionsResponse() {}

  explicit DescribeSoarTaskAndActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSoarTaskAndActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSoarTaskAndActionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSoarTaskAndActionsResponse() = default;
};
class DescribeSophonCommandsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeSophonCommandsRequest() {}

  explicit DescribeSophonCommandsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeSophonCommandsRequest() = default;
};
class DescribeSophonCommandsResponseBodyDataParamConfig : public Darabonba::Model {
public:
  shared_ptr<string> checkField{};
  shared_ptr<string> field{};
  shared_ptr<bool> necessary{};
  shared_ptr<string> value{};

  DescribeSophonCommandsResponseBodyDataParamConfig() {}

  explicit DescribeSophonCommandsResponseBodyDataParamConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkField) {
      res["CheckField"] = boost::any(*checkField);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (necessary) {
      res["Necessary"] = boost::any(*necessary);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckField") != m.end() && !m["CheckField"].empty()) {
      checkField = make_shared<string>(boost::any_cast<string>(m["CheckField"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Necessary") != m.end() && !m["Necessary"].empty()) {
      necessary = make_shared<bool>(boost::any_cast<bool>(m["Necessary"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeSophonCommandsResponseBodyDataParamConfig() = default;
};
class DescribeSophonCommandsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeSophonCommandsResponseBodyDataParamConfig>> paramConfig{};

  DescribeSophonCommandsResponseBodyData() {}

  explicit DescribeSophonCommandsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramConfig) {
      vector<boost::any> temp1;
      for(auto item1:*paramConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamConfig") != m.end() && !m["ParamConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamConfig"].type()) {
        vector<DescribeSophonCommandsResponseBodyDataParamConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSophonCommandsResponseBodyDataParamConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramConfig = make_shared<vector<DescribeSophonCommandsResponseBodyDataParamConfig>>(expect1);
      }
    }
  }


  virtual ~DescribeSophonCommandsResponseBodyData() = default;
};
class DescribeSophonCommandsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSophonCommandsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeSophonCommandsResponseBody() {}

  explicit DescribeSophonCommandsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeSophonCommandsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSophonCommandsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeSophonCommandsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSophonCommandsResponseBody() = default;
};
class DescribeSophonCommandsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSophonCommandsResponseBody> body{};

  DescribeSophonCommandsResponse() {}

  explicit DescribeSophonCommandsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSophonCommandsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSophonCommandsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSophonCommandsResponse() = default;
};
class DescribeVendorApiListRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<string> vendorCode{};

  DescribeVendorApiListRequest() {}

  explicit DescribeVendorApiListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (vendorCode) {
      res["VendorCode"] = boost::any(*vendorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("VendorCode") != m.end() && !m["VendorCode"].empty()) {
      vendorCode = make_shared<string>(boost::any_cast<string>(m["VendorCode"]));
    }
  }


  virtual ~DescribeVendorApiListRequest() = default;
};
class DescribeVendorApiListResponseBodyApiList : public Darabonba::Model {
public:
  shared_ptr<string> advanceConfig{};
  shared_ptr<string> apiName{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> method{};
  shared_ptr<bool> needAdvanceConfig{};
  shared_ptr<bool> needPageInfo{};
  shared_ptr<string> pageInfo{};
  shared_ptr<string> parameter{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productDomain{};
  shared_ptr<string> productName{};
  shared_ptr<string> protocol{};
  shared_ptr<string> vendorCode{};

  DescribeVendorApiListResponseBodyApiList() {}

  explicit DescribeVendorApiListResponseBodyApiList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceConfig) {
      res["AdvanceConfig"] = boost::any(*advanceConfig);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (needAdvanceConfig) {
      res["NeedAdvanceConfig"] = boost::any(*needAdvanceConfig);
    }
    if (needPageInfo) {
      res["NeedPageInfo"] = boost::any(*needPageInfo);
    }
    if (pageInfo) {
      res["PageInfo"] = boost::any(*pageInfo);
    }
    if (parameter) {
      res["Parameter"] = boost::any(*parameter);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productDomain) {
      res["ProductDomain"] = boost::any(*productDomain);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (vendorCode) {
      res["VendorCode"] = boost::any(*vendorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvanceConfig") != m.end() && !m["AdvanceConfig"].empty()) {
      advanceConfig = make_shared<string>(boost::any_cast<string>(m["AdvanceConfig"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("NeedAdvanceConfig") != m.end() && !m["NeedAdvanceConfig"].empty()) {
      needAdvanceConfig = make_shared<bool>(boost::any_cast<bool>(m["NeedAdvanceConfig"]));
    }
    if (m.find("NeedPageInfo") != m.end() && !m["NeedPageInfo"].empty()) {
      needPageInfo = make_shared<bool>(boost::any_cast<bool>(m["NeedPageInfo"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      pageInfo = make_shared<string>(boost::any_cast<string>(m["PageInfo"]));
    }
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      parameter = make_shared<string>(boost::any_cast<string>(m["Parameter"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductDomain") != m.end() && !m["ProductDomain"].empty()) {
      productDomain = make_shared<string>(boost::any_cast<string>(m["ProductDomain"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("VendorCode") != m.end() && !m["VendorCode"].empty()) {
      vendorCode = make_shared<string>(boost::any_cast<string>(m["VendorCode"]));
    }
  }


  virtual ~DescribeVendorApiListResponseBodyApiList() = default;
};
class DescribeVendorApiListResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeVendorApiListResponseBodyPage() {}

  explicit DescribeVendorApiListResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeVendorApiListResponseBodyPage() = default;
};
class DescribeVendorApiListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVendorApiListResponseBodyApiList>> apiList{};
  shared_ptr<DescribeVendorApiListResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  DescribeVendorApiListResponseBody() {}

  explicit DescribeVendorApiListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiList) {
      vector<boost::any> temp1;
      for(auto item1:*apiList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiList"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiList") != m.end() && !m["ApiList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiList"].type()) {
        vector<DescribeVendorApiListResponseBodyApiList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVendorApiListResponseBodyApiList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiList = make_shared<vector<DescribeVendorApiListResponseBodyApiList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        DescribeVendorApiListResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<DescribeVendorApiListResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVendorApiListResponseBody() = default;
};
class DescribeVendorApiListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVendorApiListResponseBody> body{};

  DescribeVendorApiListResponse() {}

  explicit DescribeVendorApiListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVendorApiListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVendorApiListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVendorApiListResponse() = default;
};
class DescriberPython3ScriptLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> requestUuid{};

  DescriberPython3ScriptLogsRequest() {}

  explicit DescriberPython3ScriptLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (requestUuid) {
      res["RequestUuid"] = boost::any(*requestUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RequestUuid") != m.end() && !m["RequestUuid"].empty()) {
      requestUuid = make_shared<string>(boost::any_cast<string>(m["RequestUuid"]));
    }
  }


  virtual ~DescriberPython3ScriptLogsRequest() = default;
};
class DescriberPython3ScriptLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> runResult{};

  DescriberPython3ScriptLogsResponseBody() {}

  explicit DescriberPython3ScriptLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runResult) {
      res["RunResult"] = boost::any(*runResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunResult") != m.end() && !m["RunResult"].empty()) {
      runResult = make_shared<string>(boost::any_cast<string>(m["RunResult"]));
    }
  }


  virtual ~DescriberPython3ScriptLogsResponseBody() = default;
};
class DescriberPython3ScriptLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescriberPython3ScriptLogsResponseBody> body{};

  DescriberPython3ScriptLogsResponse() {}

  explicit DescriberPython3ScriptLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescriberPython3ScriptLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescriberPython3ScriptLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescriberPython3ScriptLogsResponse() = default;
};
class ModifyComponentAssetRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetConfig{};
  shared_ptr<string> lang{};

  ModifyComponentAssetRequest() {}

  explicit ModifyComponentAssetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetConfig) {
      res["AssetConfig"] = boost::any(*assetConfig);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetConfig") != m.end() && !m["AssetConfig"].empty()) {
      assetConfig = make_shared<string>(boost::any_cast<string>(m["AssetConfig"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~ModifyComponentAssetRequest() = default;
};
class ModifyComponentAssetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyComponentAssetResponseBody() {}

  explicit ModifyComponentAssetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyComponentAssetResponseBody() = default;
};
class ModifyComponentAssetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyComponentAssetResponseBody> body{};

  ModifyComponentAssetResponse() {}

  explicit ModifyComponentAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyComponentAssetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyComponentAssetResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyComponentAssetResponse() = default;
};
class ModifyPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> taskflow{};

  ModifyPlaybookRequest() {}

  explicit ModifyPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (taskflow) {
      res["Taskflow"] = boost::any(*taskflow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("Taskflow") != m.end() && !m["Taskflow"].empty()) {
      taskflow = make_shared<string>(boost::any_cast<string>(m["Taskflow"]));
    }
  }


  virtual ~ModifyPlaybookRequest() = default;
};
class ModifyPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPlaybookResponseBody() {}

  explicit ModifyPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyPlaybookResponseBody() = default;
};
class ModifyPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPlaybookResponseBody> body{};

  ModifyPlaybookResponse() {}

  explicit ModifyPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPlaybookResponse() = default;
};
class ModifyPlaybookInputOutputRequest : public Darabonba::Model {
public:
  shared_ptr<string> exeConfig{};
  shared_ptr<string> inputParams{};
  shared_ptr<string> lang{};
  shared_ptr<string> outputParams{};
  shared_ptr<string> paramType{};
  shared_ptr<string> playbookUuid{};

  ModifyPlaybookInputOutputRequest() {}

  explicit ModifyPlaybookInputOutputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exeConfig) {
      res["ExeConfig"] = boost::any(*exeConfig);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (outputParams) {
      res["OutputParams"] = boost::any(*outputParams);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExeConfig") != m.end() && !m["ExeConfig"].empty()) {
      exeConfig = make_shared<string>(boost::any_cast<string>(m["ExeConfig"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OutputParams") != m.end() && !m["OutputParams"].empty()) {
      outputParams = make_shared<string>(boost::any_cast<string>(m["OutputParams"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~ModifyPlaybookInputOutputRequest() = default;
};
class ModifyPlaybookInputOutputResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPlaybookInputOutputResponseBody() {}

  explicit ModifyPlaybookInputOutputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyPlaybookInputOutputResponseBody() = default;
};
class ModifyPlaybookInputOutputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPlaybookInputOutputResponseBody> body{};

  ModifyPlaybookInputOutputResponse() {}

  explicit ModifyPlaybookInputOutputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPlaybookInputOutputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPlaybookInputOutputResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPlaybookInputOutputResponse() = default;
};
class ModifyPlaybookInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> active{};
  shared_ptr<string> lang{};
  shared_ptr<string> playbookUuid{};

  ModifyPlaybookInstanceStatusRequest() {}

  explicit ModifyPlaybookInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<long>(boost::any_cast<long>(m["Active"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~ModifyPlaybookInstanceStatusRequest() = default;
};
class ModifyPlaybookInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPlaybookInstanceStatusResponseBody() {}

  explicit ModifyPlaybookInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyPlaybookInstanceStatusResponseBody() = default;
};
class ModifyPlaybookInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPlaybookInstanceStatusResponseBody> body{};

  ModifyPlaybookInstanceStatusResponse() {}

  explicit ModifyPlaybookInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPlaybookInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPlaybookInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPlaybookInstanceStatusResponse() = default;
};
class PublishPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> playbookUuid{};

  PublishPlaybookRequest() {}

  explicit PublishPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~PublishPlaybookRequest() = default;
};
class PublishPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishPlaybookResponseBody() {}

  explicit PublishPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishPlaybookResponseBody() = default;
};
class PublishPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishPlaybookResponseBody> body{};

  PublishPlaybookResponse() {}

  explicit PublishPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~PublishPlaybookResponse() = default;
};
class QueryTreeDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  QueryTreeDataRequest() {}

  explicit QueryTreeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~QueryTreeDataRequest() = default;
};
class QueryTreeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> playbooks{};
  shared_ptr<string> requestId{};

  QueryTreeDataResponseBody() {}

  explicit QueryTreeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbooks) {
      res["Playbooks"] = boost::any(*playbooks);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Playbooks") != m.end() && !m["Playbooks"].empty()) {
      playbooks = make_shared<string>(boost::any_cast<string>(m["Playbooks"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryTreeDataResponseBody() = default;
};
class QueryTreeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTreeDataResponseBody> body{};

  QueryTreeDataResponse() {}

  explicit QueryTreeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTreeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTreeDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTreeDataResponse() = default;
};
class RenamePlaybookNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> newNodeName{};
  shared_ptr<string> oldNodeName{};
  shared_ptr<string> playbookUuid{};

  RenamePlaybookNodeRequest() {}

  explicit RenamePlaybookNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newNodeName) {
      res["NewNodeName"] = boost::any(*newNodeName);
    }
    if (oldNodeName) {
      res["OldNodeName"] = boost::any(*oldNodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewNodeName") != m.end() && !m["NewNodeName"].empty()) {
      newNodeName = make_shared<string>(boost::any_cast<string>(m["NewNodeName"]));
    }
    if (m.find("OldNodeName") != m.end() && !m["OldNodeName"].empty()) {
      oldNodeName = make_shared<string>(boost::any_cast<string>(m["OldNodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~RenamePlaybookNodeRequest() = default;
};
class RenamePlaybookNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> renameResult{};
  shared_ptr<string> requestId{};

  RenamePlaybookNodeResponseBody() {}

  explicit RenamePlaybookNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (renameResult) {
      res["RenameResult"] = boost::any(*renameResult);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RenameResult") != m.end() && !m["RenameResult"].empty()) {
      renameResult = make_shared<string>(boost::any_cast<string>(m["RenameResult"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenamePlaybookNodeResponseBody() = default;
};
class RenamePlaybookNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenamePlaybookNodeResponseBody> body{};

  RenamePlaybookNodeResponse() {}

  explicit RenamePlaybookNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenamePlaybookNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenamePlaybookNodeResponseBody>(model1);
      }
    }
  }


  virtual ~RenamePlaybookNodeResponse() = default;
};
class RevertPlaybookReleaseRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isPublish{};
  shared_ptr<long> playReleaseId{};
  shared_ptr<string> playbookUuid{};

  RevertPlaybookReleaseRequest() {}

  explicit RevertPlaybookReleaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isPublish) {
      res["IsPublish"] = boost::any(*isPublish);
    }
    if (playReleaseId) {
      res["PlayReleaseId"] = boost::any(*playReleaseId);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsPublish") != m.end() && !m["IsPublish"].empty()) {
      isPublish = make_shared<bool>(boost::any_cast<bool>(m["IsPublish"]));
    }
    if (m.find("PlayReleaseId") != m.end() && !m["PlayReleaseId"].empty()) {
      playReleaseId = make_shared<long>(boost::any_cast<long>(m["PlayReleaseId"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~RevertPlaybookReleaseRequest() = default;
};
class RevertPlaybookReleaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevertPlaybookReleaseResponseBody() {}

  explicit RevertPlaybookReleaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RevertPlaybookReleaseResponseBody() = default;
};
class RevertPlaybookReleaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevertPlaybookReleaseResponseBody> body{};

  RevertPlaybookReleaseResponse() {}

  explicit RevertPlaybookReleaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevertPlaybookReleaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevertPlaybookReleaseResponseBody>(model1);
      }
    }
  }


  virtual ~RevertPlaybookReleaseResponse() = default;
};
class RunNotifyComponentWithEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<long> assetId{};
  shared_ptr<string> componentName{};
  shared_ptr<string> content{};
  shared_ptr<string> lang{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<vector<string>> receivers{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};
  shared_ptr<string> subject{};

  RunNotifyComponentWithEmailRequest() {}

  explicit RunNotifyComponentWithEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (receivers) {
      res["Receivers"] = boost::any(*receivers);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<long>(boost::any_cast<long>(m["AssetId"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("Receivers") != m.end() && !m["Receivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Receivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Receivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receivers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~RunNotifyComponentWithEmailRequest() = default;
};
class RunNotifyComponentWithEmailResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  RunNotifyComponentWithEmailResponseBodyPage() {}

  explicit RunNotifyComponentWithEmailResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~RunNotifyComponentWithEmailResponseBodyPage() = default;
};
class RunNotifyComponentWithEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<RunNotifyComponentWithEmailResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  RunNotifyComponentWithEmailResponseBody() {}

  explicit RunNotifyComponentWithEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        RunNotifyComponentWithEmailResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<RunNotifyComponentWithEmailResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunNotifyComponentWithEmailResponseBody() = default;
};
class RunNotifyComponentWithEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunNotifyComponentWithEmailResponseBody> body{};

  RunNotifyComponentWithEmailResponse() {}

  explicit RunNotifyComponentWithEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunNotifyComponentWithEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunNotifyComponentWithEmailResponseBody>(model1);
      }
    }
  }


  virtual ~RunNotifyComponentWithEmailResponse() = default;
};
class RunNotifyComponentWithMessageCenterRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> aliuid{};
  shared_ptr<long> assetId{};
  shared_ptr<vector<string>> channelTypeList{};
  shared_ptr<string> componentName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> lang{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> params{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};

  RunNotifyComponentWithMessageCenterRequest() {}

  explicit RunNotifyComponentWithMessageCenterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (channelTypeList) {
      res["ChannelTypeList"] = boost::any(*channelTypeList);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<string>(boost::any_cast<string>(m["Aliuid"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<long>(boost::any_cast<long>(m["AssetId"]));
    }
    if (m.find("ChannelTypeList") != m.end() && !m["ChannelTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~RunNotifyComponentWithMessageCenterRequest() = default;
};
class RunNotifyComponentWithMessageCenterResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  RunNotifyComponentWithMessageCenterResponseBodyPage() {}

  explicit RunNotifyComponentWithMessageCenterResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~RunNotifyComponentWithMessageCenterResponseBodyPage() = default;
};
class RunNotifyComponentWithMessageCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<RunNotifyComponentWithMessageCenterResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  RunNotifyComponentWithMessageCenterResponseBody() {}

  explicit RunNotifyComponentWithMessageCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        RunNotifyComponentWithMessageCenterResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<RunNotifyComponentWithMessageCenterResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunNotifyComponentWithMessageCenterResponseBody() = default;
};
class RunNotifyComponentWithMessageCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunNotifyComponentWithMessageCenterResponseBody> body{};

  RunNotifyComponentWithMessageCenterResponse() {}

  explicit RunNotifyComponentWithMessageCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunNotifyComponentWithMessageCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunNotifyComponentWithMessageCenterResponseBody>(model1);
      }
    }
  }


  virtual ~RunNotifyComponentWithMessageCenterResponse() = default;
};
class RunNotifyComponentWithWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<long> assetId{};
  shared_ptr<string> componentName{};
  shared_ptr<string> content{};
  shared_ptr<string> lang{};
  shared_ptr<string> msgType{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<long> roleFor{};
  shared_ptr<string> roleType{};
  shared_ptr<string> secret{};
  shared_ptr<string> webhook{};

  RunNotifyComponentWithWebhookRequest() {}

  explicit RunNotifyComponentWithWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (assetId) {
      res["AssetId"] = boost::any(*assetId);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (msgType) {
      res["MsgType"] = boost::any(*msgType);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (roleFor) {
      res["RoleFor"] = boost::any(*roleFor);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (webhook) {
      res["Webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("AssetId") != m.end() && !m["AssetId"].empty()) {
      assetId = make_shared<long>(boost::any_cast<long>(m["AssetId"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MsgType") != m.end() && !m["MsgType"].empty()) {
      msgType = make_shared<string>(boost::any_cast<string>(m["MsgType"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("RoleFor") != m.end() && !m["RoleFor"].empty()) {
      roleFor = make_shared<long>(boost::any_cast<long>(m["RoleFor"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Webhook") != m.end() && !m["Webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["Webhook"]));
    }
  }


  virtual ~RunNotifyComponentWithWebhookRequest() = default;
};
class RunNotifyComponentWithWebhookResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  RunNotifyComponentWithWebhookResponseBodyPage() {}

  explicit RunNotifyComponentWithWebhookResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~RunNotifyComponentWithWebhookResponseBodyPage() = default;
};
class RunNotifyComponentWithWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<RunNotifyComponentWithWebhookResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  RunNotifyComponentWithWebhookResponseBody() {}

  explicit RunNotifyComponentWithWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        RunNotifyComponentWithWebhookResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<RunNotifyComponentWithWebhookResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunNotifyComponentWithWebhookResponseBody() = default;
};
class RunNotifyComponentWithWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunNotifyComponentWithWebhookResponseBody> body{};

  RunNotifyComponentWithWebhookResponse() {}

  explicit RunNotifyComponentWithWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunNotifyComponentWithWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunNotifyComponentWithWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~RunNotifyComponentWithWebhookResponse() = default;
};
class RunPython3ScriptRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<string> params{};
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> pythonScript{};

  RunPython3ScriptRequest() {}

  explicit RunPython3ScriptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (pythonScript) {
      res["PythonScript"] = boost::any(*pythonScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("PythonScript") != m.end() && !m["PythonScript"].empty()) {
      pythonScript = make_shared<string>(boost::any_cast<string>(m["PythonScript"]));
    }
  }


  virtual ~RunPython3ScriptRequest() = default;
};
class RunPython3ScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> runResult{};

  RunPython3ScriptResponseBody() {}

  explicit RunPython3ScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runResult) {
      res["RunResult"] = boost::any(*runResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunResult") != m.end() && !m["RunResult"].empty()) {
      runResult = make_shared<string>(boost::any_cast<string>(m["RunResult"]));
    }
  }


  virtual ~RunPython3ScriptResponseBody() = default;
};
class RunPython3ScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunPython3ScriptResponseBody> body{};

  RunPython3ScriptResponse() {}

  explicit RunPython3ScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunPython3ScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunPython3ScriptResponseBody>(model1);
      }
    }
  }


  virtual ~RunPython3ScriptResponse() = default;
};
class TriggerPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputParam{};
  shared_ptr<string> playbookUuid{};

  TriggerPlaybookRequest() {}

  explicit TriggerPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputParam) {
      res["InputParam"] = boost::any(*inputParam);
    }
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputParam") != m.end() && !m["InputParam"].empty()) {
      inputParam = make_shared<string>(boost::any_cast<string>(m["InputParam"]));
    }
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
  }


  virtual ~TriggerPlaybookRequest() = default;
};
class TriggerPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> triggerUuid{};

  TriggerPlaybookResponseBody() {}

  explicit TriggerPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (triggerUuid) {
      res["TriggerUuid"] = boost::any(*triggerUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TriggerUuid") != m.end() && !m["TriggerUuid"].empty()) {
      triggerUuid = make_shared<string>(boost::any_cast<string>(m["TriggerUuid"]));
    }
  }


  virtual ~TriggerPlaybookResponseBody() = default;
};
class TriggerPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerPlaybookResponseBody> body{};

  TriggerPlaybookResponse() {}

  explicit TriggerPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerPlaybookResponse() = default;
};
class TriggerProcessTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> taskId{};

  TriggerProcessTaskRequest() {}

  explicit TriggerProcessTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~TriggerProcessTaskRequest() = default;
};
class TriggerProcessTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TriggerProcessTaskResponseBody() {}

  explicit TriggerProcessTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TriggerProcessTaskResponseBody() = default;
};
class TriggerProcessTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerProcessTaskResponseBody> body{};

  TriggerProcessTaskResponse() {}

  explicit TriggerProcessTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerProcessTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerProcessTaskResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerProcessTaskResponse() = default;
};
class TriggerSophonPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> commandName{};
  shared_ptr<string> inputParams{};
  shared_ptr<string> sophonTaskId{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> uuid{};

  TriggerSophonPlaybookRequest() {}

  explicit TriggerSophonPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandName) {
      res["CommandName"] = boost::any(*commandName);
    }
    if (inputParams) {
      res["InputParams"] = boost::any(*inputParams);
    }
    if (sophonTaskId) {
      res["SophonTaskId"] = boost::any(*sophonTaskId);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandName") != m.end() && !m["CommandName"].empty()) {
      commandName = make_shared<string>(boost::any_cast<string>(m["CommandName"]));
    }
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      inputParams = make_shared<string>(boost::any_cast<string>(m["InputParams"]));
    }
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~TriggerSophonPlaybookRequest() = default;
};
class TriggerSophonPlaybookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sophonTaskId{};

  TriggerSophonPlaybookResponseBodyData() {}

  explicit TriggerSophonPlaybookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sophonTaskId) {
      res["SophonTaskId"] = boost::any(*sophonTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SophonTaskId") != m.end() && !m["SophonTaskId"].empty()) {
      sophonTaskId = make_shared<string>(boost::any_cast<string>(m["SophonTaskId"]));
    }
  }


  virtual ~TriggerSophonPlaybookResponseBodyData() = default;
};
class TriggerSophonPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<TriggerSophonPlaybookResponseBodyData> data{};
  shared_ptr<string> requestId{};

  TriggerSophonPlaybookResponseBody() {}

  explicit TriggerSophonPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TriggerSophonPlaybookResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TriggerSophonPlaybookResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TriggerSophonPlaybookResponseBody() = default;
};
class TriggerSophonPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerSophonPlaybookResponseBody> body{};

  TriggerSophonPlaybookResponse() {}

  explicit TriggerSophonPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerSophonPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerSophonPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerSophonPlaybookResponse() = default;
};
class VerifyPlaybookRequest : public Darabonba::Model {
public:
  shared_ptr<string> playbookUuid{};
  shared_ptr<string> taskFlow{};

  VerifyPlaybookRequest() {}

  explicit VerifyPlaybookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (playbookUuid) {
      res["PlaybookUuid"] = boost::any(*playbookUuid);
    }
    if (taskFlow) {
      res["TaskFlow"] = boost::any(*taskFlow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaybookUuid") != m.end() && !m["PlaybookUuid"].empty()) {
      playbookUuid = make_shared<string>(boost::any_cast<string>(m["PlaybookUuid"]));
    }
    if (m.find("TaskFlow") != m.end() && !m["TaskFlow"].empty()) {
      taskFlow = make_shared<string>(boost::any_cast<string>(m["TaskFlow"]));
    }
  }


  virtual ~VerifyPlaybookRequest() = default;
};
class VerifyPlaybookResponseBodyCheckTaskInfos : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> riskLevel{};

  VerifyPlaybookResponseBodyCheckTaskInfos() {}

  explicit VerifyPlaybookResponseBodyCheckTaskInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
  }


  virtual ~VerifyPlaybookResponseBodyCheckTaskInfos() = default;
};
class VerifyPlaybookResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<VerifyPlaybookResponseBodyCheckTaskInfos>> checkTaskInfos{};
  shared_ptr<string> requestId{};

  VerifyPlaybookResponseBody() {}

  explicit VerifyPlaybookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkTaskInfos) {
      vector<boost::any> temp1;
      for(auto item1:*checkTaskInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckTaskInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckTaskInfos") != m.end() && !m["CheckTaskInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckTaskInfos"].type()) {
        vector<VerifyPlaybookResponseBodyCheckTaskInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckTaskInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyPlaybookResponseBodyCheckTaskInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkTaskInfos = make_shared<vector<VerifyPlaybookResponseBodyCheckTaskInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyPlaybookResponseBody() = default;
};
class VerifyPlaybookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyPlaybookResponseBody> body{};

  VerifyPlaybookResponse() {}

  explicit VerifyPlaybookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyPlaybookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyPlaybookResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyPlaybookResponse() = default;
};
class VerifyPythonFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  VerifyPythonFileRequest() {}

  explicit VerifyPythonFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~VerifyPythonFileRequest() = default;
};
class VerifyPythonFileResponseBodySyntax : public Darabonba::Model {
public:
  shared_ptr<long> endColumn{};
  shared_ptr<long> endLineNumber{};
  shared_ptr<string> message{};
  shared_ptr<long> severity{};
  shared_ptr<long> startColumn{};
  shared_ptr<long> startLineNumber{};

  VerifyPythonFileResponseBodySyntax() {}

  explicit VerifyPythonFileResponseBodySyntax(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endColumn) {
      res["EndColumn"] = boost::any(*endColumn);
    }
    if (endLineNumber) {
      res["EndLineNumber"] = boost::any(*endLineNumber);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startColumn) {
      res["StartColumn"] = boost::any(*startColumn);
    }
    if (startLineNumber) {
      res["StartLineNumber"] = boost::any(*startLineNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndColumn") != m.end() && !m["EndColumn"].empty()) {
      endColumn = make_shared<long>(boost::any_cast<long>(m["EndColumn"]));
    }
    if (m.find("EndLineNumber") != m.end() && !m["EndLineNumber"].empty()) {
      endLineNumber = make_shared<long>(boost::any_cast<long>(m["EndLineNumber"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("StartColumn") != m.end() && !m["StartColumn"].empty()) {
      startColumn = make_shared<long>(boost::any_cast<long>(m["StartColumn"]));
    }
    if (m.find("StartLineNumber") != m.end() && !m["StartLineNumber"].empty()) {
      startLineNumber = make_shared<long>(boost::any_cast<long>(m["StartLineNumber"]));
    }
  }


  virtual ~VerifyPythonFileResponseBodySyntax() = default;
};
class VerifyPythonFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<VerifyPythonFileResponseBodySyntax>> syntax{};

  VerifyPythonFileResponseBody() {}

  explicit VerifyPythonFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syntax) {
      vector<boost::any> temp1;
      for(auto item1:*syntax){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Syntax"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Syntax") != m.end() && !m["Syntax"].empty()) {
      if (typeid(vector<boost::any>) == m["Syntax"].type()) {
        vector<VerifyPythonFileResponseBodySyntax> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Syntax"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VerifyPythonFileResponseBodySyntax model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        syntax = make_shared<vector<VerifyPythonFileResponseBodySyntax>>(expect1);
      }
    }
  }


  virtual ~VerifyPythonFileResponseBody() = default;
};
class VerifyPythonFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyPythonFileResponseBody> body{};

  VerifyPythonFileResponse() {}

  explicit VerifyPythonFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyPythonFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyPythonFileResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyPythonFileResponse() = default;
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
  BatchModifyInstanceStatusResponse batchModifyInstanceStatusWithOptions(shared_ptr<BatchModifyInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchModifyInstanceStatusResponse batchModifyInstanceStatus(shared_ptr<BatchModifyInstanceStatusRequest> request);
  ComparePlaybooksResponse comparePlaybooksWithOptions(shared_ptr<ComparePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ComparePlaybooksResponse comparePlaybooks(shared_ptr<ComparePlaybooksRequest> request);
  ConvertPlaybookResponse convertPlaybookWithOptions(shared_ptr<ConvertPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertPlaybookResponse convertPlaybook(shared_ptr<ConvertPlaybookRequest> request);
  CopyPlaybookResponse copyPlaybookWithOptions(shared_ptr<CopyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyPlaybookResponse copyPlaybook(shared_ptr<CopyPlaybookRequest> request);
  CreatePlaybookResponse createPlaybookWithOptions(shared_ptr<CreatePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePlaybookResponse createPlaybook(shared_ptr<CreatePlaybookRequest> request);
  DebugPlaybookResponse debugPlaybookWithOptions(shared_ptr<DebugPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DebugPlaybookResponse debugPlaybook(shared_ptr<DebugPlaybookRequest> request);
  DeleteComponentAssetResponse deleteComponentAssetWithOptions(shared_ptr<DeleteComponentAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteComponentAssetResponse deleteComponentAsset(shared_ptr<DeleteComponentAssetRequest> request);
  DeletePlaybookResponse deletePlaybookWithOptions(shared_ptr<DeletePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePlaybookResponse deletePlaybook(shared_ptr<DeletePlaybookRequest> request);
  DescribeComponentAssetFormResponse describeComponentAssetFormWithOptions(shared_ptr<DescribeComponentAssetFormRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentAssetFormResponse describeComponentAssetForm(shared_ptr<DescribeComponentAssetFormRequest> request);
  DescribeComponentAssetsResponse describeComponentAssetsWithOptions(shared_ptr<DescribeComponentAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentAssetsResponse describeComponentAssets(shared_ptr<DescribeComponentAssetsRequest> request);
  DescribeComponentListResponse describeComponentListWithOptions(shared_ptr<DescribeComponentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentListResponse describeComponentList(shared_ptr<DescribeComponentListRequest> request);
  DescribeComponentPlaybookResponse describeComponentPlaybookWithOptions(shared_ptr<DescribeComponentPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentPlaybookResponse describeComponentPlaybook(shared_ptr<DescribeComponentPlaybookRequest> request);
  DescribeComponentsJsResponse describeComponentsJsWithOptions(shared_ptr<DescribeComponentsJsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComponentsJsResponse describeComponentsJs(shared_ptr<DescribeComponentsJsRequest> request);
  DescribeDistinctReleasesResponse describeDistinctReleasesWithOptions(shared_ptr<DescribeDistinctReleasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDistinctReleasesResponse describeDistinctReleases(shared_ptr<DescribeDistinctReleasesRequest> request);
  DescribeEnumItemsResponse describeEnumItemsWithOptions(shared_ptr<DescribeEnumItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEnumItemsResponse describeEnumItems(shared_ptr<DescribeEnumItemsRequest> request);
  DescribeExecutePlaybooksResponse describeExecutePlaybooksWithOptions(shared_ptr<DescribeExecutePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExecutePlaybooksResponse describeExecutePlaybooks(shared_ptr<DescribeExecutePlaybooksRequest> request);
  DescribeFieldResponse describeFieldWithOptions(shared_ptr<DescribeFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFieldResponse describeField(shared_ptr<DescribeFieldRequest> request);
  DescribeGroupProductionsResponse describeGroupProductionsWithOptions(shared_ptr<DescribeGroupProductionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupProductionsResponse describeGroupProductions(shared_ptr<DescribeGroupProductionsRequest> request);
  DescribeLatestRecordSchemaResponse describeLatestRecordSchemaWithOptions(shared_ptr<DescribeLatestRecordSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLatestRecordSchemaResponse describeLatestRecordSchema(shared_ptr<DescribeLatestRecordSchemaRequest> request);
  DescribeNodeParamTagsResponse describeNodeParamTagsWithOptions(shared_ptr<DescribeNodeParamTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeParamTagsResponse describeNodeParamTags(shared_ptr<DescribeNodeParamTagsRequest> request);
  DescribeNodeUsedInfosResponse describeNodeUsedInfosWithOptions(shared_ptr<DescribeNodeUsedInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeUsedInfosResponse describeNodeUsedInfos(shared_ptr<DescribeNodeUsedInfosRequest> request);
  DescribeNotifyTemplateListResponse describeNotifyTemplateListWithOptions(shared_ptr<DescribeNotifyTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNotifyTemplateListResponse describeNotifyTemplateList(shared_ptr<DescribeNotifyTemplateListRequest> request);
  DescribeOpenApiInfoResponse describeOpenApiInfoWithOptions(shared_ptr<DescribeOpenApiInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpenApiInfoResponse describeOpenApiInfo(shared_ptr<DescribeOpenApiInfoRequest> request);
  DescribeOpenApiListResponse describeOpenApiListWithOptions(shared_ptr<DescribeOpenApiListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpenApiListResponse describeOpenApiList(shared_ptr<DescribeOpenApiListRequest> request);
  DescribePlaybookResponse describePlaybookWithOptions(shared_ptr<DescribePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookResponse describePlaybook(shared_ptr<DescribePlaybookRequest> request);
  DescribePlaybookInputOutputResponse describePlaybookInputOutputWithOptions(shared_ptr<DescribePlaybookInputOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookInputOutputResponse describePlaybookInputOutput(shared_ptr<DescribePlaybookInputOutputRequest> request);
  DescribePlaybookMetricsResponse describePlaybookMetricsWithOptions(shared_ptr<DescribePlaybookMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookMetricsResponse describePlaybookMetrics(shared_ptr<DescribePlaybookMetricsRequest> request);
  DescribePlaybookNodesOutputResponse describePlaybookNodesOutputWithOptions(shared_ptr<DescribePlaybookNodesOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookNodesOutputResponse describePlaybookNodesOutput(shared_ptr<DescribePlaybookNodesOutputRequest> request);
  DescribePlaybookNumberMetricsResponse describePlaybookNumberMetricsWithOptions(shared_ptr<DescribePlaybookNumberMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookNumberMetricsResponse describePlaybookNumberMetrics(shared_ptr<DescribePlaybookNumberMetricsRequest> request);
  DescribePlaybookReleasesResponse describePlaybookReleasesWithOptions(shared_ptr<DescribePlaybookReleasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybookReleasesResponse describePlaybookReleases(shared_ptr<DescribePlaybookReleasesRequest> request);
  DescribePlaybooksResponse describePlaybooksWithOptions(shared_ptr<DescribePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlaybooksResponse describePlaybooks(shared_ptr<DescribePlaybooksRequest> request);
  DescribePopApiResponse describePopApiWithOptions(shared_ptr<DescribePopApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePopApiResponse describePopApi(shared_ptr<DescribePopApiRequest> request);
  DescribePopApiItemListResponse describePopApiItemListWithOptions(shared_ptr<DescribePopApiItemListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePopApiItemListResponse describePopApiItemList(shared_ptr<DescribePopApiItemListRequest> request);
  DescribeProcessStatisticsResponse describeProcessStatisticsWithOptions(shared_ptr<DescribeProcessStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessStatisticsResponse describeProcessStatistics(shared_ptr<DescribeProcessStatisticsRequest> request);
  DescribeProcessTaskCountResponse describeProcessTaskCountWithOptions(shared_ptr<DescribeProcessTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessTaskCountResponse describeProcessTaskCount(shared_ptr<DescribeProcessTaskCountRequest> request);
  DescribeProcessTasksResponse describeProcessTasksWithOptions(shared_ptr<DescribeProcessTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessTasksResponse describeProcessTasks(shared_ptr<DescribeProcessTasksRequest> request);
  DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputListWithOptions(shared_ptr<DescribeSoarRecordActionOutputListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSoarRecordActionOutputListResponse describeSoarRecordActionOutputList(shared_ptr<DescribeSoarRecordActionOutputListRequest> request);
  DescribeSoarRecordInOutputResponse describeSoarRecordInOutputWithOptions(shared_ptr<DescribeSoarRecordInOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSoarRecordInOutputResponse describeSoarRecordInOutput(shared_ptr<DescribeSoarRecordInOutputRequest> request);
  DescribeSoarRecordsResponse describeSoarRecordsWithOptions(shared_ptr<DescribeSoarRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSoarRecordsResponse describeSoarRecords(shared_ptr<DescribeSoarRecordsRequest> request);
  DescribeSoarTaskAndActionsResponse describeSoarTaskAndActionsWithOptions(shared_ptr<DescribeSoarTaskAndActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSoarTaskAndActionsResponse describeSoarTaskAndActions(shared_ptr<DescribeSoarTaskAndActionsRequest> request);
  DescribeSophonCommandsResponse describeSophonCommandsWithOptions(shared_ptr<DescribeSophonCommandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSophonCommandsResponse describeSophonCommands(shared_ptr<DescribeSophonCommandsRequest> request);
  DescribeVendorApiListResponse describeVendorApiListWithOptions(shared_ptr<DescribeVendorApiListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVendorApiListResponse describeVendorApiList(shared_ptr<DescribeVendorApiListRequest> request);
  DescriberPython3ScriptLogsResponse describerPython3ScriptLogsWithOptions(shared_ptr<DescriberPython3ScriptLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescriberPython3ScriptLogsResponse describerPython3ScriptLogs(shared_ptr<DescriberPython3ScriptLogsRequest> request);
  ModifyComponentAssetResponse modifyComponentAssetWithOptions(shared_ptr<ModifyComponentAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyComponentAssetResponse modifyComponentAsset(shared_ptr<ModifyComponentAssetRequest> request);
  ModifyPlaybookResponse modifyPlaybookWithOptions(shared_ptr<ModifyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPlaybookResponse modifyPlaybook(shared_ptr<ModifyPlaybookRequest> request);
  ModifyPlaybookInputOutputResponse modifyPlaybookInputOutputWithOptions(shared_ptr<ModifyPlaybookInputOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPlaybookInputOutputResponse modifyPlaybookInputOutput(shared_ptr<ModifyPlaybookInputOutputRequest> request);
  ModifyPlaybookInstanceStatusResponse modifyPlaybookInstanceStatusWithOptions(shared_ptr<ModifyPlaybookInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPlaybookInstanceStatusResponse modifyPlaybookInstanceStatus(shared_ptr<ModifyPlaybookInstanceStatusRequest> request);
  PublishPlaybookResponse publishPlaybookWithOptions(shared_ptr<PublishPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishPlaybookResponse publishPlaybook(shared_ptr<PublishPlaybookRequest> request);
  QueryTreeDataResponse queryTreeDataWithOptions(shared_ptr<QueryTreeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTreeDataResponse queryTreeData(shared_ptr<QueryTreeDataRequest> request);
  RenamePlaybookNodeResponse renamePlaybookNodeWithOptions(shared_ptr<RenamePlaybookNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenamePlaybookNodeResponse renamePlaybookNode(shared_ptr<RenamePlaybookNodeRequest> request);
  RevertPlaybookReleaseResponse revertPlaybookReleaseWithOptions(shared_ptr<RevertPlaybookReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevertPlaybookReleaseResponse revertPlaybookRelease(shared_ptr<RevertPlaybookReleaseRequest> request);
  RunNotifyComponentWithEmailResponse runNotifyComponentWithEmailWithOptions(shared_ptr<RunNotifyComponentWithEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunNotifyComponentWithEmailResponse runNotifyComponentWithEmail(shared_ptr<RunNotifyComponentWithEmailRequest> request);
  RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenterWithOptions(shared_ptr<RunNotifyComponentWithMessageCenterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunNotifyComponentWithMessageCenterResponse runNotifyComponentWithMessageCenter(shared_ptr<RunNotifyComponentWithMessageCenterRequest> request);
  RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhookWithOptions(shared_ptr<RunNotifyComponentWithWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunNotifyComponentWithWebhookResponse runNotifyComponentWithWebhook(shared_ptr<RunNotifyComponentWithWebhookRequest> request);
  RunPython3ScriptResponse runPython3ScriptWithOptions(shared_ptr<RunPython3ScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunPython3ScriptResponse runPython3Script(shared_ptr<RunPython3ScriptRequest> request);
  TriggerPlaybookResponse triggerPlaybookWithOptions(shared_ptr<TriggerPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerPlaybookResponse triggerPlaybook(shared_ptr<TriggerPlaybookRequest> request);
  TriggerProcessTaskResponse triggerProcessTaskWithOptions(shared_ptr<TriggerProcessTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerProcessTaskResponse triggerProcessTask(shared_ptr<TriggerProcessTaskRequest> request);
  TriggerSophonPlaybookResponse triggerSophonPlaybookWithOptions(shared_ptr<TriggerSophonPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerSophonPlaybookResponse triggerSophonPlaybook(shared_ptr<TriggerSophonPlaybookRequest> request);
  VerifyPlaybookResponse verifyPlaybookWithOptions(shared_ptr<VerifyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPlaybookResponse verifyPlaybook(shared_ptr<VerifyPlaybookRequest> request);
  VerifyPythonFileResponse verifyPythonFileWithOptions(shared_ptr<VerifyPythonFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPythonFileResponse verifyPythonFile(shared_ptr<VerifyPythonFileRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sophonsoar20220728

#endif
