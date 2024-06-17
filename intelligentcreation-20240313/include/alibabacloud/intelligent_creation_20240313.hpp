// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_INTELLIGENTCREATION20240313_H_
#define ALIBABACLOUD_INTELLIGENTCREATION20240313_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_IntelligentCreation20240313 {
class UploadInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> host{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> policySignature{};
  shared_ptr<string> url{};

  UploadInfo() {}

  explicit UploadInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["accessId"] = boost::any(*accessId);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (policySignature) {
      res["policySignature"] = boost::any(*policySignature);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessId") != m.end() && !m["accessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["accessId"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("policySignature") != m.end() && !m["policySignature"].empty()) {
      policySignature = make_shared<string>(boost::any_cast<string>(m["policySignature"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~UploadInfo() = default;
};
class GetOssUploadTokenResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UploadInfo> uploadInfo{};

  GetOssUploadTokenResult() {}

  explicit GetOssUploadTokenResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (uploadInfo) {
      res["uploadInfo"] = uploadInfo ? boost::any(uploadInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("uploadInfo") != m.end() && !m["uploadInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["uploadInfo"].type()) {
        UploadInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["uploadInfo"]));
        uploadInfo = make_shared<UploadInfo>(model1);
      }
    }
  }


  virtual ~GetOssUploadTokenResult() = default;
};
class Illustration : public Darabonba::Model {
public:
  shared_ptr<long> illustrationId{};
  shared_ptr<string> oss{};

  Illustration() {}

  explicit Illustration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (illustrationId) {
      res["illustrationId"] = boost::any(*illustrationId);
    }
    if (oss) {
      res["oss"] = boost::any(*oss);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("illustrationId") != m.end() && !m["illustrationId"].empty()) {
      illustrationId = make_shared<long>(boost::any_cast<long>(m["illustrationId"]));
    }
    if (m.find("oss") != m.end() && !m["oss"].empty()) {
      oss = make_shared<string>(boost::any_cast<string>(m["oss"]));
    }
  }


  virtual ~Illustration() = default;
};
class IllustrationResult : public Darabonba::Model {
public:
  shared_ptr<Illustration> illustration{};
  shared_ptr<string> requestId{};

  IllustrationResult() {}

  explicit IllustrationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (illustration) {
      res["illustration"] = illustration ? boost::any(illustration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("illustration") != m.end() && !m["illustration"].empty()) {
      if (typeid(map<string, boost::any>) == m["illustration"].type()) {
        Illustration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["illustration"]));
        illustration = make_shared<Illustration>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~IllustrationResult() = default;
};
class IllustrationTask : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<vector<long>> illustrationIds{};
  shared_ptr<long> illustrationTaskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> textId{};

  IllustrationTask() {}

  explicit IllustrationTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (illustrationIds) {
      res["illustrationIds"] = boost::any(*illustrationIds);
    }
    if (illustrationTaskId) {
      res["illustrationTaskId"] = boost::any(*illustrationTaskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    if (textId) {
      res["textId"] = boost::any(*textId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("illustrationIds") != m.end() && !m["illustrationIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["illustrationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["illustrationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      illustrationIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("illustrationTaskId") != m.end() && !m["illustrationTaskId"].empty()) {
      illustrationTaskId = make_shared<long>(boost::any_cast<long>(m["illustrationTaskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
    if (m.find("textId") != m.end() && !m["textId"].empty()) {
      textId = make_shared<long>(boost::any_cast<long>(m["textId"]));
    }
  }


  virtual ~IllustrationTask() = default;
};
class IllustrationTaskCreateCmd : public Darabonba::Model {
public:
  shared_ptr<long> backgroundType{};
  shared_ptr<long> dstHeight{};
  shared_ptr<long> dstWidth{};
  shared_ptr<string> idempotentId{};
  shared_ptr<long> nums{};
  shared_ptr<vector<string>> ossPaths{};
  shared_ptr<string> stickerText{};

  IllustrationTaskCreateCmd() {}

  explicit IllustrationTaskCreateCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundType) {
      res["backgroundType"] = boost::any(*backgroundType);
    }
    if (dstHeight) {
      res["dstHeight"] = boost::any(*dstHeight);
    }
    if (dstWidth) {
      res["dstWidth"] = boost::any(*dstWidth);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (nums) {
      res["nums"] = boost::any(*nums);
    }
    if (ossPaths) {
      res["ossPaths"] = boost::any(*ossPaths);
    }
    if (stickerText) {
      res["stickerText"] = boost::any(*stickerText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backgroundType") != m.end() && !m["backgroundType"].empty()) {
      backgroundType = make_shared<long>(boost::any_cast<long>(m["backgroundType"]));
    }
    if (m.find("dstHeight") != m.end() && !m["dstHeight"].empty()) {
      dstHeight = make_shared<long>(boost::any_cast<long>(m["dstHeight"]));
    }
    if (m.find("dstWidth") != m.end() && !m["dstWidth"].empty()) {
      dstWidth = make_shared<long>(boost::any_cast<long>(m["dstWidth"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("nums") != m.end() && !m["nums"].empty()) {
      nums = make_shared<long>(boost::any_cast<long>(m["nums"]));
    }
    if (m.find("ossPaths") != m.end() && !m["ossPaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ossPaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ossPaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ossPaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("stickerText") != m.end() && !m["stickerText"].empty()) {
      stickerText = make_shared<string>(boost::any_cast<string>(m["stickerText"]));
    }
  }


  virtual ~IllustrationTaskCreateCmd() = default;
};
class IllustrationTaskResult : public Darabonba::Model {
public:
  shared_ptr<IllustrationTask> illustrationTask{};
  shared_ptr<string> requestId{};

  IllustrationTaskResult() {}

  explicit IllustrationTaskResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (illustrationTask) {
      res["illustrationTask"] = illustrationTask ? boost::any(illustrationTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("illustrationTask") != m.end() && !m["illustrationTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["illustrationTask"].type()) {
        IllustrationTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["illustrationTask"]));
        illustrationTask = make_shared<IllustrationTask>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~IllustrationTaskResult() = default;
};
class ReferenceTag : public Darabonba::Model {
public:
  shared_ptr<string> referenceContent{};
  shared_ptr<string> referenceTitle{};

  ReferenceTag() {}

  explicit ReferenceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (referenceContent) {
      res["referenceContent"] = boost::any(*referenceContent);
    }
    if (referenceTitle) {
      res["referenceTitle"] = boost::any(*referenceTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("referenceContent") != m.end() && !m["referenceContent"].empty()) {
      referenceContent = make_shared<string>(boost::any_cast<string>(m["referenceContent"]));
    }
    if (m.find("referenceTitle") != m.end() && !m["referenceTitle"].empty()) {
      referenceTitle = make_shared<string>(boost::any_cast<string>(m["referenceTitle"]));
    }
  }


  virtual ~ReferenceTag() = default;
};
class Text : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};
  shared_ptr<string> desc{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<vector<long>> illustrationTaskIdList{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> textContent{};
  shared_ptr<long> textId{};
  shared_ptr<bool> textIllustrationTag{};
  shared_ptr<string> textModeType{};
  shared_ptr<string> textStatus{};
  shared_ptr<string> textStyleType{};
  shared_ptr<long> textTaskId{};
  shared_ptr<vector<string>> textThemes{};
  shared_ptr<string> title{};
  shared_ptr<string> userNameCreate{};
  shared_ptr<string> userNameModified{};

  Text() {}

  explicit Text(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (agentName) {
      res["agentName"] = boost::any(*agentName);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (illustrationTaskIdList) {
      res["illustrationTaskIdList"] = boost::any(*illustrationTaskIdList);
    }
    if (publishStatus) {
      res["publishStatus"] = boost::any(*publishStatus);
    }
    if (textContent) {
      res["textContent"] = boost::any(*textContent);
    }
    if (textId) {
      res["textId"] = boost::any(*textId);
    }
    if (textIllustrationTag) {
      res["textIllustrationTag"] = boost::any(*textIllustrationTag);
    }
    if (textModeType) {
      res["textModeType"] = boost::any(*textModeType);
    }
    if (textStatus) {
      res["textStatus"] = boost::any(*textStatus);
    }
    if (textStyleType) {
      res["textStyleType"] = boost::any(*textStyleType);
    }
    if (textTaskId) {
      res["textTaskId"] = boost::any(*textTaskId);
    }
    if (textThemes) {
      res["textThemes"] = boost::any(*textThemes);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userNameCreate) {
      res["userNameCreate"] = boost::any(*userNameCreate);
    }
    if (userNameModified) {
      res["userNameModified"] = boost::any(*userNameModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("agentName") != m.end() && !m["agentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["agentName"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("illustrationTaskIdList") != m.end() && !m["illustrationTaskIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["illustrationTaskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["illustrationTaskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      illustrationTaskIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("publishStatus") != m.end() && !m["publishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["publishStatus"]));
    }
    if (m.find("textContent") != m.end() && !m["textContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["textContent"]));
    }
    if (m.find("textId") != m.end() && !m["textId"].empty()) {
      textId = make_shared<long>(boost::any_cast<long>(m["textId"]));
    }
    if (m.find("textIllustrationTag") != m.end() && !m["textIllustrationTag"].empty()) {
      textIllustrationTag = make_shared<bool>(boost::any_cast<bool>(m["textIllustrationTag"]));
    }
    if (m.find("textModeType") != m.end() && !m["textModeType"].empty()) {
      textModeType = make_shared<string>(boost::any_cast<string>(m["textModeType"]));
    }
    if (m.find("textStatus") != m.end() && !m["textStatus"].empty()) {
      textStatus = make_shared<string>(boost::any_cast<string>(m["textStatus"]));
    }
    if (m.find("textStyleType") != m.end() && !m["textStyleType"].empty()) {
      textStyleType = make_shared<string>(boost::any_cast<string>(m["textStyleType"]));
    }
    if (m.find("textTaskId") != m.end() && !m["textTaskId"].empty()) {
      textTaskId = make_shared<long>(boost::any_cast<long>(m["textTaskId"]));
    }
    if (m.find("textThemes") != m.end() && !m["textThemes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["textThemes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textThemes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textThemes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("userNameCreate") != m.end() && !m["userNameCreate"].empty()) {
      userNameCreate = make_shared<string>(boost::any_cast<string>(m["userNameCreate"]));
    }
    if (m.find("userNameModified") != m.end() && !m["userNameModified"].empty()) {
      userNameModified = make_shared<string>(boost::any_cast<string>(m["userNameModified"]));
    }
  }


  virtual ~Text() = default;
};
class TextQueryResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<Text>> texts{};
  shared_ptr<long> total{};

  TextQueryResult() {}

  explicit TextQueryResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["texts"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("texts") != m.end() && !m["texts"].empty()) {
      if (typeid(vector<boost::any>) == m["texts"].type()) {
        vector<Text> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Text model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<Text>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~TextQueryResult() = default;
};
class TextResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Text> text{};

  TextResult() {}

  explicit TextResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (text) {
      res["text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      if (typeid(map<string, boost::any>) == m["text"].type()) {
        Text model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["text"]));
        text = make_shared<Text>(model1);
      }
    }
  }


  virtual ~TextResult() = default;
};
class TextTask : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};
  shared_ptr<string> contentRequirement{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> introduction{};
  shared_ptr<long> nums{};
  shared_ptr<string> point{};
  shared_ptr<ReferenceTag> referenceTag{};
  shared_ptr<long> relatedRagId{};
  shared_ptr<string> style{};
  shared_ptr<string> target{};
  shared_ptr<vector<long>> textIds{};
  shared_ptr<string> textModeType{};
  shared_ptr<long> textTaskId{};
  shared_ptr<string> textTaskStatus{};
  shared_ptr<vector<Text>> texts{};
  shared_ptr<string> theme{};
  shared_ptr<string> themeDesc{};

  TextTask() {}

  explicit TextTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (agentName) {
      res["agentName"] = boost::any(*agentName);
    }
    if (contentRequirement) {
      res["contentRequirement"] = boost::any(*contentRequirement);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (introduction) {
      res["introduction"] = boost::any(*introduction);
    }
    if (nums) {
      res["nums"] = boost::any(*nums);
    }
    if (point) {
      res["point"] = boost::any(*point);
    }
    if (referenceTag) {
      res["referenceTag"] = referenceTag ? boost::any(referenceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (relatedRagId) {
      res["relatedRagId"] = boost::any(*relatedRagId);
    }
    if (style) {
      res["style"] = boost::any(*style);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (textIds) {
      res["textIds"] = boost::any(*textIds);
    }
    if (textModeType) {
      res["textModeType"] = boost::any(*textModeType);
    }
    if (textTaskId) {
      res["textTaskId"] = boost::any(*textTaskId);
    }
    if (textTaskStatus) {
      res["textTaskStatus"] = boost::any(*textTaskStatus);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["texts"] = boost::any(temp1);
    }
    if (theme) {
      res["theme"] = boost::any(*theme);
    }
    if (themeDesc) {
      res["themeDesc"] = boost::any(*themeDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("agentName") != m.end() && !m["agentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["agentName"]));
    }
    if (m.find("contentRequirement") != m.end() && !m["contentRequirement"].empty()) {
      contentRequirement = make_shared<string>(boost::any_cast<string>(m["contentRequirement"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("introduction") != m.end() && !m["introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["introduction"]));
    }
    if (m.find("nums") != m.end() && !m["nums"].empty()) {
      nums = make_shared<long>(boost::any_cast<long>(m["nums"]));
    }
    if (m.find("point") != m.end() && !m["point"].empty()) {
      point = make_shared<string>(boost::any_cast<string>(m["point"]));
    }
    if (m.find("referenceTag") != m.end() && !m["referenceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["referenceTag"].type()) {
        ReferenceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["referenceTag"]));
        referenceTag = make_shared<ReferenceTag>(model1);
      }
    }
    if (m.find("relatedRagId") != m.end() && !m["relatedRagId"].empty()) {
      relatedRagId = make_shared<long>(boost::any_cast<long>(m["relatedRagId"]));
    }
    if (m.find("style") != m.end() && !m["style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["style"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
    if (m.find("textIds") != m.end() && !m["textIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["textIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      textIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("textModeType") != m.end() && !m["textModeType"].empty()) {
      textModeType = make_shared<string>(boost::any_cast<string>(m["textModeType"]));
    }
    if (m.find("textTaskId") != m.end() && !m["textTaskId"].empty()) {
      textTaskId = make_shared<long>(boost::any_cast<long>(m["textTaskId"]));
    }
    if (m.find("textTaskStatus") != m.end() && !m["textTaskStatus"].empty()) {
      textTaskStatus = make_shared<string>(boost::any_cast<string>(m["textTaskStatus"]));
    }
    if (m.find("texts") != m.end() && !m["texts"].empty()) {
      if (typeid(vector<boost::any>) == m["texts"].type()) {
        vector<Text> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Text model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<Text>>(expect1);
      }
    }
    if (m.find("theme") != m.end() && !m["theme"].empty()) {
      theme = make_shared<string>(boost::any_cast<string>(m["theme"]));
    }
    if (m.find("themeDesc") != m.end() && !m["themeDesc"].empty()) {
      themeDesc = make_shared<string>(boost::any_cast<string>(m["themeDesc"]));
    }
  }


  virtual ~TextTask() = default;
};
class TextTaskCreateCmd : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> contentRequirement{};
  shared_ptr<string> idempotentId{};
  shared_ptr<string> industry{};
  shared_ptr<string> introduction{};
  shared_ptr<long> number{};
  shared_ptr<string> point{};
  shared_ptr<ReferenceTag> referenceTag{};
  shared_ptr<vector<long>> relatedRagIds{};
  shared_ptr<string> style{};
  shared_ptr<string> target{};
  shared_ptr<string> textModeType{};
  shared_ptr<string> theme{};
  shared_ptr<vector<string>> themes{};

  TextTaskCreateCmd() {}

  explicit TextTaskCreateCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (contentRequirement) {
      res["contentRequirement"] = boost::any(*contentRequirement);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (introduction) {
      res["introduction"] = boost::any(*introduction);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (point) {
      res["point"] = boost::any(*point);
    }
    if (referenceTag) {
      res["referenceTag"] = referenceTag ? boost::any(referenceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (relatedRagIds) {
      res["relatedRagIds"] = boost::any(*relatedRagIds);
    }
    if (style) {
      res["style"] = boost::any(*style);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (textModeType) {
      res["textModeType"] = boost::any(*textModeType);
    }
    if (theme) {
      res["theme"] = boost::any(*theme);
    }
    if (themes) {
      res["themes"] = boost::any(*themes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("contentRequirement") != m.end() && !m["contentRequirement"].empty()) {
      contentRequirement = make_shared<string>(boost::any_cast<string>(m["contentRequirement"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("introduction") != m.end() && !m["introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["introduction"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("point") != m.end() && !m["point"].empty()) {
      point = make_shared<string>(boost::any_cast<string>(m["point"]));
    }
    if (m.find("referenceTag") != m.end() && !m["referenceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["referenceTag"].type()) {
        ReferenceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["referenceTag"]));
        referenceTag = make_shared<ReferenceTag>(model1);
      }
    }
    if (m.find("relatedRagIds") != m.end() && !m["relatedRagIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["relatedRagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["relatedRagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedRagIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("style") != m.end() && !m["style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["style"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
    if (m.find("textModeType") != m.end() && !m["textModeType"].empty()) {
      textModeType = make_shared<string>(boost::any_cast<string>(m["textModeType"]));
    }
    if (m.find("theme") != m.end() && !m["theme"].empty()) {
      theme = make_shared<string>(boost::any_cast<string>(m["theme"]));
    }
    if (m.find("themes") != m.end() && !m["themes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["themes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["themes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      themes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TextTaskCreateCmd() = default;
};
class TextTaskResult : public Darabonba::Model {
public:
  shared_ptr<TextTask> textTask{};

  TextTaskResult() {}

  explicit TextTaskResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textTask) {
      res["textTask"] = textTask ? boost::any(textTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("textTask") != m.end() && !m["textTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["textTask"].type()) {
        TextTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["textTask"]));
        textTask = make_shared<TextTask>(model1);
      }
    }
  }


  virtual ~TextTaskResult() = default;
};
class TextTheme : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> name{};

  TextTheme() {}

  explicit TextTheme(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TextTheme() = default;
};
class TextThemeListResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<TextTheme>> textThemeList{};

  TextThemeListResult() {}

  explicit TextThemeListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (textThemeList) {
      vector<boost::any> temp1;
      for(auto item1:*textThemeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textThemeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("textThemeList") != m.end() && !m["textThemeList"].empty()) {
      if (typeid(vector<boost::any>) == m["textThemeList"].type()) {
        vector<TextTheme> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textThemeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TextTheme model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textThemeList = make_shared<vector<TextTheme>>(expect1);
      }
    }
  }


  virtual ~TextThemeListResult() = default;
};
class CreateIllustrationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<IllustrationTaskCreateCmd> body{};

  CreateIllustrationTaskRequest() {}

  explicit CreateIllustrationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IllustrationTaskCreateCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IllustrationTaskCreateCmd>(model1);
      }
    }
  }


  virtual ~CreateIllustrationTaskRequest() = default;
};
class CreateIllustrationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IllustrationTaskResult> body{};

  CreateIllustrationTaskResponse() {}

  explicit CreateIllustrationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IllustrationTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IllustrationTaskResult>(model1);
      }
    }
  }


  virtual ~CreateIllustrationTaskResponse() = default;
};
class CreateTextTaskRequest : public Darabonba::Model {
public:
  shared_ptr<TextTaskCreateCmd> body{};

  CreateTextTaskRequest() {}

  explicit CreateTextTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextTaskCreateCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextTaskCreateCmd>(model1);
      }
    }
  }


  virtual ~CreateTextTaskRequest() = default;
};
class CreateTextTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextTaskResult> body{};

  CreateTextTaskResponse() {}

  explicit CreateTextTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextTaskResult>(model1);
      }
    }
  }


  virtual ~CreateTextTaskResponse() = default;
};
class GetIllustrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IllustrationResult> body{};

  GetIllustrationResponse() {}

  explicit GetIllustrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IllustrationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IllustrationResult>(model1);
      }
    }
  }


  virtual ~GetIllustrationResponse() = default;
};
class GetIllustrationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IllustrationTaskResult> body{};

  GetIllustrationTaskResponse() {}

  explicit GetIllustrationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IllustrationTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IllustrationTaskResult>(model1);
      }
    }
  }


  virtual ~GetIllustrationTaskResponse() = default;
};
class GetOssUploadTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};

  GetOssUploadTokenRequest() {}

  explicit GetOssUploadTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
  }


  virtual ~GetOssUploadTokenRequest() = default;
};
class GetOssUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssUploadTokenResult> body{};

  GetOssUploadTokenResponse() {}

  explicit GetOssUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOssUploadTokenResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssUploadTokenResult>(model1);
      }
    }
  }


  virtual ~GetOssUploadTokenResponse() = default;
};
class GetTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextResult> body{};

  GetTextResponse() {}

  explicit GetTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextResult>(model1);
      }
    }
  }


  virtual ~GetTextResponse() = default;
};
class GetTextTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextTaskResult> body{};

  GetTextTaskResponse() {}

  explicit GetTextTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextTaskResult>(model1);
      }
    }
  }


  virtual ~GetTextTaskResponse() = default;
};
class ListTextThemesRequest : public Darabonba::Model {
public:
  shared_ptr<string> industry{};

  ListTextThemesRequest() {}

  explicit ListTextThemesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
  }


  virtual ~ListTextThemesRequest() = default;
};
class ListTextThemesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextThemeListResult> body{};

  ListTextThemesResponse() {}

  explicit ListTextThemesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextThemeListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextThemeListResult>(model1);
      }
    }
  }


  virtual ~ListTextThemesResponse() = default;
};
class ListTextsRequest : public Darabonba::Model {
public:
  shared_ptr<string> generationSource{};
  shared_ptr<string> industry{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> textStyleType{};
  shared_ptr<string> textTheme{};

  ListTextsRequest() {}

  explicit ListTextsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generationSource) {
      res["generationSource"] = boost::any(*generationSource);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (publishStatus) {
      res["publishStatus"] = boost::any(*publishStatus);
    }
    if (textStyleType) {
      res["textStyleType"] = boost::any(*textStyleType);
    }
    if (textTheme) {
      res["textTheme"] = boost::any(*textTheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generationSource") != m.end() && !m["generationSource"].empty()) {
      generationSource = make_shared<string>(boost::any_cast<string>(m["generationSource"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("publishStatus") != m.end() && !m["publishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["publishStatus"]));
    }
    if (m.find("textStyleType") != m.end() && !m["textStyleType"].empty()) {
      textStyleType = make_shared<string>(boost::any_cast<string>(m["textStyleType"]));
    }
    if (m.find("textTheme") != m.end() && !m["textTheme"].empty()) {
      textTheme = make_shared<string>(boost::any_cast<string>(m["textTheme"]));
    }
  }


  virtual ~ListTextsRequest() = default;
};
class ListTextsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TextQueryResult> body{};

  ListTextsResponse() {}

  explicit ListTextsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TextQueryResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TextQueryResult>(model1);
      }
    }
  }


  virtual ~ListTextsResponse() = default;
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
  CreateIllustrationTaskResponse createIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                                   shared_ptr<CreateIllustrationTaskRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIllustrationTaskResponse createIllustrationTask(shared_ptr<string> textId, shared_ptr<CreateIllustrationTaskRequest> request);
  CreateTextTaskResponse createTextTaskWithOptions(shared_ptr<CreateTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTextTaskResponse createTextTask(shared_ptr<CreateTextTaskRequest> request);
  GetIllustrationResponse getIllustrationWithOptions(shared_ptr<string> textId,
                                                     shared_ptr<string> illustrationId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIllustrationResponse getIllustration(shared_ptr<string> textId, shared_ptr<string> illustrationId);
  GetIllustrationTaskResponse getIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                             shared_ptr<string> illustrationTaskId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIllustrationTaskResponse getIllustrationTask(shared_ptr<string> textId, shared_ptr<string> illustrationTaskId);
  GetOssUploadTokenResponse getOssUploadTokenWithOptions(shared_ptr<GetOssUploadTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssUploadTokenResponse getOssUploadToken(shared_ptr<GetOssUploadTokenRequest> request);
  GetTextResponse getTextWithOptions(shared_ptr<string> textId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextResponse getText(shared_ptr<string> textId);
  GetTextTaskResponse getTextTaskWithOptions(shared_ptr<string> textTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextTaskResponse getTextTask(shared_ptr<string> textTaskId);
  ListTextThemesResponse listTextThemesWithOptions(shared_ptr<ListTextThemesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextThemesResponse listTextThemes(shared_ptr<ListTextThemesRequest> request);
  ListTextsResponse listTextsWithOptions(shared_ptr<ListTextsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextsResponse listTexts(shared_ptr<ListTextsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IntelligentCreation20240313

#endif
