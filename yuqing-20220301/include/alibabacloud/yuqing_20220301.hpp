// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_YUQING20220301_H_
#define ALIBABACLOUD_YUQING20220301_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Yuqing20220301 {
class ConsoleBody : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> interfaceName{};
  shared_ptr<string> paramJson{};
  shared_ptr<string> requestId{};
  shared_ptr<string> teamHashId{};

  ConsoleBody() {}

  explicit ConsoleBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["appCode"] = boost::any(*appCode);
    }
    if (interfaceName) {
      res["interfaceName"] = boost::any(*interfaceName);
    }
    if (paramJson) {
      res["paramJson"] = boost::any(*paramJson);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (teamHashId) {
      res["teamHashId"] = boost::any(*teamHashId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appCode") != m.end() && !m["appCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["appCode"]));
    }
    if (m.find("interfaceName") != m.end() && !m["interfaceName"].empty()) {
      interfaceName = make_shared<string>(boost::any_cast<string>(m["interfaceName"]));
    }
    if (m.find("paramJson") != m.end() && !m["paramJson"].empty()) {
      paramJson = make_shared<string>(boost::any_cast<string>(m["paramJson"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("teamHashId") != m.end() && !m["teamHashId"].empty()) {
      teamHashId = make_shared<string>(boost::any_cast<string>(m["teamHashId"]));
    }
  }


  virtual ~ConsoleBody() = default;
};
class FieldCondition : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> nestFieldPath{};
  shared_ptr<vector<long>> nestFieldValue{};
  shared_ptr<string> operateType{};
  shared_ptr<string> value{};

  FieldCondition() {}

  explicit FieldCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["fieldName"] = boost::any(*fieldName);
    }
    if (nestFieldPath) {
      res["nestFieldPath"] = boost::any(*nestFieldPath);
    }
    if (nestFieldValue) {
      res["nestFieldValue"] = boost::any(*nestFieldValue);
    }
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldName") != m.end() && !m["fieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["fieldName"]));
    }
    if (m.find("nestFieldPath") != m.end() && !m["nestFieldPath"].empty()) {
      nestFieldPath = make_shared<string>(boost::any_cast<string>(m["nestFieldPath"]));
    }
    if (m.find("nestFieldValue") != m.end() && !m["nestFieldValue"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["nestFieldValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nestFieldValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      nestFieldValue = make_shared<vector<long>>(toVec1);
    }
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~FieldCondition() = default;
};
class ProductInstance : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> buyerName{};
  shared_ptr<string> buyerUid{};
  shared_ptr<string> channel{};
  shared_ptr<string> config{};
  shared_ptr<long> end{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productSpecCode{};
  shared_ptr<long> start{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> tenantUid{};

  ProductInstance() {}

  explicit ProductInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["appCode"] = boost::any(*appCode);
    }
    if (buyerName) {
      res["buyerName"] = boost::any(*buyerName);
    }
    if (buyerUid) {
      res["buyerUid"] = boost::any(*buyerUid);
    }
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (orderNo) {
      res["orderNo"] = boost::any(*orderNo);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (productSpecCode) {
      res["productSpecCode"] = boost::any(*productSpecCode);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (tenantName) {
      res["tenantName"] = boost::any(*tenantName);
    }
    if (tenantUid) {
      res["tenantUid"] = boost::any(*tenantUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appCode") != m.end() && !m["appCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["appCode"]));
    }
    if (m.find("buyerName") != m.end() && !m["buyerName"].empty()) {
      buyerName = make_shared<string>(boost::any_cast<string>(m["buyerName"]));
    }
    if (m.find("buyerUid") != m.end() && !m["buyerUid"].empty()) {
      buyerUid = make_shared<string>(boost::any_cast<string>(m["buyerUid"]));
    }
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("orderNo") != m.end() && !m["orderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["orderNo"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("productSpecCode") != m.end() && !m["productSpecCode"].empty()) {
      productSpecCode = make_shared<string>(boost::any_cast<string>(m["productSpecCode"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
    if (m.find("tenantName") != m.end() && !m["tenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["tenantName"]));
    }
    if (m.find("tenantUid") != m.end() && !m["tenantUid"].empty()) {
      tenantUid = make_shared<string>(boost::any_cast<string>(m["tenantUid"]));
    }
  }


  virtual ~ProductInstance() = default;
};
class SearchCondition : public Darabonba::Model {
public:
  shared_ptr<vector<string>> assKeywordList{};
  shared_ptr<vector<string>> atAuthorNameList{};
  shared_ptr<vector<string>> authorNameList{};
  shared_ptr<long> commentsLevel{};
  shared_ptr<long> contentLenLevel{};
  shared_ptr<long> createTimeEnd{};
  shared_ptr<long> createTimeStart{};
  shared_ptr<string> docContentSign{};
  shared_ptr<vector<string>> docIdList{};
  shared_ptr<bool> duplicateRemoval{};
  shared_ptr<long> emotionType{};
  shared_ptr<bool> enableKeywordHighlight{};
  shared_ptr<vector<string>> excludeAtAuthorNameList{};
  shared_ptr<vector<string>> excludeAuthorNameList{};
  shared_ptr<vector<string>> excludeHostNameList{};
  shared_ptr<vector<string>> excludeKeywordList{};
  shared_ptr<vector<string>> excludeKeywordListInTitle{};
  shared_ptr<vector<long>> excludeKeywordTagIds{};
  shared_ptr<vector<string>> excludeMaterialTagList{};
  shared_ptr<vector<string>> excludeMediaLibraryIdList{};
  shared_ptr<vector<string>> excludeMediaNameList{};
  shared_ptr<vector<string>> excludeMediaTypeList{};
  shared_ptr<vector<string>> excludeMessageTypeList{};
  shared_ptr<vector<FieldCondition>> fieldConditions{};
  shared_ptr<long> filterId{};
  shared_ptr<bool> hasAudio{};
  shared_ptr<bool> hasImage{};
  shared_ptr<bool> hasMultiModeContent{};
  shared_ptr<bool> hasVideo{};
  shared_ptr<vector<string>> hostNameList{};
  shared_ptr<long> influenceLevel{};
  shared_ptr<vector<long>> keywordTagIds{};
  shared_ptr<long> likesLevel{};
  shared_ptr<vector<string>> materialTagList{};
  shared_ptr<vector<string>> mediaLibraryIdList{};
  shared_ptr<vector<string>> mediaNameList{};
  shared_ptr<vector<string>> mediaTypeList{};
  shared_ptr<vector<string>> messageTypeList{};
  shared_ptr<long> pageNow{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentDocId{};
  shared_ptr<vector<string>> posKeywordList{};
  shared_ptr<vector<string>> posKeywordListInTitle{};
  shared_ptr<long> projectId{};
  shared_ptr<long> propagationLevel{};
  shared_ptr<long> publishTimeEnd{};
  shared_ptr<long> publishTimeStart{};
  shared_ptr<long> readsLevel{};
  shared_ptr<long> relevanceLevel{};
  shared_ptr<long> repostLevel{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortByDirection{};
  shared_ptr<vector<string>> topicList{};
  shared_ptr<long> updateTimeEnd{};
  shared_ptr<long> updateTimeStart{};

  SearchCondition() {}

  explicit SearchCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assKeywordList) {
      res["assKeywordList"] = boost::any(*assKeywordList);
    }
    if (atAuthorNameList) {
      res["atAuthorNameList"] = boost::any(*atAuthorNameList);
    }
    if (authorNameList) {
      res["authorNameList"] = boost::any(*authorNameList);
    }
    if (commentsLevel) {
      res["commentsLevel"] = boost::any(*commentsLevel);
    }
    if (contentLenLevel) {
      res["contentLenLevel"] = boost::any(*contentLenLevel);
    }
    if (createTimeEnd) {
      res["createTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["createTimeStart"] = boost::any(*createTimeStart);
    }
    if (docContentSign) {
      res["docContentSign"] = boost::any(*docContentSign);
    }
    if (docIdList) {
      res["docIdList"] = boost::any(*docIdList);
    }
    if (duplicateRemoval) {
      res["duplicateRemoval"] = boost::any(*duplicateRemoval);
    }
    if (emotionType) {
      res["emotionType"] = boost::any(*emotionType);
    }
    if (enableKeywordHighlight) {
      res["enableKeywordHighlight"] = boost::any(*enableKeywordHighlight);
    }
    if (excludeAtAuthorNameList) {
      res["excludeAtAuthorNameList"] = boost::any(*excludeAtAuthorNameList);
    }
    if (excludeAuthorNameList) {
      res["excludeAuthorNameList"] = boost::any(*excludeAuthorNameList);
    }
    if (excludeHostNameList) {
      res["excludeHostNameList"] = boost::any(*excludeHostNameList);
    }
    if (excludeKeywordList) {
      res["excludeKeywordList"] = boost::any(*excludeKeywordList);
    }
    if (excludeKeywordListInTitle) {
      res["excludeKeywordListInTitle"] = boost::any(*excludeKeywordListInTitle);
    }
    if (excludeKeywordTagIds) {
      res["excludeKeywordTagIds"] = boost::any(*excludeKeywordTagIds);
    }
    if (excludeMaterialTagList) {
      res["excludeMaterialTagList"] = boost::any(*excludeMaterialTagList);
    }
    if (excludeMediaLibraryIdList) {
      res["excludeMediaLibraryIdList"] = boost::any(*excludeMediaLibraryIdList);
    }
    if (excludeMediaNameList) {
      res["excludeMediaNameList"] = boost::any(*excludeMediaNameList);
    }
    if (excludeMediaTypeList) {
      res["excludeMediaTypeList"] = boost::any(*excludeMediaTypeList);
    }
    if (excludeMessageTypeList) {
      res["excludeMessageTypeList"] = boost::any(*excludeMessageTypeList);
    }
    if (fieldConditions) {
      vector<boost::any> temp1;
      for(auto item1:*fieldConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fieldConditions"] = boost::any(temp1);
    }
    if (filterId) {
      res["filterId"] = boost::any(*filterId);
    }
    if (hasAudio) {
      res["hasAudio"] = boost::any(*hasAudio);
    }
    if (hasImage) {
      res["hasImage"] = boost::any(*hasImage);
    }
    if (hasMultiModeContent) {
      res["hasMultiModeContent"] = boost::any(*hasMultiModeContent);
    }
    if (hasVideo) {
      res["hasVideo"] = boost::any(*hasVideo);
    }
    if (hostNameList) {
      res["hostNameList"] = boost::any(*hostNameList);
    }
    if (influenceLevel) {
      res["influenceLevel"] = boost::any(*influenceLevel);
    }
    if (keywordTagIds) {
      res["keywordTagIds"] = boost::any(*keywordTagIds);
    }
    if (likesLevel) {
      res["likesLevel"] = boost::any(*likesLevel);
    }
    if (materialTagList) {
      res["materialTagList"] = boost::any(*materialTagList);
    }
    if (mediaLibraryIdList) {
      res["mediaLibraryIdList"] = boost::any(*mediaLibraryIdList);
    }
    if (mediaNameList) {
      res["mediaNameList"] = boost::any(*mediaNameList);
    }
    if (mediaTypeList) {
      res["mediaTypeList"] = boost::any(*mediaTypeList);
    }
    if (messageTypeList) {
      res["messageTypeList"] = boost::any(*messageTypeList);
    }
    if (pageNow) {
      res["pageNow"] = boost::any(*pageNow);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (parentDocId) {
      res["parentDocId"] = boost::any(*parentDocId);
    }
    if (posKeywordList) {
      res["posKeywordList"] = boost::any(*posKeywordList);
    }
    if (posKeywordListInTitle) {
      res["posKeywordListInTitle"] = boost::any(*posKeywordListInTitle);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (propagationLevel) {
      res["propagationLevel"] = boost::any(*propagationLevel);
    }
    if (publishTimeEnd) {
      res["publishTimeEnd"] = boost::any(*publishTimeEnd);
    }
    if (publishTimeStart) {
      res["publishTimeStart"] = boost::any(*publishTimeStart);
    }
    if (readsLevel) {
      res["readsLevel"] = boost::any(*readsLevel);
    }
    if (relevanceLevel) {
      res["relevanceLevel"] = boost::any(*relevanceLevel);
    }
    if (repostLevel) {
      res["repostLevel"] = boost::any(*repostLevel);
    }
    if (sortBy) {
      res["sortBy"] = boost::any(*sortBy);
    }
    if (sortByDirection) {
      res["sortByDirection"] = boost::any(*sortByDirection);
    }
    if (topicList) {
      res["topicList"] = boost::any(*topicList);
    }
    if (updateTimeEnd) {
      res["updateTimeEnd"] = boost::any(*updateTimeEnd);
    }
    if (updateTimeStart) {
      res["updateTimeStart"] = boost::any(*updateTimeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assKeywordList") != m.end() && !m["assKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["assKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["assKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      assKeywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("atAuthorNameList") != m.end() && !m["atAuthorNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["atAuthorNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["atAuthorNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      atAuthorNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authorNameList") != m.end() && !m["authorNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("commentsLevel") != m.end() && !m["commentsLevel"].empty()) {
      commentsLevel = make_shared<long>(boost::any_cast<long>(m["commentsLevel"]));
    }
    if (m.find("contentLenLevel") != m.end() && !m["contentLenLevel"].empty()) {
      contentLenLevel = make_shared<long>(boost::any_cast<long>(m["contentLenLevel"]));
    }
    if (m.find("createTimeEnd") != m.end() && !m["createTimeEnd"].empty()) {
      createTimeEnd = make_shared<long>(boost::any_cast<long>(m["createTimeEnd"]));
    }
    if (m.find("createTimeStart") != m.end() && !m["createTimeStart"].empty()) {
      createTimeStart = make_shared<long>(boost::any_cast<long>(m["createTimeStart"]));
    }
    if (m.find("docContentSign") != m.end() && !m["docContentSign"].empty()) {
      docContentSign = make_shared<string>(boost::any_cast<string>(m["docContentSign"]));
    }
    if (m.find("docIdList") != m.end() && !m["docIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["docIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["docIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("duplicateRemoval") != m.end() && !m["duplicateRemoval"].empty()) {
      duplicateRemoval = make_shared<bool>(boost::any_cast<bool>(m["duplicateRemoval"]));
    }
    if (m.find("emotionType") != m.end() && !m["emotionType"].empty()) {
      emotionType = make_shared<long>(boost::any_cast<long>(m["emotionType"]));
    }
    if (m.find("enableKeywordHighlight") != m.end() && !m["enableKeywordHighlight"].empty()) {
      enableKeywordHighlight = make_shared<bool>(boost::any_cast<bool>(m["enableKeywordHighlight"]));
    }
    if (m.find("excludeAtAuthorNameList") != m.end() && !m["excludeAtAuthorNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeAtAuthorNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeAtAuthorNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeAtAuthorNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeAuthorNameList") != m.end() && !m["excludeAuthorNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeAuthorNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeAuthorNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeAuthorNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeHostNameList") != m.end() && !m["excludeHostNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeHostNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeHostNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeHostNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeKeywordList") != m.end() && !m["excludeKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeKeywordListInTitle") != m.end() && !m["excludeKeywordListInTitle"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeKeywordListInTitle"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeKeywordListInTitle"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeywordListInTitle = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeKeywordTagIds") != m.end() && !m["excludeKeywordTagIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["excludeKeywordTagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeKeywordTagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      excludeKeywordTagIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("excludeMaterialTagList") != m.end() && !m["excludeMaterialTagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeMaterialTagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeMaterialTagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeMaterialTagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeMediaLibraryIdList") != m.end() && !m["excludeMediaLibraryIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeMediaLibraryIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeMediaLibraryIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeMediaLibraryIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeMediaNameList") != m.end() && !m["excludeMediaNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeMediaNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeMediaNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeMediaNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeMediaTypeList") != m.end() && !m["excludeMediaTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeMediaTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeMediaTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeMediaTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("excludeMessageTypeList") != m.end() && !m["excludeMessageTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeMessageTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeMessageTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeMessageTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fieldConditions") != m.end() && !m["fieldConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["fieldConditions"].type()) {
        vector<FieldCondition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fieldConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FieldCondition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fieldConditions = make_shared<vector<FieldCondition>>(expect1);
      }
    }
    if (m.find("filterId") != m.end() && !m["filterId"].empty()) {
      filterId = make_shared<long>(boost::any_cast<long>(m["filterId"]));
    }
    if (m.find("hasAudio") != m.end() && !m["hasAudio"].empty()) {
      hasAudio = make_shared<bool>(boost::any_cast<bool>(m["hasAudio"]));
    }
    if (m.find("hasImage") != m.end() && !m["hasImage"].empty()) {
      hasImage = make_shared<bool>(boost::any_cast<bool>(m["hasImage"]));
    }
    if (m.find("hasMultiModeContent") != m.end() && !m["hasMultiModeContent"].empty()) {
      hasMultiModeContent = make_shared<bool>(boost::any_cast<bool>(m["hasMultiModeContent"]));
    }
    if (m.find("hasVideo") != m.end() && !m["hasVideo"].empty()) {
      hasVideo = make_shared<bool>(boost::any_cast<bool>(m["hasVideo"]));
    }
    if (m.find("hostNameList") != m.end() && !m["hostNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["hostNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["hostNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("influenceLevel") != m.end() && !m["influenceLevel"].empty()) {
      influenceLevel = make_shared<long>(boost::any_cast<long>(m["influenceLevel"]));
    }
    if (m.find("keywordTagIds") != m.end() && !m["keywordTagIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["keywordTagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keywordTagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      keywordTagIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("likesLevel") != m.end() && !m["likesLevel"].empty()) {
      likesLevel = make_shared<long>(boost::any_cast<long>(m["likesLevel"]));
    }
    if (m.find("materialTagList") != m.end() && !m["materialTagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["materialTagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["materialTagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      materialTagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("mediaLibraryIdList") != m.end() && !m["mediaLibraryIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mediaLibraryIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mediaLibraryIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediaLibraryIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("mediaNameList") != m.end() && !m["mediaNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mediaNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mediaNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediaNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("mediaTypeList") != m.end() && !m["mediaTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mediaTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mediaTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediaTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("messageTypeList") != m.end() && !m["messageTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNow") != m.end() && !m["pageNow"].empty()) {
      pageNow = make_shared<long>(boost::any_cast<long>(m["pageNow"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("parentDocId") != m.end() && !m["parentDocId"].empty()) {
      parentDocId = make_shared<string>(boost::any_cast<string>(m["parentDocId"]));
    }
    if (m.find("posKeywordList") != m.end() && !m["posKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["posKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["posKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      posKeywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("posKeywordListInTitle") != m.end() && !m["posKeywordListInTitle"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["posKeywordListInTitle"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["posKeywordListInTitle"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      posKeywordListInTitle = make_shared<vector<string>>(toVec1);
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["projectId"]));
    }
    if (m.find("propagationLevel") != m.end() && !m["propagationLevel"].empty()) {
      propagationLevel = make_shared<long>(boost::any_cast<long>(m["propagationLevel"]));
    }
    if (m.find("publishTimeEnd") != m.end() && !m["publishTimeEnd"].empty()) {
      publishTimeEnd = make_shared<long>(boost::any_cast<long>(m["publishTimeEnd"]));
    }
    if (m.find("publishTimeStart") != m.end() && !m["publishTimeStart"].empty()) {
      publishTimeStart = make_shared<long>(boost::any_cast<long>(m["publishTimeStart"]));
    }
    if (m.find("readsLevel") != m.end() && !m["readsLevel"].empty()) {
      readsLevel = make_shared<long>(boost::any_cast<long>(m["readsLevel"]));
    }
    if (m.find("relevanceLevel") != m.end() && !m["relevanceLevel"].empty()) {
      relevanceLevel = make_shared<long>(boost::any_cast<long>(m["relevanceLevel"]));
    }
    if (m.find("repostLevel") != m.end() && !m["repostLevel"].empty()) {
      repostLevel = make_shared<long>(boost::any_cast<long>(m["repostLevel"]));
    }
    if (m.find("sortBy") != m.end() && !m["sortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["sortBy"]));
    }
    if (m.find("sortByDirection") != m.end() && !m["sortByDirection"].empty()) {
      sortByDirection = make_shared<string>(boost::any_cast<string>(m["sortByDirection"]));
    }
    if (m.find("topicList") != m.end() && !m["topicList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["topicList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["topicList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topicList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateTimeEnd") != m.end() && !m["updateTimeEnd"].empty()) {
      updateTimeEnd = make_shared<long>(boost::any_cast<long>(m["updateTimeEnd"]));
    }
    if (m.find("updateTimeStart") != m.end() && !m["updateTimeStart"].empty()) {
      updateTimeStart = make_shared<long>(boost::any_cast<long>(m["updateTimeStart"]));
    }
  }


  virtual ~SearchCondition() = default;
};
class YuqingFinanceEvent : public Darabonba::Model {
public:
  shared_ptr<double> comprehensiveRisk{};
  shared_ptr<string> entityArea{};
  shared_ptr<string> entityCrn{};
  shared_ptr<double> entityEmotionScore{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<double> entityRelevanceScore{};
  shared_ptr<string> entityShowName{};
  shared_ptr<string> entitySummary{};
  shared_ptr<string> entityType{};
  shared_ptr<string> eventId{};
  shared_ptr<long> eventLevel3Code{};
  shared_ptr<string> eventLevel3Name{};
  shared_ptr<string> eventTags{};
  shared_ptr<long> eventTime{};
  shared_ptr<string> securityAbbreviation{};
  shared_ptr<vector<string>> securityCategoryCodes{};
  shared_ptr<vector<string>> securityCodes{};
  shared_ptr<vector<string>> securityMarketsCodes{};
  shared_ptr<double> spamScore{};
  shared_ptr<vector<string>> userSubscribeEntityTags{};
  shared_ptr<vector<long>> userSubscribeEventTags{};

  YuqingFinanceEvent() {}

  explicit YuqingFinanceEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comprehensiveRisk) {
      res["comprehensiveRisk"] = boost::any(*comprehensiveRisk);
    }
    if (entityArea) {
      res["entityArea"] = boost::any(*entityArea);
    }
    if (entityCrn) {
      res["entityCrn"] = boost::any(*entityCrn);
    }
    if (entityEmotionScore) {
      res["entityEmotionScore"] = boost::any(*entityEmotionScore);
    }
    if (entityId) {
      res["entityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["entityName"] = boost::any(*entityName);
    }
    if (entityRelevanceScore) {
      res["entityRelevanceScore"] = boost::any(*entityRelevanceScore);
    }
    if (entityShowName) {
      res["entityShowName"] = boost::any(*entityShowName);
    }
    if (entitySummary) {
      res["entitySummary"] = boost::any(*entitySummary);
    }
    if (entityType) {
      res["entityType"] = boost::any(*entityType);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (eventLevel3Code) {
      res["eventLevel3Code"] = boost::any(*eventLevel3Code);
    }
    if (eventLevel3Name) {
      res["eventLevel3Name"] = boost::any(*eventLevel3Name);
    }
    if (eventTags) {
      res["eventTags"] = boost::any(*eventTags);
    }
    if (eventTime) {
      res["eventTime"] = boost::any(*eventTime);
    }
    if (securityAbbreviation) {
      res["securityAbbreviation"] = boost::any(*securityAbbreviation);
    }
    if (securityCategoryCodes) {
      res["securityCategoryCodes"] = boost::any(*securityCategoryCodes);
    }
    if (securityCodes) {
      res["securityCodes"] = boost::any(*securityCodes);
    }
    if (securityMarketsCodes) {
      res["securityMarketsCodes"] = boost::any(*securityMarketsCodes);
    }
    if (spamScore) {
      res["spamScore"] = boost::any(*spamScore);
    }
    if (userSubscribeEntityTags) {
      res["userSubscribeEntityTags"] = boost::any(*userSubscribeEntityTags);
    }
    if (userSubscribeEventTags) {
      res["userSubscribeEventTags"] = boost::any(*userSubscribeEventTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comprehensiveRisk") != m.end() && !m["comprehensiveRisk"].empty()) {
      comprehensiveRisk = make_shared<double>(boost::any_cast<double>(m["comprehensiveRisk"]));
    }
    if (m.find("entityArea") != m.end() && !m["entityArea"].empty()) {
      entityArea = make_shared<string>(boost::any_cast<string>(m["entityArea"]));
    }
    if (m.find("entityCrn") != m.end() && !m["entityCrn"].empty()) {
      entityCrn = make_shared<string>(boost::any_cast<string>(m["entityCrn"]));
    }
    if (m.find("entityEmotionScore") != m.end() && !m["entityEmotionScore"].empty()) {
      entityEmotionScore = make_shared<double>(boost::any_cast<double>(m["entityEmotionScore"]));
    }
    if (m.find("entityId") != m.end() && !m["entityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["entityId"]));
    }
    if (m.find("entityName") != m.end() && !m["entityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["entityName"]));
    }
    if (m.find("entityRelevanceScore") != m.end() && !m["entityRelevanceScore"].empty()) {
      entityRelevanceScore = make_shared<double>(boost::any_cast<double>(m["entityRelevanceScore"]));
    }
    if (m.find("entityShowName") != m.end() && !m["entityShowName"].empty()) {
      entityShowName = make_shared<string>(boost::any_cast<string>(m["entityShowName"]));
    }
    if (m.find("entitySummary") != m.end() && !m["entitySummary"].empty()) {
      entitySummary = make_shared<string>(boost::any_cast<string>(m["entitySummary"]));
    }
    if (m.find("entityType") != m.end() && !m["entityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entityType"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["eventId"]));
    }
    if (m.find("eventLevel3Code") != m.end() && !m["eventLevel3Code"].empty()) {
      eventLevel3Code = make_shared<long>(boost::any_cast<long>(m["eventLevel3Code"]));
    }
    if (m.find("eventLevel3Name") != m.end() && !m["eventLevel3Name"].empty()) {
      eventLevel3Name = make_shared<string>(boost::any_cast<string>(m["eventLevel3Name"]));
    }
    if (m.find("eventTags") != m.end() && !m["eventTags"].empty()) {
      eventTags = make_shared<string>(boost::any_cast<string>(m["eventTags"]));
    }
    if (m.find("eventTime") != m.end() && !m["eventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["eventTime"]));
    }
    if (m.find("securityAbbreviation") != m.end() && !m["securityAbbreviation"].empty()) {
      securityAbbreviation = make_shared<string>(boost::any_cast<string>(m["securityAbbreviation"]));
    }
    if (m.find("securityCategoryCodes") != m.end() && !m["securityCategoryCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["securityCategoryCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["securityCategoryCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityCategoryCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("securityCodes") != m.end() && !m["securityCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["securityCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["securityCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("securityMarketsCodes") != m.end() && !m["securityMarketsCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["securityMarketsCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["securityMarketsCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityMarketsCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("spamScore") != m.end() && !m["spamScore"].empty()) {
      spamScore = make_shared<double>(boost::any_cast<double>(m["spamScore"]));
    }
    if (m.find("userSubscribeEntityTags") != m.end() && !m["userSubscribeEntityTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["userSubscribeEntityTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userSubscribeEntityTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userSubscribeEntityTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userSubscribeEventTags") != m.end() && !m["userSubscribeEventTags"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["userSubscribeEventTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userSubscribeEventTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userSubscribeEventTags = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~YuqingFinanceEvent() = default;
};
class YuqingMessage : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> appScore{};
  shared_ptr<string> appStoreName{};
  shared_ptr<vector<string>> atAuthorNames{};
  shared_ptr<long> audioCount{};
  shared_ptr<string> authorAvatarUrl{};
  shared_ptr<long> authorFollowersCount{};
  shared_ptr<long> authorFriendsCount{};
  shared_ptr<string> authorGender{};
  shared_ptr<string> authorId{};
  shared_ptr<long> authorLikesCount{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorProfileUrl{};
  shared_ptr<long> authorStatusesCount{};
  shared_ptr<bool> authorVerified{};
  shared_ptr<long> authorVerifyType{};
  shared_ptr<string> contentAudioText{};
  shared_ptr<string> contentAudioUrls{};
  shared_ptr<string> contentImageText{};
  shared_ptr<string> contentImageUrls{};
  shared_ptr<string> contentLang{};
  shared_ptr<long> contentLen{};
  shared_ptr<string> contentVideoText{};
  shared_ptr<string> contentVideoUrls{};
  shared_ptr<long> createTime{};
  shared_ptr<long> docAnswersCount{};
  shared_ptr<vector<string>> docAreas{};
  shared_ptr<long> docCoinCount{};
  shared_ptr<long> docCommentsCount{};
  shared_ptr<string> docContent{};
  shared_ptr<string> docContentBrief{};
  shared_ptr<string> docContentSign{};
  shared_ptr<string> docId{};
  shared_ptr<long> docLikesCount{};
  shared_ptr<long> docPlayCount{};
  shared_ptr<long> docReadingCount{};
  shared_ptr<long> docReadsCount{};
  shared_ptr<long> docRepostsCount{};
  shared_ptr<string> docReprintName{};
  shared_ptr<string> docSelfContentSign{};
  shared_ptr<string> docTitle{};
  shared_ptr<string> docUrl{};
  shared_ptr<double> emotionScore{};
  shared_ptr<long> emotionType{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<long> finEventCount{};
  shared_ptr<vector<YuqingFinanceEvent>> financeEventList{};
  shared_ptr<vector<string>> highlightKeywords{};
  shared_ptr<long> imageCount{};
  shared_ptr<double> influenceScore{};
  shared_ptr<vector<string>> mediaHosts{};
  shared_ptr<long> mediaInfluenceLevel{};
  shared_ptr<string> mediaName{};
  shared_ptr<long> mediaPropagationLevel{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> messageType{};
  shared_ptr<string> parentDocId{};
  shared_ptr<double> propagationScore{};
  shared_ptr<long> publishTime{};
  shared_ptr<double> relevanceScore{};
  shared_ptr<vector<string>> reportMaterialTags{};
  shared_ptr<vector<string>> repostList{};
  shared_ptr<long> similarNumber{};
  shared_ptr<vector<string>> topics{};
  shared_ptr<long> videoCount{};
  shared_ptr<string> weiboCommentId{};
  shared_ptr<string> weiboMid{};

  YuqingMessage() {}

  explicit YuqingMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (appScore) {
      res["appScore"] = boost::any(*appScore);
    }
    if (appStoreName) {
      res["appStoreName"] = boost::any(*appStoreName);
    }
    if (atAuthorNames) {
      res["atAuthorNames"] = boost::any(*atAuthorNames);
    }
    if (audioCount) {
      res["audioCount"] = boost::any(*audioCount);
    }
    if (authorAvatarUrl) {
      res["authorAvatarUrl"] = boost::any(*authorAvatarUrl);
    }
    if (authorFollowersCount) {
      res["authorFollowersCount"] = boost::any(*authorFollowersCount);
    }
    if (authorFriendsCount) {
      res["authorFriendsCount"] = boost::any(*authorFriendsCount);
    }
    if (authorGender) {
      res["authorGender"] = boost::any(*authorGender);
    }
    if (authorId) {
      res["authorId"] = boost::any(*authorId);
    }
    if (authorLikesCount) {
      res["authorLikesCount"] = boost::any(*authorLikesCount);
    }
    if (authorName) {
      res["authorName"] = boost::any(*authorName);
    }
    if (authorProfileUrl) {
      res["authorProfileUrl"] = boost::any(*authorProfileUrl);
    }
    if (authorStatusesCount) {
      res["authorStatusesCount"] = boost::any(*authorStatusesCount);
    }
    if (authorVerified) {
      res["authorVerified"] = boost::any(*authorVerified);
    }
    if (authorVerifyType) {
      res["authorVerifyType"] = boost::any(*authorVerifyType);
    }
    if (contentAudioText) {
      res["contentAudioText"] = boost::any(*contentAudioText);
    }
    if (contentAudioUrls) {
      res["contentAudioUrls"] = boost::any(*contentAudioUrls);
    }
    if (contentImageText) {
      res["contentImageText"] = boost::any(*contentImageText);
    }
    if (contentImageUrls) {
      res["contentImageUrls"] = boost::any(*contentImageUrls);
    }
    if (contentLang) {
      res["contentLang"] = boost::any(*contentLang);
    }
    if (contentLen) {
      res["contentLen"] = boost::any(*contentLen);
    }
    if (contentVideoText) {
      res["contentVideoText"] = boost::any(*contentVideoText);
    }
    if (contentVideoUrls) {
      res["contentVideoUrls"] = boost::any(*contentVideoUrls);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (docAnswersCount) {
      res["docAnswersCount"] = boost::any(*docAnswersCount);
    }
    if (docAreas) {
      res["docAreas"] = boost::any(*docAreas);
    }
    if (docCoinCount) {
      res["docCoinCount"] = boost::any(*docCoinCount);
    }
    if (docCommentsCount) {
      res["docCommentsCount"] = boost::any(*docCommentsCount);
    }
    if (docContent) {
      res["docContent"] = boost::any(*docContent);
    }
    if (docContentBrief) {
      res["docContentBrief"] = boost::any(*docContentBrief);
    }
    if (docContentSign) {
      res["docContentSign"] = boost::any(*docContentSign);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (docLikesCount) {
      res["docLikesCount"] = boost::any(*docLikesCount);
    }
    if (docPlayCount) {
      res["docPlayCount"] = boost::any(*docPlayCount);
    }
    if (docReadingCount) {
      res["docReadingCount"] = boost::any(*docReadingCount);
    }
    if (docReadsCount) {
      res["docReadsCount"] = boost::any(*docReadsCount);
    }
    if (docRepostsCount) {
      res["docRepostsCount"] = boost::any(*docRepostsCount);
    }
    if (docReprintName) {
      res["docReprintName"] = boost::any(*docReprintName);
    }
    if (docSelfContentSign) {
      res["docSelfContentSign"] = boost::any(*docSelfContentSign);
    }
    if (docTitle) {
      res["docTitle"] = boost::any(*docTitle);
    }
    if (docUrl) {
      res["docUrl"] = boost::any(*docUrl);
    }
    if (emotionScore) {
      res["emotionScore"] = boost::any(*emotionScore);
    }
    if (emotionType) {
      res["emotionType"] = boost::any(*emotionType);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (finEventCount) {
      res["finEventCount"] = boost::any(*finEventCount);
    }
    if (financeEventList) {
      vector<boost::any> temp1;
      for(auto item1:*financeEventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["financeEventList"] = boost::any(temp1);
    }
    if (highlightKeywords) {
      res["highlightKeywords"] = boost::any(*highlightKeywords);
    }
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (influenceScore) {
      res["influenceScore"] = boost::any(*influenceScore);
    }
    if (mediaHosts) {
      res["mediaHosts"] = boost::any(*mediaHosts);
    }
    if (mediaInfluenceLevel) {
      res["mediaInfluenceLevel"] = boost::any(*mediaInfluenceLevel);
    }
    if (mediaName) {
      res["mediaName"] = boost::any(*mediaName);
    }
    if (mediaPropagationLevel) {
      res["mediaPropagationLevel"] = boost::any(*mediaPropagationLevel);
    }
    if (mediaType) {
      res["mediaType"] = boost::any(*mediaType);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (parentDocId) {
      res["parentDocId"] = boost::any(*parentDocId);
    }
    if (propagationScore) {
      res["propagationScore"] = boost::any(*propagationScore);
    }
    if (publishTime) {
      res["publishTime"] = boost::any(*publishTime);
    }
    if (relevanceScore) {
      res["relevanceScore"] = boost::any(*relevanceScore);
    }
    if (reportMaterialTags) {
      res["reportMaterialTags"] = boost::any(*reportMaterialTags);
    }
    if (repostList) {
      res["repostList"] = boost::any(*repostList);
    }
    if (similarNumber) {
      res["similarNumber"] = boost::any(*similarNumber);
    }
    if (topics) {
      res["topics"] = boost::any(*topics);
    }
    if (videoCount) {
      res["videoCount"] = boost::any(*videoCount);
    }
    if (weiboCommentId) {
      res["weiboCommentId"] = boost::any(*weiboCommentId);
    }
    if (weiboMid) {
      res["weiboMid"] = boost::any(*weiboMid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("appScore") != m.end() && !m["appScore"].empty()) {
      appScore = make_shared<long>(boost::any_cast<long>(m["appScore"]));
    }
    if (m.find("appStoreName") != m.end() && !m["appStoreName"].empty()) {
      appStoreName = make_shared<string>(boost::any_cast<string>(m["appStoreName"]));
    }
    if (m.find("atAuthorNames") != m.end() && !m["atAuthorNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["atAuthorNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["atAuthorNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      atAuthorNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("audioCount") != m.end() && !m["audioCount"].empty()) {
      audioCount = make_shared<long>(boost::any_cast<long>(m["audioCount"]));
    }
    if (m.find("authorAvatarUrl") != m.end() && !m["authorAvatarUrl"].empty()) {
      authorAvatarUrl = make_shared<string>(boost::any_cast<string>(m["authorAvatarUrl"]));
    }
    if (m.find("authorFollowersCount") != m.end() && !m["authorFollowersCount"].empty()) {
      authorFollowersCount = make_shared<long>(boost::any_cast<long>(m["authorFollowersCount"]));
    }
    if (m.find("authorFriendsCount") != m.end() && !m["authorFriendsCount"].empty()) {
      authorFriendsCount = make_shared<long>(boost::any_cast<long>(m["authorFriendsCount"]));
    }
    if (m.find("authorGender") != m.end() && !m["authorGender"].empty()) {
      authorGender = make_shared<string>(boost::any_cast<string>(m["authorGender"]));
    }
    if (m.find("authorId") != m.end() && !m["authorId"].empty()) {
      authorId = make_shared<string>(boost::any_cast<string>(m["authorId"]));
    }
    if (m.find("authorLikesCount") != m.end() && !m["authorLikesCount"].empty()) {
      authorLikesCount = make_shared<long>(boost::any_cast<long>(m["authorLikesCount"]));
    }
    if (m.find("authorName") != m.end() && !m["authorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["authorName"]));
    }
    if (m.find("authorProfileUrl") != m.end() && !m["authorProfileUrl"].empty()) {
      authorProfileUrl = make_shared<string>(boost::any_cast<string>(m["authorProfileUrl"]));
    }
    if (m.find("authorStatusesCount") != m.end() && !m["authorStatusesCount"].empty()) {
      authorStatusesCount = make_shared<long>(boost::any_cast<long>(m["authorStatusesCount"]));
    }
    if (m.find("authorVerified") != m.end() && !m["authorVerified"].empty()) {
      authorVerified = make_shared<bool>(boost::any_cast<bool>(m["authorVerified"]));
    }
    if (m.find("authorVerifyType") != m.end() && !m["authorVerifyType"].empty()) {
      authorVerifyType = make_shared<long>(boost::any_cast<long>(m["authorVerifyType"]));
    }
    if (m.find("contentAudioText") != m.end() && !m["contentAudioText"].empty()) {
      contentAudioText = make_shared<string>(boost::any_cast<string>(m["contentAudioText"]));
    }
    if (m.find("contentAudioUrls") != m.end() && !m["contentAudioUrls"].empty()) {
      contentAudioUrls = make_shared<string>(boost::any_cast<string>(m["contentAudioUrls"]));
    }
    if (m.find("contentImageText") != m.end() && !m["contentImageText"].empty()) {
      contentImageText = make_shared<string>(boost::any_cast<string>(m["contentImageText"]));
    }
    if (m.find("contentImageUrls") != m.end() && !m["contentImageUrls"].empty()) {
      contentImageUrls = make_shared<string>(boost::any_cast<string>(m["contentImageUrls"]));
    }
    if (m.find("contentLang") != m.end() && !m["contentLang"].empty()) {
      contentLang = make_shared<string>(boost::any_cast<string>(m["contentLang"]));
    }
    if (m.find("contentLen") != m.end() && !m["contentLen"].empty()) {
      contentLen = make_shared<long>(boost::any_cast<long>(m["contentLen"]));
    }
    if (m.find("contentVideoText") != m.end() && !m["contentVideoText"].empty()) {
      contentVideoText = make_shared<string>(boost::any_cast<string>(m["contentVideoText"]));
    }
    if (m.find("contentVideoUrls") != m.end() && !m["contentVideoUrls"].empty()) {
      contentVideoUrls = make_shared<string>(boost::any_cast<string>(m["contentVideoUrls"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("docAnswersCount") != m.end() && !m["docAnswersCount"].empty()) {
      docAnswersCount = make_shared<long>(boost::any_cast<long>(m["docAnswersCount"]));
    }
    if (m.find("docAreas") != m.end() && !m["docAreas"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["docAreas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["docAreas"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docAreas = make_shared<vector<string>>(toVec1);
    }
    if (m.find("docCoinCount") != m.end() && !m["docCoinCount"].empty()) {
      docCoinCount = make_shared<long>(boost::any_cast<long>(m["docCoinCount"]));
    }
    if (m.find("docCommentsCount") != m.end() && !m["docCommentsCount"].empty()) {
      docCommentsCount = make_shared<long>(boost::any_cast<long>(m["docCommentsCount"]));
    }
    if (m.find("docContent") != m.end() && !m["docContent"].empty()) {
      docContent = make_shared<string>(boost::any_cast<string>(m["docContent"]));
    }
    if (m.find("docContentBrief") != m.end() && !m["docContentBrief"].empty()) {
      docContentBrief = make_shared<string>(boost::any_cast<string>(m["docContentBrief"]));
    }
    if (m.find("docContentSign") != m.end() && !m["docContentSign"].empty()) {
      docContentSign = make_shared<string>(boost::any_cast<string>(m["docContentSign"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("docLikesCount") != m.end() && !m["docLikesCount"].empty()) {
      docLikesCount = make_shared<long>(boost::any_cast<long>(m["docLikesCount"]));
    }
    if (m.find("docPlayCount") != m.end() && !m["docPlayCount"].empty()) {
      docPlayCount = make_shared<long>(boost::any_cast<long>(m["docPlayCount"]));
    }
    if (m.find("docReadingCount") != m.end() && !m["docReadingCount"].empty()) {
      docReadingCount = make_shared<long>(boost::any_cast<long>(m["docReadingCount"]));
    }
    if (m.find("docReadsCount") != m.end() && !m["docReadsCount"].empty()) {
      docReadsCount = make_shared<long>(boost::any_cast<long>(m["docReadsCount"]));
    }
    if (m.find("docRepostsCount") != m.end() && !m["docRepostsCount"].empty()) {
      docRepostsCount = make_shared<long>(boost::any_cast<long>(m["docRepostsCount"]));
    }
    if (m.find("docReprintName") != m.end() && !m["docReprintName"].empty()) {
      docReprintName = make_shared<string>(boost::any_cast<string>(m["docReprintName"]));
    }
    if (m.find("docSelfContentSign") != m.end() && !m["docSelfContentSign"].empty()) {
      docSelfContentSign = make_shared<string>(boost::any_cast<string>(m["docSelfContentSign"]));
    }
    if (m.find("docTitle") != m.end() && !m["docTitle"].empty()) {
      docTitle = make_shared<string>(boost::any_cast<string>(m["docTitle"]));
    }
    if (m.find("docUrl") != m.end() && !m["docUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["docUrl"]));
    }
    if (m.find("emotionScore") != m.end() && !m["emotionScore"].empty()) {
      emotionScore = make_shared<double>(boost::any_cast<double>(m["emotionScore"]));
    }
    if (m.find("emotionType") != m.end() && !m["emotionType"].empty()) {
      emotionType = make_shared<long>(boost::any_cast<long>(m["emotionType"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["extInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("finEventCount") != m.end() && !m["finEventCount"].empty()) {
      finEventCount = make_shared<long>(boost::any_cast<long>(m["finEventCount"]));
    }
    if (m.find("financeEventList") != m.end() && !m["financeEventList"].empty()) {
      if (typeid(vector<boost::any>) == m["financeEventList"].type()) {
        vector<YuqingFinanceEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["financeEventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            YuqingFinanceEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        financeEventList = make_shared<vector<YuqingFinanceEvent>>(expect1);
      }
    }
    if (m.find("highlightKeywords") != m.end() && !m["highlightKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["highlightKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["highlightKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      highlightKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("influenceScore") != m.end() && !m["influenceScore"].empty()) {
      influenceScore = make_shared<double>(boost::any_cast<double>(m["influenceScore"]));
    }
    if (m.find("mediaHosts") != m.end() && !m["mediaHosts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mediaHosts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mediaHosts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediaHosts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("mediaInfluenceLevel") != m.end() && !m["mediaInfluenceLevel"].empty()) {
      mediaInfluenceLevel = make_shared<long>(boost::any_cast<long>(m["mediaInfluenceLevel"]));
    }
    if (m.find("mediaName") != m.end() && !m["mediaName"].empty()) {
      mediaName = make_shared<string>(boost::any_cast<string>(m["mediaName"]));
    }
    if (m.find("mediaPropagationLevel") != m.end() && !m["mediaPropagationLevel"].empty()) {
      mediaPropagationLevel = make_shared<long>(boost::any_cast<long>(m["mediaPropagationLevel"]));
    }
    if (m.find("mediaType") != m.end() && !m["mediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["mediaType"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("parentDocId") != m.end() && !m["parentDocId"].empty()) {
      parentDocId = make_shared<string>(boost::any_cast<string>(m["parentDocId"]));
    }
    if (m.find("propagationScore") != m.end() && !m["propagationScore"].empty()) {
      propagationScore = make_shared<double>(boost::any_cast<double>(m["propagationScore"]));
    }
    if (m.find("publishTime") != m.end() && !m["publishTime"].empty()) {
      publishTime = make_shared<long>(boost::any_cast<long>(m["publishTime"]));
    }
    if (m.find("relevanceScore") != m.end() && !m["relevanceScore"].empty()) {
      relevanceScore = make_shared<double>(boost::any_cast<double>(m["relevanceScore"]));
    }
    if (m.find("reportMaterialTags") != m.end() && !m["reportMaterialTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["reportMaterialTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["reportMaterialTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportMaterialTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("repostList") != m.end() && !m["repostList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["repostList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["repostList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repostList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("similarNumber") != m.end() && !m["similarNumber"].empty()) {
      similarNumber = make_shared<long>(boost::any_cast<long>(m["similarNumber"]));
    }
    if (m.find("topics") != m.end() && !m["topics"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["topics"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["topics"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topics = make_shared<vector<string>>(toVec1);
    }
    if (m.find("videoCount") != m.end() && !m["videoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["videoCount"]));
    }
    if (m.find("weiboCommentId") != m.end() && !m["weiboCommentId"].empty()) {
      weiboCommentId = make_shared<string>(boost::any_cast<string>(m["weiboCommentId"]));
    }
    if (m.find("weiboMid") != m.end() && !m["weiboMid"].empty()) {
      weiboMid = make_shared<string>(boost::any_cast<string>(m["weiboMid"]));
    }
  }


  virtual ~YuqingMessage() = default;
};
class CloseProductRequest : public Darabonba::Model {
public:
  shared_ptr<ProductInstance> productInstance{};
  shared_ptr<string> requestId{};

  CloseProductRequest() {}

  explicit CloseProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productInstance) {
      res["productInstance"] = productInstance ? boost::any(productInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productInstance") != m.end() && !m["productInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInstance"].type()) {
        ProductInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInstance"]));
        productInstance = make_shared<ProductInstance>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CloseProductRequest() = default;
};
class CloseProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  CloseProductResponseBody() {}

  explicit CloseProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CloseProductResponseBody() = default;
};
class CloseProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseProductResponseBody> body{};

  CloseProductResponse() {}

  explicit CloseProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseProductResponseBody>(model1);
      }
    }
  }


  virtual ~CloseProductResponse() = default;
};
class ConsoleApiProxyRequest : public Darabonba::Model {
public:
  shared_ptr<ConsoleBody> body{};

  ConsoleApiProxyRequest() {}

  explicit ConsoleApiProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConsoleBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConsoleBody>(model1);
      }
    }
  }


  virtual ~ConsoleApiProxyRequest() = default;
};
class ConsoleApiProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultJson{};

  ConsoleApiProxyResponseBody() {}

  explicit ConsoleApiProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultJson) {
      res["resultJson"] = boost::any(*resultJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultJson") != m.end() && !m["resultJson"].empty()) {
      resultJson = make_shared<string>(boost::any_cast<string>(m["resultJson"]));
    }
  }


  virtual ~ConsoleApiProxyResponseBody() = default;
};
class ConsoleApiProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConsoleApiProxyResponseBody> body{};

  ConsoleApiProxyResponse() {}

  explicit ConsoleApiProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConsoleApiProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConsoleApiProxyResponseBody>(model1);
      }
    }
  }


  virtual ~ConsoleApiProxyResponse() = default;
};
class ConsoleProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> interfaceName{};
  shared_ptr<string> paramJson{};
  shared_ptr<string> requestId{};
  shared_ptr<string> teamHashId{};

  ConsoleProxyRequest() {}

  explicit ConsoleProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["appCode"] = boost::any(*appCode);
    }
    if (interfaceName) {
      res["interfaceName"] = boost::any(*interfaceName);
    }
    if (paramJson) {
      res["paramJson"] = boost::any(*paramJson);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (teamHashId) {
      res["teamHashId"] = boost::any(*teamHashId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appCode") != m.end() && !m["appCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["appCode"]));
    }
    if (m.find("interfaceName") != m.end() && !m["interfaceName"].empty()) {
      interfaceName = make_shared<string>(boost::any_cast<string>(m["interfaceName"]));
    }
    if (m.find("paramJson") != m.end() && !m["paramJson"].empty()) {
      paramJson = make_shared<string>(boost::any_cast<string>(m["paramJson"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("teamHashId") != m.end() && !m["teamHashId"].empty()) {
      teamHashId = make_shared<string>(boost::any_cast<string>(m["teamHashId"]));
    }
  }


  virtual ~ConsoleProxyRequest() = default;
};
class ConsoleProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultJson{};

  ConsoleProxyResponseBody() {}

  explicit ConsoleProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultJson) {
      res["resultJson"] = boost::any(*resultJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultJson") != m.end() && !m["resultJson"].empty()) {
      resultJson = make_shared<string>(boost::any_cast<string>(m["resultJson"]));
    }
  }


  virtual ~ConsoleProxyResponseBody() = default;
};
class ConsoleProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConsoleProxyResponseBody> body{};

  ConsoleProxyResponse() {}

  explicit ConsoleProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConsoleProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConsoleProxyResponseBody>(model1);
      }
    }
  }


  virtual ~ConsoleProxyResponse() = default;
};
class GetAnalysisTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> analysisId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> teamHashId{};

  GetAnalysisTaskResultRequest() {}

  explicit GetAnalysisTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysisId"] = boost::any(*analysisId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (teamHashId) {
      res["teamHashId"] = boost::any(*teamHashId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisId") != m.end() && !m["analysisId"].empty()) {
      analysisId = make_shared<long>(boost::any_cast<long>(m["analysisId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("teamHashId") != m.end() && !m["teamHashId"].empty()) {
      teamHashId = make_shared<string>(boost::any_cast<string>(m["teamHashId"]));
    }
  }


  virtual ~GetAnalysisTaskResultRequest() = default;
};
class GetAnalysisTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> analysisId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultJson{};

  GetAnalysisTaskResultResponseBody() {}

  explicit GetAnalysisTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysisId"] = boost::any(*analysisId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultJson) {
      res["resultJson"] = boost::any(*resultJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisId") != m.end() && !m["analysisId"].empty()) {
      analysisId = make_shared<long>(boost::any_cast<long>(m["analysisId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultJson") != m.end() && !m["resultJson"].empty()) {
      resultJson = make_shared<string>(boost::any_cast<string>(m["resultJson"]));
    }
  }


  virtual ~GetAnalysisTaskResultResponseBody() = default;
};
class GetAnalysisTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAnalysisTaskResultResponseBody> body{};

  GetAnalysisTaskResultResponse() {}

  explicit GetAnalysisTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAnalysisTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAnalysisTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAnalysisTaskResultResponse() = default;
};
class OpenProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<ProductInstance> productInstance{};
  shared_ptr<string> requestId{};

  OpenProductRequest() {}

  explicit OpenProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (productInstance) {
      res["productInstance"] = productInstance ? boost::any(productInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("productInstance") != m.end() && !m["productInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInstance"].type()) {
        ProductInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInstance"]));
        productInstance = make_shared<ProductInstance>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OpenProductRequest() = default;
};
class OpenProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  OpenProductResponseBody() {}

  explicit OpenProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OpenProductResponseBody() = default;
};
class OpenProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenProductResponseBody> body{};

  OpenProductResponse() {}

  explicit OpenProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenProductResponseBody>(model1);
      }
    }
  }


  virtual ~OpenProductResponse() = default;
};
class QueryProductInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<long> fromTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantUid{};
  shared_ptr<long> toTime{};

  QueryProductInstanceListRequest() {}

  explicit QueryProductInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["appCode"] = boost::any(*appCode);
    }
    if (fromTime) {
      res["fromTime"] = boost::any(*fromTime);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (tenantUid) {
      res["tenantUid"] = boost::any(*tenantUid);
    }
    if (toTime) {
      res["toTime"] = boost::any(*toTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appCode") != m.end() && !m["appCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["appCode"]));
    }
    if (m.find("fromTime") != m.end() && !m["fromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["fromTime"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("tenantUid") != m.end() && !m["tenantUid"].empty()) {
      tenantUid = make_shared<string>(boost::any_cast<string>(m["tenantUid"]));
    }
    if (m.find("toTime") != m.end() && !m["toTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["toTime"]));
    }
  }


  virtual ~QueryProductInstanceListRequest() = default;
};
class QueryProductInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ProductInstance>> instanceList{};
  shared_ptr<string> requestId{};

  QueryProductInstanceListResponseBody() {}

  explicit QueryProductInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instanceList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceList") != m.end() && !m["instanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["instanceList"].type()) {
        vector<ProductInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<ProductInstance>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryProductInstanceListResponseBody() = default;
};
class QueryProductInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProductInstanceListResponseBody> body{};

  QueryProductInstanceListResponse() {}

  explicit QueryProductInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProductInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProductInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProductInstanceListResponse() = default;
};
class QueryYuqingMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SearchCondition> searchCondition{};
  shared_ptr<string> teamHashId{};

  QueryYuqingMessageRequest() {}

  explicit QueryYuqingMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (searchCondition) {
      res["searchCondition"] = searchCondition ? boost::any(searchCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teamHashId) {
      res["teamHashId"] = boost::any(*teamHashId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("searchCondition") != m.end() && !m["searchCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["searchCondition"].type()) {
        SearchCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["searchCondition"]));
        searchCondition = make_shared<SearchCondition>(model1);
      }
    }
    if (m.find("teamHashId") != m.end() && !m["teamHashId"].empty()) {
      teamHashId = make_shared<string>(boost::any_cast<string>(m["teamHashId"]));
    }
  }


  virtual ~QueryYuqingMessageRequest() = default;
};
class QueryYuqingMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<YuqingMessage>> yuqingMessages{};

  QueryYuqingMessageResponseBody() {}

  explicit QueryYuqingMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (yuqingMessages) {
      vector<boost::any> temp1;
      for(auto item1:*yuqingMessages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["yuqingMessages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("yuqingMessages") != m.end() && !m["yuqingMessages"].empty()) {
      if (typeid(vector<boost::any>) == m["yuqingMessages"].type()) {
        vector<YuqingMessage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["yuqingMessages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            YuqingMessage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        yuqingMessages = make_shared<vector<YuqingMessage>>(expect1);
      }
    }
  }


  virtual ~QueryYuqingMessageResponseBody() = default;
};
class QueryYuqingMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryYuqingMessageResponseBody> body{};

  QueryYuqingMessageResponse() {}

  explicit QueryYuqingMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryYuqingMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryYuqingMessageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryYuqingMessageResponse() = default;
};
class SubmitAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> analyseType{};
  shared_ptr<string> requestId{};
  shared_ptr<SearchCondition> searchCondition{};
  shared_ptr<string> teamHashId{};

  SubmitAnalysisTaskRequest() {}

  explicit SubmitAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyseType) {
      res["analyseType"] = boost::any(*analyseType);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (searchCondition) {
      res["searchCondition"] = searchCondition ? boost::any(searchCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teamHashId) {
      res["teamHashId"] = boost::any(*teamHashId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyseType") != m.end() && !m["analyseType"].empty()) {
      analyseType = make_shared<string>(boost::any_cast<string>(m["analyseType"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("searchCondition") != m.end() && !m["searchCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["searchCondition"].type()) {
        SearchCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["searchCondition"]));
        searchCondition = make_shared<SearchCondition>(model1);
      }
    }
    if (m.find("teamHashId") != m.end() && !m["teamHashId"].empty()) {
      teamHashId = make_shared<string>(boost::any_cast<string>(m["teamHashId"]));
    }
  }


  virtual ~SubmitAnalysisTaskRequest() = default;
};
class SubmitAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> analysisId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultJson{};

  SubmitAnalysisTaskResponseBody() {}

  explicit SubmitAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysisId"] = boost::any(*analysisId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultJson) {
      res["resultJson"] = boost::any(*resultJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisId") != m.end() && !m["analysisId"].empty()) {
      analysisId = make_shared<long>(boost::any_cast<long>(m["analysisId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultJson") != m.end() && !m["resultJson"].empty()) {
      resultJson = make_shared<string>(boost::any_cast<string>(m["resultJson"]));
    }
  }


  virtual ~SubmitAnalysisTaskResponseBody() = default;
};
class SubmitAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitAnalysisTaskResponseBody> body{};

  SubmitAnalysisTaskResponse() {}

  explicit SubmitAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAnalysisTaskResponse() = default;
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
  CloseProductResponse closeProductWithOptions(shared_ptr<CloseProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseProductResponse closeProduct(shared_ptr<CloseProductRequest> request);
  ConsoleApiProxyResponse consoleApiProxyWithOptions(shared_ptr<ConsoleApiProxyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConsoleApiProxyResponse consoleApiProxy(shared_ptr<ConsoleApiProxyRequest> request);
  ConsoleProxyResponse consoleProxyWithOptions(shared_ptr<ConsoleProxyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConsoleProxyResponse consoleProxy(shared_ptr<ConsoleProxyRequest> request);
  GetAnalysisTaskResultResponse getAnalysisTaskResultWithOptions(shared_ptr<GetAnalysisTaskResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAnalysisTaskResultResponse getAnalysisTaskResult(shared_ptr<GetAnalysisTaskResultRequest> request);
  OpenProductResponse openProductWithOptions(shared_ptr<OpenProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenProductResponse openProduct(shared_ptr<OpenProductRequest> request);
  QueryProductInstanceListResponse queryProductInstanceListWithOptions(shared_ptr<QueryProductInstanceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProductInstanceListResponse queryProductInstanceList(shared_ptr<QueryProductInstanceListRequest> request);
  QueryYuqingMessageResponse queryYuqingMessageWithOptions(shared_ptr<QueryYuqingMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryYuqingMessageResponse queryYuqingMessage(shared_ptr<QueryYuqingMessageRequest> request);
  SubmitAnalysisTaskResponse submitAnalysisTaskWithOptions(shared_ptr<SubmitAnalysisTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAnalysisTaskResponse submitAnalysisTask(shared_ptr<SubmitAnalysisTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Yuqing20220301

#endif
