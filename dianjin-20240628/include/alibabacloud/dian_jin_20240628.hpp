// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DIANJIN20240628_H_
#define ALIBABACLOUD_DIANJIN20240628_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DianJin20240628 {
class CreateAnnualDocSummaryTaskRequestDocInfos : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<long> docYear{};
  shared_ptr<long> endPage{};
  shared_ptr<string> libraryId{};
  shared_ptr<long> startPage{};

  CreateAnnualDocSummaryTaskRequestDocInfos() {}

  explicit CreateAnnualDocSummaryTaskRequestDocInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (docYear) {
      res["docYear"] = boost::any(*docYear);
    }
    if (endPage) {
      res["endPage"] = boost::any(*endPage);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (startPage) {
      res["startPage"] = boost::any(*startPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("docYear") != m.end() && !m["docYear"].empty()) {
      docYear = make_shared<long>(boost::any_cast<long>(m["docYear"]));
    }
    if (m.find("endPage") != m.end() && !m["endPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["endPage"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("startPage") != m.end() && !m["startPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["startPage"]));
    }
  }


  virtual ~CreateAnnualDocSummaryTaskRequestDocInfos() = default;
};
class CreateAnnualDocSummaryTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> anaYears{};
  shared_ptr<vector<CreateAnnualDocSummaryTaskRequestDocInfos>> docInfos{};
  shared_ptr<bool> enableTable{};
  shared_ptr<string> instruction{};
  shared_ptr<string> modelId{};

  CreateAnnualDocSummaryTaskRequest() {}

  explicit CreateAnnualDocSummaryTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anaYears) {
      res["anaYears"] = boost::any(*anaYears);
    }
    if (docInfos) {
      vector<boost::any> temp1;
      for(auto item1:*docInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["docInfos"] = boost::any(temp1);
    }
    if (enableTable) {
      res["enableTable"] = boost::any(*enableTable);
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("anaYears") != m.end() && !m["anaYears"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["anaYears"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["anaYears"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      anaYears = make_shared<vector<long>>(toVec1);
    }
    if (m.find("docInfos") != m.end() && !m["docInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["docInfos"].type()) {
        vector<CreateAnnualDocSummaryTaskRequestDocInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["docInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAnnualDocSummaryTaskRequestDocInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docInfos = make_shared<vector<CreateAnnualDocSummaryTaskRequestDocInfos>>(expect1);
      }
    }
    if (m.find("enableTable") != m.end() && !m["enableTable"].empty()) {
      enableTable = make_shared<bool>(boost::any_cast<bool>(m["enableTable"]));
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
  }


  virtual ~CreateAnnualDocSummaryTaskRequest() = default;
};
class CreateAnnualDocSummaryTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateAnnualDocSummaryTaskResponseBody() {}

  explicit CreateAnnualDocSummaryTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateAnnualDocSummaryTaskResponseBody() = default;
};
class CreateAnnualDocSummaryTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAnnualDocSummaryTaskResponseBody> body{};

  CreateAnnualDocSummaryTaskResponse() {}

  explicit CreateAnnualDocSummaryTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAnnualDocSummaryTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAnnualDocSummaryTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAnnualDocSummaryTaskResponse() = default;
};
class CreateDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<bool> enableLibrary{};
  shared_ptr<map<string, boost::any>> metaData{};
  shared_ptr<string> playCode{};
  shared_ptr<vector<string>> qaLibraryList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> selfDirected{};

  CreateDialogRequest() {}

  explicit CreateDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (enableLibrary) {
      res["enableLibrary"] = boost::any(*enableLibrary);
    }
    if (metaData) {
      res["metaData"] = boost::any(*metaData);
    }
    if (playCode) {
      res["playCode"] = boost::any(*playCode);
    }
    if (qaLibraryList) {
      res["qaLibraryList"] = boost::any(*qaLibraryList);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (selfDirected) {
      res["selfDirected"] = boost::any(*selfDirected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("enableLibrary") != m.end() && !m["enableLibrary"].empty()) {
      enableLibrary = make_shared<bool>(boost::any_cast<bool>(m["enableLibrary"]));
    }
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metaData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("playCode") != m.end() && !m["playCode"].empty()) {
      playCode = make_shared<string>(boost::any_cast<string>(m["playCode"]));
    }
    if (m.find("qaLibraryList") != m.end() && !m["qaLibraryList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["qaLibraryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["qaLibraryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qaLibraryList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("selfDirected") != m.end() && !m["selfDirected"].empty()) {
      selfDirected = make_shared<bool>(boost::any_cast<bool>(m["selfDirected"]));
    }
  }


  virtual ~CreateDialogRequest() = default;
};
class CreateDialogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> openingRemarks{};
  shared_ptr<string> sessionId{};

  CreateDialogResponseBodyData() {}

  explicit CreateDialogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openingRemarks) {
      res["openingRemarks"] = boost::any(*openingRemarks);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("openingRemarks") != m.end() && !m["openingRemarks"].empty()) {
      openingRemarks = make_shared<string>(boost::any_cast<string>(m["openingRemarks"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~CreateDialogResponseBodyData() = default;
};
class CreateDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<CreateDialogResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateDialogResponseBody() {}

  explicit CreateDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDialogResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDialogResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateDialogResponseBody() = default;
};
class CreateDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDialogResponseBody> body{};

  CreateDialogResponse() {}

  explicit CreateDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDialogResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDialogResponse() = default;
};
class CreateDialogAnalysisTaskRequestConversationListDialogueList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  CreateDialogAnalysisTaskRequestConversationListDialogueList() {}

  explicit CreateDialogAnalysisTaskRequestConversationListDialogueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~CreateDialogAnalysisTaskRequestConversationListDialogueList() = default;
};
class CreateDialogAnalysisTaskRequestConversationList : public Darabonba::Model {
public:
  shared_ptr<vector<CreateDialogAnalysisTaskRequestConversationListDialogueList>> dialogueList{};

  CreateDialogAnalysisTaskRequestConversationList() {}

  explicit CreateDialogAnalysisTaskRequestConversationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogueList) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogueList") != m.end() && !m["dialogueList"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueList"].type()) {
        vector<CreateDialogAnalysisTaskRequestConversationListDialogueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDialogAnalysisTaskRequestConversationListDialogueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueList = make_shared<vector<CreateDialogAnalysisTaskRequestConversationListDialogueList>>(expect1);
      }
    }
  }


  virtual ~CreateDialogAnalysisTaskRequestConversationList() = default;
};
class CreateDialogAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> analysisNodes{};
  shared_ptr<vector<CreateDialogAnalysisTaskRequestConversationList>> conversationList{};
  shared_ptr<map<string, boost::any>> metaData{};
  shared_ptr<string> playCode{};
  shared_ptr<string> requestId{};

  CreateDialogAnalysisTaskRequest() {}

  explicit CreateDialogAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisNodes) {
      res["analysisNodes"] = boost::any(*analysisNodes);
    }
    if (conversationList) {
      vector<boost::any> temp1;
      for(auto item1:*conversationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conversationList"] = boost::any(temp1);
    }
    if (metaData) {
      res["metaData"] = boost::any(*metaData);
    }
    if (playCode) {
      res["playCode"] = boost::any(*playCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisNodes") != m.end() && !m["analysisNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["analysisNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["analysisNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      analysisNodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("conversationList") != m.end() && !m["conversationList"].empty()) {
      if (typeid(vector<boost::any>) == m["conversationList"].type()) {
        vector<CreateDialogAnalysisTaskRequestConversationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conversationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDialogAnalysisTaskRequestConversationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversationList = make_shared<vector<CreateDialogAnalysisTaskRequestConversationList>>(expect1);
      }
    }
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metaData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("playCode") != m.end() && !m["playCode"].empty()) {
      playCode = make_shared<string>(boost::any_cast<string>(m["playCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateDialogAnalysisTaskRequest() = default;
};
class CreateDialogAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateDialogAnalysisTaskResponseBody() {}

  explicit CreateDialogAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateDialogAnalysisTaskResponseBody() = default;
};
class CreateDialogAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDialogAnalysisTaskResponseBody> body{};

  CreateDialogAnalysisTaskResponse() {}

  explicit CreateDialogAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDialogAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDialogAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDialogAnalysisTaskResponse() = default;
};
class CreateDocsSummaryTaskRequestDocInfos : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<long> endPage{};
  shared_ptr<string> libraryId{};
  shared_ptr<long> startPage{};

  CreateDocsSummaryTaskRequestDocInfos() {}

  explicit CreateDocsSummaryTaskRequestDocInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (endPage) {
      res["endPage"] = boost::any(*endPage);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (startPage) {
      res["startPage"] = boost::any(*startPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("endPage") != m.end() && !m["endPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["endPage"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("startPage") != m.end() && !m["startPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["startPage"]));
    }
  }


  virtual ~CreateDocsSummaryTaskRequestDocInfos() = default;
};
class CreateDocsSummaryTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateDocsSummaryTaskRequestDocInfos>> docInfos{};
  shared_ptr<bool> enableTable{};
  shared_ptr<string> instruction{};
  shared_ptr<string> modelId{};

  CreateDocsSummaryTaskRequest() {}

  explicit CreateDocsSummaryTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docInfos) {
      vector<boost::any> temp1;
      for(auto item1:*docInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["docInfos"] = boost::any(temp1);
    }
    if (enableTable) {
      res["enableTable"] = boost::any(*enableTable);
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docInfos") != m.end() && !m["docInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["docInfos"].type()) {
        vector<CreateDocsSummaryTaskRequestDocInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["docInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDocsSummaryTaskRequestDocInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docInfos = make_shared<vector<CreateDocsSummaryTaskRequestDocInfos>>(expect1);
      }
    }
    if (m.find("enableTable") != m.end() && !m["enableTable"].empty()) {
      enableTable = make_shared<bool>(boost::any_cast<bool>(m["enableTable"]));
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
  }


  virtual ~CreateDocsSummaryTaskRequest() = default;
};
class CreateDocsSummaryTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateDocsSummaryTaskResponseBody() {}

  explicit CreateDocsSummaryTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateDocsSummaryTaskResponseBody() = default;
};
class CreateDocsSummaryTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDocsSummaryTaskResponseBody> body{};

  CreateDocsSummaryTaskResponse() {}

  explicit CreateDocsSummaryTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDocsSummaryTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDocsSummaryTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDocsSummaryTaskResponse() = default;
};
class CreateFinReportSummaryTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<bool> enableTable{};
  shared_ptr<long> endPage{};
  shared_ptr<string> instruction{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> modelId{};
  shared_ptr<long> startPage{};
  shared_ptr<string> taskType{};

  CreateFinReportSummaryTaskRequest() {}

  explicit CreateFinReportSummaryTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (enableTable) {
      res["enableTable"] = boost::any(*enableTable);
    }
    if (endPage) {
      res["endPage"] = boost::any(*endPage);
    }
    if (instruction) {
      res["instruction"] = boost::any(*instruction);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (startPage) {
      res["startPage"] = boost::any(*startPage);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("enableTable") != m.end() && !m["enableTable"].empty()) {
      enableTable = make_shared<bool>(boost::any_cast<bool>(m["enableTable"]));
    }
    if (m.find("endPage") != m.end() && !m["endPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["endPage"]));
    }
    if (m.find("instruction") != m.end() && !m["instruction"].empty()) {
      instruction = make_shared<string>(boost::any_cast<string>(m["instruction"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("startPage") != m.end() && !m["startPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["startPage"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~CreateFinReportSummaryTaskRequest() = default;
};
class CreateFinReportSummaryTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateFinReportSummaryTaskResponseBody() {}

  explicit CreateFinReportSummaryTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateFinReportSummaryTaskResponseBody() = default;
};
class CreateFinReportSummaryTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFinReportSummaryTaskResponseBody> body{};

  CreateFinReportSummaryTaskResponse() {}

  explicit CreateFinReportSummaryTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFinReportSummaryTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFinReportSummaryTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFinReportSummaryTaskResponse() = default;
};
class CreateLibraryRequestIndexSettingChunkStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> docTreeSplit{};
  shared_ptr<long> docTreeSplitSize{};
  shared_ptr<bool> enhanceGraph{};
  shared_ptr<bool> enhanceTable{};
  shared_ptr<long> overlap{};
  shared_ptr<bool> sentenceSplit{};
  shared_ptr<long> sentenceSplitSize{};
  shared_ptr<long> size{};
  shared_ptr<bool> split{};

  CreateLibraryRequestIndexSettingChunkStrategy() {}

  explicit CreateLibraryRequestIndexSettingChunkStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docTreeSplit) {
      res["docTreeSplit"] = boost::any(*docTreeSplit);
    }
    if (docTreeSplitSize) {
      res["docTreeSplitSize"] = boost::any(*docTreeSplitSize);
    }
    if (enhanceGraph) {
      res["enhanceGraph"] = boost::any(*enhanceGraph);
    }
    if (enhanceTable) {
      res["enhanceTable"] = boost::any(*enhanceTable);
    }
    if (overlap) {
      res["overlap"] = boost::any(*overlap);
    }
    if (sentenceSplit) {
      res["sentenceSplit"] = boost::any(*sentenceSplit);
    }
    if (sentenceSplitSize) {
      res["sentenceSplitSize"] = boost::any(*sentenceSplitSize);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (split) {
      res["split"] = boost::any(*split);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docTreeSplit") != m.end() && !m["docTreeSplit"].empty()) {
      docTreeSplit = make_shared<bool>(boost::any_cast<bool>(m["docTreeSplit"]));
    }
    if (m.find("docTreeSplitSize") != m.end() && !m["docTreeSplitSize"].empty()) {
      docTreeSplitSize = make_shared<long>(boost::any_cast<long>(m["docTreeSplitSize"]));
    }
    if (m.find("enhanceGraph") != m.end() && !m["enhanceGraph"].empty()) {
      enhanceGraph = make_shared<bool>(boost::any_cast<bool>(m["enhanceGraph"]));
    }
    if (m.find("enhanceTable") != m.end() && !m["enhanceTable"].empty()) {
      enhanceTable = make_shared<bool>(boost::any_cast<bool>(m["enhanceTable"]));
    }
    if (m.find("overlap") != m.end() && !m["overlap"].empty()) {
      overlap = make_shared<long>(boost::any_cast<long>(m["overlap"]));
    }
    if (m.find("sentenceSplit") != m.end() && !m["sentenceSplit"].empty()) {
      sentenceSplit = make_shared<bool>(boost::any_cast<bool>(m["sentenceSplit"]));
    }
    if (m.find("sentenceSplitSize") != m.end() && !m["sentenceSplitSize"].empty()) {
      sentenceSplitSize = make_shared<long>(boost::any_cast<long>(m["sentenceSplitSize"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("split") != m.end() && !m["split"].empty()) {
      split = make_shared<bool>(boost::any_cast<bool>(m["split"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingChunkStrategy() = default;
};
class CreateLibraryRequestIndexSettingModelConfig : public Darabonba::Model {
public:
  shared_ptr<double> temperature{};
  shared_ptr<double> topP{};

  CreateLibraryRequestIndexSettingModelConfig() {}

  explicit CreateLibraryRequestIndexSettingModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    if (topP) {
      res["topP"] = boost::any(*topP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
    if (m.find("topP") != m.end() && !m["topP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["topP"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingModelConfig() = default;
};
class CreateLibraryRequestIndexSettingQueryEnhancer : public Darabonba::Model {
public:
  shared_ptr<bool> enableFollowUp{};
  shared_ptr<bool> enableMultiQuery{};
  shared_ptr<bool> enableOpenQa{};
  shared_ptr<bool> enableQueryRewrite{};
  shared_ptr<bool> enableSession{};
  shared_ptr<string> localKnowledgeId{};
  shared_ptr<bool> withDocumentReference{};

  CreateLibraryRequestIndexSettingQueryEnhancer() {}

  explicit CreateLibraryRequestIndexSettingQueryEnhancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableFollowUp) {
      res["enableFollowUp"] = boost::any(*enableFollowUp);
    }
    if (enableMultiQuery) {
      res["enableMultiQuery"] = boost::any(*enableMultiQuery);
    }
    if (enableOpenQa) {
      res["enableOpenQa"] = boost::any(*enableOpenQa);
    }
    if (enableQueryRewrite) {
      res["enableQueryRewrite"] = boost::any(*enableQueryRewrite);
    }
    if (enableSession) {
      res["enableSession"] = boost::any(*enableSession);
    }
    if (localKnowledgeId) {
      res["localKnowledgeId"] = boost::any(*localKnowledgeId);
    }
    if (withDocumentReference) {
      res["withDocumentReference"] = boost::any(*withDocumentReference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableFollowUp") != m.end() && !m["enableFollowUp"].empty()) {
      enableFollowUp = make_shared<bool>(boost::any_cast<bool>(m["enableFollowUp"]));
    }
    if (m.find("enableMultiQuery") != m.end() && !m["enableMultiQuery"].empty()) {
      enableMultiQuery = make_shared<bool>(boost::any_cast<bool>(m["enableMultiQuery"]));
    }
    if (m.find("enableOpenQa") != m.end() && !m["enableOpenQa"].empty()) {
      enableOpenQa = make_shared<bool>(boost::any_cast<bool>(m["enableOpenQa"]));
    }
    if (m.find("enableQueryRewrite") != m.end() && !m["enableQueryRewrite"].empty()) {
      enableQueryRewrite = make_shared<bool>(boost::any_cast<bool>(m["enableQueryRewrite"]));
    }
    if (m.find("enableSession") != m.end() && !m["enableSession"].empty()) {
      enableSession = make_shared<bool>(boost::any_cast<bool>(m["enableSession"]));
    }
    if (m.find("localKnowledgeId") != m.end() && !m["localKnowledgeId"].empty()) {
      localKnowledgeId = make_shared<string>(boost::any_cast<string>(m["localKnowledgeId"]));
    }
    if (m.find("withDocumentReference") != m.end() && !m["withDocumentReference"].empty()) {
      withDocumentReference = make_shared<bool>(boost::any_cast<bool>(m["withDocumentReference"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingQueryEnhancer() = default;
};
class CreateLibraryRequestIndexSettingRecallStrategy : public Darabonba::Model {
public:
  shared_ptr<string> documentRankType{};
  shared_ptr<long> limit{};

  CreateLibraryRequestIndexSettingRecallStrategy() {}

  explicit CreateLibraryRequestIndexSettingRecallStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentRankType) {
      res["documentRankType"] = boost::any(*documentRankType);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentRankType") != m.end() && !m["documentRankType"].empty()) {
      documentRankType = make_shared<string>(boost::any_cast<string>(m["documentRankType"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingRecallStrategy() = default;
};
class CreateLibraryRequestIndexSettingTextIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> indexAnalyzer{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<string> searchAnalyzer{};
  shared_ptr<long> topK{};

  CreateLibraryRequestIndexSettingTextIndexSetting() {}

  explicit CreateLibraryRequestIndexSettingTextIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (indexAnalyzer) {
      res["indexAnalyzer"] = boost::any(*indexAnalyzer);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (searchAnalyzer) {
      res["searchAnalyzer"] = boost::any(*searchAnalyzer);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("indexAnalyzer") != m.end() && !m["indexAnalyzer"].empty()) {
      indexAnalyzer = make_shared<string>(boost::any_cast<string>(m["indexAnalyzer"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("searchAnalyzer") != m.end() && !m["searchAnalyzer"].empty()) {
      searchAnalyzer = make_shared<string>(boost::any_cast<string>(m["searchAnalyzer"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingTextIndexSetting() = default;
};
class CreateLibraryRequestIndexSettingVectorIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> embeddingType{};
  shared_ptr<bool> enable{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<long> topK{};

  CreateLibraryRequestIndexSettingVectorIndexSetting() {}

  explicit CreateLibraryRequestIndexSettingVectorIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (embeddingType) {
      res["embeddingType"] = boost::any(*embeddingType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("embeddingType") != m.end() && !m["embeddingType"].empty()) {
      embeddingType = make_shared<string>(boost::any_cast<string>(m["embeddingType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~CreateLibraryRequestIndexSettingVectorIndexSetting() = default;
};
class CreateLibraryRequestIndexSetting : public Darabonba::Model {
public:
  shared_ptr<CreateLibraryRequestIndexSettingChunkStrategy> chunkStrategy{};
  shared_ptr<CreateLibraryRequestIndexSettingModelConfig> modelConfig{};
  shared_ptr<string> promptRoleStyle{};
  shared_ptr<CreateLibraryRequestIndexSettingQueryEnhancer> queryEnhancer{};
  shared_ptr<CreateLibraryRequestIndexSettingRecallStrategy> recallStrategy{};
  shared_ptr<CreateLibraryRequestIndexSettingTextIndexSetting> textIndexSetting{};
  shared_ptr<CreateLibraryRequestIndexSettingVectorIndexSetting> vectorIndexSetting{};

  CreateLibraryRequestIndexSetting() {}

  explicit CreateLibraryRequestIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkStrategy) {
      res["chunkStrategy"] = chunkStrategy ? boost::any(chunkStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptRoleStyle) {
      res["promptRoleStyle"] = boost::any(*promptRoleStyle);
    }
    if (queryEnhancer) {
      res["queryEnhancer"] = queryEnhancer ? boost::any(queryEnhancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recallStrategy) {
      res["recallStrategy"] = recallStrategy ? boost::any(recallStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textIndexSetting) {
      res["textIndexSetting"] = textIndexSetting ? boost::any(textIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorIndexSetting) {
      res["vectorIndexSetting"] = vectorIndexSetting ? boost::any(vectorIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkStrategy") != m.end() && !m["chunkStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["chunkStrategy"].type()) {
        CreateLibraryRequestIndexSettingChunkStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["chunkStrategy"]));
        chunkStrategy = make_shared<CreateLibraryRequestIndexSettingChunkStrategy>(model1);
      }
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        CreateLibraryRequestIndexSettingModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<CreateLibraryRequestIndexSettingModelConfig>(model1);
      }
    }
    if (m.find("promptRoleStyle") != m.end() && !m["promptRoleStyle"].empty()) {
      promptRoleStyle = make_shared<string>(boost::any_cast<string>(m["promptRoleStyle"]));
    }
    if (m.find("queryEnhancer") != m.end() && !m["queryEnhancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryEnhancer"].type()) {
        CreateLibraryRequestIndexSettingQueryEnhancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryEnhancer"]));
        queryEnhancer = make_shared<CreateLibraryRequestIndexSettingQueryEnhancer>(model1);
      }
    }
    if (m.find("recallStrategy") != m.end() && !m["recallStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["recallStrategy"].type()) {
        CreateLibraryRequestIndexSettingRecallStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["recallStrategy"]));
        recallStrategy = make_shared<CreateLibraryRequestIndexSettingRecallStrategy>(model1);
      }
    }
    if (m.find("textIndexSetting") != m.end() && !m["textIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["textIndexSetting"].type()) {
        CreateLibraryRequestIndexSettingTextIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textIndexSetting"]));
        textIndexSetting = make_shared<CreateLibraryRequestIndexSettingTextIndexSetting>(model1);
      }
    }
    if (m.find("vectorIndexSetting") != m.end() && !m["vectorIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["vectorIndexSetting"].type()) {
        CreateLibraryRequestIndexSettingVectorIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vectorIndexSetting"]));
        vectorIndexSetting = make_shared<CreateLibraryRequestIndexSettingVectorIndexSetting>(model1);
      }
    }
  }


  virtual ~CreateLibraryRequestIndexSetting() = default;
};
class CreateLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<CreateLibraryRequestIndexSetting> indexSetting{};
  shared_ptr<string> libraryName{};

  CreateLibraryRequest() {}

  explicit CreateLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (indexSetting) {
      res["indexSetting"] = indexSetting ? boost::any(indexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("indexSetting") != m.end() && !m["indexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexSetting"].type()) {
        CreateLibraryRequestIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexSetting"]));
        indexSetting = make_shared<CreateLibraryRequestIndexSetting>(model1);
      }
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
  }


  virtual ~CreateLibraryRequest() = default;
};
class CreateLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateLibraryResponseBody() {}

  explicit CreateLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateLibraryResponseBody() = default;
};
class CreateLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLibraryResponseBody> body{};

  CreateLibraryResponse() {}

  explicit CreateLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLibraryResponse() = default;
};
class CreatePdfTranslateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> knowledge{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> translateTo{};

  CreatePdfTranslateTaskRequest() {}

  explicit CreatePdfTranslateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (knowledge) {
      res["knowledge"] = boost::any(*knowledge);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (translateTo) {
      res["translateTo"] = boost::any(*translateTo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("knowledge") != m.end() && !m["knowledge"].empty()) {
      knowledge = make_shared<string>(boost::any_cast<string>(m["knowledge"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("translateTo") != m.end() && !m["translateTo"].empty()) {
      translateTo = make_shared<string>(boost::any_cast<string>(m["translateTo"]));
    }
  }


  virtual ~CreatePdfTranslateTaskRequest() = default;
};
class CreatePdfTranslateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreatePdfTranslateTaskResponseBody() {}

  explicit CreatePdfTranslateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreatePdfTranslateTaskResponseBody() = default;
};
class CreatePdfTranslateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePdfTranslateTaskResponseBody> body{};

  CreatePdfTranslateTaskResponse() {}

  explicit CreatePdfTranslateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePdfTranslateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePdfTranslateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePdfTranslateTaskResponse() = default;
};
class CreatePredefinedDocumentRequestChunks : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<long> chunkOrder{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};

  CreatePredefinedDocumentRequestChunks() {}

  explicit CreatePredefinedDocumentRequestChunks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOrder) {
      res["chunkOrder"] = boost::any(*chunkOrder);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOrder") != m.end() && !m["chunkOrder"].empty()) {
      chunkOrder = make_shared<long>(boost::any_cast<long>(m["chunkOrder"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
  }


  virtual ~CreatePredefinedDocumentRequestChunks() = default;
};
class CreatePredefinedDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePredefinedDocumentRequestChunks>> chunks{};
  shared_ptr<string> libraryId{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> title{};

  CreatePredefinedDocumentRequest() {}

  explicit CreatePredefinedDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunks) {
      vector<boost::any> temp1;
      for(auto item1:*chunks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["chunks"] = boost::any(temp1);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (metadata) {
      res["metadata"] = boost::any(*metadata);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunks") != m.end() && !m["chunks"].empty()) {
      if (typeid(vector<boost::any>) == m["chunks"].type()) {
        vector<CreatePredefinedDocumentRequestChunks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["chunks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePredefinedDocumentRequestChunks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chunks = make_shared<vector<CreatePredefinedDocumentRequestChunks>>(expect1);
      }
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("metadata") != m.end() && !m["metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CreatePredefinedDocumentRequest() = default;
};
class CreatePredefinedDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreatePredefinedDocumentResponseBody() {}

  explicit CreatePredefinedDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreatePredefinedDocumentResponseBody() = default;
};
class CreatePredefinedDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePredefinedDocumentResponseBody> body{};

  CreatePredefinedDocumentResponse() {}

  explicit CreatePredefinedDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePredefinedDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePredefinedDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePredefinedDocumentResponse() = default;
};
class CreateQualityCheckTaskRequestConversationListDialogueList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> content{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceType{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};

  CreateQualityCheckTaskRequestConversationListDialogueList() {}

  explicit CreateQualityCheckTaskRequestConversationListDialogueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceType) {
      res["customerServiceType"] = boost::any(*customerServiceType);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("begin") != m.end() && !m["begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["begin"]));
    }
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceType") != m.end() && !m["customerServiceType"].empty()) {
      customerServiceType = make_shared<string>(boost::any_cast<string>(m["customerServiceType"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateQualityCheckTaskRequestConversationListDialogueList() = default;
};
class CreateQualityCheckTaskRequestConversationList : public Darabonba::Model {
public:
  shared_ptr<string> callType{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerName{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceName{};
  shared_ptr<vector<CreateQualityCheckTaskRequestConversationListDialogueList>> dialogueList{};
  shared_ptr<string> gmtService{};

  CreateQualityCheckTaskRequestConversationList() {}

  explicit CreateQualityCheckTaskRequestConversationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callType) {
      res["callType"] = boost::any(*callType);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerName) {
      res["customerName"] = boost::any(*customerName);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceName) {
      res["customerServiceName"] = boost::any(*customerServiceName);
    }
    if (dialogueList) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueList"] = boost::any(temp1);
    }
    if (gmtService) {
      res["gmtService"] = boost::any(*gmtService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("callType") != m.end() && !m["callType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["callType"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerName") != m.end() && !m["customerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["customerName"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceName") != m.end() && !m["customerServiceName"].empty()) {
      customerServiceName = make_shared<string>(boost::any_cast<string>(m["customerServiceName"]));
    }
    if (m.find("dialogueList") != m.end() && !m["dialogueList"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueList"].type()) {
        vector<CreateQualityCheckTaskRequestConversationListDialogueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQualityCheckTaskRequestConversationListDialogueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueList = make_shared<vector<CreateQualityCheckTaskRequestConversationListDialogueList>>(expect1);
      }
    }
    if (m.find("gmtService") != m.end() && !m["gmtService"].empty()) {
      gmtService = make_shared<string>(boost::any_cast<string>(m["gmtService"]));
    }
  }


  virtual ~CreateQualityCheckTaskRequestConversationList() = default;
};
class CreateQualityCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateQualityCheckTaskRequestConversationList> conversationList{};
  shared_ptr<string> gmtService{};
  shared_ptr<map<string, string>> metaData{};
  shared_ptr<vector<string>> qualityGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};

  CreateQualityCheckTaskRequest() {}

  explicit CreateQualityCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationList) {
      res["conversationList"] = conversationList ? boost::any(conversationList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtService) {
      res["gmtService"] = boost::any(*gmtService);
    }
    if (metaData) {
      res["metaData"] = boost::any(*metaData);
    }
    if (qualityGroup) {
      res["qualityGroup"] = boost::any(*qualityGroup);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conversationList") != m.end() && !m["conversationList"].empty()) {
      if (typeid(map<string, boost::any>) == m["conversationList"].type()) {
        CreateQualityCheckTaskRequestConversationList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["conversationList"]));
        conversationList = make_shared<CreateQualityCheckTaskRequestConversationList>(model1);
      }
    }
    if (m.find("gmtService") != m.end() && !m["gmtService"].empty()) {
      gmtService = make_shared<string>(boost::any_cast<string>(m["gmtService"]));
    }
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["metaData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("qualityGroup") != m.end() && !m["qualityGroup"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["qualityGroup"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["qualityGroup"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qualityGroup = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateQualityCheckTaskRequest() = default;
};
class CreateQualityCheckTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CreateQualityCheckTaskResponseBodyData() {}

  explicit CreateQualityCheckTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateQualityCheckTaskResponseBodyData() = default;
};
class CreateQualityCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<CreateQualityCheckTaskResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  CreateQualityCheckTaskResponseBody() {}

  explicit CreateQualityCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateQualityCheckTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateQualityCheckTaskResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~CreateQualityCheckTaskResponseBody() = default;
};
class CreateQualityCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQualityCheckTaskResponseBody> body{};

  CreateQualityCheckTaskResponse() {}

  explicit CreateQualityCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQualityCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQualityCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQualityCheckTaskResponse() = default;
};
class DeleteDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> docIds{};
  shared_ptr<string> libraryId{};

  DeleteDocumentRequest() {}

  explicit DeleteDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docIds) {
      res["docIds"] = boost::any(*docIds);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docIds") != m.end() && !m["docIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["docIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["docIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
  }


  virtual ~DeleteDocumentRequest() = default;
};
class DeleteDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<bool> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  DeleteDocumentResponseBody() {}

  explicit DeleteDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~DeleteDocumentResponseBody() = default;
};
class DeleteDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDocumentResponseBody> body{};

  DeleteDocumentResponse() {}

  explicit DeleteDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDocumentResponse() = default;
};
class DeleteLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> libraryId{};

  DeleteLibraryRequest() {}

  explicit DeleteLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
  }


  virtual ~DeleteLibraryRequest() = default;
};
class DeleteLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteLibraryResponseBody() {}

  explicit DeleteLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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


  virtual ~DeleteLibraryResponseBody() = default;
};
class DeleteLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLibraryResponseBody> body{};

  DeleteLibraryResponse() {}

  explicit DeleteLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLibraryResponse() = default;
};
class EvictTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  EvictTaskRequest() {}

  explicit EvictTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~EvictTaskRequest() = default;
};
class EvictTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  EvictTaskResponseBody() {}

  explicit EvictTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~EvictTaskResponseBody() = default;
};
class EvictTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EvictTaskResponseBody> body{};

  EvictTaskResponse() {}

  explicit EvictTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EvictTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EvictTaskResponseBody>(model1);
      }
    }
  }


  virtual ~EvictTaskResponse() = default;
};
class GenDocQaResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> requestId{};

  GenDocQaResultRequest() {}

  explicit GenDocQaResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GenDocQaResultRequest() = default;
};
class GenDocQaResultResponseBodyDataParseQaResults : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<string> question{};

  GenDocQaResultResponseBodyDataParseQaResults() {}

  explicit GenDocQaResultResponseBodyDataParseQaResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
  }


  virtual ~GenDocQaResultResponseBodyDataParseQaResults() = default;
};
class GenDocQaResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currentStatus{};
  shared_ptr<string> docId{};
  shared_ptr<string> libraryId{};
  shared_ptr<vector<GenDocQaResultResponseBodyDataParseQaResults>> parseQaResults{};

  GenDocQaResultResponseBodyData() {}

  explicit GenDocQaResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentStatus) {
      res["currentStatus"] = boost::any(*currentStatus);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (parseQaResults) {
      vector<boost::any> temp1;
      for(auto item1:*parseQaResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parseQaResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentStatus") != m.end() && !m["currentStatus"].empty()) {
      currentStatus = make_shared<string>(boost::any_cast<string>(m["currentStatus"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("parseQaResults") != m.end() && !m["parseQaResults"].empty()) {
      if (typeid(vector<boost::any>) == m["parseQaResults"].type()) {
        vector<GenDocQaResultResponseBodyDataParseQaResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parseQaResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenDocQaResultResponseBodyDataParseQaResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parseQaResults = make_shared<vector<GenDocQaResultResponseBodyDataParseQaResults>>(expect1);
      }
    }
  }


  virtual ~GenDocQaResultResponseBodyData() = default;
};
class GenDocQaResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GenDocQaResultResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GenDocQaResultResponseBody() {}

  explicit GenDocQaResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenDocQaResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenDocQaResultResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GenDocQaResultResponseBody() = default;
};
class GenDocQaResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenDocQaResultResponseBody> body{};

  GenDocQaResultResponse() {}

  explicit GenDocQaResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenDocQaResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenDocQaResultResponseBody>(model1);
      }
    }
  }


  virtual ~GenDocQaResultResponse() = default;
};
class GetAppConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> embeddingTypeList{};
  shared_ptr<map<string, bool>> frontendConfig{};
  shared_ptr<vector<map<string, string>>> libraryDocumentStatusList{};
  shared_ptr<vector<map<string, string>>> llmHelperTypeList{};
  shared_ptr<vector<string>> textIndexCategoryList{};
  shared_ptr<vector<string>> vectorIndexCategoryList{};

  GetAppConfigResponseBodyData() {}

  explicit GetAppConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddingTypeList) {
      res["embeddingTypeList"] = boost::any(*embeddingTypeList);
    }
    if (frontendConfig) {
      res["frontendConfig"] = boost::any(*frontendConfig);
    }
    if (libraryDocumentStatusList) {
      res["libraryDocumentStatusList"] = boost::any(*libraryDocumentStatusList);
    }
    if (llmHelperTypeList) {
      res["llmHelperTypeList"] = boost::any(*llmHelperTypeList);
    }
    if (textIndexCategoryList) {
      res["textIndexCategoryList"] = boost::any(*textIndexCategoryList);
    }
    if (vectorIndexCategoryList) {
      res["vectorIndexCategoryList"] = boost::any(*vectorIndexCategoryList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("embeddingTypeList") != m.end() && !m["embeddingTypeList"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["embeddingTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["embeddingTypeList"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      embeddingTypeList = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("frontendConfig") != m.end() && !m["frontendConfig"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["frontendConfig"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      frontendConfig = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("libraryDocumentStatusList") != m.end() && !m["libraryDocumentStatusList"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["libraryDocumentStatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["libraryDocumentStatusList"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      libraryDocumentStatusList = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("llmHelperTypeList") != m.end() && !m["llmHelperTypeList"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["llmHelperTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["llmHelperTypeList"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      llmHelperTypeList = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("textIndexCategoryList") != m.end() && !m["textIndexCategoryList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["textIndexCategoryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textIndexCategoryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textIndexCategoryList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vectorIndexCategoryList") != m.end() && !m["vectorIndexCategoryList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vectorIndexCategoryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vectorIndexCategoryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vectorIndexCategoryList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAppConfigResponseBodyData() = default;
};
class GetAppConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetAppConfigResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetAppConfigResponseBody() {}

  explicit GetAppConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetAppConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAppConfigResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetAppConfigResponseBody() = default;
};
class GetAppConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppConfigResponseBody> body{};

  GetAppConfigResponse() {}

  explicit GetAppConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppConfigResponse() = default;
};
class GetChatQuestionRespRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchId{};
  shared_ptr<string> sessionId{};

  GetChatQuestionRespRequest() {}

  explicit GetChatQuestionRespRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["batchId"] = boost::any(*batchId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchId") != m.end() && !m["batchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["batchId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~GetChatQuestionRespRequest() = default;
};
class GetChatQuestionRespResponseBodyDataQuestionList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> oriContent{};
  shared_ptr<string> reply{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  GetChatQuestionRespResponseBodyDataQuestionList() {}

  explicit GetChatQuestionRespResponseBodyDataQuestionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (oriContent) {
      res["oriContent"] = boost::any(*oriContent);
    }
    if (reply) {
      res["reply"] = boost::any(*reply);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("oriContent") != m.end() && !m["oriContent"].empty()) {
      oriContent = make_shared<string>(boost::any_cast<string>(m["oriContent"]));
    }
    if (m.find("reply") != m.end() && !m["reply"].empty()) {
      reply = make_shared<string>(boost::any_cast<string>(m["reply"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~GetChatQuestionRespResponseBodyDataQuestionList() = default;
};
class GetChatQuestionRespResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currentState{};
  shared_ptr<vector<GetChatQuestionRespResponseBodyDataQuestionList>> questionList{};

  GetChatQuestionRespResponseBodyData() {}

  explicit GetChatQuestionRespResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentState) {
      res["currentState"] = boost::any(*currentState);
    }
    if (questionList) {
      vector<boost::any> temp1;
      for(auto item1:*questionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["questionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentState") != m.end() && !m["currentState"].empty()) {
      currentState = make_shared<string>(boost::any_cast<string>(m["currentState"]));
    }
    if (m.find("questionList") != m.end() && !m["questionList"].empty()) {
      if (typeid(vector<boost::any>) == m["questionList"].type()) {
        vector<GetChatQuestionRespResponseBodyDataQuestionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["questionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatQuestionRespResponseBodyDataQuestionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionList = make_shared<vector<GetChatQuestionRespResponseBodyDataQuestionList>>(expect1);
      }
    }
  }


  virtual ~GetChatQuestionRespResponseBodyData() = default;
};
class GetChatQuestionRespResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetChatQuestionRespResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetChatQuestionRespResponseBody() {}

  explicit GetChatQuestionRespResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetChatQuestionRespResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetChatQuestionRespResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetChatQuestionRespResponseBody() = default;
};
class GetChatQuestionRespResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatQuestionRespResponseBody> body{};

  GetChatQuestionRespResponse() {}

  explicit GetChatQuestionRespResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatQuestionRespResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatQuestionRespResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatQuestionRespResponse() = default;
};
class GetDialogAnalysisResultRequest : public Darabonba::Model {
public:
  shared_ptr<bool> asc{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<string>> sessionIds{};
  shared_ptr<string> startTime{};
  shared_ptr<bool> useUrl{};

  GetDialogAnalysisResultRequest() {}

  explicit GetDialogAnalysisResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asc) {
      res["asc"] = boost::any(*asc);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (sessionIds) {
      res["sessionIds"] = boost::any(*sessionIds);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (useUrl) {
      res["useUrl"] = boost::any(*useUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asc") != m.end() && !m["asc"].empty()) {
      asc = make_shared<bool>(boost::any_cast<bool>(m["asc"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("sessionIds") != m.end() && !m["sessionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sessionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sessionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sessionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("useUrl") != m.end() && !m["useUrl"].empty()) {
      useUrl = make_shared<bool>(boost::any_cast<bool>(m["useUrl"]));
    }
  }


  virtual ~GetDialogAnalysisResultRequest() = default;
};
class GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels() {}

  explicit GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels() = default;
};
class GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp : public Darabonba::Model {
public:
  shared_ptr<string> dialogExecPlan{};
  shared_ptr<vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels>> dialogLabels{};
  shared_ptr<string> dialogSop{};
  shared_ptr<string> dialogSummary{};

  GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp() {}

  explicit GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogExecPlan) {
      res["dialogExecPlan"] = boost::any(*dialogExecPlan);
    }
    if (dialogLabels) {
      vector<boost::any> temp1;
      for(auto item1:*dialogLabels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogLabels"] = boost::any(temp1);
    }
    if (dialogSop) {
      res["dialogSop"] = boost::any(*dialogSop);
    }
    if (dialogSummary) {
      res["dialogSummary"] = boost::any(*dialogSummary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogExecPlan") != m.end() && !m["dialogExecPlan"].empty()) {
      dialogExecPlan = make_shared<string>(boost::any_cast<string>(m["dialogExecPlan"]));
    }
    if (m.find("dialogLabels") != m.end() && !m["dialogLabels"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogLabels"].type()) {
        vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogLabels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogLabels = make_shared<vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels>>(expect1);
      }
    }
    if (m.find("dialogSop") != m.end() && !m["dialogSop"].empty()) {
      dialogSop = make_shared<string>(boost::any_cast<string>(m["dialogSop"]));
    }
    if (m.find("dialogSummary") != m.end() && !m["dialogSummary"].empty()) {
      dialogSummary = make_shared<string>(boost::any_cast<string>(m["dialogSummary"]));
    }
  }


  virtual ~GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp() = default;
};
class GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList : public Darabonba::Model {
public:
  shared_ptr<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp> analysisResp{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> ossUrl{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> status{};

  GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList() {}

  explicit GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisResp) {
      res["analysisResp"] = analysisResp ? boost::any(analysisResp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (ossUrl) {
      res["ossUrl"] = boost::any(*ossUrl);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisResp") != m.end() && !m["analysisResp"].empty()) {
      if (typeid(map<string, boost::any>) == m["analysisResp"].type()) {
        GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["analysisResp"]));
        analysisResp = make_shared<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp>(model1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("ossUrl") != m.end() && !m["ossUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["ossUrl"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList() = default;
};
class GetDialogAnalysisResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList>> dialogAnalysisRespList{};

  GetDialogAnalysisResultResponseBodyData() {}

  explicit GetDialogAnalysisResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogAnalysisRespList) {
      vector<boost::any> temp1;
      for(auto item1:*dialogAnalysisRespList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogAnalysisRespList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogAnalysisRespList") != m.end() && !m["dialogAnalysisRespList"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogAnalysisRespList"].type()) {
        vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogAnalysisRespList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogAnalysisRespList = make_shared<vector<GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList>>(expect1);
      }
    }
  }


  virtual ~GetDialogAnalysisResultResponseBodyData() = default;
};
class GetDialogAnalysisResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetDialogAnalysisResultResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetDialogAnalysisResultResponseBody() {}

  explicit GetDialogAnalysisResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDialogAnalysisResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDialogAnalysisResultResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetDialogAnalysisResultResponseBody() = default;
};
class GetDialogAnalysisResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDialogAnalysisResultResponseBody> body{};

  GetDialogAnalysisResultResponse() {}

  explicit GetDialogAnalysisResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDialogAnalysisResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDialogAnalysisResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDialogAnalysisResultResponse() = default;
};
class GetDocumentChunkListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> chunkIdList{};
  shared_ptr<string> docId{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchQuery{};

  GetDocumentChunkListRequest() {}

  explicit GetDocumentChunkListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkIdList) {
      res["chunkIdList"] = boost::any(*chunkIdList);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (orderBy) {
      res["orderBy"] = boost::any(*orderBy);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkIdList") != m.end() && !m["chunkIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["chunkIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["chunkIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      chunkIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["order"]));
    }
    if (m.find("orderBy") != m.end() && !m["orderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["orderBy"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
  }


  virtual ~GetDocumentChunkListRequest() = default;
};
class GetDocumentChunkListResponseBodyDataRecordsPos : public Darabonba::Model {
public:
  shared_ptr<vector<double>> axisArray{};
  shared_ptr<long> page{};
  shared_ptr<vector<long>> textHighlightArea{};

  GetDocumentChunkListResponseBodyDataRecordsPos() {}

  explicit GetDocumentChunkListResponseBodyDataRecordsPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axisArray) {
      res["axisArray"] = boost::any(*axisArray);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (textHighlightArea) {
      res["textHighlightArea"] = boost::any(*textHighlightArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("axisArray") != m.end() && !m["axisArray"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["axisArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["axisArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      axisArray = make_shared<vector<double>>(toVec1);
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("textHighlightArea") != m.end() && !m["textHighlightArea"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textHighlightArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textHighlightArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textHighlightArea = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetDocumentChunkListResponseBodyDataRecordsPos() = default;
};
class GetDocumentChunkListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> chunkId{};
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<string> chunkOssUrl{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};
  shared_ptr<string> docId{};
  shared_ptr<string> fileType{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};
  shared_ptr<string> nextChunkId{};
  shared_ptr<vector<GetDocumentChunkListResponseBodyDataRecordsPos>> pos{};
  shared_ptr<string> preChunkId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  GetDocumentChunkListResponseBodyDataRecords() {}

  explicit GetDocumentChunkListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkId) {
      res["chunkId"] = boost::any(*chunkId);
    }
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOssUrl) {
      res["chunkOssUrl"] = boost::any(*chunkOssUrl);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    if (nextChunkId) {
      res["nextChunkId"] = boost::any(*nextChunkId);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (preChunkId) {
      res["preChunkId"] = boost::any(*preChunkId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkId") != m.end() && !m["chunkId"].empty()) {
      chunkId = make_shared<string>(boost::any_cast<string>(m["chunkId"]));
    }
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOssUrl") != m.end() && !m["chunkOssUrl"].empty()) {
      chunkOssUrl = make_shared<string>(boost::any_cast<string>(m["chunkOssUrl"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
    if (m.find("nextChunkId") != m.end() && !m["nextChunkId"].empty()) {
      nextChunkId = make_shared<string>(boost::any_cast<string>(m["nextChunkId"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<GetDocumentChunkListResponseBodyDataRecordsPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentChunkListResponseBodyDataRecordsPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<GetDocumentChunkListResponseBodyDataRecordsPos>>(expect1);
      }
    }
    if (m.find("preChunkId") != m.end() && !m["preChunkId"].empty()) {
      preChunkId = make_shared<string>(boost::any_cast<string>(m["preChunkId"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~GetDocumentChunkListResponseBodyDataRecords() = default;
};
class GetDocumentChunkListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetDocumentChunkListResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> totalRecords{};

  GetDocumentChunkListResponseBodyData() {}

  explicit GetDocumentChunkListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (totalPages) {
      res["totalPages"] = boost::any(*totalPages);
    }
    if (totalRecords) {
      res["totalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetDocumentChunkListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentChunkListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetDocumentChunkListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("totalPages") != m.end() && !m["totalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["totalPages"]));
    }
    if (m.find("totalRecords") != m.end() && !m["totalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["totalRecords"]));
    }
  }


  virtual ~GetDocumentChunkListResponseBodyData() = default;
};
class GetDocumentChunkListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetDocumentChunkListResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetDocumentChunkListResponseBody() {}

  explicit GetDocumentChunkListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDocumentChunkListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDocumentChunkListResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetDocumentChunkListResponseBody() = default;
};
class GetDocumentChunkListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentChunkListResponseBody> body{};

  GetDocumentChunkListResponse() {}

  explicit GetDocumentChunkListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentChunkListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentChunkListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentChunkListResponse() = default;
};
class GetDocumentListRequest : public Darabonba::Model {
public:
  shared_ptr<string> libraryId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  GetDocumentListRequest() {}

  explicit GetDocumentListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetDocumentListRequest() = default;
};
class GetDocumentListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<map<string, boost::any>> documentMeta{};
  shared_ptr<string> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  GetDocumentListResponseBodyDataRecords() {}

  explicit GetDocumentListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (documentMeta) {
      res["documentMeta"] = boost::any(*documentMeta);
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
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("documentMeta") != m.end() && !m["documentMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["documentMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      documentMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["statusCode"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetDocumentListResponseBodyDataRecords() = default;
};
class GetDocumentListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetDocumentListResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> totalRecords{};

  GetDocumentListResponseBodyData() {}

  explicit GetDocumentListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (totalPages) {
      res["totalPages"] = boost::any(*totalPages);
    }
    if (totalRecords) {
      res["totalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetDocumentListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetDocumentListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("totalPages") != m.end() && !m["totalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["totalPages"]));
    }
    if (m.find("totalRecords") != m.end() && !m["totalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["totalRecords"]));
    }
  }


  virtual ~GetDocumentListResponseBodyData() = default;
};
class GetDocumentListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetDocumentListResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetDocumentListResponseBody() {}

  explicit GetDocumentListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDocumentListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDocumentListResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetDocumentListResponseBody() = default;
};
class GetDocumentListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentListResponseBody> body{};

  GetDocumentListResponse() {}

  explicit GetDocumentListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentListResponse() = default;
};
class GetDocumentUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentId{};

  GetDocumentUrlRequest() {}

  explicit GetDocumentUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentId) {
      res["documentId"] = boost::any(*documentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentId") != m.end() && !m["documentId"].empty()) {
      documentId = make_shared<string>(boost::any_cast<string>(m["documentId"]));
    }
  }


  virtual ~GetDocumentUrlRequest() = default;
};
class GetDocumentUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetDocumentUrlResponseBody() {}

  explicit GetDocumentUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetDocumentUrlResponseBody() = default;
};
class GetDocumentUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentUrlResponseBody> body{};

  GetDocumentUrlResponse() {}

  explicit GetDocumentUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentUrlResponse() = default;
};
class GetFilterDocumentListRequestAnd : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  GetFilterDocumentListRequestAnd() {}

  explicit GetFilterDocumentListRequestAnd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetFilterDocumentListRequestAnd() = default;
};
class GetFilterDocumentListRequestOr : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  GetFilterDocumentListRequestOr() {}

  explicit GetFilterDocumentListRequestOr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetFilterDocumentListRequestOr() = default;
};
class GetFilterDocumentListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetFilterDocumentListRequestAnd>> and_{};
  shared_ptr<vector<string>> docIdList{};
  shared_ptr<string> libraryId{};
  shared_ptr<vector<GetFilterDocumentListRequestOr>> or_{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> status{};

  GetFilterDocumentListRequest() {}

  explicit GetFilterDocumentListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (and_) {
      vector<boost::any> temp1;
      for(auto item1:*and_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["and"] = boost::any(temp1);
    }
    if (docIdList) {
      res["docIdList"] = boost::any(*docIdList);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (or_) {
      vector<boost::any> temp1;
      for(auto item1:*or_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["or"] = boost::any(temp1);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("and") != m.end() && !m["and"].empty()) {
      if (typeid(vector<boost::any>) == m["and"].type()) {
        vector<GetFilterDocumentListRequestAnd> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["and"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFilterDocumentListRequestAnd model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        and_ = make_shared<vector<GetFilterDocumentListRequestAnd>>(expect1);
      }
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
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("or") != m.end() && !m["or"].empty()) {
      if (typeid(vector<boost::any>) == m["or"].type()) {
        vector<GetFilterDocumentListRequestOr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["or"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFilterDocumentListRequestOr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        or_ = make_shared<vector<GetFilterDocumentListRequestOr>>(expect1);
      }
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFilterDocumentListRequest() = default;
};
class GetFilterDocumentListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<map<string, boost::any>> documentMeta{};
  shared_ptr<string> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  GetFilterDocumentListResponseBodyDataRecords() {}

  explicit GetFilterDocumentListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (documentMeta) {
      res["documentMeta"] = boost::any(*documentMeta);
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
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("documentMeta") != m.end() && !m["documentMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["documentMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      documentMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["statusCode"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetFilterDocumentListResponseBodyDataRecords() = default;
};
class GetFilterDocumentListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetFilterDocumentListResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> totalRecords{};

  GetFilterDocumentListResponseBodyData() {}

  explicit GetFilterDocumentListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (totalPages) {
      res["totalPages"] = boost::any(*totalPages);
    }
    if (totalRecords) {
      res["totalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetFilterDocumentListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFilterDocumentListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetFilterDocumentListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("totalPages") != m.end() && !m["totalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["totalPages"]));
    }
    if (m.find("totalRecords") != m.end() && !m["totalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["totalRecords"]));
    }
  }


  virtual ~GetFilterDocumentListResponseBodyData() = default;
};
class GetFilterDocumentListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetFilterDocumentListResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetFilterDocumentListResponseBody() {}

  explicit GetFilterDocumentListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetFilterDocumentListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetFilterDocumentListResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetFilterDocumentListResponseBody() = default;
};
class GetFilterDocumentListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFilterDocumentListResponseBody> body{};

  GetFilterDocumentListResponse() {}

  explicit GetFilterDocumentListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFilterDocumentListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFilterDocumentListResponseBody>(model1);
      }
    }
  }


  virtual ~GetFilterDocumentListResponse() = default;
};
class GetHistoryListByBizTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  GetHistoryListByBizTypeRequest() {}

  explicit GetHistoryListByBizTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~GetHistoryListByBizTypeRequest() = default;
};
class GetHistoryListByBizTypeResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<boost::any> extraMessage{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> llmAnswer{};
  shared_ptr<string> llmPrompt{};
  shared_ptr<string> llmType{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> userQuery{};

  GetHistoryListByBizTypeResponseBodyDataRecords() {}

  explicit GetHistoryListByBizTypeResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (extraMessage) {
      res["extraMessage"] = boost::any(*extraMessage);
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
    if (llmAnswer) {
      res["llmAnswer"] = boost::any(*llmAnswer);
    }
    if (llmPrompt) {
      res["llmPrompt"] = boost::any(*llmPrompt);
    }
    if (llmType) {
      res["llmType"] = boost::any(*llmType);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (userQuery) {
      res["userQuery"] = boost::any(*userQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("extraMessage") != m.end() && !m["extraMessage"].empty()) {
      extraMessage = make_shared<boost::any>(boost::any_cast<boost::any>(m["extraMessage"]));
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
    if (m.find("llmAnswer") != m.end() && !m["llmAnswer"].empty()) {
      llmAnswer = make_shared<string>(boost::any_cast<string>(m["llmAnswer"]));
    }
    if (m.find("llmPrompt") != m.end() && !m["llmPrompt"].empty()) {
      llmPrompt = make_shared<string>(boost::any_cast<string>(m["llmPrompt"]));
    }
    if (m.find("llmType") != m.end() && !m["llmType"].empty()) {
      llmType = make_shared<string>(boost::any_cast<string>(m["llmType"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("userQuery") != m.end() && !m["userQuery"].empty()) {
      userQuery = make_shared<string>(boost::any_cast<string>(m["userQuery"]));
    }
  }


  virtual ~GetHistoryListByBizTypeResponseBodyDataRecords() = default;
};
class GetHistoryListByBizTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetHistoryListByBizTypeResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> totalRecords{};

  GetHistoryListByBizTypeResponseBodyData() {}

  explicit GetHistoryListByBizTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (totalPages) {
      res["totalPages"] = boost::any(*totalPages);
    }
    if (totalRecords) {
      res["totalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetHistoryListByBizTypeResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistoryListByBizTypeResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetHistoryListByBizTypeResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("totalPages") != m.end() && !m["totalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["totalPages"]));
    }
    if (m.find("totalRecords") != m.end() && !m["totalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["totalRecords"]));
    }
  }


  virtual ~GetHistoryListByBizTypeResponseBodyData() = default;
};
class GetHistoryListByBizTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetHistoryListByBizTypeResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetHistoryListByBizTypeResponseBody() {}

  explicit GetHistoryListByBizTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetHistoryListByBizTypeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetHistoryListByBizTypeResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetHistoryListByBizTypeResponseBody() = default;
};
class GetHistoryListByBizTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryListByBizTypeResponseBody> body{};

  GetHistoryListByBizTypeResponse() {}

  explicit GetHistoryListByBizTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryListByBizTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryListByBizTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryListByBizTypeResponse() = default;
};
class GetLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> libraryId{};

  GetLibraryRequest() {}

  explicit GetLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
  }


  virtual ~GetLibraryRequest() = default;
};
class GetLibraryResponseBodyDataIndexSettingChunkStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> docTreeSplit{};
  shared_ptr<long> docTreeSplitSize{};
  shared_ptr<bool> enhanceGraph{};
  shared_ptr<bool> enhanceTable{};
  shared_ptr<long> overlap{};
  shared_ptr<bool> sentenceSplit{};
  shared_ptr<long> sentenceSplitSize{};
  shared_ptr<long> size{};
  shared_ptr<bool> split{};

  GetLibraryResponseBodyDataIndexSettingChunkStrategy() {}

  explicit GetLibraryResponseBodyDataIndexSettingChunkStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docTreeSplit) {
      res["docTreeSplit"] = boost::any(*docTreeSplit);
    }
    if (docTreeSplitSize) {
      res["docTreeSplitSize"] = boost::any(*docTreeSplitSize);
    }
    if (enhanceGraph) {
      res["enhanceGraph"] = boost::any(*enhanceGraph);
    }
    if (enhanceTable) {
      res["enhanceTable"] = boost::any(*enhanceTable);
    }
    if (overlap) {
      res["overlap"] = boost::any(*overlap);
    }
    if (sentenceSplit) {
      res["sentenceSplit"] = boost::any(*sentenceSplit);
    }
    if (sentenceSplitSize) {
      res["sentenceSplitSize"] = boost::any(*sentenceSplitSize);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (split) {
      res["split"] = boost::any(*split);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docTreeSplit") != m.end() && !m["docTreeSplit"].empty()) {
      docTreeSplit = make_shared<bool>(boost::any_cast<bool>(m["docTreeSplit"]));
    }
    if (m.find("docTreeSplitSize") != m.end() && !m["docTreeSplitSize"].empty()) {
      docTreeSplitSize = make_shared<long>(boost::any_cast<long>(m["docTreeSplitSize"]));
    }
    if (m.find("enhanceGraph") != m.end() && !m["enhanceGraph"].empty()) {
      enhanceGraph = make_shared<bool>(boost::any_cast<bool>(m["enhanceGraph"]));
    }
    if (m.find("enhanceTable") != m.end() && !m["enhanceTable"].empty()) {
      enhanceTable = make_shared<bool>(boost::any_cast<bool>(m["enhanceTable"]));
    }
    if (m.find("overlap") != m.end() && !m["overlap"].empty()) {
      overlap = make_shared<long>(boost::any_cast<long>(m["overlap"]));
    }
    if (m.find("sentenceSplit") != m.end() && !m["sentenceSplit"].empty()) {
      sentenceSplit = make_shared<bool>(boost::any_cast<bool>(m["sentenceSplit"]));
    }
    if (m.find("sentenceSplitSize") != m.end() && !m["sentenceSplitSize"].empty()) {
      sentenceSplitSize = make_shared<long>(boost::any_cast<long>(m["sentenceSplitSize"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("split") != m.end() && !m["split"].empty()) {
      split = make_shared<bool>(boost::any_cast<bool>(m["split"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingChunkStrategy() = default;
};
class GetLibraryResponseBodyDataIndexSettingModelConfig : public Darabonba::Model {
public:
  shared_ptr<double> temperature{};
  shared_ptr<double> topP{};

  GetLibraryResponseBodyDataIndexSettingModelConfig() {}

  explicit GetLibraryResponseBodyDataIndexSettingModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    if (topP) {
      res["topP"] = boost::any(*topP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
    if (m.find("topP") != m.end() && !m["topP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["topP"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingModelConfig() = default;
};
class GetLibraryResponseBodyDataIndexSettingQueryEnhancer : public Darabonba::Model {
public:
  shared_ptr<bool> enableFollowUp{};
  shared_ptr<bool> enableMultiQuery{};
  shared_ptr<bool> enableOpenQa{};
  shared_ptr<bool> enableQueryRewrite{};
  shared_ptr<bool> enableSession{};
  shared_ptr<string> localKnowledgeId{};
  shared_ptr<bool> withDocumentReference{};

  GetLibraryResponseBodyDataIndexSettingQueryEnhancer() {}

  explicit GetLibraryResponseBodyDataIndexSettingQueryEnhancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableFollowUp) {
      res["enableFollowUp"] = boost::any(*enableFollowUp);
    }
    if (enableMultiQuery) {
      res["enableMultiQuery"] = boost::any(*enableMultiQuery);
    }
    if (enableOpenQa) {
      res["enableOpenQa"] = boost::any(*enableOpenQa);
    }
    if (enableQueryRewrite) {
      res["enableQueryRewrite"] = boost::any(*enableQueryRewrite);
    }
    if (enableSession) {
      res["enableSession"] = boost::any(*enableSession);
    }
    if (localKnowledgeId) {
      res["localKnowledgeId"] = boost::any(*localKnowledgeId);
    }
    if (withDocumentReference) {
      res["withDocumentReference"] = boost::any(*withDocumentReference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableFollowUp") != m.end() && !m["enableFollowUp"].empty()) {
      enableFollowUp = make_shared<bool>(boost::any_cast<bool>(m["enableFollowUp"]));
    }
    if (m.find("enableMultiQuery") != m.end() && !m["enableMultiQuery"].empty()) {
      enableMultiQuery = make_shared<bool>(boost::any_cast<bool>(m["enableMultiQuery"]));
    }
    if (m.find("enableOpenQa") != m.end() && !m["enableOpenQa"].empty()) {
      enableOpenQa = make_shared<bool>(boost::any_cast<bool>(m["enableOpenQa"]));
    }
    if (m.find("enableQueryRewrite") != m.end() && !m["enableQueryRewrite"].empty()) {
      enableQueryRewrite = make_shared<bool>(boost::any_cast<bool>(m["enableQueryRewrite"]));
    }
    if (m.find("enableSession") != m.end() && !m["enableSession"].empty()) {
      enableSession = make_shared<bool>(boost::any_cast<bool>(m["enableSession"]));
    }
    if (m.find("localKnowledgeId") != m.end() && !m["localKnowledgeId"].empty()) {
      localKnowledgeId = make_shared<string>(boost::any_cast<string>(m["localKnowledgeId"]));
    }
    if (m.find("withDocumentReference") != m.end() && !m["withDocumentReference"].empty()) {
      withDocumentReference = make_shared<bool>(boost::any_cast<bool>(m["withDocumentReference"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingQueryEnhancer() = default;
};
class GetLibraryResponseBodyDataIndexSettingRecallStrategy : public Darabonba::Model {
public:
  shared_ptr<string> documentRankType{};
  shared_ptr<long> limit{};

  GetLibraryResponseBodyDataIndexSettingRecallStrategy() {}

  explicit GetLibraryResponseBodyDataIndexSettingRecallStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentRankType) {
      res["documentRankType"] = boost::any(*documentRankType);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentRankType") != m.end() && !m["documentRankType"].empty()) {
      documentRankType = make_shared<string>(boost::any_cast<string>(m["documentRankType"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingRecallStrategy() = default;
};
class GetLibraryResponseBodyDataIndexSettingTextIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> indexAnalyzer{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<string> searchAnalyzer{};
  shared_ptr<long> topK{};

  GetLibraryResponseBodyDataIndexSettingTextIndexSetting() {}

  explicit GetLibraryResponseBodyDataIndexSettingTextIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (indexAnalyzer) {
      res["indexAnalyzer"] = boost::any(*indexAnalyzer);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (searchAnalyzer) {
      res["searchAnalyzer"] = boost::any(*searchAnalyzer);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("indexAnalyzer") != m.end() && !m["indexAnalyzer"].empty()) {
      indexAnalyzer = make_shared<string>(boost::any_cast<string>(m["indexAnalyzer"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("searchAnalyzer") != m.end() && !m["searchAnalyzer"].empty()) {
      searchAnalyzer = make_shared<string>(boost::any_cast<string>(m["searchAnalyzer"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingTextIndexSetting() = default;
};
class GetLibraryResponseBodyDataIndexSettingVectorIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> embeddingType{};
  shared_ptr<bool> enable{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<long> topK{};

  GetLibraryResponseBodyDataIndexSettingVectorIndexSetting() {}

  explicit GetLibraryResponseBodyDataIndexSettingVectorIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (embeddingType) {
      res["embeddingType"] = boost::any(*embeddingType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("embeddingType") != m.end() && !m["embeddingType"].empty()) {
      embeddingType = make_shared<string>(boost::any_cast<string>(m["embeddingType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSettingVectorIndexSetting() = default;
};
class GetLibraryResponseBodyDataIndexSetting : public Darabonba::Model {
public:
  shared_ptr<GetLibraryResponseBodyDataIndexSettingChunkStrategy> chunkStrategy{};
  shared_ptr<GetLibraryResponseBodyDataIndexSettingModelConfig> modelConfig{};
  shared_ptr<string> promptRoleStyle{};
  shared_ptr<GetLibraryResponseBodyDataIndexSettingQueryEnhancer> queryEnhancer{};
  shared_ptr<GetLibraryResponseBodyDataIndexSettingRecallStrategy> recallStrategy{};
  shared_ptr<GetLibraryResponseBodyDataIndexSettingTextIndexSetting> textIndexSetting{};
  shared_ptr<GetLibraryResponseBodyDataIndexSettingVectorIndexSetting> vectorIndexSetting{};

  GetLibraryResponseBodyDataIndexSetting() {}

  explicit GetLibraryResponseBodyDataIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkStrategy) {
      res["chunkStrategy"] = chunkStrategy ? boost::any(chunkStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptRoleStyle) {
      res["promptRoleStyle"] = boost::any(*promptRoleStyle);
    }
    if (queryEnhancer) {
      res["queryEnhancer"] = queryEnhancer ? boost::any(queryEnhancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recallStrategy) {
      res["recallStrategy"] = recallStrategy ? boost::any(recallStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textIndexSetting) {
      res["textIndexSetting"] = textIndexSetting ? boost::any(textIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorIndexSetting) {
      res["vectorIndexSetting"] = vectorIndexSetting ? boost::any(vectorIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkStrategy") != m.end() && !m["chunkStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["chunkStrategy"].type()) {
        GetLibraryResponseBodyDataIndexSettingChunkStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["chunkStrategy"]));
        chunkStrategy = make_shared<GetLibraryResponseBodyDataIndexSettingChunkStrategy>(model1);
      }
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        GetLibraryResponseBodyDataIndexSettingModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<GetLibraryResponseBodyDataIndexSettingModelConfig>(model1);
      }
    }
    if (m.find("promptRoleStyle") != m.end() && !m["promptRoleStyle"].empty()) {
      promptRoleStyle = make_shared<string>(boost::any_cast<string>(m["promptRoleStyle"]));
    }
    if (m.find("queryEnhancer") != m.end() && !m["queryEnhancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryEnhancer"].type()) {
        GetLibraryResponseBodyDataIndexSettingQueryEnhancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryEnhancer"]));
        queryEnhancer = make_shared<GetLibraryResponseBodyDataIndexSettingQueryEnhancer>(model1);
      }
    }
    if (m.find("recallStrategy") != m.end() && !m["recallStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["recallStrategy"].type()) {
        GetLibraryResponseBodyDataIndexSettingRecallStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["recallStrategy"]));
        recallStrategy = make_shared<GetLibraryResponseBodyDataIndexSettingRecallStrategy>(model1);
      }
    }
    if (m.find("textIndexSetting") != m.end() && !m["textIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["textIndexSetting"].type()) {
        GetLibraryResponseBodyDataIndexSettingTextIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textIndexSetting"]));
        textIndexSetting = make_shared<GetLibraryResponseBodyDataIndexSettingTextIndexSetting>(model1);
      }
    }
    if (m.find("vectorIndexSetting") != m.end() && !m["vectorIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["vectorIndexSetting"].type()) {
        GetLibraryResponseBodyDataIndexSettingVectorIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vectorIndexSetting"]));
        vectorIndexSetting = make_shared<GetLibraryResponseBodyDataIndexSettingVectorIndexSetting>(model1);
      }
    }
  }


  virtual ~GetLibraryResponseBodyDataIndexSetting() = default;
};
class GetLibraryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> documentCount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<GetLibraryResponseBodyDataIndexSetting> indexSetting{};
  shared_ptr<string> libraryName{};

  GetLibraryResponseBodyData() {}

  explicit GetLibraryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documentCount) {
      res["documentCount"] = boost::any(*documentCount);
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
    if (indexSetting) {
      res["indexSetting"] = indexSetting ? boost::any(indexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documentCount") != m.end() && !m["documentCount"].empty()) {
      documentCount = make_shared<long>(boost::any_cast<long>(m["documentCount"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("indexSetting") != m.end() && !m["indexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexSetting"].type()) {
        GetLibraryResponseBodyDataIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexSetting"]));
        indexSetting = make_shared<GetLibraryResponseBodyDataIndexSetting>(model1);
      }
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
  }


  virtual ~GetLibraryResponseBodyData() = default;
};
class GetLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetLibraryResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetLibraryResponseBody() {}

  explicit GetLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetLibraryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetLibraryResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetLibraryResponseBody() = default;
};
class GetLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLibraryResponseBody> body{};

  GetLibraryResponse() {}

  explicit GetLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~GetLibraryResponse() = default;
};
class GetLibraryListRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};

  GetLibraryListRequest() {}

  explicit GetLibraryListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~GetLibraryListRequest() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> docTreeSplit{};
  shared_ptr<long> docTreeSplitSize{};
  shared_ptr<bool> enhanceGraph{};
  shared_ptr<bool> enhanceTable{};
  shared_ptr<long> overlap{};
  shared_ptr<bool> sentenceSplit{};
  shared_ptr<long> sentenceSplitSize{};
  shared_ptr<long> size{};
  shared_ptr<bool> split{};

  GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docTreeSplit) {
      res["docTreeSplit"] = boost::any(*docTreeSplit);
    }
    if (docTreeSplitSize) {
      res["docTreeSplitSize"] = boost::any(*docTreeSplitSize);
    }
    if (enhanceGraph) {
      res["enhanceGraph"] = boost::any(*enhanceGraph);
    }
    if (enhanceTable) {
      res["enhanceTable"] = boost::any(*enhanceTable);
    }
    if (overlap) {
      res["overlap"] = boost::any(*overlap);
    }
    if (sentenceSplit) {
      res["sentenceSplit"] = boost::any(*sentenceSplit);
    }
    if (sentenceSplitSize) {
      res["sentenceSplitSize"] = boost::any(*sentenceSplitSize);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (split) {
      res["split"] = boost::any(*split);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docTreeSplit") != m.end() && !m["docTreeSplit"].empty()) {
      docTreeSplit = make_shared<bool>(boost::any_cast<bool>(m["docTreeSplit"]));
    }
    if (m.find("docTreeSplitSize") != m.end() && !m["docTreeSplitSize"].empty()) {
      docTreeSplitSize = make_shared<long>(boost::any_cast<long>(m["docTreeSplitSize"]));
    }
    if (m.find("enhanceGraph") != m.end() && !m["enhanceGraph"].empty()) {
      enhanceGraph = make_shared<bool>(boost::any_cast<bool>(m["enhanceGraph"]));
    }
    if (m.find("enhanceTable") != m.end() && !m["enhanceTable"].empty()) {
      enhanceTable = make_shared<bool>(boost::any_cast<bool>(m["enhanceTable"]));
    }
    if (m.find("overlap") != m.end() && !m["overlap"].empty()) {
      overlap = make_shared<long>(boost::any_cast<long>(m["overlap"]));
    }
    if (m.find("sentenceSplit") != m.end() && !m["sentenceSplit"].empty()) {
      sentenceSplit = make_shared<bool>(boost::any_cast<bool>(m["sentenceSplit"]));
    }
    if (m.find("sentenceSplitSize") != m.end() && !m["sentenceSplitSize"].empty()) {
      sentenceSplitSize = make_shared<long>(boost::any_cast<long>(m["sentenceSplitSize"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("split") != m.end() && !m["split"].empty()) {
      split = make_shared<bool>(boost::any_cast<bool>(m["split"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig : public Darabonba::Model {
public:
  shared_ptr<double> temperature{};
  shared_ptr<double> topP{};

  GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    if (topP) {
      res["topP"] = boost::any(*topP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
    if (m.find("topP") != m.end() && !m["topP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["topP"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer : public Darabonba::Model {
public:
  shared_ptr<bool> enableFollowUp{};
  shared_ptr<bool> enableMultiQuery{};
  shared_ptr<bool> enableOpenQa{};
  shared_ptr<bool> enableQueryRewrite{};
  shared_ptr<bool> enableSession{};
  shared_ptr<string> localKnowledgeId{};
  shared_ptr<bool> withDocumentReference{};

  GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableFollowUp) {
      res["enableFollowUp"] = boost::any(*enableFollowUp);
    }
    if (enableMultiQuery) {
      res["enableMultiQuery"] = boost::any(*enableMultiQuery);
    }
    if (enableOpenQa) {
      res["enableOpenQa"] = boost::any(*enableOpenQa);
    }
    if (enableQueryRewrite) {
      res["enableQueryRewrite"] = boost::any(*enableQueryRewrite);
    }
    if (enableSession) {
      res["enableSession"] = boost::any(*enableSession);
    }
    if (localKnowledgeId) {
      res["localKnowledgeId"] = boost::any(*localKnowledgeId);
    }
    if (withDocumentReference) {
      res["withDocumentReference"] = boost::any(*withDocumentReference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableFollowUp") != m.end() && !m["enableFollowUp"].empty()) {
      enableFollowUp = make_shared<bool>(boost::any_cast<bool>(m["enableFollowUp"]));
    }
    if (m.find("enableMultiQuery") != m.end() && !m["enableMultiQuery"].empty()) {
      enableMultiQuery = make_shared<bool>(boost::any_cast<bool>(m["enableMultiQuery"]));
    }
    if (m.find("enableOpenQa") != m.end() && !m["enableOpenQa"].empty()) {
      enableOpenQa = make_shared<bool>(boost::any_cast<bool>(m["enableOpenQa"]));
    }
    if (m.find("enableQueryRewrite") != m.end() && !m["enableQueryRewrite"].empty()) {
      enableQueryRewrite = make_shared<bool>(boost::any_cast<bool>(m["enableQueryRewrite"]));
    }
    if (m.find("enableSession") != m.end() && !m["enableSession"].empty()) {
      enableSession = make_shared<bool>(boost::any_cast<bool>(m["enableSession"]));
    }
    if (m.find("localKnowledgeId") != m.end() && !m["localKnowledgeId"].empty()) {
      localKnowledgeId = make_shared<string>(boost::any_cast<string>(m["localKnowledgeId"]));
    }
    if (m.find("withDocumentReference") != m.end() && !m["withDocumentReference"].empty()) {
      withDocumentReference = make_shared<bool>(boost::any_cast<bool>(m["withDocumentReference"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy : public Darabonba::Model {
public:
  shared_ptr<string> documentRankType{};
  shared_ptr<long> limit{};

  GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentRankType) {
      res["documentRankType"] = boost::any(*documentRankType);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentRankType") != m.end() && !m["documentRankType"].empty()) {
      documentRankType = make_shared<string>(boost::any_cast<string>(m["documentRankType"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> indexAnalyzer{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<string> searchAnalyzer{};
  shared_ptr<long> topK{};

  GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (indexAnalyzer) {
      res["indexAnalyzer"] = boost::any(*indexAnalyzer);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (searchAnalyzer) {
      res["searchAnalyzer"] = boost::any(*searchAnalyzer);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("indexAnalyzer") != m.end() && !m["indexAnalyzer"].empty()) {
      indexAnalyzer = make_shared<string>(boost::any_cast<string>(m["indexAnalyzer"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("searchAnalyzer") != m.end() && !m["searchAnalyzer"].empty()) {
      searchAnalyzer = make_shared<string>(boost::any_cast<string>(m["searchAnalyzer"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> embeddingType{};
  shared_ptr<bool> enable{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<long> topK{};

  GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (embeddingType) {
      res["embeddingType"] = boost::any(*embeddingType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("embeddingType") != m.end() && !m["embeddingType"].empty()) {
      embeddingType = make_shared<string>(boost::any_cast<string>(m["embeddingType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting() = default;
};
class GetLibraryListResponseBodyDataRecordsIndexSetting : public Darabonba::Model {
public:
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy> chunkStrategy{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig> modelConfig{};
  shared_ptr<string> promptRoleStyle{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer> queryEnhancer{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy> recallStrategy{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting> textIndexSetting{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting> vectorIndexSetting{};

  GetLibraryListResponseBodyDataRecordsIndexSetting() {}

  explicit GetLibraryListResponseBodyDataRecordsIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkStrategy) {
      res["chunkStrategy"] = chunkStrategy ? boost::any(chunkStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptRoleStyle) {
      res["promptRoleStyle"] = boost::any(*promptRoleStyle);
    }
    if (queryEnhancer) {
      res["queryEnhancer"] = queryEnhancer ? boost::any(queryEnhancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recallStrategy) {
      res["recallStrategy"] = recallStrategy ? boost::any(recallStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textIndexSetting) {
      res["textIndexSetting"] = textIndexSetting ? boost::any(textIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorIndexSetting) {
      res["vectorIndexSetting"] = vectorIndexSetting ? boost::any(vectorIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkStrategy") != m.end() && !m["chunkStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["chunkStrategy"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["chunkStrategy"]));
        chunkStrategy = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingChunkStrategy>(model1);
      }
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig>(model1);
      }
    }
    if (m.find("promptRoleStyle") != m.end() && !m["promptRoleStyle"].empty()) {
      promptRoleStyle = make_shared<string>(boost::any_cast<string>(m["promptRoleStyle"]));
    }
    if (m.find("queryEnhancer") != m.end() && !m["queryEnhancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryEnhancer"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryEnhancer"]));
        queryEnhancer = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingQueryEnhancer>(model1);
      }
    }
    if (m.find("recallStrategy") != m.end() && !m["recallStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["recallStrategy"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["recallStrategy"]));
        recallStrategy = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingRecallStrategy>(model1);
      }
    }
    if (m.find("textIndexSetting") != m.end() && !m["textIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["textIndexSetting"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textIndexSetting"]));
        textIndexSetting = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingTextIndexSetting>(model1);
      }
    }
    if (m.find("vectorIndexSetting") != m.end() && !m["vectorIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["vectorIndexSetting"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vectorIndexSetting"]));
        vectorIndexSetting = make_shared<GetLibraryListResponseBodyDataRecordsIndexSettingVectorIndexSetting>(model1);
      }
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecordsIndexSetting() = default;
};
class GetLibraryListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> documentCount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<GetLibraryListResponseBodyDataRecordsIndexSetting> indexSetting{};
  shared_ptr<string> libraryName{};

  GetLibraryListResponseBodyDataRecords() {}

  explicit GetLibraryListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documentCount) {
      res["documentCount"] = boost::any(*documentCount);
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
    if (indexSetting) {
      res["indexSetting"] = indexSetting ? boost::any(indexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documentCount") != m.end() && !m["documentCount"].empty()) {
      documentCount = make_shared<long>(boost::any_cast<long>(m["documentCount"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("indexSetting") != m.end() && !m["indexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexSetting"].type()) {
        GetLibraryListResponseBodyDataRecordsIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexSetting"]));
        indexSetting = make_shared<GetLibraryListResponseBodyDataRecordsIndexSetting>(model1);
      }
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
  }


  virtual ~GetLibraryListResponseBodyDataRecords() = default;
};
class GetLibraryListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetLibraryListResponseBodyDataRecords>> records{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> totalRecords{};

  GetLibraryListResponseBodyData() {}

  explicit GetLibraryListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (totalPages) {
      res["totalPages"] = boost::any(*totalPages);
    }
    if (totalRecords) {
      res["totalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetLibraryListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLibraryListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetLibraryListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("totalPages") != m.end() && !m["totalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["totalPages"]));
    }
    if (m.find("totalRecords") != m.end() && !m["totalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["totalRecords"]));
    }
  }


  virtual ~GetLibraryListResponseBodyData() = default;
};
class GetLibraryListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetLibraryListResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetLibraryListResponseBody() {}

  explicit GetLibraryListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetLibraryListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetLibraryListResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetLibraryListResponseBody() = default;
};
class GetLibraryListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLibraryListResponseBody> body{};

  GetLibraryListResponse() {}

  explicit GetLibraryListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLibraryListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLibraryListResponseBody>(model1);
      }
    }
  }


  virtual ~GetLibraryListResponse() = default;
};
class GetParseResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> libraryId{};
  shared_ptr<bool> useUrlResult{};

  GetParseResultRequest() {}

  explicit GetParseResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (useUrlResult) {
      res["useUrlResult"] = boost::any(*useUrlResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("useUrlResult") != m.end() && !m["useUrlResult"].empty()) {
      useUrlResult = make_shared<bool>(boost::any_cast<bool>(m["useUrlResult"]));
    }
  }


  virtual ~GetParseResultRequest() = default;
};
class GetParseResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<string> providerType{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> status{};

  GetParseResultResponseBodyData() {}

  explicit GetParseResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (providerType) {
      res["providerType"] = boost::any(*providerType);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (resultUrl) {
      res["resultUrl"] = boost::any(*resultUrl);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("providerType") != m.end() && !m["providerType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["providerType"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("resultUrl") != m.end() && !m["resultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["resultUrl"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetParseResultResponseBodyData() = default;
};
class GetParseResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetParseResultResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetParseResultResponseBody() {}

  explicit GetParseResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetParseResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetParseResultResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetParseResultResponseBody() = default;
};
class GetParseResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParseResultResponseBody> body{};

  GetParseResultResponse() {}

  explicit GetParseResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParseResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParseResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetParseResultResponse() = default;
};
class GetQualityCheckTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetQualityCheckTaskResultRequest() {}

  explicit GetQualityCheckTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetQualityCheckTaskResultRequest() = default;
};
class GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> content{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceType{};
  shared_ptr<long> end{};
  shared_ptr<long> id{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};

  GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList() {}

  explicit GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceType) {
      res["customerServiceType"] = boost::any(*customerServiceType);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("begin") != m.end() && !m["begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["begin"]));
    }
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceType") != m.end() && !m["customerServiceType"].empty()) {
      customerServiceType = make_shared<string>(boost::any_cast<string>(m["customerServiceType"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList() = default;
};
class GetQualityCheckTaskResultResponseBodyDataConversationList : public Darabonba::Model {
public:
  shared_ptr<string> callType{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerName{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceName{};
  shared_ptr<vector<GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList>> dialogueList{};
  shared_ptr<string> gmtService{};

  GetQualityCheckTaskResultResponseBodyDataConversationList() {}

  explicit GetQualityCheckTaskResultResponseBodyDataConversationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callType) {
      res["callType"] = boost::any(*callType);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerName) {
      res["customerName"] = boost::any(*customerName);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceName) {
      res["customerServiceName"] = boost::any(*customerServiceName);
    }
    if (dialogueList) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueList"] = boost::any(temp1);
    }
    if (gmtService) {
      res["gmtService"] = boost::any(*gmtService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("callType") != m.end() && !m["callType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["callType"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerName") != m.end() && !m["customerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["customerName"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceName") != m.end() && !m["customerServiceName"].empty()) {
      customerServiceName = make_shared<string>(boost::any_cast<string>(m["customerServiceName"]));
    }
    if (m.find("dialogueList") != m.end() && !m["dialogueList"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueList"].type()) {
        vector<GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueList = make_shared<vector<GetQualityCheckTaskResultResponseBodyDataConversationListDialogueList>>(expect1);
      }
    }
    if (m.find("gmtService") != m.end() && !m["gmtService"].empty()) {
      gmtService = make_shared<string>(boost::any_cast<string>(m["gmtService"]));
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBodyDataConversationList() = default;
};
class GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> content{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceType{};
  shared_ptr<long> end{};
  shared_ptr<long> id{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};

  GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue() {}

  explicit GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceType) {
      res["customerServiceType"] = boost::any(*customerServiceType);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("begin") != m.end() && !m["begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["begin"]));
    }
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceType") != m.end() && !m["customerServiceType"].empty()) {
      customerServiceType = make_shared<string>(boost::any_cast<string>(m["customerServiceType"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue() = default;
};
class GetQualityCheckTaskResultResponseBodyDataQualityCheckList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> checkExplanation{};
  shared_ptr<string> checkPassed{};
  shared_ptr<string> checkProcess{};
  shared_ptr<string> checked{};
  shared_ptr<string> gmtEnd{};
  shared_ptr<string> gmtStart{};
  shared_ptr<string> mode{};
  shared_ptr<vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue>> originDialogue{};
  shared_ptr<string> qualityGroupId{};
  shared_ptr<string> ruleDescription{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};
  shared_ptr<vector<boost::any>> subNodeCol{};

  GetQualityCheckTaskResultResponseBodyDataQualityCheckList() {}

  explicit GetQualityCheckTaskResultResponseBodyDataQualityCheckList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (checkExplanation) {
      res["checkExplanation"] = boost::any(*checkExplanation);
    }
    if (checkPassed) {
      res["checkPassed"] = boost::any(*checkPassed);
    }
    if (checkProcess) {
      res["checkProcess"] = boost::any(*checkProcess);
    }
    if (checked) {
      res["checked"] = boost::any(*checked);
    }
    if (gmtEnd) {
      res["gmtEnd"] = boost::any(*gmtEnd);
    }
    if (gmtStart) {
      res["gmtStart"] = boost::any(*gmtStart);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (originDialogue) {
      vector<boost::any> temp1;
      for(auto item1:*originDialogue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["originDialogue"] = boost::any(temp1);
    }
    if (qualityGroupId) {
      res["qualityGroupId"] = boost::any(*qualityGroupId);
    }
    if (ruleDescription) {
      res["ruleDescription"] = boost::any(*ruleDescription);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["ruleType"] = boost::any(*ruleType);
    }
    if (subNodeCol) {
      res["subNodeCol"] = boost::any(*subNodeCol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("checkExplanation") != m.end() && !m["checkExplanation"].empty()) {
      checkExplanation = make_shared<string>(boost::any_cast<string>(m["checkExplanation"]));
    }
    if (m.find("checkPassed") != m.end() && !m["checkPassed"].empty()) {
      checkPassed = make_shared<string>(boost::any_cast<string>(m["checkPassed"]));
    }
    if (m.find("checkProcess") != m.end() && !m["checkProcess"].empty()) {
      checkProcess = make_shared<string>(boost::any_cast<string>(m["checkProcess"]));
    }
    if (m.find("checked") != m.end() && !m["checked"].empty()) {
      checked = make_shared<string>(boost::any_cast<string>(m["checked"]));
    }
    if (m.find("gmtEnd") != m.end() && !m["gmtEnd"].empty()) {
      gmtEnd = make_shared<string>(boost::any_cast<string>(m["gmtEnd"]));
    }
    if (m.find("gmtStart") != m.end() && !m["gmtStart"].empty()) {
      gmtStart = make_shared<string>(boost::any_cast<string>(m["gmtStart"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("originDialogue") != m.end() && !m["originDialogue"].empty()) {
      if (typeid(vector<boost::any>) == m["originDialogue"].type()) {
        vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["originDialogue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originDialogue = make_shared<vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue>>(expect1);
      }
    }
    if (m.find("qualityGroupId") != m.end() && !m["qualityGroupId"].empty()) {
      qualityGroupId = make_shared<string>(boost::any_cast<string>(m["qualityGroupId"]));
    }
    if (m.find("ruleDescription") != m.end() && !m["ruleDescription"].empty()) {
      ruleDescription = make_shared<string>(boost::any_cast<string>(m["ruleDescription"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
    if (m.find("ruleType") != m.end() && !m["ruleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["ruleType"]));
    }
    if (m.find("subNodeCol") != m.end() && !m["subNodeCol"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["subNodeCol"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["subNodeCol"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      subNodeCol = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBodyDataQualityCheckList() = default;
};
class GetQualityCheckTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetQualityCheckTaskResultResponseBodyDataConversationList> conversationList{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtEnd{};
  shared_ptr<string> gmtStart{};
  shared_ptr<vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckList>> qualityCheckList{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  GetQualityCheckTaskResultResponseBodyData() {}

  explicit GetQualityCheckTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationList) {
      res["conversationList"] = conversationList ? boost::any(conversationList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtEnd) {
      res["gmtEnd"] = boost::any(*gmtEnd);
    }
    if (gmtStart) {
      res["gmtStart"] = boost::any(*gmtStart);
    }
    if (qualityCheckList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityCheckList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["qualityCheckList"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conversationList") != m.end() && !m["conversationList"].empty()) {
      if (typeid(map<string, boost::any>) == m["conversationList"].type()) {
        GetQualityCheckTaskResultResponseBodyDataConversationList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["conversationList"]));
        conversationList = make_shared<GetQualityCheckTaskResultResponseBodyDataConversationList>(model1);
      }
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtEnd") != m.end() && !m["gmtEnd"].empty()) {
      gmtEnd = make_shared<string>(boost::any_cast<string>(m["gmtEnd"]));
    }
    if (m.find("gmtStart") != m.end() && !m["gmtStart"].empty()) {
      gmtStart = make_shared<string>(boost::any_cast<string>(m["gmtStart"]));
    }
    if (m.find("qualityCheckList") != m.end() && !m["qualityCheckList"].empty()) {
      if (typeid(vector<boost::any>) == m["qualityCheckList"].type()) {
        vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["qualityCheckList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQualityCheckTaskResultResponseBodyDataQualityCheckList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityCheckList = make_shared<vector<GetQualityCheckTaskResultResponseBodyDataQualityCheckList>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBodyData() = default;
};
class GetQualityCheckTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetQualityCheckTaskResultResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetQualityCheckTaskResultResponseBody() {}

  explicit GetQualityCheckTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetQualityCheckTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetQualityCheckTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetQualityCheckTaskResultResponseBody() = default;
};
class GetQualityCheckTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQualityCheckTaskResultResponseBody> body{};

  GetQualityCheckTaskResultResponse() {}

  explicit GetQualityCheckTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQualityCheckTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualityCheckTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualityCheckTaskResultResponse() = default;
};
class GetSummaryTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetSummaryTaskResultRequest() {}

  explicit GetSummaryTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetSummaryTaskResultRequest() = default;
};
class GetSummaryTaskResultResponseBodyDataChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};
  shared_ptr<vector<map<string, boost::any>>> toolCalls{};

  GetSummaryTaskResultResponseBodyDataChoicesMessage() {}

  explicit GetSummaryTaskResultResponseBodyDataChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (toolCalls) {
      res["toolCalls"] = boost::any(*toolCalls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("toolCalls") != m.end() && !m["toolCalls"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["toolCalls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["toolCalls"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      toolCalls = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetSummaryTaskResultResponseBodyDataChoicesMessage() = default;
};
class GetSummaryTaskResultResponseBodyDataChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<long> index{};
  shared_ptr<GetSummaryTaskResultResponseBodyDataChoicesMessage> message{};

  GetSummaryTaskResultResponseBodyDataChoices() {}

  explicit GetSummaryTaskResultResponseBodyDataChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        GetSummaryTaskResultResponseBodyDataChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<GetSummaryTaskResultResponseBodyDataChoicesMessage>(model1);
      }
    }
  }


  virtual ~GetSummaryTaskResultResponseBodyDataChoices() = default;
};
class GetSummaryTaskResultResponseBodyDataUsage : public Darabonba::Model {
public:
  shared_ptr<long> imageCount{};
  shared_ptr<long> imageTokens{};
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetSummaryTaskResultResponseBodyDataUsage() {}

  explicit GetSummaryTaskResultResponseBodyDataUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (imageTokens) {
      res["imageTokens"] = boost::any(*imageTokens);
    }
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("imageTokens") != m.end() && !m["imageTokens"].empty()) {
      imageTokens = make_shared<long>(boost::any_cast<long>(m["imageTokens"]));
    }
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetSummaryTaskResultResponseBodyDataUsage() = default;
};
class GetSummaryTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetSummaryTaskResultResponseBodyDataChoices>> choices{};
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> modelId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> time{};
  shared_ptr<long> totalTokens{};
  shared_ptr<GetSummaryTaskResultResponseBodyDataUsage> usage{};

  GetSummaryTaskResultResponseBodyData() {}

  explicit GetSummaryTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<GetSummaryTaskResultResponseBodyDataChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSummaryTaskResultResponseBodyDataChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<GetSummaryTaskResultResponseBodyDataChoices>>(expect1);
      }
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetSummaryTaskResultResponseBodyDataUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetSummaryTaskResultResponseBodyDataUsage>(model1);
      }
    }
  }


  virtual ~GetSummaryTaskResultResponseBodyData() = default;
};
class GetSummaryTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<GetSummaryTaskResultResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetSummaryTaskResultResponseBody() {}

  explicit GetSummaryTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetSummaryTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetSummaryTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetSummaryTaskResultResponseBody() = default;
};
class GetSummaryTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSummaryTaskResultResponseBody> body{};

  GetSummaryTaskResultResponse() {}

  explicit GetSummaryTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSummaryTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSummaryTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetSummaryTaskResultResponse() = default;
};
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetTaskResultResponseBody() {}

  explicit GetTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetTaskResultResponseBody() = default;
};
class GetTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResultResponseBody> body{};

  GetTaskResultResponse() {}

  explicit GetTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponse() = default;
};
class GetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskStatusRequest() {}

  explicit GetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskStatusRequest() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class InvokePluginRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> pluginId{};

  InvokePluginRequest() {}

  explicit InvokePluginRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (pluginId) {
      res["pluginId"] = boost::any(*pluginId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("pluginId") != m.end() && !m["pluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["pluginId"]));
    }
  }


  virtual ~InvokePluginRequest() = default;
};
class InvokePluginResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  InvokePluginResponseBody() {}

  explicit InvokePluginResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~InvokePluginResponseBody() = default;
};
class InvokePluginResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvokePluginResponseBody> body{};

  InvokePluginResponse() {}

  explicit InvokePluginResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvokePluginResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokePluginResponseBody>(model1);
      }
    }
  }


  virtual ~InvokePluginResponse() = default;
};
class PreviewDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentId{};

  PreviewDocumentRequest() {}

  explicit PreviewDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentId) {
      res["documentId"] = boost::any(*documentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentId") != m.end() && !m["documentId"].empty()) {
      documentId = make_shared<string>(boost::any_cast<string>(m["documentId"]));
    }
  }


  virtual ~PreviewDocumentRequest() = default;
};
class PreviewDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> previewType{};
  shared_ptr<string> title{};
  shared_ptr<string> uploadTime{};
  shared_ptr<string> url{};

  PreviewDocumentResponseBodyData() {}

  explicit PreviewDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (previewType) {
      res["previewType"] = boost::any(*previewType);
    }
    if (title) {
      res["title"] = boost::any(*title);
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
    if (m.find("previewType") != m.end() && !m["previewType"].empty()) {
      previewType = make_shared<string>(boost::any_cast<string>(m["previewType"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("uploadTime") != m.end() && !m["uploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["uploadTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~PreviewDocumentResponseBodyData() = default;
};
class PreviewDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<PreviewDocumentResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  PreviewDocumentResponseBody() {}

  explicit PreviewDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PreviewDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PreviewDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~PreviewDocumentResponseBody() = default;
};
class PreviewDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreviewDocumentResponseBody> body{};

  PreviewDocumentResponse() {}

  explicit PreviewDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PreviewDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreviewDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~PreviewDocumentResponse() = default;
};
class ReIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentId{};

  ReIndexRequest() {}

  explicit ReIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentId) {
      res["documentId"] = boost::any(*documentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentId") != m.end() && !m["documentId"].empty()) {
      documentId = make_shared<string>(boost::any_cast<string>(m["documentId"]));
    }
  }


  virtual ~ReIndexRequest() = default;
};
class ReIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  ReIndexResponseBody() {}

  explicit ReIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~ReIndexResponseBody() = default;
};
class ReIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReIndexResponseBody> body{};

  ReIndexResponse() {}

  explicit ReIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReIndexResponseBody>(model1);
      }
    }
  }


  virtual ~ReIndexResponse() = default;
};
class RealTimeDialogRequestConversationModel : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> content{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerServiceId{};
  shared_ptr<string> customerServiceType{};
  shared_ptr<long> end{};
  shared_ptr<long> role{};
  shared_ptr<string> type{};

  RealTimeDialogRequestConversationModel() {}

  explicit RealTimeDialogRequestConversationModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["begin"] = boost::any(*begin);
    }
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (customerId) {
      res["customerId"] = boost::any(*customerId);
    }
    if (customerServiceId) {
      res["customerServiceId"] = boost::any(*customerServiceId);
    }
    if (customerServiceType) {
      res["customerServiceType"] = boost::any(*customerServiceType);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("begin") != m.end() && !m["begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["begin"]));
    }
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["beginTime"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("customerId") != m.end() && !m["customerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["customerId"]));
    }
    if (m.find("customerServiceId") != m.end() && !m["customerServiceId"].empty()) {
      customerServiceId = make_shared<string>(boost::any_cast<string>(m["customerServiceId"]));
    }
    if (m.find("customerServiceType") != m.end() && !m["customerServiceType"].empty()) {
      customerServiceType = make_shared<string>(boost::any_cast<string>(m["customerServiceType"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["role"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~RealTimeDialogRequestConversationModel() = default;
};
class RealTimeDialogRequest : public Darabonba::Model {
public:
  shared_ptr<bool> analysis{};
  shared_ptr<string> bizType{};
  shared_ptr<vector<RealTimeDialogRequestConversationModel>> conversationModel{};
  shared_ptr<long> dialogMemoryTurns{};
  shared_ptr<map<string, boost::any>> metaData{};
  shared_ptr<bool> recommend{};
  shared_ptr<string> scriptContentPlayed{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<bool> userVad{};

  RealTimeDialogRequest() {}

  explicit RealTimeDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysis) {
      res["analysis"] = boost::any(*analysis);
    }
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (conversationModel) {
      vector<boost::any> temp1;
      for(auto item1:*conversationModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conversationModel"] = boost::any(temp1);
    }
    if (dialogMemoryTurns) {
      res["dialogMemoryTurns"] = boost::any(*dialogMemoryTurns);
    }
    if (metaData) {
      res["metaData"] = boost::any(*metaData);
    }
    if (recommend) {
      res["recommend"] = boost::any(*recommend);
    }
    if (scriptContentPlayed) {
      res["scriptContentPlayed"] = boost::any(*scriptContentPlayed);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (userVad) {
      res["userVad"] = boost::any(*userVad);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysis") != m.end() && !m["analysis"].empty()) {
      analysis = make_shared<bool>(boost::any_cast<bool>(m["analysis"]));
    }
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("conversationModel") != m.end() && !m["conversationModel"].empty()) {
      if (typeid(vector<boost::any>) == m["conversationModel"].type()) {
        vector<RealTimeDialogRequestConversationModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conversationModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RealTimeDialogRequestConversationModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversationModel = make_shared<vector<RealTimeDialogRequestConversationModel>>(expect1);
      }
    }
    if (m.find("dialogMemoryTurns") != m.end() && !m["dialogMemoryTurns"].empty()) {
      dialogMemoryTurns = make_shared<long>(boost::any_cast<long>(m["dialogMemoryTurns"]));
    }
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metaData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("recommend") != m.end() && !m["recommend"].empty()) {
      recommend = make_shared<bool>(boost::any_cast<bool>(m["recommend"]));
    }
    if (m.find("scriptContentPlayed") != m.end() && !m["scriptContentPlayed"].empty()) {
      scriptContentPlayed = make_shared<string>(boost::any_cast<string>(m["scriptContentPlayed"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("userVad") != m.end() && !m["userVad"].empty()) {
      userVad = make_shared<bool>(boost::any_cast<bool>(m["userVad"]));
    }
  }


  virtual ~RealTimeDialogRequest() = default;
};
class RealTimeDialogResponseBodyChoicesDelta : public Darabonba::Model {
public:
  shared_ptr<string> analysisProcess{};
  shared_ptr<string> callTime{};
  shared_ptr<bool> hangUpDialog{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionName{};
  shared_ptr<string> intentionScript{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> recommendIntention{};
  shared_ptr<string> recommendScript{};
  shared_ptr<string> selfDirectedScript{};
  shared_ptr<string> selfDirectedScriptFullContent{};

  RealTimeDialogResponseBodyChoicesDelta() {}

  explicit RealTimeDialogResponseBodyChoicesDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisProcess) {
      res["analysisProcess"] = boost::any(*analysisProcess);
    }
    if (callTime) {
      res["callTime"] = boost::any(*callTime);
    }
    if (hangUpDialog) {
      res["hangUpDialog"] = boost::any(*hangUpDialog);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionName) {
      res["intentionName"] = boost::any(*intentionName);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    if (interrupt) {
      res["interrupt"] = boost::any(*interrupt);
    }
    if (recommendIntention) {
      res["recommendIntention"] = boost::any(*recommendIntention);
    }
    if (recommendScript) {
      res["recommendScript"] = boost::any(*recommendScript);
    }
    if (selfDirectedScript) {
      res["selfDirectedScript"] = boost::any(*selfDirectedScript);
    }
    if (selfDirectedScriptFullContent) {
      res["selfDirectedScriptFullContent"] = boost::any(*selfDirectedScriptFullContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisProcess") != m.end() && !m["analysisProcess"].empty()) {
      analysisProcess = make_shared<string>(boost::any_cast<string>(m["analysisProcess"]));
    }
    if (m.find("callTime") != m.end() && !m["callTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["callTime"]));
    }
    if (m.find("hangUpDialog") != m.end() && !m["hangUpDialog"].empty()) {
      hangUpDialog = make_shared<bool>(boost::any_cast<bool>(m["hangUpDialog"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionName") != m.end() && !m["intentionName"].empty()) {
      intentionName = make_shared<string>(boost::any_cast<string>(m["intentionName"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
    if (m.find("interrupt") != m.end() && !m["interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["interrupt"]));
    }
    if (m.find("recommendIntention") != m.end() && !m["recommendIntention"].empty()) {
      recommendIntention = make_shared<string>(boost::any_cast<string>(m["recommendIntention"]));
    }
    if (m.find("recommendScript") != m.end() && !m["recommendScript"].empty()) {
      recommendScript = make_shared<string>(boost::any_cast<string>(m["recommendScript"]));
    }
    if (m.find("selfDirectedScript") != m.end() && !m["selfDirectedScript"].empty()) {
      selfDirectedScript = make_shared<string>(boost::any_cast<string>(m["selfDirectedScript"]));
    }
    if (m.find("selfDirectedScriptFullContent") != m.end() && !m["selfDirectedScriptFullContent"].empty()) {
      selfDirectedScriptFullContent = make_shared<string>(boost::any_cast<string>(m["selfDirectedScriptFullContent"]));
    }
  }


  virtual ~RealTimeDialogResponseBodyChoicesDelta() = default;
};
class RealTimeDialogResponseBodyChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> analysisProcess{};
  shared_ptr<string> callTime{};
  shared_ptr<bool> hangUpDialog{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionName{};
  shared_ptr<string> intentionScript{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> recommendIntention{};
  shared_ptr<string> recommendScript{};
  shared_ptr<string> selfDirectedScript{};
  shared_ptr<string> selfDirectedScriptFullContent{};

  RealTimeDialogResponseBodyChoicesMessage() {}

  explicit RealTimeDialogResponseBodyChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisProcess) {
      res["analysisProcess"] = boost::any(*analysisProcess);
    }
    if (callTime) {
      res["callTime"] = boost::any(*callTime);
    }
    if (hangUpDialog) {
      res["hangUpDialog"] = boost::any(*hangUpDialog);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionName) {
      res["intentionName"] = boost::any(*intentionName);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    if (interrupt) {
      res["interrupt"] = boost::any(*interrupt);
    }
    if (recommendIntention) {
      res["recommendIntention"] = boost::any(*recommendIntention);
    }
    if (recommendScript) {
      res["recommendScript"] = boost::any(*recommendScript);
    }
    if (selfDirectedScript) {
      res["selfDirectedScript"] = boost::any(*selfDirectedScript);
    }
    if (selfDirectedScriptFullContent) {
      res["selfDirectedScriptFullContent"] = boost::any(*selfDirectedScriptFullContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisProcess") != m.end() && !m["analysisProcess"].empty()) {
      analysisProcess = make_shared<string>(boost::any_cast<string>(m["analysisProcess"]));
    }
    if (m.find("callTime") != m.end() && !m["callTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["callTime"]));
    }
    if (m.find("hangUpDialog") != m.end() && !m["hangUpDialog"].empty()) {
      hangUpDialog = make_shared<bool>(boost::any_cast<bool>(m["hangUpDialog"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionName") != m.end() && !m["intentionName"].empty()) {
      intentionName = make_shared<string>(boost::any_cast<string>(m["intentionName"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
    if (m.find("interrupt") != m.end() && !m["interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["interrupt"]));
    }
    if (m.find("recommendIntention") != m.end() && !m["recommendIntention"].empty()) {
      recommendIntention = make_shared<string>(boost::any_cast<string>(m["recommendIntention"]));
    }
    if (m.find("recommendScript") != m.end() && !m["recommendScript"].empty()) {
      recommendScript = make_shared<string>(boost::any_cast<string>(m["recommendScript"]));
    }
    if (m.find("selfDirectedScript") != m.end() && !m["selfDirectedScript"].empty()) {
      selfDirectedScript = make_shared<string>(boost::any_cast<string>(m["selfDirectedScript"]));
    }
    if (m.find("selfDirectedScriptFullContent") != m.end() && !m["selfDirectedScriptFullContent"].empty()) {
      selfDirectedScriptFullContent = make_shared<string>(boost::any_cast<string>(m["selfDirectedScriptFullContent"]));
    }
  }


  virtual ~RealTimeDialogResponseBodyChoicesMessage() = default;
};
class RealTimeDialogResponseBodyChoices : public Darabonba::Model {
public:
  shared_ptr<RealTimeDialogResponseBodyChoicesDelta> delta{};
  shared_ptr<string> finishReason{};
  shared_ptr<long> index{};
  shared_ptr<RealTimeDialogResponseBodyChoicesMessage> message{};

  RealTimeDialogResponseBodyChoices() {}

  explicit RealTimeDialogResponseBodyChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delta) {
      res["delta"] = delta ? boost::any(delta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("delta") != m.end() && !m["delta"].empty()) {
      if (typeid(map<string, boost::any>) == m["delta"].type()) {
        RealTimeDialogResponseBodyChoicesDelta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["delta"]));
        delta = make_shared<RealTimeDialogResponseBodyChoicesDelta>(model1);
      }
    }
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        RealTimeDialogResponseBodyChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<RealTimeDialogResponseBodyChoicesMessage>(model1);
      }
    }
  }


  virtual ~RealTimeDialogResponseBodyChoices() = default;
};
class RealTimeDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RealTimeDialogResponseBodyChoices>> choices{};
  shared_ptr<string> created{};
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RealTimeDialogResponseBody() {}

  explicit RealTimeDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
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
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<RealTimeDialogResponseBodyChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RealTimeDialogResponseBodyChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<RealTimeDialogResponseBodyChoices>>(expect1);
      }
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RealTimeDialogResponseBody() = default;
};
class RealTimeDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RealTimeDialogResponseBody> body{};

  RealTimeDialogResponse() {}

  explicit RealTimeDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RealTimeDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RealTimeDialogResponseBody>(model1);
      }
    }
  }


  virtual ~RealTimeDialogResponse() = default;
};
class RebuildTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> taskIds{};

  RebuildTaskRequest() {}

  explicit RebuildTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskIds") != m.end() && !m["taskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["taskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["taskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RebuildTaskRequest() = default;
};
class RebuildTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  RebuildTaskResponseBody() {}

  explicit RebuildTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RebuildTaskResponseBody() = default;
};
class RebuildTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebuildTaskResponseBody> body{};

  RebuildTaskResponse() {}

  explicit RebuildTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebuildTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebuildTaskResponseBody>(model1);
      }
    }
  }


  virtual ~RebuildTaskResponse() = default;
};
class RecallDocumentRequestFiltersAnd : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  RecallDocumentRequestFiltersAnd() {}

  explicit RecallDocumentRequestFiltersAnd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~RecallDocumentRequestFiltersAnd() = default;
};
class RecallDocumentRequestFiltersOr : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  RecallDocumentRequestFiltersOr() {}

  explicit RecallDocumentRequestFiltersOr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~RecallDocumentRequestFiltersOr() = default;
};
class RecallDocumentRequestFilters : public Darabonba::Model {
public:
  shared_ptr<vector<RecallDocumentRequestFiltersAnd>> and_{};
  shared_ptr<string> chunkType{};
  shared_ptr<vector<string>> docIdList{};
  shared_ptr<string> libraryId{};
  shared_ptr<vector<RecallDocumentRequestFiltersOr>> or_{};
  shared_ptr<vector<string>> status{};

  RecallDocumentRequestFilters() {}

  explicit RecallDocumentRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (and_) {
      vector<boost::any> temp1;
      for(auto item1:*and_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["and"] = boost::any(temp1);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docIdList) {
      res["docIdList"] = boost::any(*docIdList);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (or_) {
      vector<boost::any> temp1;
      for(auto item1:*or_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["or"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("and") != m.end() && !m["and"].empty()) {
      if (typeid(vector<boost::any>) == m["and"].type()) {
        vector<RecallDocumentRequestFiltersAnd> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["and"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentRequestFiltersAnd model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        and_ = make_shared<vector<RecallDocumentRequestFiltersAnd>>(expect1);
      }
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
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
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("or") != m.end() && !m["or"].empty()) {
      if (typeid(vector<boost::any>) == m["or"].type()) {
        vector<RecallDocumentRequestFiltersOr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["or"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentRequestFiltersOr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        or_ = make_shared<vector<RecallDocumentRequestFiltersOr>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecallDocumentRequestFilters() = default;
};
class RecallDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecallDocumentRequestFilters>> filters{};
  shared_ptr<string> query{};
  shared_ptr<bool> rearrangement{};
  shared_ptr<long> topK{};

  RecallDocumentRequest() {}

  explicit RecallDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["filters"] = boost::any(temp1);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (rearrangement) {
      res["rearrangement"] = boost::any(*rearrangement);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filters") != m.end() && !m["filters"].empty()) {
      if (typeid(vector<boost::any>) == m["filters"].type()) {
        vector<RecallDocumentRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<RecallDocumentRequestFilters>>(expect1);
      }
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("rearrangement") != m.end() && !m["rearrangement"].empty()) {
      rearrangement = make_shared<bool>(boost::any_cast<bool>(m["rearrangement"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~RecallDocumentRequest() = default;
};
class RecallDocumentResponseBodyDataChunkListPos : public Darabonba::Model {
public:
  shared_ptr<vector<double>> axisArray{};
  shared_ptr<long> page{};
  shared_ptr<vector<long>> textHighlightArea{};

  RecallDocumentResponseBodyDataChunkListPos() {}

  explicit RecallDocumentResponseBodyDataChunkListPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axisArray) {
      res["axisArray"] = boost::any(*axisArray);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (textHighlightArea) {
      res["textHighlightArea"] = boost::any(*textHighlightArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("axisArray") != m.end() && !m["axisArray"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["axisArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["axisArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      axisArray = make_shared<vector<double>>(toVec1);
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("textHighlightArea") != m.end() && !m["textHighlightArea"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textHighlightArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textHighlightArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textHighlightArea = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecallDocumentResponseBodyDataChunkListPos() = default;
};
class RecallDocumentResponseBodyDataChunkList : public Darabonba::Model {
public:
  shared_ptr<string> chunkId{};
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<string> chunkOssUrl{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};
  shared_ptr<string> docId{};
  shared_ptr<string> fileType{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};
  shared_ptr<string> nextChunkId{};
  shared_ptr<vector<RecallDocumentResponseBodyDataChunkListPos>> pos{};
  shared_ptr<string> preChunkId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  RecallDocumentResponseBodyDataChunkList() {}

  explicit RecallDocumentResponseBodyDataChunkList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkId) {
      res["chunkId"] = boost::any(*chunkId);
    }
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOssUrl) {
      res["chunkOssUrl"] = boost::any(*chunkOssUrl);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    if (nextChunkId) {
      res["nextChunkId"] = boost::any(*nextChunkId);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (preChunkId) {
      res["preChunkId"] = boost::any(*preChunkId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkId") != m.end() && !m["chunkId"].empty()) {
      chunkId = make_shared<string>(boost::any_cast<string>(m["chunkId"]));
    }
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOssUrl") != m.end() && !m["chunkOssUrl"].empty()) {
      chunkOssUrl = make_shared<string>(boost::any_cast<string>(m["chunkOssUrl"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
    if (m.find("nextChunkId") != m.end() && !m["nextChunkId"].empty()) {
      nextChunkId = make_shared<string>(boost::any_cast<string>(m["nextChunkId"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<RecallDocumentResponseBodyDataChunkListPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataChunkListPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<RecallDocumentResponseBodyDataChunkListPos>>(expect1);
      }
    }
    if (m.find("preChunkId") != m.end() && !m["preChunkId"].empty()) {
      preChunkId = make_shared<string>(boost::any_cast<string>(m["preChunkId"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~RecallDocumentResponseBodyDataChunkList() = default;
};
class RecallDocumentResponseBodyDataChunkPartListPos : public Darabonba::Model {
public:
  shared_ptr<vector<double>> axisArray{};
  shared_ptr<long> page{};
  shared_ptr<vector<long>> textHighlightArea{};

  RecallDocumentResponseBodyDataChunkPartListPos() {}

  explicit RecallDocumentResponseBodyDataChunkPartListPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axisArray) {
      res["axisArray"] = boost::any(*axisArray);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (textHighlightArea) {
      res["textHighlightArea"] = boost::any(*textHighlightArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("axisArray") != m.end() && !m["axisArray"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["axisArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["axisArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      axisArray = make_shared<vector<double>>(toVec1);
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("textHighlightArea") != m.end() && !m["textHighlightArea"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textHighlightArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textHighlightArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textHighlightArea = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecallDocumentResponseBodyDataChunkPartListPos() = default;
};
class RecallDocumentResponseBodyDataChunkPartList : public Darabonba::Model {
public:
  shared_ptr<string> chunkId{};
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<string> chunkOssUrl{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};
  shared_ptr<string> docId{};
  shared_ptr<string> fileType{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};
  shared_ptr<string> nextChunkId{};
  shared_ptr<vector<RecallDocumentResponseBodyDataChunkPartListPos>> pos{};
  shared_ptr<string> preChunkId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  RecallDocumentResponseBodyDataChunkPartList() {}

  explicit RecallDocumentResponseBodyDataChunkPartList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkId) {
      res["chunkId"] = boost::any(*chunkId);
    }
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOssUrl) {
      res["chunkOssUrl"] = boost::any(*chunkOssUrl);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    if (nextChunkId) {
      res["nextChunkId"] = boost::any(*nextChunkId);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (preChunkId) {
      res["preChunkId"] = boost::any(*preChunkId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkId") != m.end() && !m["chunkId"].empty()) {
      chunkId = make_shared<string>(boost::any_cast<string>(m["chunkId"]));
    }
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOssUrl") != m.end() && !m["chunkOssUrl"].empty()) {
      chunkOssUrl = make_shared<string>(boost::any_cast<string>(m["chunkOssUrl"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
    if (m.find("nextChunkId") != m.end() && !m["nextChunkId"].empty()) {
      nextChunkId = make_shared<string>(boost::any_cast<string>(m["nextChunkId"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<RecallDocumentResponseBodyDataChunkPartListPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataChunkPartListPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<RecallDocumentResponseBodyDataChunkPartListPos>>(expect1);
      }
    }
    if (m.find("preChunkId") != m.end() && !m["preChunkId"].empty()) {
      preChunkId = make_shared<string>(boost::any_cast<string>(m["preChunkId"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~RecallDocumentResponseBodyDataChunkPartList() = default;
};
class RecallDocumentResponseBodyDataDocuments : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<map<string, boost::any>> documentMeta{};
  shared_ptr<string> fileType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  RecallDocumentResponseBodyDataDocuments() {}

  explicit RecallDocumentResponseBodyDataDocuments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (documentMeta) {
      res["documentMeta"] = boost::any(*documentMeta);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("documentMeta") != m.end() && !m["documentMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["documentMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      documentMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RecallDocumentResponseBodyDataDocuments() = default;
};
class RecallDocumentResponseBodyDataTextChunkListPos : public Darabonba::Model {
public:
  shared_ptr<vector<double>> axisArray{};
  shared_ptr<long> page{};
  shared_ptr<vector<long>> textHighlightArea{};

  RecallDocumentResponseBodyDataTextChunkListPos() {}

  explicit RecallDocumentResponseBodyDataTextChunkListPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axisArray) {
      res["axisArray"] = boost::any(*axisArray);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (textHighlightArea) {
      res["textHighlightArea"] = boost::any(*textHighlightArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("axisArray") != m.end() && !m["axisArray"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["axisArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["axisArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      axisArray = make_shared<vector<double>>(toVec1);
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("textHighlightArea") != m.end() && !m["textHighlightArea"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textHighlightArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textHighlightArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textHighlightArea = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecallDocumentResponseBodyDataTextChunkListPos() = default;
};
class RecallDocumentResponseBodyDataTextChunkList : public Darabonba::Model {
public:
  shared_ptr<string> chunkId{};
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<string> chunkOssUrl{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};
  shared_ptr<string> docId{};
  shared_ptr<string> fileType{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};
  shared_ptr<string> nextChunkId{};
  shared_ptr<vector<RecallDocumentResponseBodyDataTextChunkListPos>> pos{};
  shared_ptr<string> preChunkId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  RecallDocumentResponseBodyDataTextChunkList() {}

  explicit RecallDocumentResponseBodyDataTextChunkList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkId) {
      res["chunkId"] = boost::any(*chunkId);
    }
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOssUrl) {
      res["chunkOssUrl"] = boost::any(*chunkOssUrl);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    if (nextChunkId) {
      res["nextChunkId"] = boost::any(*nextChunkId);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (preChunkId) {
      res["preChunkId"] = boost::any(*preChunkId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkId") != m.end() && !m["chunkId"].empty()) {
      chunkId = make_shared<string>(boost::any_cast<string>(m["chunkId"]));
    }
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOssUrl") != m.end() && !m["chunkOssUrl"].empty()) {
      chunkOssUrl = make_shared<string>(boost::any_cast<string>(m["chunkOssUrl"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
    if (m.find("nextChunkId") != m.end() && !m["nextChunkId"].empty()) {
      nextChunkId = make_shared<string>(boost::any_cast<string>(m["nextChunkId"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<RecallDocumentResponseBodyDataTextChunkListPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataTextChunkListPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<RecallDocumentResponseBodyDataTextChunkListPos>>(expect1);
      }
    }
    if (m.find("preChunkId") != m.end() && !m["preChunkId"].empty()) {
      preChunkId = make_shared<string>(boost::any_cast<string>(m["preChunkId"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~RecallDocumentResponseBodyDataTextChunkList() = default;
};
class RecallDocumentResponseBodyDataVectorChunkListPos : public Darabonba::Model {
public:
  shared_ptr<vector<double>> axisArray{};
  shared_ptr<long> page{};
  shared_ptr<vector<long>> textHighlightArea{};

  RecallDocumentResponseBodyDataVectorChunkListPos() {}

  explicit RecallDocumentResponseBodyDataVectorChunkListPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axisArray) {
      res["axisArray"] = boost::any(*axisArray);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (textHighlightArea) {
      res["textHighlightArea"] = boost::any(*textHighlightArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("axisArray") != m.end() && !m["axisArray"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["axisArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["axisArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      axisArray = make_shared<vector<double>>(toVec1);
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("textHighlightArea") != m.end() && !m["textHighlightArea"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textHighlightArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textHighlightArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textHighlightArea = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecallDocumentResponseBodyDataVectorChunkListPos() = default;
};
class RecallDocumentResponseBodyDataVectorChunkList : public Darabonba::Model {
public:
  shared_ptr<string> chunkId{};
  shared_ptr<map<string, boost::any>> chunkMeta{};
  shared_ptr<string> chunkOssUrl{};
  shared_ptr<string> chunkText{};
  shared_ptr<string> chunkType{};
  shared_ptr<string> docId{};
  shared_ptr<string> fileType{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};
  shared_ptr<string> nextChunkId{};
  shared_ptr<vector<RecallDocumentResponseBodyDataVectorChunkListPos>> pos{};
  shared_ptr<string> preChunkId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  RecallDocumentResponseBodyDataVectorChunkList() {}

  explicit RecallDocumentResponseBodyDataVectorChunkList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkId) {
      res["chunkId"] = boost::any(*chunkId);
    }
    if (chunkMeta) {
      res["chunkMeta"] = boost::any(*chunkMeta);
    }
    if (chunkOssUrl) {
      res["chunkOssUrl"] = boost::any(*chunkOssUrl);
    }
    if (chunkText) {
      res["chunkText"] = boost::any(*chunkText);
    }
    if (chunkType) {
      res["chunkType"] = boost::any(*chunkType);
    }
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    if (nextChunkId) {
      res["nextChunkId"] = boost::any(*nextChunkId);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (preChunkId) {
      res["preChunkId"] = boost::any(*preChunkId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkId") != m.end() && !m["chunkId"].empty()) {
      chunkId = make_shared<string>(boost::any_cast<string>(m["chunkId"]));
    }
    if (m.find("chunkMeta") != m.end() && !m["chunkMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["chunkMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chunkMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("chunkOssUrl") != m.end() && !m["chunkOssUrl"].empty()) {
      chunkOssUrl = make_shared<string>(boost::any_cast<string>(m["chunkOssUrl"]));
    }
    if (m.find("chunkText") != m.end() && !m["chunkText"].empty()) {
      chunkText = make_shared<string>(boost::any_cast<string>(m["chunkText"]));
    }
    if (m.find("chunkType") != m.end() && !m["chunkType"].empty()) {
      chunkType = make_shared<string>(boost::any_cast<string>(m["chunkType"]));
    }
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
    if (m.find("nextChunkId") != m.end() && !m["nextChunkId"].empty()) {
      nextChunkId = make_shared<string>(boost::any_cast<string>(m["nextChunkId"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<RecallDocumentResponseBodyDataVectorChunkListPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataVectorChunkListPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<RecallDocumentResponseBodyDataVectorChunkListPos>>(expect1);
      }
    }
    if (m.find("preChunkId") != m.end() && !m["preChunkId"].empty()) {
      preChunkId = make_shared<string>(boost::any_cast<string>(m["preChunkId"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~RecallDocumentResponseBodyDataVectorChunkList() = default;
};
class RecallDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecallDocumentResponseBodyDataChunkList>> chunkList{};
  shared_ptr<vector<RecallDocumentResponseBodyDataChunkPartList>> chunkPartList{};
  shared_ptr<vector<string>> chunkTextList{};
  shared_ptr<vector<RecallDocumentResponseBodyDataDocuments>> documents{};
  shared_ptr<long> embeddingElapsedMs{};
  shared_ptr<vector<RecallDocumentResponseBodyDataTextChunkList>> textChunkList{};
  shared_ptr<long> textSearchElapsedMs{};
  shared_ptr<long> totalElapsedMs{};
  shared_ptr<vector<RecallDocumentResponseBodyDataVectorChunkList>> vectorChunkList{};
  shared_ptr<long> vectorSearchElapsedMs{};

  RecallDocumentResponseBodyData() {}

  explicit RecallDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkList) {
      vector<boost::any> temp1;
      for(auto item1:*chunkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["chunkList"] = boost::any(temp1);
    }
    if (chunkPartList) {
      vector<boost::any> temp1;
      for(auto item1:*chunkPartList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["chunkPartList"] = boost::any(temp1);
    }
    if (chunkTextList) {
      res["chunkTextList"] = boost::any(*chunkTextList);
    }
    if (documents) {
      vector<boost::any> temp1;
      for(auto item1:*documents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["documents"] = boost::any(temp1);
    }
    if (embeddingElapsedMs) {
      res["embeddingElapsedMs"] = boost::any(*embeddingElapsedMs);
    }
    if (textChunkList) {
      vector<boost::any> temp1;
      for(auto item1:*textChunkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textChunkList"] = boost::any(temp1);
    }
    if (textSearchElapsedMs) {
      res["textSearchElapsedMs"] = boost::any(*textSearchElapsedMs);
    }
    if (totalElapsedMs) {
      res["totalElapsedMs"] = boost::any(*totalElapsedMs);
    }
    if (vectorChunkList) {
      vector<boost::any> temp1;
      for(auto item1:*vectorChunkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vectorChunkList"] = boost::any(temp1);
    }
    if (vectorSearchElapsedMs) {
      res["vectorSearchElapsedMs"] = boost::any(*vectorSearchElapsedMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkList") != m.end() && !m["chunkList"].empty()) {
      if (typeid(vector<boost::any>) == m["chunkList"].type()) {
        vector<RecallDocumentResponseBodyDataChunkList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["chunkList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataChunkList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chunkList = make_shared<vector<RecallDocumentResponseBodyDataChunkList>>(expect1);
      }
    }
    if (m.find("chunkPartList") != m.end() && !m["chunkPartList"].empty()) {
      if (typeid(vector<boost::any>) == m["chunkPartList"].type()) {
        vector<RecallDocumentResponseBodyDataChunkPartList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["chunkPartList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataChunkPartList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chunkPartList = make_shared<vector<RecallDocumentResponseBodyDataChunkPartList>>(expect1);
      }
    }
    if (m.find("chunkTextList") != m.end() && !m["chunkTextList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["chunkTextList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["chunkTextList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      chunkTextList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      if (typeid(vector<boost::any>) == m["documents"].type()) {
        vector<RecallDocumentResponseBodyDataDocuments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["documents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataDocuments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documents = make_shared<vector<RecallDocumentResponseBodyDataDocuments>>(expect1);
      }
    }
    if (m.find("embeddingElapsedMs") != m.end() && !m["embeddingElapsedMs"].empty()) {
      embeddingElapsedMs = make_shared<long>(boost::any_cast<long>(m["embeddingElapsedMs"]));
    }
    if (m.find("textChunkList") != m.end() && !m["textChunkList"].empty()) {
      if (typeid(vector<boost::any>) == m["textChunkList"].type()) {
        vector<RecallDocumentResponseBodyDataTextChunkList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textChunkList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataTextChunkList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textChunkList = make_shared<vector<RecallDocumentResponseBodyDataTextChunkList>>(expect1);
      }
    }
    if (m.find("textSearchElapsedMs") != m.end() && !m["textSearchElapsedMs"].empty()) {
      textSearchElapsedMs = make_shared<long>(boost::any_cast<long>(m["textSearchElapsedMs"]));
    }
    if (m.find("totalElapsedMs") != m.end() && !m["totalElapsedMs"].empty()) {
      totalElapsedMs = make_shared<long>(boost::any_cast<long>(m["totalElapsedMs"]));
    }
    if (m.find("vectorChunkList") != m.end() && !m["vectorChunkList"].empty()) {
      if (typeid(vector<boost::any>) == m["vectorChunkList"].type()) {
        vector<RecallDocumentResponseBodyDataVectorChunkList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vectorChunkList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecallDocumentResponseBodyDataVectorChunkList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vectorChunkList = make_shared<vector<RecallDocumentResponseBodyDataVectorChunkList>>(expect1);
      }
    }
    if (m.find("vectorSearchElapsedMs") != m.end() && !m["vectorSearchElapsedMs"].empty()) {
      vectorSearchElapsedMs = make_shared<long>(boost::any_cast<long>(m["vectorSearchElapsedMs"]));
    }
  }


  virtual ~RecallDocumentResponseBodyData() = default;
};
class RecallDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<RecallDocumentResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  RecallDocumentResponseBody() {}

  explicit RecallDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RecallDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RecallDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RecallDocumentResponseBody() = default;
};
class RecallDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecallDocumentResponseBody> body{};

  RecallDocumentResponse() {}

  explicit RecallDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecallDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecallDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~RecallDocumentResponse() = default;
};
class RecognizeIntentionRequestGlobalIntentionList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> intention{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionScript{};

  RecognizeIntentionRequestGlobalIntentionList() {}

  explicit RecognizeIntentionRequestGlobalIntentionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (intention) {
      res["intention"] = boost::any(*intention);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("intention") != m.end() && !m["intention"].empty()) {
      intention = make_shared<string>(boost::any_cast<string>(m["intention"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
  }


  virtual ~RecognizeIntentionRequestGlobalIntentionList() = default;
};
class RecognizeIntentionRequestHierarchicalIntentionList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> intention{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionScript{};

  RecognizeIntentionRequestHierarchicalIntentionList() {}

  explicit RecognizeIntentionRequestHierarchicalIntentionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (intention) {
      res["intention"] = boost::any(*intention);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("intention") != m.end() && !m["intention"].empty()) {
      intention = make_shared<string>(boost::any_cast<string>(m["intention"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
  }


  virtual ~RecognizeIntentionRequestHierarchicalIntentionList() = default;
};
class RecognizeIntentionRequestIntentionList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> intention{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionScript{};

  RecognizeIntentionRequestIntentionList() {}

  explicit RecognizeIntentionRequestIntentionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (intention) {
      res["intention"] = boost::any(*intention);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("intention") != m.end() && !m["intention"].empty()) {
      intention = make_shared<string>(boost::any_cast<string>(m["intention"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
  }


  virtual ~RecognizeIntentionRequestIntentionList() = default;
};
class RecognizeIntentionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> analysis{};
  shared_ptr<string> bizType{};
  shared_ptr<string> conversation{};
  shared_ptr<vector<RecognizeIntentionRequestGlobalIntentionList>> globalIntentionList{};
  shared_ptr<vector<RecognizeIntentionRequestHierarchicalIntentionList>> hierarchicalIntentionList{};
  shared_ptr<string> intentionDomainCode{};
  shared_ptr<vector<RecognizeIntentionRequestIntentionList>> intentionList{};
  shared_ptr<string> opType{};
  shared_ptr<bool> recommend{};

  RecognizeIntentionRequest() {}

  explicit RecognizeIntentionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysis) {
      res["analysis"] = boost::any(*analysis);
    }
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (conversation) {
      res["conversation"] = boost::any(*conversation);
    }
    if (globalIntentionList) {
      vector<boost::any> temp1;
      for(auto item1:*globalIntentionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["globalIntentionList"] = boost::any(temp1);
    }
    if (hierarchicalIntentionList) {
      vector<boost::any> temp1;
      for(auto item1:*hierarchicalIntentionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hierarchicalIntentionList"] = boost::any(temp1);
    }
    if (intentionDomainCode) {
      res["intentionDomainCode"] = boost::any(*intentionDomainCode);
    }
    if (intentionList) {
      vector<boost::any> temp1;
      for(auto item1:*intentionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["intentionList"] = boost::any(temp1);
    }
    if (opType) {
      res["opType"] = boost::any(*opType);
    }
    if (recommend) {
      res["recommend"] = boost::any(*recommend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysis") != m.end() && !m["analysis"].empty()) {
      analysis = make_shared<bool>(boost::any_cast<bool>(m["analysis"]));
    }
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("conversation") != m.end() && !m["conversation"].empty()) {
      conversation = make_shared<string>(boost::any_cast<string>(m["conversation"]));
    }
    if (m.find("globalIntentionList") != m.end() && !m["globalIntentionList"].empty()) {
      if (typeid(vector<boost::any>) == m["globalIntentionList"].type()) {
        vector<RecognizeIntentionRequestGlobalIntentionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["globalIntentionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIntentionRequestGlobalIntentionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalIntentionList = make_shared<vector<RecognizeIntentionRequestGlobalIntentionList>>(expect1);
      }
    }
    if (m.find("hierarchicalIntentionList") != m.end() && !m["hierarchicalIntentionList"].empty()) {
      if (typeid(vector<boost::any>) == m["hierarchicalIntentionList"].type()) {
        vector<RecognizeIntentionRequestHierarchicalIntentionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hierarchicalIntentionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIntentionRequestHierarchicalIntentionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hierarchicalIntentionList = make_shared<vector<RecognizeIntentionRequestHierarchicalIntentionList>>(expect1);
      }
    }
    if (m.find("intentionDomainCode") != m.end() && !m["intentionDomainCode"].empty()) {
      intentionDomainCode = make_shared<string>(boost::any_cast<string>(m["intentionDomainCode"]));
    }
    if (m.find("intentionList") != m.end() && !m["intentionList"].empty()) {
      if (typeid(vector<boost::any>) == m["intentionList"].type()) {
        vector<RecognizeIntentionRequestIntentionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["intentionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIntentionRequestIntentionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intentionList = make_shared<vector<RecognizeIntentionRequestIntentionList>>(expect1);
      }
    }
    if (m.find("opType") != m.end() && !m["opType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["opType"]));
    }
    if (m.find("recommend") != m.end() && !m["recommend"].empty()) {
      recommend = make_shared<bool>(boost::any_cast<bool>(m["recommend"]));
    }
  }


  virtual ~RecognizeIntentionRequest() = default;
};
class RecognizeIntentionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> analysisProcess{};
  shared_ptr<string> intentionCode{};
  shared_ptr<string> intentionName{};
  shared_ptr<string> intentionScript{};
  shared_ptr<string> recommendIntention{};
  shared_ptr<string> recommendScript{};

  RecognizeIntentionResponseBodyData() {}

  explicit RecognizeIntentionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisProcess) {
      res["analysisProcess"] = boost::any(*analysisProcess);
    }
    if (intentionCode) {
      res["intentionCode"] = boost::any(*intentionCode);
    }
    if (intentionName) {
      res["intentionName"] = boost::any(*intentionName);
    }
    if (intentionScript) {
      res["intentionScript"] = boost::any(*intentionScript);
    }
    if (recommendIntention) {
      res["recommendIntention"] = boost::any(*recommendIntention);
    }
    if (recommendScript) {
      res["recommendScript"] = boost::any(*recommendScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisProcess") != m.end() && !m["analysisProcess"].empty()) {
      analysisProcess = make_shared<string>(boost::any_cast<string>(m["analysisProcess"]));
    }
    if (m.find("intentionCode") != m.end() && !m["intentionCode"].empty()) {
      intentionCode = make_shared<string>(boost::any_cast<string>(m["intentionCode"]));
    }
    if (m.find("intentionName") != m.end() && !m["intentionName"].empty()) {
      intentionName = make_shared<string>(boost::any_cast<string>(m["intentionName"]));
    }
    if (m.find("intentionScript") != m.end() && !m["intentionScript"].empty()) {
      intentionScript = make_shared<string>(boost::any_cast<string>(m["intentionScript"]));
    }
    if (m.find("recommendIntention") != m.end() && !m["recommendIntention"].empty()) {
      recommendIntention = make_shared<string>(boost::any_cast<string>(m["recommendIntention"]));
    }
    if (m.find("recommendScript") != m.end() && !m["recommendScript"].empty()) {
      recommendScript = make_shared<string>(boost::any_cast<string>(m["recommendScript"]));
    }
  }


  virtual ~RecognizeIntentionResponseBodyData() = default;
};
class RecognizeIntentionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<RecognizeIntentionResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  RecognizeIntentionResponseBody() {}

  explicit RecognizeIntentionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RecognizeIntentionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RecognizeIntentionResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RecognizeIntentionResponseBody() = default;
};
class RecognizeIntentionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeIntentionResponseBody> body{};

  RecognizeIntentionResponse() {}

  explicit RecognizeIntentionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIntentionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIntentionResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIntentionResponse() = default;
};
class RunAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> botId{};
  shared_ptr<string> modelId{};
  shared_ptr<bool> stream{};
  shared_ptr<string> threadId{};
  shared_ptr<bool> useDraft{};
  shared_ptr<string> userContent{};
  shared_ptr<string> versionId{};

  RunAgentRequest() {}

  explicit RunAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (botId) {
      res["botId"] = boost::any(*botId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (threadId) {
      res["threadId"] = boost::any(*threadId);
    }
    if (useDraft) {
      res["useDraft"] = boost::any(*useDraft);
    }
    if (userContent) {
      res["userContent"] = boost::any(*userContent);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("botId") != m.end() && !m["botId"].empty()) {
      botId = make_shared<string>(boost::any_cast<string>(m["botId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("threadId") != m.end() && !m["threadId"].empty()) {
      threadId = make_shared<string>(boost::any_cast<string>(m["threadId"]));
    }
    if (m.find("useDraft") != m.end() && !m["useDraft"].empty()) {
      useDraft = make_shared<bool>(boost::any_cast<bool>(m["useDraft"]));
    }
    if (m.find("userContent") != m.end() && !m["userContent"].empty()) {
      userContent = make_shared<string>(boost::any_cast<string>(m["userContent"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~RunAgentRequest() = default;
};
class RunAgentResponseBodyDataFunctionCallResponses : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> functionArgs{};
  shared_ptr<string> functionName{};
  shared_ptr<string> result{};
  shared_ptr<string> startTime{};

  RunAgentResponseBodyDataFunctionCallResponses() {}

  explicit RunAgentResponseBodyDataFunctionCallResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (functionArgs) {
      res["functionArgs"] = boost::any(*functionArgs);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("functionArgs") != m.end() && !m["functionArgs"].empty()) {
      functionArgs = make_shared<string>(boost::any_cast<string>(m["functionArgs"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~RunAgentResponseBodyDataFunctionCallResponses() = default;
};
class RunAgentResponseBodyDataResponseChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};
  shared_ptr<string> roleDisplayName{};

  RunAgentResponseBodyDataResponseChoicesMessage() {}

  explicit RunAgentResponseBodyDataResponseChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (roleDisplayName) {
      res["roleDisplayName"] = boost::any(*roleDisplayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("roleDisplayName") != m.end() && !m["roleDisplayName"].empty()) {
      roleDisplayName = make_shared<string>(boost::any_cast<string>(m["roleDisplayName"]));
    }
  }


  virtual ~RunAgentResponseBodyDataResponseChoicesMessage() = default;
};
class RunAgentResponseBodyDataResponseChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<long> index{};
  shared_ptr<RunAgentResponseBodyDataResponseChoicesMessage> message{};

  RunAgentResponseBodyDataResponseChoices() {}

  explicit RunAgentResponseBodyDataResponseChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        RunAgentResponseBodyDataResponseChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<RunAgentResponseBodyDataResponseChoicesMessage>(model1);
      }
    }
  }


  virtual ~RunAgentResponseBodyDataResponseChoices() = default;
};
class RunAgentResponseBodyDataResponse : public Darabonba::Model {
public:
  shared_ptr<vector<RunAgentResponseBodyDataResponseChoices>> choices{};
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> modelId{};
  shared_ptr<string> time{};

  RunAgentResponseBodyDataResponse() {}

  explicit RunAgentResponseBodyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<RunAgentResponseBodyDataResponseChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunAgentResponseBodyDataResponseChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<RunAgentResponseBodyDataResponseChoices>>(expect1);
      }
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RunAgentResponseBodyDataResponse() = default;
};
class RunAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RunAgentResponseBodyDataFunctionCallResponses>> functionCallResponses{};
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<RunAgentResponseBodyDataResponse> response{};
  shared_ptr<string> threadId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> versionId{};

  RunAgentResponseBodyData() {}

  explicit RunAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionCallResponses) {
      vector<boost::any> temp1;
      for(auto item1:*functionCallResponses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functionCallResponses"] = boost::any(temp1);
    }
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (response) {
      res["response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (threadId) {
      res["threadId"] = boost::any(*threadId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionCallResponses") != m.end() && !m["functionCallResponses"].empty()) {
      if (typeid(vector<boost::any>) == m["functionCallResponses"].type()) {
        vector<RunAgentResponseBodyDataFunctionCallResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functionCallResponses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunAgentResponseBodyDataFunctionCallResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionCallResponses = make_shared<vector<RunAgentResponseBodyDataFunctionCallResponses>>(expect1);
      }
    }
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("response") != m.end() && !m["response"].empty()) {
      if (typeid(map<string, boost::any>) == m["response"].type()) {
        RunAgentResponseBodyDataResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["response"]));
        response = make_shared<RunAgentResponseBodyDataResponse>(model1);
      }
    }
    if (m.find("threadId") != m.end() && !m["threadId"].empty()) {
      threadId = make_shared<string>(boost::any_cast<string>(m["threadId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~RunAgentResponseBodyData() = default;
};
class RunAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<RunAgentResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  RunAgentResponseBody() {}

  explicit RunAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunAgentResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RunAgentResponseBody() = default;
};
class RunAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunAgentResponseBody> body{};

  RunAgentResponse() {}

  explicit RunAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunAgentResponseBody>(model1);
      }
    }
  }


  virtual ~RunAgentResponse() = default;
};
class RunChatResultGenerationRequestMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RunChatResultGenerationRequestMessages() {}

  explicit RunChatResultGenerationRequestMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~RunChatResultGenerationRequestMessages() = default;
};
class RunChatResultGenerationRequestToolsFunctionParameters : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> type{};

  RunChatResultGenerationRequestToolsFunctionParameters() {}

  explicit RunChatResultGenerationRequestToolsFunctionParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~RunChatResultGenerationRequestToolsFunctionParameters() = default;
};
class RunChatResultGenerationRequestToolsFunction : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<RunChatResultGenerationRequestToolsFunctionParameters> parameters{};
  shared_ptr<vector<string>> required{};

  RunChatResultGenerationRequestToolsFunction() {}

  explicit RunChatResultGenerationRequestToolsFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        RunChatResultGenerationRequestToolsFunctionParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<RunChatResultGenerationRequestToolsFunctionParameters>(model1);
      }
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["required"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["required"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      required = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunChatResultGenerationRequestToolsFunction() = default;
};
class RunChatResultGenerationRequestTools : public Darabonba::Model {
public:
  shared_ptr<RunChatResultGenerationRequestToolsFunction> function{};
  shared_ptr<string> type{};

  RunChatResultGenerationRequestTools() {}

  explicit RunChatResultGenerationRequestTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["function"] = function ? boost::any(function->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      if (typeid(map<string, boost::any>) == m["function"].type()) {
        RunChatResultGenerationRequestToolsFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["function"]));
        function = make_shared<RunChatResultGenerationRequestToolsFunction>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~RunChatResultGenerationRequestTools() = default;
};
class RunChatResultGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> inferenceParameters{};
  shared_ptr<vector<RunChatResultGenerationRequestMessages>> messages{};
  shared_ptr<string> modelId{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<RunChatResultGenerationRequestTools>> tools{};

  RunChatResultGenerationRequest() {}

  explicit RunChatResultGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inferenceParameters) {
      res["inferenceParameters"] = boost::any(*inferenceParameters);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["messages"] = boost::any(temp1);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inferenceParameters") != m.end() && !m["inferenceParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["inferenceParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("messages") != m.end() && !m["messages"].empty()) {
      if (typeid(vector<boost::any>) == m["messages"].type()) {
        vector<RunChatResultGenerationRequestMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunChatResultGenerationRequestMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunChatResultGenerationRequestMessages>>(expect1);
      }
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<RunChatResultGenerationRequestTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunChatResultGenerationRequestTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<RunChatResultGenerationRequestTools>>(expect1);
      }
    }
  }


  virtual ~RunChatResultGenerationRequest() = default;
};
class RunChatResultGenerationResponseBodyChoicesMessage : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};
  shared_ptr<vector<map<string, boost::any>>> toolCalls{};

  RunChatResultGenerationResponseBodyChoicesMessage() {}

  explicit RunChatResultGenerationResponseBodyChoicesMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (toolCalls) {
      res["toolCalls"] = boost::any(*toolCalls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("toolCalls") != m.end() && !m["toolCalls"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["toolCalls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["toolCalls"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      toolCalls = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~RunChatResultGenerationResponseBodyChoicesMessage() = default;
};
class RunChatResultGenerationResponseBodyChoices : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<long> index{};
  shared_ptr<RunChatResultGenerationResponseBodyChoicesMessage> message{};

  RunChatResultGenerationResponseBodyChoices() {}

  explicit RunChatResultGenerationResponseBodyChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      if (typeid(map<string, boost::any>) == m["message"].type()) {
        RunChatResultGenerationResponseBodyChoicesMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["message"]));
        message = make_shared<RunChatResultGenerationResponseBodyChoicesMessage>(model1);
      }
    }
  }


  virtual ~RunChatResultGenerationResponseBodyChoices() = default;
};
class RunChatResultGenerationResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> imageCount{};
  shared_ptr<long> imageTokens{};
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunChatResultGenerationResponseBodyUsage() {}

  explicit RunChatResultGenerationResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (imageTokens) {
      res["imageTokens"] = boost::any(*imageTokens);
    }
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("imageTokens") != m.end() && !m["imageTokens"].empty()) {
      imageTokens = make_shared<long>(boost::any_cast<long>(m["imageTokens"]));
    }
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunChatResultGenerationResponseBodyUsage() = default;
};
class RunChatResultGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RunChatResultGenerationResponseBodyChoices>> choices{};
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> modelId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> time{};
  shared_ptr<long> totalTokens{};
  shared_ptr<RunChatResultGenerationResponseBodyUsage> usage{};

  RunChatResultGenerationResponseBody() {}

  explicit RunChatResultGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<RunChatResultGenerationResponseBodyChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunChatResultGenerationResponseBodyChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<RunChatResultGenerationResponseBodyChoices>>(expect1);
      }
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunChatResultGenerationResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunChatResultGenerationResponseBodyUsage>(model1);
      }
    }
  }


  virtual ~RunChatResultGenerationResponseBody() = default;
};
class RunChatResultGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunChatResultGenerationResponseBody> body{};

  RunChatResultGenerationResponse() {}

  explicit RunChatResultGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunChatResultGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunChatResultGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~RunChatResultGenerationResponse() = default;
};
class RunLibraryChatGenerationRequestQueryCriteriaAnd : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  RunLibraryChatGenerationRequestQueryCriteriaAnd() {}

  explicit RunLibraryChatGenerationRequestQueryCriteriaAnd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~RunLibraryChatGenerationRequestQueryCriteriaAnd() = default;
};
class RunLibraryChatGenerationRequestQueryCriteriaOr : public Darabonba::Model {
public:
  shared_ptr<double> boost{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  RunLibraryChatGenerationRequestQueryCriteriaOr() {}

  explicit RunLibraryChatGenerationRequestQueryCriteriaOr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boost) {
      res["boost"] = boost::any(*boost);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("boost") != m.end() && !m["boost"].empty()) {
      boost = make_shared<double>(boost::any_cast<double>(m["boost"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~RunLibraryChatGenerationRequestQueryCriteriaOr() = default;
};
class RunLibraryChatGenerationRequestQueryCriteria : public Darabonba::Model {
public:
  shared_ptr<vector<RunLibraryChatGenerationRequestQueryCriteriaAnd>> and_{};
  shared_ptr<vector<RunLibraryChatGenerationRequestQueryCriteriaOr>> or_{};

  RunLibraryChatGenerationRequestQueryCriteria() {}

  explicit RunLibraryChatGenerationRequestQueryCriteria(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (and_) {
      vector<boost::any> temp1;
      for(auto item1:*and_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["and"] = boost::any(temp1);
    }
    if (or_) {
      vector<boost::any> temp1;
      for(auto item1:*or_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["or"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("and") != m.end() && !m["and"].empty()) {
      if (typeid(vector<boost::any>) == m["and"].type()) {
        vector<RunLibraryChatGenerationRequestQueryCriteriaAnd> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["and"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunLibraryChatGenerationRequestQueryCriteriaAnd model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        and_ = make_shared<vector<RunLibraryChatGenerationRequestQueryCriteriaAnd>>(expect1);
      }
    }
    if (m.find("or") != m.end() && !m["or"].empty()) {
      if (typeid(vector<boost::any>) == m["or"].type()) {
        vector<RunLibraryChatGenerationRequestQueryCriteriaOr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["or"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunLibraryChatGenerationRequestQueryCriteriaOr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        or_ = make_shared<vector<RunLibraryChatGenerationRequestQueryCriteriaOr>>(expect1);
      }
    }
  }


  virtual ~RunLibraryChatGenerationRequestQueryCriteria() = default;
};
class RunLibraryChatGenerationRequestTextSearchParameter : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> searchAnalyzerType{};

  RunLibraryChatGenerationRequestTextSearchParameter() {}

  explicit RunLibraryChatGenerationRequestTextSearchParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (searchAnalyzerType) {
      res["searchAnalyzerType"] = boost::any(*searchAnalyzerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("searchAnalyzerType") != m.end() && !m["searchAnalyzerType"].empty()) {
      searchAnalyzerType = make_shared<string>(boost::any_cast<string>(m["searchAnalyzerType"]));
    }
  }


  virtual ~RunLibraryChatGenerationRequestTextSearchParameter() = default;
};
class RunLibraryChatGenerationRequestVectorSearchParameter : public Darabonba::Model {
public:
  shared_ptr<long> limit{};

  RunLibraryChatGenerationRequestVectorSearchParameter() {}

  explicit RunLibraryChatGenerationRequestVectorSearchParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~RunLibraryChatGenerationRequestVectorSearchParameter() = default;
};
class RunLibraryChatGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> docIdList{};
  shared_ptr<bool> enableFollowUp{};
  shared_ptr<bool> enableMultiQuery{};
  shared_ptr<bool> enableOpenQa{};
  shared_ptr<string> followUpLlm{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> llmType{};
  shared_ptr<string> multiQueryLlm{};
  shared_ptr<string> query{};
  shared_ptr<RunLibraryChatGenerationRequestQueryCriteria> queryCriteria{};
  shared_ptr<string> rerankType{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<string>> subQueryList{};
  shared_ptr<RunLibraryChatGenerationRequestTextSearchParameter> textSearchParameter{};
  shared_ptr<long> topK{};
  shared_ptr<RunLibraryChatGenerationRequestVectorSearchParameter> vectorSearchParameter{};
  shared_ptr<bool> withDocumentReference{};

  RunLibraryChatGenerationRequest() {}

  explicit RunLibraryChatGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docIdList) {
      res["docIdList"] = boost::any(*docIdList);
    }
    if (enableFollowUp) {
      res["enableFollowUp"] = boost::any(*enableFollowUp);
    }
    if (enableMultiQuery) {
      res["enableMultiQuery"] = boost::any(*enableMultiQuery);
    }
    if (enableOpenQa) {
      res["enableOpenQa"] = boost::any(*enableOpenQa);
    }
    if (followUpLlm) {
      res["followUpLlm"] = boost::any(*followUpLlm);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (llmType) {
      res["llmType"] = boost::any(*llmType);
    }
    if (multiQueryLlm) {
      res["multiQueryLlm"] = boost::any(*multiQueryLlm);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryCriteria) {
      res["queryCriteria"] = queryCriteria ? boost::any(queryCriteria->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rerankType) {
      res["rerankType"] = boost::any(*rerankType);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (subQueryList) {
      res["subQueryList"] = boost::any(*subQueryList);
    }
    if (textSearchParameter) {
      res["textSearchParameter"] = textSearchParameter ? boost::any(textSearchParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    if (vectorSearchParameter) {
      res["vectorSearchParameter"] = vectorSearchParameter ? boost::any(vectorSearchParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (withDocumentReference) {
      res["withDocumentReference"] = boost::any(*withDocumentReference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("enableFollowUp") != m.end() && !m["enableFollowUp"].empty()) {
      enableFollowUp = make_shared<bool>(boost::any_cast<bool>(m["enableFollowUp"]));
    }
    if (m.find("enableMultiQuery") != m.end() && !m["enableMultiQuery"].empty()) {
      enableMultiQuery = make_shared<bool>(boost::any_cast<bool>(m["enableMultiQuery"]));
    }
    if (m.find("enableOpenQa") != m.end() && !m["enableOpenQa"].empty()) {
      enableOpenQa = make_shared<bool>(boost::any_cast<bool>(m["enableOpenQa"]));
    }
    if (m.find("followUpLlm") != m.end() && !m["followUpLlm"].empty()) {
      followUpLlm = make_shared<string>(boost::any_cast<string>(m["followUpLlm"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("llmType") != m.end() && !m["llmType"].empty()) {
      llmType = make_shared<string>(boost::any_cast<string>(m["llmType"]));
    }
    if (m.find("multiQueryLlm") != m.end() && !m["multiQueryLlm"].empty()) {
      multiQueryLlm = make_shared<string>(boost::any_cast<string>(m["multiQueryLlm"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryCriteria") != m.end() && !m["queryCriteria"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryCriteria"].type()) {
        RunLibraryChatGenerationRequestQueryCriteria model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryCriteria"]));
        queryCriteria = make_shared<RunLibraryChatGenerationRequestQueryCriteria>(model1);
      }
    }
    if (m.find("rerankType") != m.end() && !m["rerankType"].empty()) {
      rerankType = make_shared<string>(boost::any_cast<string>(m["rerankType"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("subQueryList") != m.end() && !m["subQueryList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["subQueryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["subQueryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subQueryList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("textSearchParameter") != m.end() && !m["textSearchParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["textSearchParameter"].type()) {
        RunLibraryChatGenerationRequestTextSearchParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textSearchParameter"]));
        textSearchParameter = make_shared<RunLibraryChatGenerationRequestTextSearchParameter>(model1);
      }
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
    if (m.find("vectorSearchParameter") != m.end() && !m["vectorSearchParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["vectorSearchParameter"].type()) {
        RunLibraryChatGenerationRequestVectorSearchParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vectorSearchParameter"]));
        vectorSearchParameter = make_shared<RunLibraryChatGenerationRequestVectorSearchParameter>(model1);
      }
    }
    if (m.find("withDocumentReference") != m.end() && !m["withDocumentReference"].empty()) {
      withDocumentReference = make_shared<bool>(boost::any_cast<bool>(m["withDocumentReference"]));
    }
  }


  virtual ~RunLibraryChatGenerationRequest() = default;
};
class RunLibraryChatGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  RunLibraryChatGenerationResponseBody() {}

  explicit RunLibraryChatGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~RunLibraryChatGenerationResponseBody() = default;
};
class RunLibraryChatGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunLibraryChatGenerationResponseBody> body{};

  RunLibraryChatGenerationResponse() {}

  explicit RunLibraryChatGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunLibraryChatGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunLibraryChatGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~RunLibraryChatGenerationResponse() = default;
};
class SubmitChatQuestionRequestQuestionList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> reply{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  SubmitChatQuestionRequestQuestionList() {}

  explicit SubmitChatQuestionRequestQuestionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (reply) {
      res["reply"] = boost::any(*reply);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("reply") != m.end() && !m["reply"].empty()) {
      reply = make_shared<string>(boost::any_cast<string>(m["reply"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~SubmitChatQuestionRequestQuestionList() = default;
};
class SubmitChatQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> gmtService{};
  shared_ptr<string> liveScriptContent{};
  shared_ptr<bool> openSmallTalk{};
  shared_ptr<vector<SubmitChatQuestionRequestQuestionList>> questionList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  SubmitChatQuestionRequest() {}

  explicit SubmitChatQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtService) {
      res["gmtService"] = boost::any(*gmtService);
    }
    if (liveScriptContent) {
      res["liveScriptContent"] = boost::any(*liveScriptContent);
    }
    if (openSmallTalk) {
      res["openSmallTalk"] = boost::any(*openSmallTalk);
    }
    if (questionList) {
      vector<boost::any> temp1;
      for(auto item1:*questionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["questionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtService") != m.end() && !m["gmtService"].empty()) {
      gmtService = make_shared<string>(boost::any_cast<string>(m["gmtService"]));
    }
    if (m.find("liveScriptContent") != m.end() && !m["liveScriptContent"].empty()) {
      liveScriptContent = make_shared<string>(boost::any_cast<string>(m["liveScriptContent"]));
    }
    if (m.find("openSmallTalk") != m.end() && !m["openSmallTalk"].empty()) {
      openSmallTalk = make_shared<bool>(boost::any_cast<bool>(m["openSmallTalk"]));
    }
    if (m.find("questionList") != m.end() && !m["questionList"].empty()) {
      if (typeid(vector<boost::any>) == m["questionList"].type()) {
        vector<SubmitChatQuestionRequestQuestionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["questionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitChatQuestionRequestQuestionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionList = make_shared<vector<SubmitChatQuestionRequestQuestionList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~SubmitChatQuestionRequest() = default;
};
class SubmitChatQuestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> batchId{};

  SubmitChatQuestionResponseBodyData() {}

  explicit SubmitChatQuestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["batchId"] = boost::any(*batchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchId") != m.end() && !m["batchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["batchId"]));
    }
  }


  virtual ~SubmitChatQuestionResponseBodyData() = default;
};
class SubmitChatQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<SubmitChatQuestionResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  SubmitChatQuestionResponseBody() {}

  explicit SubmitChatQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitChatQuestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitChatQuestionResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~SubmitChatQuestionResponseBody() = default;
};
class SubmitChatQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitChatQuestionResponseBody> body{};

  SubmitChatQuestionResponse() {}

  explicit SubmitChatQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitChatQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitChatQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitChatQuestionResponse() = default;
};
class UpdateDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> libraryId{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> title{};

  UpdateDocumentRequest() {}

  explicit UpdateDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["docId"] = boost::any(*docId);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docId") != m.end() && !m["docId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["docId"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~UpdateDocumentRequest() = default;
};
class UpdateDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  UpdateDocumentResponseBody() {}

  explicit UpdateDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~UpdateDocumentResponseBody() = default;
};
class UpdateDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDocumentResponseBody> body{};

  UpdateDocumentResponse() {}

  explicit UpdateDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDocumentResponse() = default;
};
class UpdateLibraryRequestIndexSettingChunkStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> docTreeSplit{};
  shared_ptr<long> docTreeSplitSize{};
  shared_ptr<bool> enhanceGraph{};
  shared_ptr<bool> enhanceTable{};
  shared_ptr<long> overlap{};
  shared_ptr<bool> sentenceSplit{};
  shared_ptr<long> sentenceSplitSize{};
  shared_ptr<long> size{};
  shared_ptr<bool> split{};

  UpdateLibraryRequestIndexSettingChunkStrategy() {}

  explicit UpdateLibraryRequestIndexSettingChunkStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docTreeSplit) {
      res["docTreeSplit"] = boost::any(*docTreeSplit);
    }
    if (docTreeSplitSize) {
      res["docTreeSplitSize"] = boost::any(*docTreeSplitSize);
    }
    if (enhanceGraph) {
      res["enhanceGraph"] = boost::any(*enhanceGraph);
    }
    if (enhanceTable) {
      res["enhanceTable"] = boost::any(*enhanceTable);
    }
    if (overlap) {
      res["overlap"] = boost::any(*overlap);
    }
    if (sentenceSplit) {
      res["sentenceSplit"] = boost::any(*sentenceSplit);
    }
    if (sentenceSplitSize) {
      res["sentenceSplitSize"] = boost::any(*sentenceSplitSize);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (split) {
      res["split"] = boost::any(*split);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docTreeSplit") != m.end() && !m["docTreeSplit"].empty()) {
      docTreeSplit = make_shared<bool>(boost::any_cast<bool>(m["docTreeSplit"]));
    }
    if (m.find("docTreeSplitSize") != m.end() && !m["docTreeSplitSize"].empty()) {
      docTreeSplitSize = make_shared<long>(boost::any_cast<long>(m["docTreeSplitSize"]));
    }
    if (m.find("enhanceGraph") != m.end() && !m["enhanceGraph"].empty()) {
      enhanceGraph = make_shared<bool>(boost::any_cast<bool>(m["enhanceGraph"]));
    }
    if (m.find("enhanceTable") != m.end() && !m["enhanceTable"].empty()) {
      enhanceTable = make_shared<bool>(boost::any_cast<bool>(m["enhanceTable"]));
    }
    if (m.find("overlap") != m.end() && !m["overlap"].empty()) {
      overlap = make_shared<long>(boost::any_cast<long>(m["overlap"]));
    }
    if (m.find("sentenceSplit") != m.end() && !m["sentenceSplit"].empty()) {
      sentenceSplit = make_shared<bool>(boost::any_cast<bool>(m["sentenceSplit"]));
    }
    if (m.find("sentenceSplitSize") != m.end() && !m["sentenceSplitSize"].empty()) {
      sentenceSplitSize = make_shared<long>(boost::any_cast<long>(m["sentenceSplitSize"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("split") != m.end() && !m["split"].empty()) {
      split = make_shared<bool>(boost::any_cast<bool>(m["split"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingChunkStrategy() = default;
};
class UpdateLibraryRequestIndexSettingModelConfig : public Darabonba::Model {
public:
  shared_ptr<double> temperature{};
  shared_ptr<double> topP{};

  UpdateLibraryRequestIndexSettingModelConfig() {}

  explicit UpdateLibraryRequestIndexSettingModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    if (topP) {
      res["topP"] = boost::any(*topP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
    if (m.find("topP") != m.end() && !m["topP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["topP"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingModelConfig() = default;
};
class UpdateLibraryRequestIndexSettingQueryEnhancer : public Darabonba::Model {
public:
  shared_ptr<bool> enableFollowUp{};
  shared_ptr<bool> enableMultiQuery{};
  shared_ptr<bool> enableOpenQa{};
  shared_ptr<bool> enableQueryRewrite{};
  shared_ptr<bool> enableSession{};
  shared_ptr<string> localKnowledgeId{};
  shared_ptr<bool> withDocumentReference{};

  UpdateLibraryRequestIndexSettingQueryEnhancer() {}

  explicit UpdateLibraryRequestIndexSettingQueryEnhancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableFollowUp) {
      res["enableFollowUp"] = boost::any(*enableFollowUp);
    }
    if (enableMultiQuery) {
      res["enableMultiQuery"] = boost::any(*enableMultiQuery);
    }
    if (enableOpenQa) {
      res["enableOpenQa"] = boost::any(*enableOpenQa);
    }
    if (enableQueryRewrite) {
      res["enableQueryRewrite"] = boost::any(*enableQueryRewrite);
    }
    if (enableSession) {
      res["enableSession"] = boost::any(*enableSession);
    }
    if (localKnowledgeId) {
      res["localKnowledgeId"] = boost::any(*localKnowledgeId);
    }
    if (withDocumentReference) {
      res["withDocumentReference"] = boost::any(*withDocumentReference);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableFollowUp") != m.end() && !m["enableFollowUp"].empty()) {
      enableFollowUp = make_shared<bool>(boost::any_cast<bool>(m["enableFollowUp"]));
    }
    if (m.find("enableMultiQuery") != m.end() && !m["enableMultiQuery"].empty()) {
      enableMultiQuery = make_shared<bool>(boost::any_cast<bool>(m["enableMultiQuery"]));
    }
    if (m.find("enableOpenQa") != m.end() && !m["enableOpenQa"].empty()) {
      enableOpenQa = make_shared<bool>(boost::any_cast<bool>(m["enableOpenQa"]));
    }
    if (m.find("enableQueryRewrite") != m.end() && !m["enableQueryRewrite"].empty()) {
      enableQueryRewrite = make_shared<bool>(boost::any_cast<bool>(m["enableQueryRewrite"]));
    }
    if (m.find("enableSession") != m.end() && !m["enableSession"].empty()) {
      enableSession = make_shared<bool>(boost::any_cast<bool>(m["enableSession"]));
    }
    if (m.find("localKnowledgeId") != m.end() && !m["localKnowledgeId"].empty()) {
      localKnowledgeId = make_shared<string>(boost::any_cast<string>(m["localKnowledgeId"]));
    }
    if (m.find("withDocumentReference") != m.end() && !m["withDocumentReference"].empty()) {
      withDocumentReference = make_shared<bool>(boost::any_cast<bool>(m["withDocumentReference"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingQueryEnhancer() = default;
};
class UpdateLibraryRequestIndexSettingRecallStrategy : public Darabonba::Model {
public:
  shared_ptr<string> documentRankType{};
  shared_ptr<long> limit{};

  UpdateLibraryRequestIndexSettingRecallStrategy() {}

  explicit UpdateLibraryRequestIndexSettingRecallStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentRankType) {
      res["documentRankType"] = boost::any(*documentRankType);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentRankType") != m.end() && !m["documentRankType"].empty()) {
      documentRankType = make_shared<string>(boost::any_cast<string>(m["documentRankType"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingRecallStrategy() = default;
};
class UpdateLibraryRequestIndexSettingTextIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> indexAnalyzer{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<string> searchAnalyzer{};
  shared_ptr<long> topK{};

  UpdateLibraryRequestIndexSettingTextIndexSetting() {}

  explicit UpdateLibraryRequestIndexSettingTextIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (indexAnalyzer) {
      res["indexAnalyzer"] = boost::any(*indexAnalyzer);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (searchAnalyzer) {
      res["searchAnalyzer"] = boost::any(*searchAnalyzer);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("indexAnalyzer") != m.end() && !m["indexAnalyzer"].empty()) {
      indexAnalyzer = make_shared<string>(boost::any_cast<string>(m["indexAnalyzer"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("searchAnalyzer") != m.end() && !m["searchAnalyzer"].empty()) {
      searchAnalyzer = make_shared<string>(boost::any_cast<string>(m["searchAnalyzer"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingTextIndexSetting() = default;
};
class UpdateLibraryRequestIndexSettingVectorIndexSetting : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> embeddingType{};
  shared_ptr<bool> enable{};
  shared_ptr<double> rankThreshold{};
  shared_ptr<long> topK{};

  UpdateLibraryRequestIndexSettingVectorIndexSetting() {}

  explicit UpdateLibraryRequestIndexSettingVectorIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (embeddingType) {
      res["embeddingType"] = boost::any(*embeddingType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (rankThreshold) {
      res["rankThreshold"] = boost::any(*rankThreshold);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("embeddingType") != m.end() && !m["embeddingType"].empty()) {
      embeddingType = make_shared<string>(boost::any_cast<string>(m["embeddingType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("rankThreshold") != m.end() && !m["rankThreshold"].empty()) {
      rankThreshold = make_shared<double>(boost::any_cast<double>(m["rankThreshold"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateLibraryRequestIndexSettingVectorIndexSetting() = default;
};
class UpdateLibraryRequestIndexSetting : public Darabonba::Model {
public:
  shared_ptr<UpdateLibraryRequestIndexSettingChunkStrategy> chunkStrategy{};
  shared_ptr<UpdateLibraryRequestIndexSettingModelConfig> modelConfig{};
  shared_ptr<string> promptRoleStyle{};
  shared_ptr<UpdateLibraryRequestIndexSettingQueryEnhancer> queryEnhancer{};
  shared_ptr<UpdateLibraryRequestIndexSettingRecallStrategy> recallStrategy{};
  shared_ptr<UpdateLibraryRequestIndexSettingTextIndexSetting> textIndexSetting{};
  shared_ptr<UpdateLibraryRequestIndexSettingVectorIndexSetting> vectorIndexSetting{};

  UpdateLibraryRequestIndexSetting() {}

  explicit UpdateLibraryRequestIndexSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkStrategy) {
      res["chunkStrategy"] = chunkStrategy ? boost::any(chunkStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptRoleStyle) {
      res["promptRoleStyle"] = boost::any(*promptRoleStyle);
    }
    if (queryEnhancer) {
      res["queryEnhancer"] = queryEnhancer ? boost::any(queryEnhancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recallStrategy) {
      res["recallStrategy"] = recallStrategy ? boost::any(recallStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textIndexSetting) {
      res["textIndexSetting"] = textIndexSetting ? boost::any(textIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorIndexSetting) {
      res["vectorIndexSetting"] = vectorIndexSetting ? boost::any(vectorIndexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chunkStrategy") != m.end() && !m["chunkStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["chunkStrategy"].type()) {
        UpdateLibraryRequestIndexSettingChunkStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["chunkStrategy"]));
        chunkStrategy = make_shared<UpdateLibraryRequestIndexSettingChunkStrategy>(model1);
      }
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        UpdateLibraryRequestIndexSettingModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<UpdateLibraryRequestIndexSettingModelConfig>(model1);
      }
    }
    if (m.find("promptRoleStyle") != m.end() && !m["promptRoleStyle"].empty()) {
      promptRoleStyle = make_shared<string>(boost::any_cast<string>(m["promptRoleStyle"]));
    }
    if (m.find("queryEnhancer") != m.end() && !m["queryEnhancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryEnhancer"].type()) {
        UpdateLibraryRequestIndexSettingQueryEnhancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryEnhancer"]));
        queryEnhancer = make_shared<UpdateLibraryRequestIndexSettingQueryEnhancer>(model1);
      }
    }
    if (m.find("recallStrategy") != m.end() && !m["recallStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["recallStrategy"].type()) {
        UpdateLibraryRequestIndexSettingRecallStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["recallStrategy"]));
        recallStrategy = make_shared<UpdateLibraryRequestIndexSettingRecallStrategy>(model1);
      }
    }
    if (m.find("textIndexSetting") != m.end() && !m["textIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["textIndexSetting"].type()) {
        UpdateLibraryRequestIndexSettingTextIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textIndexSetting"]));
        textIndexSetting = make_shared<UpdateLibraryRequestIndexSettingTextIndexSetting>(model1);
      }
    }
    if (m.find("vectorIndexSetting") != m.end() && !m["vectorIndexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["vectorIndexSetting"].type()) {
        UpdateLibraryRequestIndexSettingVectorIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vectorIndexSetting"]));
        vectorIndexSetting = make_shared<UpdateLibraryRequestIndexSettingVectorIndexSetting>(model1);
      }
    }
  }


  virtual ~UpdateLibraryRequestIndexSetting() = default;
};
class UpdateLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<UpdateLibraryRequestIndexSetting> indexSetting{};
  shared_ptr<string> libraryId{};
  shared_ptr<string> libraryName{};

  UpdateLibraryRequest() {}

  explicit UpdateLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (indexSetting) {
      res["indexSetting"] = indexSetting ? boost::any(indexSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    if (libraryName) {
      res["libraryName"] = boost::any(*libraryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("indexSetting") != m.end() && !m["indexSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexSetting"].type()) {
        UpdateLibraryRequestIndexSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexSetting"]));
        indexSetting = make_shared<UpdateLibraryRequestIndexSetting>(model1);
      }
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
    if (m.find("libraryName") != m.end() && !m["libraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["libraryName"]));
    }
  }


  virtual ~UpdateLibraryRequest() = default;
};
class UpdateLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  UpdateLibraryResponseBody() {}

  explicit UpdateLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~UpdateLibraryResponseBody() = default;
};
class UpdateLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLibraryResponseBody> body{};

  UpdateLibraryResponse() {}

  explicit UpdateLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLibraryResponse() = default;
};
class UpdateQaLibraryRequestParseQaResults : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<string> question{};

  UpdateQaLibraryRequestParseQaResults() {}

  explicit UpdateQaLibraryRequestParseQaResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
  }


  virtual ~UpdateQaLibraryRequestParseQaResults() = default;
};
class UpdateQaLibraryRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateQaLibraryRequestParseQaResults>> parseQaResults{};
  shared_ptr<string> qaLibraryId{};
  shared_ptr<string> requestId{};

  UpdateQaLibraryRequest() {}

  explicit UpdateQaLibraryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parseQaResults) {
      vector<boost::any> temp1;
      for(auto item1:*parseQaResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parseQaResults"] = boost::any(temp1);
    }
    if (qaLibraryId) {
      res["qaLibraryId"] = boost::any(*qaLibraryId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parseQaResults") != m.end() && !m["parseQaResults"].empty()) {
      if (typeid(vector<boost::any>) == m["parseQaResults"].type()) {
        vector<UpdateQaLibraryRequestParseQaResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parseQaResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateQaLibraryRequestParseQaResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parseQaResults = make_shared<vector<UpdateQaLibraryRequestParseQaResults>>(expect1);
      }
    }
    if (m.find("qaLibraryId") != m.end() && !m["qaLibraryId"].empty()) {
      qaLibraryId = make_shared<string>(boost::any_cast<string>(m["qaLibraryId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateQaLibraryRequest() = default;
};
class UpdateQaLibraryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> qaLibraryId{};

  UpdateQaLibraryResponseBodyData() {}

  explicit UpdateQaLibraryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qaLibraryId) {
      res["qaLibraryId"] = boost::any(*qaLibraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qaLibraryId") != m.end() && !m["qaLibraryId"].empty()) {
      qaLibraryId = make_shared<string>(boost::any_cast<string>(m["qaLibraryId"]));
    }
  }


  virtual ~UpdateQaLibraryResponseBodyData() = default;
};
class UpdateQaLibraryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<UpdateQaLibraryResponseBodyData> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  UpdateQaLibraryResponseBody() {}

  explicit UpdateQaLibraryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateQaLibraryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateQaLibraryResponseBodyData>(model1);
      }
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~UpdateQaLibraryResponseBody() = default;
};
class UpdateQaLibraryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQaLibraryResponseBody> body{};

  UpdateQaLibraryResponse() {}

  explicit UpdateQaLibraryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQaLibraryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQaLibraryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQaLibraryResponse() = default;
};
class UploadDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> libraryId{};

  UploadDocumentRequest() {}

  explicit UploadDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
  }


  virtual ~UploadDocumentRequest() = default;
};
class UploadDocumentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> libraryId{};

  UploadDocumentAdvanceRequest() {}

  explicit UploadDocumentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (libraryId) {
      res["libraryId"] = boost::any(*libraryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("libraryId") != m.end() && !m["libraryId"].empty()) {
      libraryId = make_shared<string>(boost::any_cast<string>(m["libraryId"]));
    }
  }


  virtual ~UploadDocumentAdvanceRequest() = default;
};
class UploadDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> errCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  UploadDocumentResponseBody() {}

  explicit UploadDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
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
    if (time) {
      res["time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
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
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
  }


  virtual ~UploadDocumentResponseBody() = default;
};
class UploadDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadDocumentResponseBody> body{};

  UploadDocumentResponse() {}

  explicit UploadDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDocumentResponse() = default;
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
  CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                           shared_ptr<CreateAnnualDocSummaryTaskRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateAnnualDocSummaryTaskRequest> request);
  CreateDialogResponse createDialogWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<CreateDialogRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDialogResponse createDialog(shared_ptr<string> workspaceId, shared_ptr<CreateDialogRequest> request);
  CreateDialogAnalysisTaskResponse createDialogAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                       shared_ptr<CreateDialogAnalysisTaskRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDialogAnalysisTaskResponse createDialogAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<CreateDialogAnalysisTaskRequest> request);
  CreateDocsSummaryTaskResponse createDocsSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<CreateDocsSummaryTaskRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDocsSummaryTaskResponse createDocsSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateDocsSummaryTaskRequest> request);
  CreateFinReportSummaryTaskResponse createFinReportSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                           shared_ptr<CreateFinReportSummaryTaskRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFinReportSummaryTaskResponse createFinReportSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateFinReportSummaryTaskRequest> request);
  CreateLibraryResponse createLibraryWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<CreateLibraryRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLibraryResponse createLibrary(shared_ptr<string> workspaceId, shared_ptr<CreateLibraryRequest> request);
  CreatePdfTranslateTaskResponse createPdfTranslateTaskWithOptions(shared_ptr<string> workspaceId,
                                                                   shared_ptr<CreatePdfTranslateTaskRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePdfTranslateTaskResponse createPdfTranslateTask(shared_ptr<string> workspaceId, shared_ptr<CreatePdfTranslateTaskRequest> request);
  CreatePredefinedDocumentResponse createPredefinedDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                       shared_ptr<CreatePredefinedDocumentRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePredefinedDocumentResponse createPredefinedDocument(shared_ptr<string> workspaceId, shared_ptr<CreatePredefinedDocumentRequest> request);
  CreateQualityCheckTaskResponse createQualityCheckTaskWithOptions(shared_ptr<string> workspaceId,
                                                                   shared_ptr<CreateQualityCheckTaskRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQualityCheckTaskResponse createQualityCheckTask(shared_ptr<string> workspaceId, shared_ptr<CreateQualityCheckTaskRequest> request);
  DeleteDocumentResponse deleteDocumentWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<DeleteDocumentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDocumentResponse deleteDocument(shared_ptr<string> workspaceId, shared_ptr<DeleteDocumentRequest> request);
  DeleteLibraryResponse deleteLibraryWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<DeleteLibraryRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLibraryResponse deleteLibrary(shared_ptr<string> workspaceId, shared_ptr<DeleteLibraryRequest> request);
  EvictTaskResponse evictTaskWithOptions(shared_ptr<string> workspaceId,
                                         shared_ptr<EvictTaskRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvictTaskResponse evictTask(shared_ptr<string> workspaceId, shared_ptr<EvictTaskRequest> request);
  GenDocQaResultResponse genDocQaResultWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<GenDocQaResultRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenDocQaResultResponse genDocQaResult(shared_ptr<string> workspaceId, shared_ptr<GenDocQaResultRequest> request);
  GetAppConfigResponse getAppConfigWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppConfigResponse getAppConfig(shared_ptr<string> workspaceId);
  GetChatQuestionRespResponse getChatQuestionRespWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<GetChatQuestionRespRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatQuestionRespResponse getChatQuestionResp(shared_ptr<string> workspaceId, shared_ptr<GetChatQuestionRespRequest> request);
  GetDialogAnalysisResultResponse getDialogAnalysisResultWithOptions(shared_ptr<string> workspaceId,
                                                                     shared_ptr<GetDialogAnalysisResultRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDialogAnalysisResultResponse getDialogAnalysisResult(shared_ptr<string> workspaceId, shared_ptr<GetDialogAnalysisResultRequest> request);
  GetDocumentChunkListResponse getDocumentChunkListWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<GetDocumentChunkListRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentChunkListResponse getDocumentChunkList(shared_ptr<string> workspaceId, shared_ptr<GetDocumentChunkListRequest> request);
  GetDocumentListResponse getDocumentListWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<GetDocumentListRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentListResponse getDocumentList(shared_ptr<string> workspaceId, shared_ptr<GetDocumentListRequest> request);
  GetDocumentUrlResponse getDocumentUrlWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<GetDocumentUrlRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentUrlResponse getDocumentUrl(shared_ptr<string> workspaceId, shared_ptr<GetDocumentUrlRequest> request);
  GetFilterDocumentListResponse getFilterDocumentListWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<GetFilterDocumentListRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFilterDocumentListResponse getFilterDocumentList(shared_ptr<string> workspaceId, shared_ptr<GetFilterDocumentListRequest> request);
  GetHistoryListByBizTypeResponse getHistoryListByBizTypeWithOptions(shared_ptr<string> workspaceId,
                                                                     shared_ptr<GetHistoryListByBizTypeRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryListByBizTypeResponse getHistoryListByBizType(shared_ptr<string> workspaceId, shared_ptr<GetHistoryListByBizTypeRequest> request);
  GetLibraryResponse getLibraryWithOptions(shared_ptr<string> workspaceId,
                                           shared_ptr<GetLibraryRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLibraryResponse getLibrary(shared_ptr<string> workspaceId, shared_ptr<GetLibraryRequest> request);
  GetLibraryListResponse getLibraryListWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<GetLibraryListRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLibraryListResponse getLibraryList(shared_ptr<string> workspaceId, shared_ptr<GetLibraryListRequest> request);
  GetParseResultResponse getParseResultWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<GetParseResultRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParseResultResponse getParseResult(shared_ptr<string> workspaceId, shared_ptr<GetParseResultRequest> request);
  GetQualityCheckTaskResultResponse getQualityCheckTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                                         shared_ptr<GetQualityCheckTaskResultRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualityCheckTaskResultResponse getQualityCheckTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetQualityCheckTaskResultRequest> request);
  GetSummaryTaskResultResponse getSummaryTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<GetSummaryTaskResultRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSummaryTaskResultResponse getSummaryTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetSummaryTaskResultRequest> request);
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<GetTaskResultRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetTaskResultRequest> request);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<GetTaskStatusRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<string> workspaceId, shared_ptr<GetTaskStatusRequest> request);
  InvokePluginResponse invokePluginWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<InvokePluginRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokePluginResponse invokePlugin(shared_ptr<string> workspaceId, shared_ptr<InvokePluginRequest> request);
  PreviewDocumentResponse previewDocumentWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<PreviewDocumentRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreviewDocumentResponse previewDocument(shared_ptr<string> workspaceId, shared_ptr<PreviewDocumentRequest> request);
  ReIndexResponse reIndexWithOptions(shared_ptr<string> workspaceId,
                                     shared_ptr<ReIndexRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReIndexResponse reIndex(shared_ptr<string> workspaceId, shared_ptr<ReIndexRequest> request);
  RealTimeDialogResponse realTimeDialogWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<RealTimeDialogRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RealTimeDialogResponse realTimeDialog(shared_ptr<string> workspaceId, shared_ptr<RealTimeDialogRequest> request);
  RebuildTaskResponse rebuildTaskWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<RebuildTaskRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebuildTaskResponse rebuildTask(shared_ptr<string> workspaceId, shared_ptr<RebuildTaskRequest> request);
  RecallDocumentResponse recallDocumentWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<RecallDocumentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecallDocumentResponse recallDocument(shared_ptr<string> workspaceId, shared_ptr<RecallDocumentRequest> request);
  RecognizeIntentionResponse recognizeIntentionWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<RecognizeIntentionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIntentionResponse recognizeIntention(shared_ptr<string> workspaceId, shared_ptr<RecognizeIntentionRequest> request);
  RunAgentResponse runAgentWithOptions(shared_ptr<string> workspaceId,
                                       shared_ptr<RunAgentRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunAgentResponse runAgent(shared_ptr<string> workspaceId, shared_ptr<RunAgentRequest> request);
  RunChatResultGenerationResponse runChatResultGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                     shared_ptr<RunChatResultGenerationRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunChatResultGenerationResponse runChatResultGeneration(shared_ptr<string> workspaceId, shared_ptr<RunChatResultGenerationRequest> request);
  RunLibraryChatGenerationResponse runLibraryChatGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                       shared_ptr<RunLibraryChatGenerationRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunLibraryChatGenerationResponse runLibraryChatGeneration(shared_ptr<string> workspaceId, shared_ptr<RunLibraryChatGenerationRequest> request);
  SubmitChatQuestionResponse submitChatQuestionWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<SubmitChatQuestionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitChatQuestionResponse submitChatQuestion(shared_ptr<string> workspaceId, shared_ptr<SubmitChatQuestionRequest> request);
  UpdateDocumentResponse updateDocumentWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<UpdateDocumentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDocumentResponse updateDocument(shared_ptr<string> workspaceId, shared_ptr<UpdateDocumentRequest> request);
  UpdateLibraryResponse updateLibraryWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<UpdateLibraryRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLibraryResponse updateLibrary(shared_ptr<string> workspaceId, shared_ptr<UpdateLibraryRequest> request);
  UpdateQaLibraryResponse updateQaLibraryWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<UpdateQaLibraryRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQaLibraryResponse updateQaLibrary(shared_ptr<string> workspaceId, shared_ptr<UpdateQaLibraryRequest> request);
  UploadDocumentResponse uploadDocumentWithOptions(shared_ptr<string> workspaceId,
                                                   shared_ptr<UploadDocumentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDocumentResponse uploadDocument(shared_ptr<string> workspaceId, shared_ptr<UploadDocumentRequest> request);
  UploadDocumentResponse uploadDocumentAdvance(shared_ptr<string> workspaceId,
                                               shared_ptr<UploadDocumentAdvanceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DianJin20240628

#endif
