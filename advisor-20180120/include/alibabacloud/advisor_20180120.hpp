// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADVISOR20180120_H_
#define ALIBABACLOUD_ADVISOR20180120_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Advisor20180120 {
class RdAccountDTOTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  RdAccountDTOTags() {}

  explicit RdAccountDTOTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~RdAccountDTOTags() = default;
};
class RdAccountDTO : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<bool> checked{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<vector<RdAccountDTOTags>> tags{};

  RdAccountDTO() {}

  explicit RdAccountDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (checked) {
      res["Checked"] = boost::any(*checked);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Checked") != m.end() && !m["Checked"].empty()) {
      checked = make_shared<bool>(boost::any_cast<bool>(m["Checked"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<RdAccountDTOTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RdAccountDTOTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<RdAccountDTOTags>>(expect1);
      }
    }
  }


  virtual ~RdAccountDTO() = default;
};
class RdAccountFolderDTO : public Darabonba::Model {
public:
  shared_ptr<long> accountCount{};
  shared_ptr<vector<RdAccountDTO>> accountList{};
  shared_ptr<string> folderId{};
  shared_ptr<vector<RdAccountFolderDTO>> folderList{};
  shared_ptr<string> folderName{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> resourceDirectoryPath{};
  shared_ptr<string> resourceDirectoryPathName{};
  shared_ptr<long> selectedCount{};

  RdAccountFolderDTO() {}

  explicit RdAccountFolderDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountCount) {
      res["AccountCount"] = boost::any(*accountCount);
    }
    if (accountList) {
      vector<boost::any> temp1;
      for(auto item1:*accountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountList"] = boost::any(temp1);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderList) {
      vector<boost::any> temp1;
      for(auto item1:*folderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FolderList"] = boost::any(temp1);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    if (resourceDirectoryPathName) {
      res["ResourceDirectoryPathName"] = boost::any(*resourceDirectoryPathName);
    }
    if (selectedCount) {
      res["SelectedCount"] = boost::any(*selectedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountCount") != m.end() && !m["AccountCount"].empty()) {
      accountCount = make_shared<long>(boost::any_cast<long>(m["AccountCount"]));
    }
    if (m.find("AccountList") != m.end() && !m["AccountList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountList"].type()) {
        vector<RdAccountDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RdAccountDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountList = make_shared<vector<RdAccountDTO>>(expect1);
      }
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderList") != m.end() && !m["FolderList"].empty()) {
      if (typeid(vector<boost::any>) == m["FolderList"].type()) {
        vector<RdAccountFolderDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FolderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RdAccountFolderDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folderList = make_shared<vector<RdAccountFolderDTO>>(expect1);
      }
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
    if (m.find("ResourceDirectoryPathName") != m.end() && !m["ResourceDirectoryPathName"].empty()) {
      resourceDirectoryPathName = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPathName"]));
    }
    if (m.find("SelectedCount") != m.end() && !m["SelectedCount"].empty()) {
      selectedCount = make_shared<long>(boost::any_cast<long>(m["SelectedCount"]));
    }
  }


  virtual ~RdAccountFolderDTO() = default;
};
class DescribeAdvicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> adviceId{};
  shared_ptr<string> checkId{};
  shared_ptr<long> checkPlanId{};
  shared_ptr<long> excludeAdviceId{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvicesRequest() {}

  explicit DescribeAdvicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceId) {
      res["AdviceId"] = boost::any(*adviceId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkPlanId) {
      res["CheckPlanId"] = boost::any(*checkPlanId);
    }
    if (excludeAdviceId) {
      res["ExcludeAdviceId"] = boost::any(*excludeAdviceId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceId") != m.end() && !m["AdviceId"].empty()) {
      adviceId = make_shared<long>(boost::any_cast<long>(m["AdviceId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckPlanId") != m.end() && !m["CheckPlanId"].empty()) {
      checkPlanId = make_shared<long>(boost::any_cast<long>(m["CheckPlanId"]));
    }
    if (m.find("ExcludeAdviceId") != m.end() && !m["ExcludeAdviceId"].empty()) {
      excludeAdviceId = make_shared<long>(boost::any_cast<long>(m["ExcludeAdviceId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvicesRequest() = default;
};
class DescribeAdvicesResponseBodyDataAdvice : public Darabonba::Model {
public:
  shared_ptr<long> aliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<long> checkPlanId{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> product{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};

  DescribeAdvicesResponseBodyDataAdvice() {}

  explicit DescribeAdvicesResponseBodyDataAdvice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (checkPlanId) {
      res["CheckPlanId"] = boost::any(*checkPlanId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("CheckPlanId") != m.end() && !m["CheckPlanId"].empty()) {
      checkPlanId = make_shared<long>(boost::any_cast<long>(m["CheckPlanId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
  }


  virtual ~DescribeAdvicesResponseBodyDataAdvice() = default;
};
class DescribeAdvicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAdvicesResponseBodyDataAdvice>> advice{};

  DescribeAdvicesResponseBodyData() {}

  explicit DescribeAdvicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advice) {
      vector<boost::any> temp1;
      for(auto item1:*advice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Advice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Advice") != m.end() && !m["Advice"].empty()) {
      if (typeid(vector<boost::any>) == m["Advice"].type()) {
        vector<DescribeAdvicesResponseBodyDataAdvice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Advice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvicesResponseBodyDataAdvice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advice = make_shared<vector<DescribeAdvicesResponseBodyDataAdvice>>(expect1);
      }
    }
  }


  virtual ~DescribeAdvicesResponseBodyData() = default;
};
class DescribeAdvicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvicesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvicesResponseBody() {}

  explicit DescribeAdvicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvicesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvicesResponseBody() = default;
};
class DescribeAdvicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvicesResponseBody> body{};

  DescribeAdvicesResponse() {}

  explicit DescribeAdvicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvicesResponse() = default;
};
class DescribeAdvicesFlatPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> adviceId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvicesFlatPageRequest() {}

  explicit DescribeAdvicesFlatPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceId) {
      res["AdviceId"] = boost::any(*adviceId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceId") != m.end() && !m["AdviceId"].empty()) {
      adviceId = make_shared<long>(boost::any_cast<long>(m["AdviceId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvicesFlatPageRequest() = default;
};
class DescribeAdvicesFlatPageResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<long> aliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> product{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};

  DescribeAdvicesFlatPageResponseBodyDataResult() {}

  explicit DescribeAdvicesFlatPageResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
  }


  virtual ~DescribeAdvicesFlatPageResponseBodyDataResult() = default;
};
class DescribeAdvicesFlatPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeAdvicesFlatPageResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  DescribeAdvicesFlatPageResponseBodyData() {}

  explicit DescribeAdvicesFlatPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeAdvicesFlatPageResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvicesFlatPageResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeAdvicesFlatPageResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAdvicesFlatPageResponseBodyData() = default;
};
class DescribeAdvicesFlatPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvicesFlatPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvicesFlatPageResponseBody() {}

  explicit DescribeAdvicesFlatPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesFlatPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvicesFlatPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvicesFlatPageResponseBody() = default;
};
class DescribeAdvicesFlatPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvicesFlatPageResponseBody> body{};

  DescribeAdvicesFlatPageResponse() {}

  explicit DescribeAdvicesFlatPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesFlatPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvicesFlatPageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvicesFlatPageResponse() = default;
};
class DescribeAdvicesPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> adviceId{};
  shared_ptr<string> checkId{};
  shared_ptr<long> checkPlanId{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvicesPageRequest() {}

  explicit DescribeAdvicesPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceId) {
      res["AdviceId"] = boost::any(*adviceId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkPlanId) {
      res["CheckPlanId"] = boost::any(*checkPlanId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceId") != m.end() && !m["AdviceId"].empty()) {
      adviceId = make_shared<long>(boost::any_cast<long>(m["AdviceId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckPlanId") != m.end() && !m["CheckPlanId"].empty()) {
      checkPlanId = make_shared<long>(boost::any_cast<long>(m["CheckPlanId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvicesPageRequest() = default;
};
class DescribeAdvicesPageResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<long> aliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> product{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};

  DescribeAdvicesPageResponseBodyDataResult() {}

  explicit DescribeAdvicesPageResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBodyDataResult() = default;
};
class DescribeAdvicesPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeAdvicesPageResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  DescribeAdvicesPageResponseBodyData() {}

  explicit DescribeAdvicesPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeAdvicesPageResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvicesPageResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeAdvicesPageResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBodyData() = default;
};
class DescribeAdvicesPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvicesPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvicesPageResponseBody() {}

  explicit DescribeAdvicesPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvicesPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBody() = default;
};
class DescribeAdvicesPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvicesPageResponseBody> body{};

  DescribeAdvicesPageResponse() {}

  explicit DescribeAdvicesPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvicesPageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvicesPageResponse() = default;
};
class DescribeAdvisorChecksRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> product{};

  DescribeAdvisorChecksRequest() {}

  explicit DescribeAdvisorChecksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~DescribeAdvisorChecksRequest() = default;
};
class DescribeAdvisorChecksResponseBodyDataAdvisorCheck : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> name{};
  shared_ptr<string> operateColumn{};
  shared_ptr<string> product{};
  shared_ptr<string> status{};
  shared_ptr<string> tips{};
  shared_ptr<string> viewColumn{};

  DescribeAdvisorChecksResponseBodyDataAdvisorCheck() {}

  explicit DescribeAdvisorChecksResponseBodyDataAdvisorCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateColumn) {
      res["OperateColumn"] = boost::any(*operateColumn);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (viewColumn) {
      res["ViewColumn"] = boost::any(*viewColumn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateColumn") != m.end() && !m["OperateColumn"].empty()) {
      operateColumn = make_shared<string>(boost::any_cast<string>(m["OperateColumn"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("ViewColumn") != m.end() && !m["ViewColumn"].empty()) {
      viewColumn = make_shared<string>(boost::any_cast<string>(m["ViewColumn"]));
    }
  }


  virtual ~DescribeAdvisorChecksResponseBodyDataAdvisorCheck() = default;
};
class DescribeAdvisorChecksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck>> advisorCheck{};

  DescribeAdvisorChecksResponseBodyData() {}

  explicit DescribeAdvisorChecksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advisorCheck) {
      vector<boost::any> temp1;
      for(auto item1:*advisorCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdvisorCheck"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvisorCheck") != m.end() && !m["AdvisorCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["AdvisorCheck"].type()) {
        vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdvisorCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvisorChecksResponseBodyDataAdvisorCheck model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advisorCheck = make_shared<vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck>>(expect1);
      }
    }
  }


  virtual ~DescribeAdvisorChecksResponseBodyData() = default;
};
class DescribeAdvisorChecksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAdvisorChecksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvisorChecksResponseBody() {}

  explicit DescribeAdvisorChecksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeAdvisorChecksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvisorChecksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvisorChecksResponseBody() = default;
};
class DescribeAdvisorChecksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvisorChecksResponseBody> body{};

  DescribeAdvisorChecksResponse() {}

  explicit DescribeAdvisorChecksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorChecksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvisorChecksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvisorChecksResponse() = default;
};
class DescribeAdvisorChecksFoPagesRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<string> bizCategory{};
  shared_ptr<string> category{};
  shared_ptr<vector<long>> checkTypes{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> token{};

  DescribeAdvisorChecksFoPagesRequest() {}

  explicit DescribeAdvisorChecksFoPagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (bizCategory) {
      res["BizCategory"] = boost::any(*bizCategory);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (checkTypes) {
      res["CheckTypes"] = boost::any(*checkTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("BizCategory") != m.end() && !m["BizCategory"].empty()) {
      bizCategory = make_shared<string>(boost::any_cast<string>(m["BizCategory"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CheckTypes") != m.end() && !m["CheckTypes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CheckTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      checkTypes = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeAdvisorChecksFoPagesRequest() = default;
};
class DescribeAdvisorChecksFoPagesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<string> bizCategory{};
  shared_ptr<string> category{};
  shared_ptr<string> checkTypesShrink{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> token{};

  DescribeAdvisorChecksFoPagesShrinkRequest() {}

  explicit DescribeAdvisorChecksFoPagesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (bizCategory) {
      res["BizCategory"] = boost::any(*bizCategory);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (checkTypesShrink) {
      res["CheckTypes"] = boost::any(*checkTypesShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("BizCategory") != m.end() && !m["BizCategory"].empty()) {
      bizCategory = make_shared<string>(boost::any_cast<string>(m["BizCategory"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CheckTypes") != m.end() && !m["CheckTypes"].empty()) {
      checkTypesShrink = make_shared<string>(boost::any_cast<string>(m["CheckTypes"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeAdvisorChecksFoPagesShrinkRequest() = default;
};
class DescribeAdvisorChecksFoPagesResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> configSupport{};
  shared_ptr<string> description{};
  shared_ptr<string> inspectionScope{};
  shared_ptr<string> name{};
  shared_ptr<string> operateColumn{};
  shared_ptr<string> product{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<vector<long>> subCategory{};
  shared_ptr<string> tips{};
  shared_ptr<string> viewColumn{};

  DescribeAdvisorChecksFoPagesResponseBodyDataResult() {}

  explicit DescribeAdvisorChecksFoPagesResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (configSupport) {
      res["ConfigSupport"] = boost::any(*configSupport);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inspectionScope) {
      res["InspectionScope"] = boost::any(*inspectionScope);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateColumn) {
      res["OperateColumn"] = boost::any(*operateColumn);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subCategory) {
      res["SubCategory"] = boost::any(*subCategory);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (viewColumn) {
      res["ViewColumn"] = boost::any(*viewColumn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConfigSupport") != m.end() && !m["ConfigSupport"].empty()) {
      configSupport = make_shared<string>(boost::any_cast<string>(m["ConfigSupport"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InspectionScope") != m.end() && !m["InspectionScope"].empty()) {
      inspectionScope = make_shared<string>(boost::any_cast<string>(m["InspectionScope"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateColumn") != m.end() && !m["OperateColumn"].empty()) {
      operateColumn = make_shared<string>(boost::any_cast<string>(m["OperateColumn"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubCategory") != m.end() && !m["SubCategory"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SubCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubCategory"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      subCategory = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("ViewColumn") != m.end() && !m["ViewColumn"].empty()) {
      viewColumn = make_shared<string>(boost::any_cast<string>(m["ViewColumn"]));
    }
  }


  virtual ~DescribeAdvisorChecksFoPagesResponseBodyDataResult() = default;
};
class DescribeAdvisorChecksFoPagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeAdvisorChecksFoPagesResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  DescribeAdvisorChecksFoPagesResponseBodyData() {}

  explicit DescribeAdvisorChecksFoPagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeAdvisorChecksFoPagesResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvisorChecksFoPagesResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeAdvisorChecksFoPagesResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAdvisorChecksFoPagesResponseBodyData() = default;
};
class DescribeAdvisorChecksFoPagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeAdvisorChecksFoPagesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAdvisorChecksFoPagesResponseBody() {}

  explicit DescribeAdvisorChecksFoPagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAdvisorChecksFoPagesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvisorChecksFoPagesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAdvisorChecksFoPagesResponseBodyData>>(expect1);
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


  virtual ~DescribeAdvisorChecksFoPagesResponseBody() = default;
};
class DescribeAdvisorChecksFoPagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvisorChecksFoPagesResponseBody> body{};

  DescribeAdvisorChecksFoPagesResponse() {}

  explicit DescribeAdvisorChecksFoPagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorChecksFoPagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvisorChecksFoPagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvisorChecksFoPagesResponse() = default;
};
class DescribeAdvisorResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvisorResourcesRequest() {}

  explicit DescribeAdvisorResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvisorResourcesRequest() = default;
};
class DescribeAdvisorResourcesResponseBodyDataResultResource : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};

  DescribeAdvisorResourcesResponseBodyDataResultResource() {}

  explicit DescribeAdvisorResourcesResponseBodyDataResultResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~DescribeAdvisorResourcesResponseBodyDataResultResource() = default;
};
class DescribeAdvisorResourcesResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAdvisorResourcesResponseBodyDataResultResource>> resource{};

  DescribeAdvisorResourcesResponseBodyDataResult() {}

  explicit DescribeAdvisorResourcesResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<DescribeAdvisorResourcesResponseBodyDataResultResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvisorResourcesResponseBodyDataResultResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<DescribeAdvisorResourcesResponseBodyDataResultResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAdvisorResourcesResponseBodyDataResult() = default;
};
class DescribeAdvisorResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeAdvisorResourcesResponseBodyDataResult> result{};
  shared_ptr<long> total{};

  DescribeAdvisorResourcesResponseBodyData() {}

  explicit DescribeAdvisorResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeAdvisorResourcesResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeAdvisorResourcesResponseBodyDataResult>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAdvisorResourcesResponseBodyData() = default;
};
class DescribeAdvisorResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvisorResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvisorResourcesResponseBody() {}

  explicit DescribeAdvisorResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvisorResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvisorResourcesResponseBody() = default;
};
class DescribeAdvisorResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvisorResourcesResponseBody> body{};

  DescribeAdvisorResourcesResponse() {}

  explicit DescribeAdvisorResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvisorResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvisorResourcesResponse() = default;
};
class DescribeCostCheckAdvicesRequestTagList : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValue{};

  DescribeCostCheckAdvicesRequestTagList() {}

  explicit DescribeCostCheckAdvicesRequestTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValue = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCostCheckAdvicesRequestTagList() = default;
};
class DescribeCostCheckAdvicesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> assumeAliyunIdList{};
  shared_ptr<string> checkId{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> severity{};
  shared_ptr<vector<string>> tagKeys{};
  shared_ptr<vector<DescribeCostCheckAdvicesRequestTagList>> tagList{};
  shared_ptr<vector<string>> tagValues{};

  DescribeCostCheckAdvicesRequest() {}

  explicit DescribeCostCheckAdvicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdList) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdList);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AssumeAliyunIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssumeAliyunIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      assumeAliyunIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<DescribeCostCheckAdvicesRequestTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckAdvicesRequestTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<DescribeCostCheckAdvicesRequestTagList>>(expect1);
      }
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


  virtual ~DescribeCostCheckAdvicesRequest() = default;
};
class DescribeCostCheckAdvicesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeAliyunIdListShrink{};
  shared_ptr<string> checkId{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> severity{};
  shared_ptr<string> tagKeysShrink{};
  shared_ptr<string> tagListShrink{};
  shared_ptr<string> tagValuesShrink{};

  DescribeCostCheckAdvicesShrinkRequest() {}

  explicit DescribeCostCheckAdvicesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdListShrink) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdListShrink);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (tagKeysShrink) {
      res["TagKeys"] = boost::any(*tagKeysShrink);
    }
    if (tagListShrink) {
      res["TagList"] = boost::any(*tagListShrink);
    }
    if (tagValuesShrink) {
      res["TagValues"] = boost::any(*tagValuesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      assumeAliyunIdListShrink = make_shared<string>(boost::any_cast<string>(m["AssumeAliyunIdList"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeysShrink = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      tagListShrink = make_shared<string>(boost::any_cast<string>(m["TagList"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      tagValuesShrink = make_shared<string>(boost::any_cast<string>(m["TagValues"]));
    }
  }


  virtual ~DescribeCostCheckAdvicesShrinkRequest() = default;
};
class DescribeCostCheckAdvicesResponseBodyDataAdviceListTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeCostCheckAdvicesResponseBodyDataAdviceListTags() {}

  explicit DescribeCostCheckAdvicesResponseBodyDataAdviceListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeCostCheckAdvicesResponseBodyDataAdviceListTags() = default;
};
class DescribeCostCheckAdvicesResponseBodyDataAdviceList : public Darabonba::Model {
public:
  shared_ptr<string> accountFolderId{};
  shared_ptr<string> accountFolderName{};
  shared_ptr<long> aliyunId{};
  shared_ptr<string> content{};
  shared_ptr<string> email{};
  shared_ptr<long> endTime{};
  shared_ptr<long> gmtDeleted{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> severity{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<DescribeCostCheckAdvicesResponseBodyDataAdviceListTags>> tags{};
  shared_ptr<string> url{};
  shared_ptr<string> userName{};
  shared_ptr<string> zoneId{};

  DescribeCostCheckAdvicesResponseBodyDataAdviceList() {}

  explicit DescribeCostCheckAdvicesResponseBodyDataAdviceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountFolderId) {
      res["AccountFolderId"] = boost::any(*accountFolderId);
    }
    if (accountFolderName) {
      res["AccountFolderName"] = boost::any(*accountFolderName);
    }
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (gmtDeleted) {
      res["GmtDeleted"] = boost::any(*gmtDeleted);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountFolderId") != m.end() && !m["AccountFolderId"].empty()) {
      accountFolderId = make_shared<string>(boost::any_cast<string>(m["AccountFolderId"]));
    }
    if (m.find("AccountFolderName") != m.end() && !m["AccountFolderName"].empty()) {
      accountFolderName = make_shared<string>(boost::any_cast<string>(m["AccountFolderName"]));
    }
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GmtDeleted") != m.end() && !m["GmtDeleted"].empty()) {
      gmtDeleted = make_shared<long>(boost::any_cast<long>(m["GmtDeleted"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeCostCheckAdvicesResponseBodyDataAdviceListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckAdvicesResponseBodyDataAdviceListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeCostCheckAdvicesResponseBodyDataAdviceListTags>>(expect1);
      }
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeCostCheckAdvicesResponseBodyDataAdviceList() = default;
};
class DescribeCostCheckAdvicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCostCheckAdvicesResponseBodyDataAdviceList>> adviceList{};
  shared_ptr<string> checkId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeCostCheckAdvicesResponseBodyData() {}

  explicit DescribeCostCheckAdvicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceList) {
      vector<boost::any> temp1;
      for(auto item1:*adviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdviceList"] = boost::any(temp1);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
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
    if (m.find("AdviceList") != m.end() && !m["AdviceList"].empty()) {
      if (typeid(vector<boost::any>) == m["AdviceList"].type()) {
        vector<DescribeCostCheckAdvicesResponseBodyDataAdviceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdviceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckAdvicesResponseBodyDataAdviceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adviceList = make_shared<vector<DescribeCostCheckAdvicesResponseBodyDataAdviceList>>(expect1);
      }
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
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


  virtual ~DescribeCostCheckAdvicesResponseBodyData() = default;
};
class DescribeCostCheckAdvicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeCostCheckAdvicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeCostCheckAdvicesResponseBody() {}

  explicit DescribeCostCheckAdvicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCostCheckAdvicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCostCheckAdvicesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DescribeCostCheckAdvicesResponseBody() = default;
};
class DescribeCostCheckAdvicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCostCheckAdvicesResponseBody> body{};

  DescribeCostCheckAdvicesResponse() {}

  explicit DescribeCostCheckAdvicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCostCheckAdvicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCostCheckAdvicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCostCheckAdvicesResponse() = default;
};
class DescribeCostCheckResultsRequestTagList : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValue{};

  DescribeCostCheckResultsRequestTagList() {}

  explicit DescribeCostCheckResultsRequestTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValue = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCostCheckResultsRequestTagList() = default;
};
class DescribeCostCheckResultsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> assumeAliyunIdList{};
  shared_ptr<vector<string>> checkIds{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> product{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<vector<string>> resourceGroupIdList{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> severity{};
  shared_ptr<vector<string>> tagKeys{};
  shared_ptr<vector<DescribeCostCheckResultsRequestTagList>> tagList{};
  shared_ptr<vector<string>> tagValues{};

  DescribeCostCheckResultsRequest() {}

  explicit DescribeCostCheckResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdList) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdList);
    }
    if (checkIds) {
      res["CheckIds"] = boost::any(*checkIds);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (resourceGroupIdList) {
      res["ResourceGroupIdList"] = boost::any(*resourceGroupIdList);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AssumeAliyunIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssumeAliyunIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      assumeAliyunIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CheckIds") != m.end() && !m["CheckIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CheckIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checkIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupIdList") != m.end() && !m["ResourceGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<DescribeCostCheckResultsRequestTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckResultsRequestTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<DescribeCostCheckResultsRequestTagList>>(expect1);
      }
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


  virtual ~DescribeCostCheckResultsRequest() = default;
};
class DescribeCostCheckResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeAliyunIdListShrink{};
  shared_ptr<string> checkIdsShrink{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> product{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> resourceGroupIdListShrink{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> severity{};
  shared_ptr<string> tagKeysShrink{};
  shared_ptr<string> tagListShrink{};
  shared_ptr<string> tagValuesShrink{};

  DescribeCostCheckResultsShrinkRequest() {}

  explicit DescribeCostCheckResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdListShrink) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdListShrink);
    }
    if (checkIdsShrink) {
      res["CheckIds"] = boost::any(*checkIdsShrink);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (resourceGroupIdListShrink) {
      res["ResourceGroupIdList"] = boost::any(*resourceGroupIdListShrink);
    }
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (tagKeysShrink) {
      res["TagKeys"] = boost::any(*tagKeysShrink);
    }
    if (tagListShrink) {
      res["TagList"] = boost::any(*tagListShrink);
    }
    if (tagValuesShrink) {
      res["TagValues"] = boost::any(*tagValuesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      assumeAliyunIdListShrink = make_shared<string>(boost::any_cast<string>(m["AssumeAliyunIdList"]));
    }
    if (m.find("CheckIds") != m.end() && !m["CheckIds"].empty()) {
      checkIdsShrink = make_shared<string>(boost::any_cast<string>(m["CheckIds"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("ResourceGroupIdList") != m.end() && !m["ResourceGroupIdList"].empty()) {
      resourceGroupIdListShrink = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdList"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeysShrink = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      tagListShrink = make_shared<string>(boost::any_cast<string>(m["TagList"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      tagValuesShrink = make_shared<string>(boost::any_cast<string>(m["TagValues"]));
    }
  }


  virtual ~DescribeCostCheckResultsShrinkRequest() = default;
};
class DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems : public Darabonba::Model {
public:
  shared_ptr<long> adviceCount{};
  shared_ptr<long> adviceResourceCount{};
  shared_ptr<string> category{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<double> currentCost{};
  shared_ptr<string> description{};
  shared_ptr<double> expectedSavingCost{};
  shared_ptr<double> optimizedCost{};
  shared_ptr<string> product{};
  shared_ptr<long> severity{};
  shared_ptr<string> summary{};
  shared_ptr<string> tips{};

  DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems() {}

  explicit DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceCount) {
      res["AdviceCount"] = boost::any(*adviceCount);
    }
    if (adviceResourceCount) {
      res["AdviceResourceCount"] = boost::any(*adviceResourceCount);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (currentCost) {
      res["CurrentCost"] = boost::any(*currentCost);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expectedSavingCost) {
      res["ExpectedSavingCost"] = boost::any(*expectedSavingCost);
    }
    if (optimizedCost) {
      res["OptimizedCost"] = boost::any(*optimizedCost);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceCount") != m.end() && !m["AdviceCount"].empty()) {
      adviceCount = make_shared<long>(boost::any_cast<long>(m["AdviceCount"]));
    }
    if (m.find("AdviceResourceCount") != m.end() && !m["AdviceResourceCount"].empty()) {
      adviceResourceCount = make_shared<long>(boost::any_cast<long>(m["AdviceResourceCount"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("CurrentCost") != m.end() && !m["CurrentCost"].empty()) {
      currentCost = make_shared<double>(boost::any_cast<double>(m["CurrentCost"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpectedSavingCost") != m.end() && !m["ExpectedSavingCost"].empty()) {
      expectedSavingCost = make_shared<double>(boost::any_cast<double>(m["ExpectedSavingCost"]));
    }
    if (m.find("OptimizedCost") != m.end() && !m["OptimizedCost"].empty()) {
      optimizedCost = make_shared<double>(boost::any_cast<double>(m["OptimizedCost"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
  }


  virtual ~DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems() = default;
};
class DescribeCostCheckResultsResponseBodyDataViewGroup : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems>> checkItems{};
  shared_ptr<string> groupCode{};
  shared_ptr<long> groupCount{};
  shared_ptr<double> groupExpectedSavingCost{};
  shared_ptr<string> groupName{};

  DescribeCostCheckResultsResponseBodyDataViewGroup() {}

  explicit DescribeCostCheckResultsResponseBodyDataViewGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkItems) {
      vector<boost::any> temp1;
      for(auto item1:*checkItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckItems"] = boost::any(temp1);
    }
    if (groupCode) {
      res["GroupCode"] = boost::any(*groupCode);
    }
    if (groupCount) {
      res["GroupCount"] = boost::any(*groupCount);
    }
    if (groupExpectedSavingCost) {
      res["GroupExpectedSavingCost"] = boost::any(*groupExpectedSavingCost);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckItems") != m.end() && !m["CheckItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckItems"].type()) {
        vector<DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItems = make_shared<vector<DescribeCostCheckResultsResponseBodyDataViewGroupCheckItems>>(expect1);
      }
    }
    if (m.find("GroupCode") != m.end() && !m["GroupCode"].empty()) {
      groupCode = make_shared<string>(boost::any_cast<string>(m["GroupCode"]));
    }
    if (m.find("GroupCount") != m.end() && !m["GroupCount"].empty()) {
      groupCount = make_shared<long>(boost::any_cast<long>(m["GroupCount"]));
    }
    if (m.find("GroupExpectedSavingCost") != m.end() && !m["GroupExpectedSavingCost"].empty()) {
      groupExpectedSavingCost = make_shared<double>(boost::any_cast<double>(m["GroupExpectedSavingCost"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DescribeCostCheckResultsResponseBodyDataViewGroup() = default;
};
class DescribeCostCheckResultsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> adviceResourceCount{};
  shared_ptr<string> groupBy{};
  shared_ptr<long> normalCount{};
  shared_ptr<long> resourceCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeCostCheckResultsResponseBodyDataViewGroup>> viewGroup{};
  shared_ptr<long> warningCount{};

  DescribeCostCheckResultsResponseBodyData() {}

  explicit DescribeCostCheckResultsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceResourceCount) {
      res["AdviceResourceCount"] = boost::any(*adviceResourceCount);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (normalCount) {
      res["NormalCount"] = boost::any(*normalCount);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (viewGroup) {
      vector<boost::any> temp1;
      for(auto item1:*viewGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewGroup"] = boost::any(temp1);
    }
    if (warningCount) {
      res["WarningCount"] = boost::any(*warningCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceResourceCount") != m.end() && !m["AdviceResourceCount"].empty()) {
      adviceResourceCount = make_shared<long>(boost::any_cast<long>(m["AdviceResourceCount"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("NormalCount") != m.end() && !m["NormalCount"].empty()) {
      normalCount = make_shared<long>(boost::any_cast<long>(m["NormalCount"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ViewGroup") != m.end() && !m["ViewGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewGroup"].type()) {
        vector<DescribeCostCheckResultsResponseBodyDataViewGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCostCheckResultsResponseBodyDataViewGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewGroup = make_shared<vector<DescribeCostCheckResultsResponseBodyDataViewGroup>>(expect1);
      }
    }
    if (m.find("WarningCount") != m.end() && !m["WarningCount"].empty()) {
      warningCount = make_shared<long>(boost::any_cast<long>(m["WarningCount"]));
    }
  }


  virtual ~DescribeCostCheckResultsResponseBodyData() = default;
};
class DescribeCostCheckResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeCostCheckResultsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeCostCheckResultsResponseBody() {}

  explicit DescribeCostCheckResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCostCheckResultsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCostCheckResultsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DescribeCostCheckResultsResponseBody() = default;
};
class DescribeCostCheckResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCostCheckResultsResponseBody> body{};

  DescribeCostCheckResultsResponse() {}

  explicit DescribeCostCheckResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCostCheckResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCostCheckResultsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCostCheckResultsResponse() = default;
};
class DescribeCostOptimizationOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<vector<long>> assumeAliyunIdList{};
  shared_ptr<string> token{};

  DescribeCostOptimizationOverviewRequest() {}

  explicit DescribeCostOptimizationOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (assumeAliyunIdList) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdList);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AssumeAliyunIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssumeAliyunIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      assumeAliyunIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeCostOptimizationOverviewRequest() = default;
};
class DescribeCostOptimizationOverviewShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<string> assumeAliyunIdListShrink{};
  shared_ptr<string> token{};

  DescribeCostOptimizationOverviewShrinkRequest() {}

  explicit DescribeCostOptimizationOverviewShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (assumeAliyunIdListShrink) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdListShrink);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      assumeAliyunIdListShrink = make_shared<string>(boost::any_cast<string>(m["AssumeAliyunIdList"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeCostOptimizationOverviewShrinkRequest() = default;
};
class DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail() {}

  explicit DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["AuthAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["AuthPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["AuthPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["AuthPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["EncodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["NoPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthAction") != m.end() && !m["AuthAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["AuthAction"]));
    }
    if (m.find("AuthPrincipalDisplayName") != m.end() && !m["AuthPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalDisplayName"]));
    }
    if (m.find("AuthPrincipalOwnerId") != m.end() && !m["AuthPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalOwnerId"]));
    }
    if (m.find("AuthPrincipalType") != m.end() && !m["AuthPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalType"]));
    }
    if (m.find("EncodedDiagnosticMessage") != m.end() && !m["EncodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["EncodedDiagnosticMessage"]));
    }
    if (m.find("NoPermissionType") != m.end() && !m["NoPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["NoPermissionType"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail() = default;
};
class DescribeCostOptimizationOverviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billingCycleDate{};
  shared_ptr<string> currentBillingCost{};
  shared_ptr<string> expectedSavingCost{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> optCheckItemNum{};
  shared_ptr<string> optResourceNum{};
  shared_ptr<long> taskId{};

  DescribeCostOptimizationOverviewResponseBodyData() {}

  explicit DescribeCostOptimizationOverviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycleDate) {
      res["BillingCycleDate"] = boost::any(*billingCycleDate);
    }
    if (currentBillingCost) {
      res["CurrentBillingCost"] = boost::any(*currentBillingCost);
    }
    if (expectedSavingCost) {
      res["ExpectedSavingCost"] = boost::any(*expectedSavingCost);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (optCheckItemNum) {
      res["OptCheckItemNum"] = boost::any(*optCheckItemNum);
    }
    if (optResourceNum) {
      res["OptResourceNum"] = boost::any(*optResourceNum);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycleDate") != m.end() && !m["BillingCycleDate"].empty()) {
      billingCycleDate = make_shared<string>(boost::any_cast<string>(m["BillingCycleDate"]));
    }
    if (m.find("CurrentBillingCost") != m.end() && !m["CurrentBillingCost"].empty()) {
      currentBillingCost = make_shared<string>(boost::any_cast<string>(m["CurrentBillingCost"]));
    }
    if (m.find("ExpectedSavingCost") != m.end() && !m["ExpectedSavingCost"].empty()) {
      expectedSavingCost = make_shared<string>(boost::any_cast<string>(m["ExpectedSavingCost"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("OptCheckItemNum") != m.end() && !m["OptCheckItemNum"].empty()) {
      optCheckItemNum = make_shared<string>(boost::any_cast<string>(m["OptCheckItemNum"]));
    }
    if (m.find("OptResourceNum") != m.end() && !m["OptResourceNum"].empty()) {
      optResourceNum = make_shared<string>(boost::any_cast<string>(m["OptResourceNum"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeCostOptimizationOverviewResponseBodyData() = default;
};
class DescribeCostOptimizationOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribeCostOptimizationOverviewResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCostOptimizationOverviewResponseBody() {}

  explicit DescribeCostOptimizationOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessDeniedDetail"].type()) {
        DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessDeniedDetail"]));
        accessDeniedDetail = make_shared<DescribeCostOptimizationOverviewResponseBodyAccessDeniedDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCostOptimizationOverviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCostOptimizationOverviewResponseBodyData>(model1);
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


  virtual ~DescribeCostOptimizationOverviewResponseBody() = default;
};
class DescribeCostOptimizationOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCostOptimizationOverviewResponseBody> body{};

  DescribeCostOptimizationOverviewResponse() {}

  explicit DescribeCostOptimizationOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCostOptimizationOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCostOptimizationOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCostOptimizationOverviewResponse() = default;
};
class GetHistoryAdvicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> severity{};
  shared_ptr<string> startDate{};

  GetHistoryAdvicesRequest() {}

  explicit GetHistoryAdvicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetHistoryAdvicesRequest() = default;
};
class GetHistoryAdvicesResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};
  shared_ptr<string> url{};

  GetHistoryAdvicesResponseBodyDataResult() {}

  explicit GetHistoryAdvicesResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBodyDataResult() = default;
};
class GetHistoryAdvicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<vector<GetHistoryAdvicesResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  GetHistoryAdvicesResponseBodyData() {}

  explicit GetHistoryAdvicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetHistoryAdvicesResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistoryAdvicesResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetHistoryAdvicesResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBodyData() = default;
};
class GetHistoryAdvicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetHistoryAdvicesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetHistoryAdvicesResponseBody() {}

  explicit GetHistoryAdvicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryAdvicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistoryAdvicesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBody() = default;
};
class GetHistoryAdvicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryAdvicesResponseBody> body{};

  GetHistoryAdvicesResponse() {}

  explicit GetHistoryAdvicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryAdvicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryAdvicesResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryAdvicesResponse() = default;
};
class GetInspectProgressRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> token{};

  GetInspectProgressRequest() {}

  explicit GetInspectProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetInspectProgressRequest() = default;
};
class GetInspectProgressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> allSubtaskCount{};
  shared_ptr<bool> finish{};
  shared_ptr<double> finishRate{};
  shared_ptr<long> finishSubtaskCount{};
  shared_ptr<long> lastInspectDate{};
  shared_ptr<long> taskId{};
  shared_ptr<long> usedTime{};

  GetInspectProgressResponseBodyData() {}

  explicit GetInspectProgressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allSubtaskCount) {
      res["AllSubtaskCount"] = boost::any(*allSubtaskCount);
    }
    if (finish) {
      res["Finish"] = boost::any(*finish);
    }
    if (finishRate) {
      res["FinishRate"] = boost::any(*finishRate);
    }
    if (finishSubtaskCount) {
      res["FinishSubtaskCount"] = boost::any(*finishSubtaskCount);
    }
    if (lastInspectDate) {
      res["LastInspectDate"] = boost::any(*lastInspectDate);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllSubtaskCount") != m.end() && !m["AllSubtaskCount"].empty()) {
      allSubtaskCount = make_shared<long>(boost::any_cast<long>(m["AllSubtaskCount"]));
    }
    if (m.find("Finish") != m.end() && !m["Finish"].empty()) {
      finish = make_shared<bool>(boost::any_cast<bool>(m["Finish"]));
    }
    if (m.find("FinishRate") != m.end() && !m["FinishRate"].empty()) {
      finishRate = make_shared<double>(boost::any_cast<double>(m["FinishRate"]));
    }
    if (m.find("FinishSubtaskCount") != m.end() && !m["FinishSubtaskCount"].empty()) {
      finishSubtaskCount = make_shared<long>(boost::any_cast<long>(m["FinishSubtaskCount"]));
    }
    if (m.find("LastInspectDate") != m.end() && !m["LastInspectDate"].empty()) {
      lastInspectDate = make_shared<long>(boost::any_cast<long>(m["LastInspectDate"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~GetInspectProgressResponseBodyData() = default;
};
class GetInspectProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInspectProgressResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInspectProgressResponseBody() {}

  explicit GetInspectProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInspectProgressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInspectProgressResponseBodyData>(model1);
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


  virtual ~GetInspectProgressResponseBody() = default;
};
class GetInspectProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInspectProgressResponseBody> body{};

  GetInspectProgressResponse() {}

  explicit GetInspectProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInspectProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInspectProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetInspectProgressResponse() = default;
};
class GetProductListRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  GetProductListRequest() {}

  explicit GetProductListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetProductListRequest() = default;
};
class GetProductListResponseBodyAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  GetProductListResponseBodyAccessDeniedDetail() {}

  explicit GetProductListResponseBodyAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["AuthAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["AuthPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["AuthPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["AuthPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["EncodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["NoPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthAction") != m.end() && !m["AuthAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["AuthAction"]));
    }
    if (m.find("AuthPrincipalDisplayName") != m.end() && !m["AuthPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalDisplayName"]));
    }
    if (m.find("AuthPrincipalOwnerId") != m.end() && !m["AuthPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalOwnerId"]));
    }
    if (m.find("AuthPrincipalType") != m.end() && !m["AuthPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalType"]));
    }
    if (m.find("EncodedDiagnosticMessage") != m.end() && !m["EncodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["EncodedDiagnosticMessage"]));
    }
    if (m.find("NoPermissionType") != m.end() && !m["NoPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["NoPermissionType"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~GetProductListResponseBodyAccessDeniedDetail() = default;
};
class GetProductListResponseBodyDataProductList : public Darabonba::Model {
public:
  shared_ptr<string> newLabel{};
  shared_ptr<string> product{};

  GetProductListResponseBodyDataProductList() {}

  explicit GetProductListResponseBodyDataProductList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newLabel) {
      res["NewLabel"] = boost::any(*newLabel);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewLabel") != m.end() && !m["NewLabel"].empty()) {
      newLabel = make_shared<string>(boost::any_cast<string>(m["NewLabel"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~GetProductListResponseBodyDataProductList() = default;
};
class GetProductListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<GetProductListResponseBodyDataProductList>> productList{};

  GetProductListResponseBodyData() {}

  explicit GetProductListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ProductList") != m.end() && !m["ProductList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductList"].type()) {
        vector<GetProductListResponseBodyDataProductList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductListResponseBodyDataProductList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<GetProductListResponseBodyDataProductList>>(expect1);
      }
    }
  }


  virtual ~GetProductListResponseBodyData() = default;
};
class GetProductListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductListResponseBodyAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetProductListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> userMessage{};

  GetProductListResponseBody() {}

  explicit GetProductListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (userMessage) {
      res["UserMessage"] = boost::any(*userMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessDeniedDetail"].type()) {
        GetProductListResponseBodyAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessDeniedDetail"]));
        accessDeniedDetail = make_shared<GetProductListResponseBodyAccessDeniedDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetProductListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetProductListResponseBodyData>>(expect1);
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
    if (m.find("UserMessage") != m.end() && !m["UserMessage"].empty()) {
      userMessage = make_shared<string>(boost::any_cast<string>(m["UserMessage"]));
    }
  }


  virtual ~GetProductListResponseBody() = default;
};
class GetProductListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductListResponseBody> body{};

  GetProductListResponse() {}

  explicit GetProductListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductListResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductListResponse() = default;
};
class GetTaskStatusByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskStatusByIdRequest() {}

  explicit GetTaskStatusByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusByIdRequest() = default;
};
class GetTaskStatusByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<long> taskStatus{};

  GetTaskStatusByIdResponseBodyData() {}

  explicit GetTaskStatusByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
  }


  virtual ~GetTaskStatusByIdResponseBodyData() = default;
};
class GetTaskStatusByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTaskStatusByIdResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetTaskStatusByIdResponseBody() {}

  explicit GetTaskStatusByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskStatusByIdResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTaskStatusByIdResponseBody() = default;
};
class GetTaskStatusByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatusByIdResponseBody> body{};

  GetTaskStatusByIdResponse() {}

  explicit GetTaskStatusByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusByIdResponse() = default;
};
class RefreshAdvisorCheckRequestResourceDimensionList : public Darabonba::Model {
public:
  shared_ptr<bool> cost{};
  shared_ptr<bool> performance{};
  shared_ptr<string> product{};
  shared_ptr<string> productName{};
  shared_ptr<bool> reliablility{};
  shared_ptr<bool> security{};
  shared_ptr<bool> service{};

  RefreshAdvisorCheckRequestResourceDimensionList() {}

  explicit RefreshAdvisorCheckRequestResourceDimensionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (performance) {
      res["Performance"] = boost::any(*performance);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (reliablility) {
      res["Reliablility"] = boost::any(*reliablility);
    }
    if (security) {
      res["Security"] = boost::any(*security);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<bool>(boost::any_cast<bool>(m["Cost"]));
    }
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      performance = make_shared<bool>(boost::any_cast<bool>(m["Performance"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Reliablility") != m.end() && !m["Reliablility"].empty()) {
      reliablility = make_shared<bool>(boost::any_cast<bool>(m["Reliablility"]));
    }
    if (m.find("Security") != m.end() && !m["Security"].empty()) {
      security = make_shared<bool>(boost::any_cast<bool>(m["Security"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<bool>(boost::any_cast<bool>(m["Service"]));
    }
  }


  virtual ~RefreshAdvisorCheckRequestResourceDimensionList() = default;
};
class RefreshAdvisorCheckRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<long> checkPlanId{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<vector<RefreshAdvisorCheckRequestResourceDimensionList>> resourceDimensionList{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> token{};

  RefreshAdvisorCheckRequest() {}

  explicit RefreshAdvisorCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkPlanId) {
      res["CheckPlanId"] = boost::any(*checkPlanId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceDimensionList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceDimensionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceDimensionList"] = boost::any(temp1);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckPlanId") != m.end() && !m["CheckPlanId"].empty()) {
      checkPlanId = make_shared<long>(boost::any_cast<long>(m["CheckPlanId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceDimensionList") != m.end() && !m["ResourceDimensionList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceDimensionList"].type()) {
        vector<RefreshAdvisorCheckRequestResourceDimensionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceDimensionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefreshAdvisorCheckRequestResourceDimensionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceDimensionList = make_shared<vector<RefreshAdvisorCheckRequestResourceDimensionList>>(expect1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~RefreshAdvisorCheckRequest() = default;
};
class RefreshAdvisorCheckShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> assumeAliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<long> checkPlanId{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceDimensionListShrink{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> token{};

  RefreshAdvisorCheckShrinkRequest() {}

  explicit RefreshAdvisorCheckShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunId) {
      res["AssumeAliyunId"] = boost::any(*assumeAliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkPlanId) {
      res["CheckPlanId"] = boost::any(*checkPlanId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceDimensionListShrink) {
      res["ResourceDimensionList"] = boost::any(*resourceDimensionListShrink);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunId") != m.end() && !m["AssumeAliyunId"].empty()) {
      assumeAliyunId = make_shared<long>(boost::any_cast<long>(m["AssumeAliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckPlanId") != m.end() && !m["CheckPlanId"].empty()) {
      checkPlanId = make_shared<long>(boost::any_cast<long>(m["CheckPlanId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceDimensionList") != m.end() && !m["ResourceDimensionList"].empty()) {
      resourceDimensionListShrink = make_shared<string>(boost::any_cast<string>(m["ResourceDimensionList"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~RefreshAdvisorCheckShrinkRequest() = default;
};
class RefreshAdvisorCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<long> taskId{};
  shared_ptr<string> traceId{};

  RefreshAdvisorCheckResponseBodyData() {}

  explicit RefreshAdvisorCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RefreshAdvisorCheckResponseBodyData() = default;
};
class RefreshAdvisorCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<RefreshAdvisorCheckResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RefreshAdvisorCheckResponseBody() {}

  explicit RefreshAdvisorCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RefreshAdvisorCheckResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshAdvisorCheckResponseBody() = default;
};
class RefreshAdvisorCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshAdvisorCheckResponseBody> body{};

  RefreshAdvisorCheckResponse() {}

  explicit RefreshAdvisorCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshAdvisorCheckResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshAdvisorCheckResponse() = default;
};
class RefreshAdvisorCostCheckRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> assumeAliyunIdList{};
  shared_ptr<vector<string>> checkIds{};
  shared_ptr<string> product{};
  shared_ptr<bool> refreshResource{};
  shared_ptr<vector<string>> resourceIds{};

  RefreshAdvisorCostCheckRequest() {}

  explicit RefreshAdvisorCostCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdList) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdList);
    }
    if (checkIds) {
      res["CheckIds"] = boost::any(*checkIds);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (refreshResource) {
      res["RefreshResource"] = boost::any(*refreshResource);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AssumeAliyunIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssumeAliyunIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      assumeAliyunIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CheckIds") != m.end() && !m["CheckIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CheckIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CheckIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      checkIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RefreshResource") != m.end() && !m["RefreshResource"].empty()) {
      refreshResource = make_shared<bool>(boost::any_cast<bool>(m["RefreshResource"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RefreshAdvisorCostCheckRequest() = default;
};
class RefreshAdvisorCostCheckShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeAliyunIdListShrink{};
  shared_ptr<string> checkIdsShrink{};
  shared_ptr<string> product{};
  shared_ptr<bool> refreshResource{};
  shared_ptr<string> resourceIdsShrink{};

  RefreshAdvisorCostCheckShrinkRequest() {}

  explicit RefreshAdvisorCostCheckShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeAliyunIdListShrink) {
      res["AssumeAliyunIdList"] = boost::any(*assumeAliyunIdListShrink);
    }
    if (checkIdsShrink) {
      res["CheckIds"] = boost::any(*checkIdsShrink);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (refreshResource) {
      res["RefreshResource"] = boost::any(*refreshResource);
    }
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeAliyunIdList") != m.end() && !m["AssumeAliyunIdList"].empty()) {
      assumeAliyunIdListShrink = make_shared<string>(boost::any_cast<string>(m["AssumeAliyunIdList"]));
    }
    if (m.find("CheckIds") != m.end() && !m["CheckIds"].empty()) {
      checkIdsShrink = make_shared<string>(boost::any_cast<string>(m["CheckIds"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RefreshResource") != m.end() && !m["RefreshResource"].empty()) {
      refreshResource = make_shared<bool>(boost::any_cast<bool>(m["RefreshResource"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
  }


  virtual ~RefreshAdvisorCostCheckShrinkRequest() = default;
};
class RefreshAdvisorCostCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> commandId{};
  shared_ptr<long> managerTaskId{};
  shared_ptr<bool> success{};
  shared_ptr<long> taskId{};

  RefreshAdvisorCostCheckResponseBodyData() {}

  explicit RefreshAdvisorCostCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (managerTaskId) {
      res["ManagerTaskId"] = boost::any(*managerTaskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("ManagerTaskId") != m.end() && !m["ManagerTaskId"].empty()) {
      managerTaskId = make_shared<long>(boost::any_cast<long>(m["ManagerTaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~RefreshAdvisorCostCheckResponseBodyData() = default;
};
class RefreshAdvisorCostCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RefreshAdvisorCostCheckResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RefreshAdvisorCostCheckResponseBody() {}

  explicit RefreshAdvisorCostCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCostCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RefreshAdvisorCostCheckResponseBodyData>(model1);
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


  virtual ~RefreshAdvisorCostCheckResponseBody() = default;
};
class RefreshAdvisorCostCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshAdvisorCostCheckResponseBody> body{};

  RefreshAdvisorCostCheckResponse() {}

  explicit RefreshAdvisorCostCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCostCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshAdvisorCostCheckResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshAdvisorCostCheckResponse() = default;
};
class RefreshAdvisorResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  RefreshAdvisorResourceRequest() {}

  explicit RefreshAdvisorResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~RefreshAdvisorResourceRequest() = default;
};
class RefreshAdvisorResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  RefreshAdvisorResourceResponseBody() {}

  explicit RefreshAdvisorResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshAdvisorResourceResponseBody() = default;
};
class RefreshAdvisorResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshAdvisorResourceResponseBody> body{};

  RefreshAdvisorResourceResponse() {}

  explicit RefreshAdvisorResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshAdvisorResourceResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshAdvisorResourceResponse() = default;
};
class ReportBizAlertInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertDescription{};
  shared_ptr<string> alertDetail{};
  shared_ptr<string> alertGrade{};
  shared_ptr<string> alertLabels{};
  shared_ptr<string> alertScene{};
  shared_ptr<string> alertToken{};
  shared_ptr<vector<long>> alertUid{};
  shared_ptr<string> language{};

  ReportBizAlertInfoRequest() {}

  explicit ReportBizAlertInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDescription) {
      res["AlertDescription"] = boost::any(*alertDescription);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertGrade) {
      res["AlertGrade"] = boost::any(*alertGrade);
    }
    if (alertLabels) {
      res["AlertLabels"] = boost::any(*alertLabels);
    }
    if (alertScene) {
      res["AlertScene"] = boost::any(*alertScene);
    }
    if (alertToken) {
      res["AlertToken"] = boost::any(*alertToken);
    }
    if (alertUid) {
      res["AlertUid"] = boost::any(*alertUid);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDescription") != m.end() && !m["AlertDescription"].empty()) {
      alertDescription = make_shared<string>(boost::any_cast<string>(m["AlertDescription"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertGrade") != m.end() && !m["AlertGrade"].empty()) {
      alertGrade = make_shared<string>(boost::any_cast<string>(m["AlertGrade"]));
    }
    if (m.find("AlertLabels") != m.end() && !m["AlertLabels"].empty()) {
      alertLabels = make_shared<string>(boost::any_cast<string>(m["AlertLabels"]));
    }
    if (m.find("AlertScene") != m.end() && !m["AlertScene"].empty()) {
      alertScene = make_shared<string>(boost::any_cast<string>(m["AlertScene"]));
    }
    if (m.find("AlertToken") != m.end() && !m["AlertToken"].empty()) {
      alertToken = make_shared<string>(boost::any_cast<string>(m["AlertToken"]));
    }
    if (m.find("AlertUid") != m.end() && !m["AlertUid"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AlertUid"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlertUid"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      alertUid = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ReportBizAlertInfoRequest() = default;
};
class ReportBizAlertInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertDescription{};
  shared_ptr<string> alertDetail{};
  shared_ptr<string> alertGrade{};
  shared_ptr<string> alertLabels{};
  shared_ptr<string> alertScene{};
  shared_ptr<string> alertToken{};
  shared_ptr<string> alertUidShrink{};
  shared_ptr<string> language{};

  ReportBizAlertInfoShrinkRequest() {}

  explicit ReportBizAlertInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDescription) {
      res["AlertDescription"] = boost::any(*alertDescription);
    }
    if (alertDetail) {
      res["AlertDetail"] = boost::any(*alertDetail);
    }
    if (alertGrade) {
      res["AlertGrade"] = boost::any(*alertGrade);
    }
    if (alertLabels) {
      res["AlertLabels"] = boost::any(*alertLabels);
    }
    if (alertScene) {
      res["AlertScene"] = boost::any(*alertScene);
    }
    if (alertToken) {
      res["AlertToken"] = boost::any(*alertToken);
    }
    if (alertUidShrink) {
      res["AlertUid"] = boost::any(*alertUidShrink);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertDescription") != m.end() && !m["AlertDescription"].empty()) {
      alertDescription = make_shared<string>(boost::any_cast<string>(m["AlertDescription"]));
    }
    if (m.find("AlertDetail") != m.end() && !m["AlertDetail"].empty()) {
      alertDetail = make_shared<string>(boost::any_cast<string>(m["AlertDetail"]));
    }
    if (m.find("AlertGrade") != m.end() && !m["AlertGrade"].empty()) {
      alertGrade = make_shared<string>(boost::any_cast<string>(m["AlertGrade"]));
    }
    if (m.find("AlertLabels") != m.end() && !m["AlertLabels"].empty()) {
      alertLabels = make_shared<string>(boost::any_cast<string>(m["AlertLabels"]));
    }
    if (m.find("AlertScene") != m.end() && !m["AlertScene"].empty()) {
      alertScene = make_shared<string>(boost::any_cast<string>(m["AlertScene"]));
    }
    if (m.find("AlertToken") != m.end() && !m["AlertToken"].empty()) {
      alertToken = make_shared<string>(boost::any_cast<string>(m["AlertToken"]));
    }
    if (m.find("AlertUid") != m.end() && !m["AlertUid"].empty()) {
      alertUidShrink = make_shared<string>(boost::any_cast<string>(m["AlertUid"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ReportBizAlertInfoShrinkRequest() = default;
};
class ReportBizAlertInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ReportBizAlertInfoResponseBodyData() {}

  explicit ReportBizAlertInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~ReportBizAlertInfoResponseBodyData() = default;
};
class ReportBizAlertInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReportBizAlertInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportBizAlertInfoResponseBody() {}

  explicit ReportBizAlertInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportBizAlertInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReportBizAlertInfoResponseBodyData>(model1);
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


  virtual ~ReportBizAlertInfoResponseBody() = default;
};
class ReportBizAlertInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportBizAlertInfoResponseBody> body{};

  ReportBizAlertInfoResponse() {}

  explicit ReportBizAlertInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportBizAlertInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportBizAlertInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ReportBizAlertInfoResponse() = default;
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
  DescribeAdvicesResponse describeAdvicesWithOptions(shared_ptr<DescribeAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvicesResponse describeAdvices(shared_ptr<DescribeAdvicesRequest> request);
  DescribeAdvicesFlatPageResponse describeAdvicesFlatPageWithOptions(shared_ptr<DescribeAdvicesFlatPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvicesFlatPageResponse describeAdvicesFlatPage(shared_ptr<DescribeAdvicesFlatPageRequest> request);
  DescribeAdvicesPageResponse describeAdvicesPageWithOptions(shared_ptr<DescribeAdvicesPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvicesPageResponse describeAdvicesPage(shared_ptr<DescribeAdvicesPageRequest> request);
  DescribeAdvisorChecksResponse describeAdvisorChecksWithOptions(shared_ptr<DescribeAdvisorChecksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvisorChecksResponse describeAdvisorChecks(shared_ptr<DescribeAdvisorChecksRequest> request);
  DescribeAdvisorChecksFoPagesResponse describeAdvisorChecksFoPagesWithOptions(shared_ptr<DescribeAdvisorChecksFoPagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvisorChecksFoPagesResponse describeAdvisorChecksFoPages(shared_ptr<DescribeAdvisorChecksFoPagesRequest> request);
  DescribeAdvisorResourcesResponse describeAdvisorResourcesWithOptions(shared_ptr<DescribeAdvisorResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvisorResourcesResponse describeAdvisorResources(shared_ptr<DescribeAdvisorResourcesRequest> request);
  DescribeCostCheckAdvicesResponse describeCostCheckAdvicesWithOptions(shared_ptr<DescribeCostCheckAdvicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCostCheckAdvicesResponse describeCostCheckAdvices(shared_ptr<DescribeCostCheckAdvicesRequest> request);
  DescribeCostCheckResultsResponse describeCostCheckResultsWithOptions(shared_ptr<DescribeCostCheckResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCostCheckResultsResponse describeCostCheckResults(shared_ptr<DescribeCostCheckResultsRequest> request);
  DescribeCostOptimizationOverviewResponse describeCostOptimizationOverviewWithOptions(shared_ptr<DescribeCostOptimizationOverviewRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCostOptimizationOverviewResponse describeCostOptimizationOverview(shared_ptr<DescribeCostOptimizationOverviewRequest> request);
  GetHistoryAdvicesResponse getHistoryAdvicesWithOptions(shared_ptr<GetHistoryAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryAdvicesResponse getHistoryAdvices(shared_ptr<GetHistoryAdvicesRequest> request);
  GetInspectProgressResponse getInspectProgressWithOptions(shared_ptr<GetInspectProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInspectProgressResponse getInspectProgress(shared_ptr<GetInspectProgressRequest> request);
  GetProductListResponse getProductListWithOptions(shared_ptr<GetProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductListResponse getProductList(shared_ptr<GetProductListRequest> request);
  GetTaskStatusByIdResponse getTaskStatusByIdWithOptions(shared_ptr<GetTaskStatusByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusByIdResponse getTaskStatusById(shared_ptr<GetTaskStatusByIdRequest> request);
  RefreshAdvisorCheckResponse refreshAdvisorCheckWithOptions(shared_ptr<RefreshAdvisorCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshAdvisorCheckResponse refreshAdvisorCheck(shared_ptr<RefreshAdvisorCheckRequest> request);
  RefreshAdvisorCostCheckResponse refreshAdvisorCostCheckWithOptions(shared_ptr<RefreshAdvisorCostCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshAdvisorCostCheckResponse refreshAdvisorCostCheck(shared_ptr<RefreshAdvisorCostCheckRequest> request);
  RefreshAdvisorResourceResponse refreshAdvisorResourceWithOptions(shared_ptr<RefreshAdvisorResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshAdvisorResourceResponse refreshAdvisorResource(shared_ptr<RefreshAdvisorResourceRequest> request);
  ReportBizAlertInfoResponse reportBizAlertInfoWithOptions(shared_ptr<ReportBizAlertInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportBizAlertInfoResponse reportBizAlertInfo(shared_ptr<ReportBizAlertInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Advisor20180120

#endif
