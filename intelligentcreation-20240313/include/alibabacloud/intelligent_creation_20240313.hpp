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
class AnchorResponse : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> anchorMaterialName{};
  shared_ptr<string> anchorType{};
  shared_ptr<long> coverHeight{};
  shared_ptr<string> coverRate{};
  shared_ptr<string> coverThumbnailUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> coverWeight{};
  shared_ptr<string> digitalHumanType{};
  shared_ptr<string> gender{};
  shared_ptr<string> resourceTypeDesc{};
  shared_ptr<string> status{};
  shared_ptr<string> useScene{};

  AnchorResponse() {}

  explicit AnchorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["anchorId"] = boost::any(*anchorId);
    }
    if (anchorMaterialName) {
      res["anchorMaterialName"] = boost::any(*anchorMaterialName);
    }
    if (anchorType) {
      res["anchorType"] = boost::any(*anchorType);
    }
    if (coverHeight) {
      res["coverHeight"] = boost::any(*coverHeight);
    }
    if (coverRate) {
      res["coverRate"] = boost::any(*coverRate);
    }
    if (coverThumbnailUrl) {
      res["coverThumbnailUrl"] = boost::any(*coverThumbnailUrl);
    }
    if (coverUrl) {
      res["coverUrl"] = boost::any(*coverUrl);
    }
    if (coverWeight) {
      res["coverWeight"] = boost::any(*coverWeight);
    }
    if (digitalHumanType) {
      res["digitalHumanType"] = boost::any(*digitalHumanType);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (resourceTypeDesc) {
      res["resourceTypeDesc"] = boost::any(*resourceTypeDesc);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("anchorId") != m.end() && !m["anchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["anchorId"]));
    }
    if (m.find("anchorMaterialName") != m.end() && !m["anchorMaterialName"].empty()) {
      anchorMaterialName = make_shared<string>(boost::any_cast<string>(m["anchorMaterialName"]));
    }
    if (m.find("anchorType") != m.end() && !m["anchorType"].empty()) {
      anchorType = make_shared<string>(boost::any_cast<string>(m["anchorType"]));
    }
    if (m.find("coverHeight") != m.end() && !m["coverHeight"].empty()) {
      coverHeight = make_shared<long>(boost::any_cast<long>(m["coverHeight"]));
    }
    if (m.find("coverRate") != m.end() && !m["coverRate"].empty()) {
      coverRate = make_shared<string>(boost::any_cast<string>(m["coverRate"]));
    }
    if (m.find("coverThumbnailUrl") != m.end() && !m["coverThumbnailUrl"].empty()) {
      coverThumbnailUrl = make_shared<string>(boost::any_cast<string>(m["coverThumbnailUrl"]));
    }
    if (m.find("coverUrl") != m.end() && !m["coverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["coverUrl"]));
    }
    if (m.find("coverWeight") != m.end() && !m["coverWeight"].empty()) {
      coverWeight = make_shared<long>(boost::any_cast<long>(m["coverWeight"]));
    }
    if (m.find("digitalHumanType") != m.end() && !m["digitalHumanType"].empty()) {
      digitalHumanType = make_shared<string>(boost::any_cast<string>(m["digitalHumanType"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["gender"]));
    }
    if (m.find("resourceTypeDesc") != m.end() && !m["resourceTypeDesc"].empty()) {
      resourceTypeDesc = make_shared<string>(boost::any_cast<string>(m["resourceTypeDesc"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
  }


  virtual ~AnchorResponse() = default;
};
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
  shared_ptr<bool> streamApi{};
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
    if (streamApi) {
      res["streamApi"] = boost::any(*streamApi);
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
    if (m.find("streamApi") != m.end() && !m["streamApi"].empty()) {
      streamApi = make_shared<bool>(boost::any_cast<bool>(m["streamApi"]));
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
class VoiceModelResponse : public Darabonba::Model {
public:
  shared_ptr<string> resourceTypeDesc{};
  shared_ptr<long> ttsVersion{};
  shared_ptr<string> useScene{};
  shared_ptr<string> voiceDesc{};
  shared_ptr<string> voiceGender{};
  shared_ptr<long> voiceId{};
  shared_ptr<string> voiceLanguage{};
  shared_ptr<string> voiceModel{};
  shared_ptr<string> voiceName{};
  shared_ptr<string> voiceType{};
  shared_ptr<string> voiceUrl{};

  VoiceModelResponse() {}

  explicit VoiceModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypeDesc) {
      res["resourceTypeDesc"] = boost::any(*resourceTypeDesc);
    }
    if (ttsVersion) {
      res["ttsVersion"] = boost::any(*ttsVersion);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    if (voiceDesc) {
      res["voiceDesc"] = boost::any(*voiceDesc);
    }
    if (voiceGender) {
      res["voiceGender"] = boost::any(*voiceGender);
    }
    if (voiceId) {
      res["voiceId"] = boost::any(*voiceId);
    }
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
    }
    if (voiceModel) {
      res["voiceModel"] = boost::any(*voiceModel);
    }
    if (voiceName) {
      res["voiceName"] = boost::any(*voiceName);
    }
    if (voiceType) {
      res["voiceType"] = boost::any(*voiceType);
    }
    if (voiceUrl) {
      res["voiceUrl"] = boost::any(*voiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceTypeDesc") != m.end() && !m["resourceTypeDesc"].empty()) {
      resourceTypeDesc = make_shared<string>(boost::any_cast<string>(m["resourceTypeDesc"]));
    }
    if (m.find("ttsVersion") != m.end() && !m["ttsVersion"].empty()) {
      ttsVersion = make_shared<long>(boost::any_cast<long>(m["ttsVersion"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
    if (m.find("voiceDesc") != m.end() && !m["voiceDesc"].empty()) {
      voiceDesc = make_shared<string>(boost::any_cast<string>(m["voiceDesc"]));
    }
    if (m.find("voiceGender") != m.end() && !m["voiceGender"].empty()) {
      voiceGender = make_shared<string>(boost::any_cast<string>(m["voiceGender"]));
    }
    if (m.find("voiceId") != m.end() && !m["voiceId"].empty()) {
      voiceId = make_shared<long>(boost::any_cast<long>(m["voiceId"]));
    }
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
    }
    if (m.find("voiceModel") != m.end() && !m["voiceModel"].empty()) {
      voiceModel = make_shared<string>(boost::any_cast<string>(m["voiceModel"]));
    }
    if (m.find("voiceName") != m.end() && !m["voiceName"].empty()) {
      voiceName = make_shared<string>(boost::any_cast<string>(m["voiceName"]));
    }
    if (m.find("voiceType") != m.end() && !m["voiceType"].empty()) {
      voiceType = make_shared<string>(boost::any_cast<string>(m["voiceType"]));
    }
    if (m.find("voiceUrl") != m.end() && !m["voiceUrl"].empty()) {
      voiceUrl = make_shared<string>(boost::any_cast<string>(m["voiceUrl"]));
    }
  }


  virtual ~VoiceModelResponse() = default;
};
class AddTextFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> quality{};
  shared_ptr<long> textId{};

  AddTextFeedbackRequest() {}

  explicit AddTextFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (quality) {
      res["quality"] = boost::any(*quality);
    }
    if (textId) {
      res["textId"] = boost::any(*textId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("quality") != m.end() && !m["quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["quality"]));
    }
    if (m.find("textId") != m.end() && !m["textId"].empty()) {
      textId = make_shared<long>(boost::any_cast<long>(m["textId"]));
    }
  }


  virtual ~AddTextFeedbackRequest() = default;
};
class AddTextFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddTextFeedbackResponseBody() {}

  explicit AddTextFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AddTextFeedbackResponseBody() = default;
};
class AddTextFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTextFeedbackResponseBody> body{};

  AddTextFeedbackResponse() {}

  explicit AddTextFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTextFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTextFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~AddTextFeedbackResponse() = default;
};
class BatchGetProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> taskIdList{};

  BatchGetProjectTaskRequest() {}

  explicit BatchGetProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskIdList) {
      res["taskIdList"] = boost::any(*taskIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskIdList") != m.end() && !m["taskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["taskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["taskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchGetProjectTaskRequest() = default;
};
class BatchGetProjectTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskIdListShrink{};

  BatchGetProjectTaskShrinkRequest() {}

  explicit BatchGetProjectTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskIdListShrink) {
      res["taskIdList"] = boost::any(*taskIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskIdList") != m.end() && !m["taskIdList"].empty()) {
      taskIdListShrink = make_shared<string>(boost::any_cast<string>(m["taskIdList"]));
    }
  }


  virtual ~BatchGetProjectTaskShrinkRequest() = default;
};
class BatchGetProjectTaskResponseBodyResultList : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> videoDownloadUrl{};
  shared_ptr<long> videoDuration{};
  shared_ptr<string> videoUrl{};

  BatchGetProjectTaskResponseBodyResultList() {}

  explicit BatchGetProjectTaskResponseBodyResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (videoDownloadUrl) {
      res["videoDownloadUrl"] = boost::any(*videoDownloadUrl);
    }
    if (videoDuration) {
      res["videoDuration"] = boost::any(*videoDuration);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("videoDownloadUrl") != m.end() && !m["videoDownloadUrl"].empty()) {
      videoDownloadUrl = make_shared<string>(boost::any_cast<string>(m["videoDownloadUrl"]));
    }
    if (m.find("videoDuration") != m.end() && !m["videoDuration"].empty()) {
      videoDuration = make_shared<long>(boost::any_cast<long>(m["videoDuration"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~BatchGetProjectTaskResponseBodyResultList() = default;
};
class BatchGetProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchGetProjectTaskResponseBodyResultList>> resultList{};

  BatchGetProjectTaskResponseBody() {}

  explicit BatchGetProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resultList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultList") != m.end() && !m["resultList"].empty()) {
      if (typeid(vector<boost::any>) == m["resultList"].type()) {
        vector<BatchGetProjectTaskResponseBodyResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetProjectTaskResponseBodyResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<BatchGetProjectTaskResponseBodyResultList>>(expect1);
      }
    }
  }


  virtual ~BatchGetProjectTaskResponseBody() = default;
};
class BatchGetProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchGetProjectTaskResponseBody> body{};

  BatchGetProjectTaskResponse() {}

  explicit BatchGetProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetProjectTaskResponse() = default;
};
class CheckSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> sessionId{};

  CheckSessionRequest() {}

  explicit CheckSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~CheckSessionRequest() = default;
};
class CheckSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CheckSessionResponseBody() {}

  explicit CheckSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CheckSessionResponseBody() = default;
};
class CheckSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSessionResponseBody> body{};

  CheckSessionResponse() {}

  explicit CheckSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSessionResponse() = default;
};
class CountTextRequest : public Darabonba::Model {
public:
  shared_ptr<string> generationSource{};
  shared_ptr<string> industry{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> style{};

  CountTextRequest() {}

  explicit CountTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (publishStatus) {
      res["publishStatus"] = boost::any(*publishStatus);
    }
    if (style) {
      res["style"] = boost::any(*style);
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
    if (m.find("publishStatus") != m.end() && !m["publishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["publishStatus"]));
    }
    if (m.find("style") != m.end() && !m["style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["style"]));
    }
  }


  virtual ~CountTextRequest() = default;
};
class CountTextResponseBodyCountTextCmdList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> theme{};

  CountTextResponseBodyCountTextCmdList() {}

  explicit CountTextResponseBodyCountTextCmdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (theme) {
      res["theme"] = boost::any(*theme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("theme") != m.end() && !m["theme"].empty()) {
      theme = make_shared<string>(boost::any_cast<string>(m["theme"]));
    }
  }


  virtual ~CountTextResponseBodyCountTextCmdList() = default;
};
class CountTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CountTextResponseBodyCountTextCmdList>> countTextCmdList{};

  CountTextResponseBody() {}

  explicit CountTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (countTextCmdList) {
      vector<boost::any> temp1;
      for(auto item1:*countTextCmdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["countTextCmdList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("countTextCmdList") != m.end() && !m["countTextCmdList"].empty()) {
      if (typeid(vector<boost::any>) == m["countTextCmdList"].type()) {
        vector<CountTextResponseBodyCountTextCmdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["countTextCmdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CountTextResponseBodyCountTextCmdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        countTextCmdList = make_shared<vector<CountTextResponseBodyCountTextCmdList>>(expect1);
      }
    }
  }


  virtual ~CountTextResponseBody() = default;
};
class CountTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CountTextResponseBody> body{};

  CountTextResponse() {}

  explicit CountTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CountTextResponseBody>(model1);
      }
    }
  }


  virtual ~CountTextResponse() = default;
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
class CreateRealisticPortraitRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> ages{};
  shared_ptr<long> cloth{};
  shared_ptr<long> color{};
  shared_ptr<string> custom{};
  shared_ptr<vector<long>> face{};
  shared_ptr<long> figure{};
  shared_ptr<long> gender{};
  shared_ptr<long> hairColor{};
  shared_ptr<long> hairstyle{};
  shared_ptr<long> height{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> numbers{};
  shared_ptr<string> ratio{};
  shared_ptr<long> width{};

  CreateRealisticPortraitRequest() {}

  explicit CreateRealisticPortraitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ages) {
      res["ages"] = boost::any(*ages);
    }
    if (cloth) {
      res["cloth"] = boost::any(*cloth);
    }
    if (color) {
      res["color"] = boost::any(*color);
    }
    if (custom) {
      res["custom"] = boost::any(*custom);
    }
    if (face) {
      res["face"] = boost::any(*face);
    }
    if (figure) {
      res["figure"] = boost::any(*figure);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (hairColor) {
      res["hairColor"] = boost::any(*hairColor);
    }
    if (hairstyle) {
      res["hairstyle"] = boost::any(*hairstyle);
    }
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (numbers) {
      res["numbers"] = boost::any(*numbers);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ages") != m.end() && !m["ages"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ages = make_shared<vector<long>>(toVec1);
    }
    if (m.find("cloth") != m.end() && !m["cloth"].empty()) {
      cloth = make_shared<long>(boost::any_cast<long>(m["cloth"]));
    }
    if (m.find("color") != m.end() && !m["color"].empty()) {
      color = make_shared<long>(boost::any_cast<long>(m["color"]));
    }
    if (m.find("custom") != m.end() && !m["custom"].empty()) {
      custom = make_shared<string>(boost::any_cast<string>(m["custom"]));
    }
    if (m.find("face") != m.end() && !m["face"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["face"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["face"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      face = make_shared<vector<long>>(toVec1);
    }
    if (m.find("figure") != m.end() && !m["figure"].empty()) {
      figure = make_shared<long>(boost::any_cast<long>(m["figure"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("hairColor") != m.end() && !m["hairColor"].empty()) {
      hairColor = make_shared<long>(boost::any_cast<long>(m["hairColor"]));
    }
    if (m.find("hairstyle") != m.end() && !m["hairstyle"].empty()) {
      hairstyle = make_shared<long>(boost::any_cast<long>(m["hairstyle"]));
    }
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["imageUrl"]));
    }
    if (m.find("numbers") != m.end() && !m["numbers"].empty()) {
      numbers = make_shared<long>(boost::any_cast<long>(m["numbers"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["ratio"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~CreateRealisticPortraitRequest() = default;
};
class CreateRealisticPortraitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateRealisticPortraitResponseBody() {}

  explicit CreateRealisticPortraitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateRealisticPortraitResponseBody() = default;
};
class CreateRealisticPortraitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRealisticPortraitResponseBody> body{};

  CreateRealisticPortraitResponse() {}

  explicit CreateRealisticPortraitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRealisticPortraitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRealisticPortraitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRealisticPortraitResponse() = default;
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
class GetProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> idempotentId{};
  shared_ptr<string> taskId{};

  GetProjectTaskRequest() {}

  explicit GetProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idempotentId) {
      res["IdempotentId"] = boost::any(*idempotentId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdempotentId") != m.end() && !m["IdempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["IdempotentId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetProjectTaskRequest() = default;
};
class GetProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> videoDownloadUrl{};
  shared_ptr<long> videoDuration{};
  shared_ptr<string> videoUrl{};

  GetProjectTaskResponseBody() {}

  explicit GetProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (videoDownloadUrl) {
      res["videoDownloadUrl"] = boost::any(*videoDownloadUrl);
    }
    if (videoDuration) {
      res["videoDuration"] = boost::any(*videoDuration);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("videoDownloadUrl") != m.end() && !m["videoDownloadUrl"].empty()) {
      videoDownloadUrl = make_shared<string>(boost::any_cast<string>(m["videoDownloadUrl"]));
    }
    if (m.find("videoDuration") != m.end() && !m["videoDuration"].empty()) {
      videoDuration = make_shared<long>(boost::any_cast<long>(m["videoDuration"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~GetProjectTaskResponseBody() = default;
};
class GetProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectTaskResponseBody> body{};

  GetProjectTaskResponse() {}

  explicit GetProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectTaskResponse() = default;
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
class GetTextTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> industry{};

  GetTextTemplateRequest() {}

  explicit GetTextTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTextTemplateRequest() = default;
};
class GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> name{};
  shared_ptr<string> templateKey{};

  GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles() {}

  explicit GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (disabled) {
      res["disabled"] = boost::any(*disabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (templateKey) {
      res["templateKey"] = boost::any(*templateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("disabled") != m.end() && !m["disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["disabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("templateKey") != m.end() && !m["templateKey"].empty()) {
      templateKey = make_shared<string>(boost::any_cast<string>(m["templateKey"]));
    }
  }


  virtual ~GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles() = default;
};
class GetTextTemplateResponseBodyAvailableIndustryTextModeTypes : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles>> textStyles{};

  GetTextTemplateResponseBodyAvailableIndustryTextModeTypes() {}

  explicit GetTextTemplateResponseBodyAvailableIndustryTextModeTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (textStyles) {
      vector<boost::any> temp1;
      for(auto item1:*textStyles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textStyles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("textStyles") != m.end() && !m["textStyles"].empty()) {
      if (typeid(vector<boost::any>) == m["textStyles"].type()) {
        vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textStyles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textStyles = make_shared<vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles>>(expect1);
      }
    }
  }


  virtual ~GetTextTemplateResponseBodyAvailableIndustryTextModeTypes() = default;
};
class GetTextTemplateResponseBodyAvailableIndustry : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypes>> textModeTypes{};

  GetTextTemplateResponseBodyAvailableIndustry() {}

  explicit GetTextTemplateResponseBodyAvailableIndustry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (textModeTypes) {
      vector<boost::any> temp1;
      for(auto item1:*textModeTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textModeTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("textModeTypes") != m.end() && !m["textModeTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["textModeTypes"].type()) {
        vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textModeTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTextTemplateResponseBodyAvailableIndustryTextModeTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textModeTypes = make_shared<vector<GetTextTemplateResponseBodyAvailableIndustryTextModeTypes>>(expect1);
      }
    }
  }


  virtual ~GetTextTemplateResponseBodyAvailableIndustry() = default;
};
class GetTextTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTextTemplateResponseBodyAvailableIndustry> availableIndustry{};
  shared_ptr<string> requestId{};

  GetTextTemplateResponseBody() {}

  explicit GetTextTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableIndustry) {
      res["availableIndustry"] = availableIndustry ? boost::any(availableIndustry->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("availableIndustry") != m.end() && !m["availableIndustry"].empty()) {
      if (typeid(map<string, boost::any>) == m["availableIndustry"].type()) {
        GetTextTemplateResponseBodyAvailableIndustry model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["availableIndustry"]));
        availableIndustry = make_shared<GetTextTemplateResponseBodyAvailableIndustry>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetTextTemplateResponseBody() = default;
};
class GetTextTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTextTemplateResponseBody> body{};

  GetTextTemplateResponse() {}

  explicit GetTextTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTextTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTextTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTextTemplateResponse() = default;
};
class InteractTextRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> content{};
  shared_ptr<string> sessionId{};

  InteractTextRequest() {}

  explicit InteractTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~InteractTextRequest() = default;
};
class InteractTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<long> index{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> relatedImages{};
  shared_ptr<vector<string>> relatedVideos{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> type{};

  InteractTextResponseBody() {}

  explicit InteractTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (relatedImages) {
      res["relatedImages"] = boost::any(*relatedImages);
    }
    if (relatedVideos) {
      res["relatedVideos"] = boost::any(*relatedVideos);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("relatedImages") != m.end() && !m["relatedImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["relatedImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["relatedImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("relatedVideos") != m.end() && !m["relatedVideos"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["relatedVideos"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["relatedVideos"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedVideos = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~InteractTextResponseBody() = default;
};
class InteractTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InteractTextResponseBody> body{};

  InteractTextResponse() {}

  explicit InteractTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InteractTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InteractTextResponseBody>(model1);
      }
    }
  }


  virtual ~InteractTextResponse() = default;
};
class ListAnchorRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorType{};
  shared_ptr<string> coverRate{};
  shared_ptr<string> digitalHumanType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> useScene{};

  ListAnchorRequest() {}

  explicit ListAnchorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorType) {
      res["anchorType"] = boost::any(*anchorType);
    }
    if (coverRate) {
      res["coverRate"] = boost::any(*coverRate);
    }
    if (digitalHumanType) {
      res["digitalHumanType"] = boost::any(*digitalHumanType);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("anchorType") != m.end() && !m["anchorType"].empty()) {
      anchorType = make_shared<string>(boost::any_cast<string>(m["anchorType"]));
    }
    if (m.find("coverRate") != m.end() && !m["coverRate"].empty()) {
      coverRate = make_shared<string>(boost::any_cast<string>(m["coverRate"]));
    }
    if (m.find("digitalHumanType") != m.end() && !m["digitalHumanType"].empty()) {
      digitalHumanType = make_shared<string>(boost::any_cast<string>(m["digitalHumanType"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
  }


  virtual ~ListAnchorRequest() = default;
};
class ListAnchorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<AnchorResponse>> list{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListAnchorResponseBody() {}

  explicit ListAnchorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<AnchorResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnchorResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<AnchorResponse>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAnchorResponseBody() = default;
};
class ListAnchorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnchorResponseBody> body{};

  ListAnchorResponse() {}

  explicit ListAnchorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAnchorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnchorResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnchorResponse() = default;
};
class ListAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> projectIdList{};

  ListAvatarProjectRequest() {}

  explicit ListAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectIdList) {
      res["projectIdList"] = boost::any(*projectIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectIdList") != m.end() && !m["projectIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["projectIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["projectIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAvatarProjectRequest() = default;
};
class ListAvatarProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectIdListShrink{};

  ListAvatarProjectShrinkRequest() {}

  explicit ListAvatarProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectIdListShrink) {
      res["projectIdList"] = boost::any(*projectIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectIdList") != m.end() && !m["projectIdList"].empty()) {
      projectIdListShrink = make_shared<string>(boost::any_cast<string>(m["projectIdList"]));
    }
  }


  virtual ~ListAvatarProjectShrinkRequest() = default;
};
class ListAvatarProjectResponseBodyQueryAvatarProjectResultList : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> status{};

  ListAvatarProjectResponseBodyQueryAvatarProjectResultList() {}

  explicit ListAvatarProjectResponseBodyQueryAvatarProjectResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListAvatarProjectResponseBodyQueryAvatarProjectResultList() = default;
};
class ListAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList>> queryAvatarProjectResultList{};
  shared_ptr<string> requestId{};

  ListAvatarProjectResponseBody() {}

  explicit ListAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryAvatarProjectResultList) {
      vector<boost::any> temp1;
      for(auto item1:*queryAvatarProjectResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryAvatarProjectResultList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryAvatarProjectResultList") != m.end() && !m["queryAvatarProjectResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["queryAvatarProjectResultList"].type()) {
        vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryAvatarProjectResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvatarProjectResponseBodyQueryAvatarProjectResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryAvatarProjectResultList = make_shared<vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListAvatarProjectResponseBody() = default;
};
class ListAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvatarProjectResponseBody> body{};

  ListAvatarProjectResponse() {}

  explicit ListAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvatarProjectResponse() = default;
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
  shared_ptr<string> keyword{};
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
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
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
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
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
class ListVoiceModelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> useScene{};
  shared_ptr<string> voiceType{};

  ListVoiceModelsRequest() {}

  explicit ListVoiceModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    if (voiceType) {
      res["voiceType"] = boost::any(*voiceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
    if (m.find("voiceType") != m.end() && !m["voiceType"].empty()) {
      voiceType = make_shared<string>(boost::any_cast<string>(m["voiceType"]));
    }
  }


  virtual ~ListVoiceModelsRequest() = default;
};
class ListVoiceModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<VoiceModelResponse>> list{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListVoiceModelsResponseBody() {}

  explicit ListVoiceModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<VoiceModelResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VoiceModelResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<VoiceModelResponse>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListVoiceModelsResponseBody() = default;
};
class ListVoiceModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceModelsResponseBody> body{};

  ListVoiceModelsResponse() {}

  explicit ListVoiceModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVoiceModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceModelsResponse() = default;
};
class OperateAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> operateType{};
  shared_ptr<string> projectId{};
  shared_ptr<long> resChannelNumber{};
  shared_ptr<string> resType{};

  OperateAvatarProjectRequest() {}

  explicit OperateAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (resChannelNumber) {
      res["resChannelNumber"] = boost::any(*resChannelNumber);
    }
    if (resType) {
      res["resType"] = boost::any(*resType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("resChannelNumber") != m.end() && !m["resChannelNumber"].empty()) {
      resChannelNumber = make_shared<long>(boost::any_cast<long>(m["resChannelNumber"]));
    }
    if (m.find("resType") != m.end() && !m["resType"].empty()) {
      resType = make_shared<string>(boost::any_cast<string>(m["resType"]));
    }
  }


  virtual ~OperateAvatarProjectRequest() = default;
};
class OperateAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateAvatarProjectResponseBody() {}

  explicit OperateAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~OperateAvatarProjectResponseBody() = default;
};
class OperateAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAvatarProjectResponseBody> body{};

  OperateAvatarProjectResponse() {}

  explicit OperateAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAvatarProjectResponse() = default;
};
class QueryAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  QueryAvatarProjectRequest() {}

  explicit QueryAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~QueryAvatarProjectRequest() = default;
};
class QueryAvatarProjectResponseBodyFramesLayersMaterial : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> id{};
  shared_ptr<string> url{};

  QueryAvatarProjectResponseBodyFramesLayersMaterial() {}

  explicit QueryAvatarProjectResponseBodyFramesLayersMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~QueryAvatarProjectResponseBodyFramesLayersMaterial() = default;
};
class QueryAvatarProjectResponseBodyFramesLayers : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<QueryAvatarProjectResponseBodyFramesLayersMaterial> material{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<string> type{};
  shared_ptr<long> width{};

  QueryAvatarProjectResponseBodyFramesLayers() {}

  explicit QueryAvatarProjectResponseBodyFramesLayers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (material) {
      res["material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (positionX) {
      res["positionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["positionY"] = boost::any(*positionY);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("material") != m.end() && !m["material"].empty()) {
      if (typeid(map<string, boost::any>) == m["material"].type()) {
        QueryAvatarProjectResponseBodyFramesLayersMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["material"]));
        material = make_shared<QueryAvatarProjectResponseBodyFramesLayersMaterial>(model1);
      }
    }
    if (m.find("positionX") != m.end() && !m["positionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["positionX"]));
    }
    if (m.find("positionY") != m.end() && !m["positionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["positionY"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~QueryAvatarProjectResponseBodyFramesLayers() = default;
};
class QueryAvatarProjectResponseBodyFramesVideoScript : public Darabonba::Model {
public:
  shared_ptr<string> speedRate{};
  shared_ptr<string> voiceTemplateId{};

  QueryAvatarProjectResponseBodyFramesVideoScript() {}

  explicit QueryAvatarProjectResponseBodyFramesVideoScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (speedRate) {
      res["speedRate"] = boost::any(*speedRate);
    }
    if (voiceTemplateId) {
      res["voiceTemplateId"] = boost::any(*voiceTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("speedRate") != m.end() && !m["speedRate"].empty()) {
      speedRate = make_shared<string>(boost::any_cast<string>(m["speedRate"]));
    }
    if (m.find("voiceTemplateId") != m.end() && !m["voiceTemplateId"].empty()) {
      voiceTemplateId = make_shared<string>(boost::any_cast<string>(m["voiceTemplateId"]));
    }
  }


  virtual ~QueryAvatarProjectResponseBodyFramesVideoScript() = default;
};
class QueryAvatarProjectResponseBodyFrames : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAvatarProjectResponseBodyFramesLayers>> layers{};
  shared_ptr<QueryAvatarProjectResponseBodyFramesVideoScript> videoScript{};

  QueryAvatarProjectResponseBodyFrames() {}

  explicit QueryAvatarProjectResponseBodyFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (videoScript) {
      res["videoScript"] = videoScript ? boost::any(videoScript->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<QueryAvatarProjectResponseBodyFramesLayers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarProjectResponseBodyFramesLayers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<QueryAvatarProjectResponseBodyFramesLayers>>(expect1);
      }
    }
    if (m.find("videoScript") != m.end() && !m["videoScript"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoScript"].type()) {
        QueryAvatarProjectResponseBodyFramesVideoScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoScript"]));
        videoScript = make_shared<QueryAvatarProjectResponseBodyFramesVideoScript>(model1);
      }
    }
  }


  virtual ~QueryAvatarProjectResponseBodyFrames() = default;
};
class QueryAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<QueryAvatarProjectResponseBodyFrames>> frames{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> status{};

  QueryAvatarProjectResponseBody() {}

  explicit QueryAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["frames"] = boost::any(temp1);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (scaleType) {
      res["scaleType"] = boost::any(*scaleType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("frames") != m.end() && !m["frames"].empty()) {
      if (typeid(vector<boost::any>) == m["frames"].type()) {
        vector<QueryAvatarProjectResponseBodyFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarProjectResponseBodyFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<QueryAvatarProjectResponseBodyFrames>>(expect1);
      }
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("scaleType") != m.end() && !m["scaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["scaleType"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~QueryAvatarProjectResponseBody() = default;
};
class QueryAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAvatarProjectResponseBody> body{};

  QueryAvatarProjectResponse() {}

  explicit QueryAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvatarProjectResponse() = default;
};
class QueryAvatarResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> idempotentId{};

  QueryAvatarResourceRequest() {}

  explicit QueryAvatarResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
  }


  virtual ~QueryAvatarResourceRequest() = default;
};
class QueryAvatarResourceResponseBodyQueryResourceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> type{};
  shared_ptr<string> validPeriodTime{};

  QueryAvatarResourceResponseBodyQueryResourceInfoList() {}

  explicit QueryAvatarResourceResponseBodyQueryResourceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (validPeriodTime) {
      res["validPeriodTime"] = boost::any(*validPeriodTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("validPeriodTime") != m.end() && !m["validPeriodTime"].empty()) {
      validPeriodTime = make_shared<string>(boost::any_cast<string>(m["validPeriodTime"]));
    }
  }


  virtual ~QueryAvatarResourceResponseBodyQueryResourceInfoList() = default;
};
class QueryAvatarResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAvatarResourceResponseBodyQueryResourceInfoList>> queryResourceInfoList{};
  shared_ptr<string> requestId{};

  QueryAvatarResourceResponseBody() {}

  explicit QueryAvatarResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResourceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*queryResourceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryResourceInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResourceInfoList") != m.end() && !m["queryResourceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["queryResourceInfoList"].type()) {
        vector<QueryAvatarResourceResponseBodyQueryResourceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryResourceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarResourceResponseBodyQueryResourceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryResourceInfoList = make_shared<vector<QueryAvatarResourceResponseBodyQueryResourceInfoList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryAvatarResourceResponseBody() = default;
};
class QueryAvatarResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAvatarResourceResponseBody> body{};

  QueryAvatarResourceResponse() {}

  explicit QueryAvatarResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvatarResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvatarResourceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvatarResourceResponse() = default;
};
class QuerySessionInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> statusList{};

  QuerySessionInfoRequest() {}

  explicit QuerySessionInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
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


  virtual ~QuerySessionInfoRequest() = default;
};
class QuerySessionInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> statusListShrink{};

  QuerySessionInfoShrinkRequest() {}

  explicit QuerySessionInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (statusListShrink) {
      res["statusList"] = boost::any(*statusListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusListShrink = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
  }


  virtual ~QuerySessionInfoShrinkRequest() = default;
};
class QuerySessionInfoResponseBodyQueryResourceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> status{};

  QuerySessionInfoResponseBodyQueryResourceInfoList() {}

  explicit QuerySessionInfoResponseBodyQueryResourceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~QuerySessionInfoResponseBodyQueryResourceInfoList() = default;
};
class QuerySessionInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySessionInfoResponseBodyQueryResourceInfoList>> queryResourceInfoList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QuerySessionInfoResponseBody() {}

  explicit QuerySessionInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResourceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*queryResourceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryResourceInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResourceInfoList") != m.end() && !m["queryResourceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["queryResourceInfoList"].type()) {
        vector<QuerySessionInfoResponseBodyQueryResourceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryResourceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySessionInfoResponseBodyQueryResourceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryResourceInfoList = make_shared<vector<QuerySessionInfoResponseBodyQueryResourceInfoList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~QuerySessionInfoResponseBody() = default;
};
class QuerySessionInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySessionInfoResponseBody> body{};

  QuerySessionInfoResponse() {}

  explicit QuerySessionInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySessionInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySessionInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySessionInfoResponse() = default;
};
class QueryTextStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<long> index{};
  shared_ptr<string> message{};
  shared_ptr<long> type{};

  QueryTextStreamResponseBody() {}

  explicit QueryTextStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~QueryTextStreamResponseBody() = default;
};
class QueryTextStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTextStreamResponseBody> body{};

  QueryTextStreamResponse() {}

  explicit QueryTextStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTextStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTextStreamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTextStreamResponse() = default;
};
class SaveAvatarProjectRequestFramesLayersMaterial : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> id{};
  shared_ptr<string> url{};

  SaveAvatarProjectRequestFramesLayersMaterial() {}

  explicit SaveAvatarProjectRequestFramesLayersMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~SaveAvatarProjectRequestFramesLayersMaterial() = default;
};
class SaveAvatarProjectRequestFramesLayers : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<SaveAvatarProjectRequestFramesLayersMaterial> material{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<string> type{};
  shared_ptr<long> width{};

  SaveAvatarProjectRequestFramesLayers() {}

  explicit SaveAvatarProjectRequestFramesLayers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (material) {
      res["material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (positionX) {
      res["positionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["positionY"] = boost::any(*positionY);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("material") != m.end() && !m["material"].empty()) {
      if (typeid(map<string, boost::any>) == m["material"].type()) {
        SaveAvatarProjectRequestFramesLayersMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["material"]));
        material = make_shared<SaveAvatarProjectRequestFramesLayersMaterial>(model1);
      }
    }
    if (m.find("positionX") != m.end() && !m["positionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["positionX"]));
    }
    if (m.find("positionY") != m.end() && !m["positionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["positionY"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~SaveAvatarProjectRequestFramesLayers() = default;
};
class SaveAvatarProjectRequestFramesVideoScript : public Darabonba::Model {
public:
  shared_ptr<string> speedRate{};
  shared_ptr<string> voiceTemplateId{};
  shared_ptr<string> volume{};

  SaveAvatarProjectRequestFramesVideoScript() {}

  explicit SaveAvatarProjectRequestFramesVideoScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (speedRate) {
      res["speedRate"] = boost::any(*speedRate);
    }
    if (voiceTemplateId) {
      res["voiceTemplateId"] = boost::any(*voiceTemplateId);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("speedRate") != m.end() && !m["speedRate"].empty()) {
      speedRate = make_shared<string>(boost::any_cast<string>(m["speedRate"]));
    }
    if (m.find("voiceTemplateId") != m.end() && !m["voiceTemplateId"].empty()) {
      voiceTemplateId = make_shared<string>(boost::any_cast<string>(m["voiceTemplateId"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["volume"]));
    }
  }


  virtual ~SaveAvatarProjectRequestFramesVideoScript() = default;
};
class SaveAvatarProjectRequestFrames : public Darabonba::Model {
public:
  shared_ptr<vector<SaveAvatarProjectRequestFramesLayers>> layers{};
  shared_ptr<SaveAvatarProjectRequestFramesVideoScript> videoScript{};

  SaveAvatarProjectRequestFrames() {}

  explicit SaveAvatarProjectRequestFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (videoScript) {
      res["videoScript"] = videoScript ? boost::any(videoScript->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<SaveAvatarProjectRequestFramesLayers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveAvatarProjectRequestFramesLayers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<SaveAvatarProjectRequestFramesLayers>>(expect1);
      }
    }
    if (m.find("videoScript") != m.end() && !m["videoScript"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoScript"].type()) {
        SaveAvatarProjectRequestFramesVideoScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoScript"]));
        videoScript = make_shared<SaveAvatarProjectRequestFramesVideoScript>(model1);
      }
    }
  }


  virtual ~SaveAvatarProjectRequestFrames() = default;
};
class SaveAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<vector<SaveAvatarProjectRequestFrames>> frames{};
  shared_ptr<string> operateType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> scaleType{};

  SaveAvatarProjectRequest() {}

  explicit SaveAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["frames"] = boost::any(temp1);
    }
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (scaleType) {
      res["scaleType"] = boost::any(*scaleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("frames") != m.end() && !m["frames"].empty()) {
      if (typeid(vector<boost::any>) == m["frames"].type()) {
        vector<SaveAvatarProjectRequestFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveAvatarProjectRequestFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<SaveAvatarProjectRequestFrames>>(expect1);
      }
    }
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("scaleType") != m.end() && !m["scaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["scaleType"]));
    }
  }


  virtual ~SaveAvatarProjectRequest() = default;
};
class SaveAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SaveAvatarProjectResponseBody() {}

  explicit SaveAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~SaveAvatarProjectResponseBody() = default;
};
class SaveAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveAvatarProjectResponseBody> body{};

  SaveAvatarProjectResponse() {}

  explicit SaveAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~SaveAvatarProjectResponse() = default;
};
class SelectImageTaskResponseBodyImageInfos : public Darabonba::Model {
public:
  shared_ptr<string> customImageUrl{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> imageH{};
  shared_ptr<string> imageW{};

  SelectImageTaskResponseBodyImageInfos() {}

  explicit SelectImageTaskResponseBodyImageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customImageUrl) {
      res["customImageUrl"] = boost::any(*customImageUrl);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (imageH) {
      res["imageH"] = boost::any(*imageH);
    }
    if (imageW) {
      res["imageW"] = boost::any(*imageW);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customImageUrl") != m.end() && !m["customImageUrl"].empty()) {
      customImageUrl = make_shared<string>(boost::any_cast<string>(m["customImageUrl"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("imageH") != m.end() && !m["imageH"].empty()) {
      imageH = make_shared<string>(boost::any_cast<string>(m["imageH"]));
    }
    if (m.find("imageW") != m.end() && !m["imageW"].empty()) {
      imageW = make_shared<string>(boost::any_cast<string>(m["imageW"]));
    }
  }


  virtual ~SelectImageTaskResponseBodyImageInfos() = default;
};
class SelectImageTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> failed{};
  shared_ptr<string> generationSource{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<SelectImageTaskResponseBodyImageInfos>> imageInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scene{};
  shared_ptr<string> status{};
  shared_ptr<string> subtaskProcessing{};
  shared_ptr<string> success{};
  shared_ptr<string> total{};

  SelectImageTaskResponseBody() {}

  explicit SelectImageTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (failed) {
      res["failed"] = boost::any(*failed);
    }
    if (generationSource) {
      res["generationSource"] = boost::any(*generationSource);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (imageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["imageInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subtaskProcessing) {
      res["subtaskProcessing"] = boost::any(*subtaskProcessing);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("failed") != m.end() && !m["failed"].empty()) {
      failed = make_shared<string>(boost::any_cast<string>(m["failed"]));
    }
    if (m.find("generationSource") != m.end() && !m["generationSource"].empty()) {
      generationSource = make_shared<string>(boost::any_cast<string>(m["generationSource"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("imageInfos") != m.end() && !m["imageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["imageInfos"].type()) {
        vector<SelectImageTaskResponseBodyImageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["imageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SelectImageTaskResponseBodyImageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfos = make_shared<vector<SelectImageTaskResponseBodyImageInfos>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subtaskProcessing") != m.end() && !m["subtaskProcessing"].empty()) {
      subtaskProcessing = make_shared<string>(boost::any_cast<string>(m["subtaskProcessing"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["total"]));
    }
  }


  virtual ~SelectImageTaskResponseBody() = default;
};
class SelectImageTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectImageTaskResponseBody> body{};

  SelectImageTaskResponse() {}

  explicit SelectImageTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SelectImageTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectImageTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SelectImageTaskResponse() = default;
};
class SelectResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> idempotentId{};

  SelectResourceRequest() {}

  explicit SelectResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
  }


  virtual ~SelectResourceRequest() = default;
};
class SelectResourceResponseBodyResourceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<long> lastExpire{};
  shared_ptr<long> remainCount{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> unit{};

  SelectResourceResponseBodyResourceInfoList() {}

  explicit SelectResourceResponseBodyResourceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (lastExpire) {
      res["lastExpire"] = boost::any(*lastExpire);
    }
    if (remainCount) {
      res["remainCount"] = boost::any(*remainCount);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("lastExpire") != m.end() && !m["lastExpire"].empty()) {
      lastExpire = make_shared<long>(boost::any_cast<long>(m["lastExpire"]));
    }
    if (m.find("remainCount") != m.end() && !m["remainCount"].empty()) {
      remainCount = make_shared<long>(boost::any_cast<long>(m["remainCount"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["resourceType"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~SelectResourceResponseBodyResourceInfoList() = default;
};
class SelectResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SelectResourceResponseBodyResourceInfoList>> resourceInfoList{};

  SelectResourceResponseBody() {}

  explicit SelectResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceInfoList") != m.end() && !m["resourceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceInfoList"].type()) {
        vector<SelectResourceResponseBodyResourceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SelectResourceResponseBodyResourceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceInfoList = make_shared<vector<SelectResourceResponseBodyResourceInfoList>>(expect1);
      }
    }
  }


  virtual ~SelectResourceResponseBody() = default;
};
class SelectResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectResourceResponseBody> body{};

  SelectResourceResponse() {}

  explicit SelectResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SelectResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectResourceResponseBody>(model1);
      }
    }
  }


  virtual ~SelectResourceResponse() = default;
};
class SendTextMsgRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> text{};
  shared_ptr<long> type{};

  SendTextMsgRequest() {}

  explicit SendTextMsgRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~SendTextMsgRequest() = default;
};
class SendTextMsgResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SendTextMsgResponseBody() {}

  explicit SendTextMsgResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~SendTextMsgResponseBody() = default;
};
class SendTextMsgResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendTextMsgResponseBody> body{};

  SendTextMsgResponse() {}

  explicit SendTextMsgResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendTextMsgResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendTextMsgResponseBody>(model1);
      }
    }
  }


  virtual ~SendTextMsgResponse() = default;
};
class StartAvatarSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPushUrl{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  StartAvatarSessionRequest() {}

  explicit StartAvatarSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPushUrl) {
      res["customPushUrl"] = boost::any(*customPushUrl);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPushUrl") != m.end() && !m["customPushUrl"].empty()) {
      customPushUrl = make_shared<string>(boost::any_cast<string>(m["customPushUrl"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StartAvatarSessionRequest() = default;
};
class StartAvatarSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> channelToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> token{};
  shared_ptr<string> webSocketUrl{};

  StartAvatarSessionResponseBody() {}

  explicit StartAvatarSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelToken) {
      res["channelToken"] = boost::any(*channelToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (webSocketUrl) {
      res["webSocketUrl"] = boost::any(*webSocketUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelToken") != m.end() && !m["channelToken"].empty()) {
      channelToken = make_shared<string>(boost::any_cast<string>(m["channelToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("webSocketUrl") != m.end() && !m["webSocketUrl"].empty()) {
      webSocketUrl = make_shared<string>(boost::any_cast<string>(m["webSocketUrl"]));
    }
  }


  virtual ~StartAvatarSessionResponseBody() = default;
};
class StartAvatarSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAvatarSessionResponseBody> body{};

  StartAvatarSessionResponse() {}

  explicit StartAvatarSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAvatarSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAvatarSessionResponseBody>(model1);
      }
    }
  }


  virtual ~StartAvatarSessionResponse() = default;
};
class StopAvatarSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> sessionId{};

  StopAvatarSessionRequest() {}

  explicit StopAvatarSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~StopAvatarSessionRequest() = default;
};
class StopAvatarSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  StopAvatarSessionResponseBody() {}

  explicit StopAvatarSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~StopAvatarSessionResponseBody() = default;
};
class StopAvatarSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAvatarSessionResponseBody> body{};

  StopAvatarSessionResponse() {}

  explicit StopAvatarSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAvatarSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAvatarSessionResponseBody>(model1);
      }
    }
  }


  virtual ~StopAvatarSessionResponse() = default;
};
class StopProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  StopProjectTaskRequest() {}

  explicit StopProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopProjectTaskRequest() = default;
};
class StopProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopProjectTaskResponseBody() {}

  explicit StopProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopProjectTaskResponseBody() = default;
};
class StopProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopProjectTaskResponseBody> body{};

  StopProjectTaskResponse() {}

  explicit StopProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopProjectTaskResponse() = default;
};
class SubmitProjectTaskRequestFramesLayersMaterial : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> id{};
  shared_ptr<string> speed{};
  shared_ptr<string> url{};
  shared_ptr<long> volume{};

  SubmitProjectTaskRequestFramesLayersMaterial() {}

  explicit SubmitProjectTaskRequestFramesLayersMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (speed) {
      res["speed"] = boost::any(*speed);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("speed") != m.end() && !m["speed"].empty()) {
      speed = make_shared<string>(boost::any_cast<string>(m["speed"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["volume"]));
    }
  }


  virtual ~SubmitProjectTaskRequestFramesLayersMaterial() = default;
};
class SubmitProjectTaskRequestFramesLayers : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> index{};
  shared_ptr<SubmitProjectTaskRequestFramesLayersMaterial> material{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<string> type{};
  shared_ptr<long> width{};

  SubmitProjectTaskRequestFramesLayers() {}

  explicit SubmitProjectTaskRequestFramesLayers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (material) {
      res["material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (positionX) {
      res["positionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["positionY"] = boost::any(*positionY);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("material") != m.end() && !m["material"].empty()) {
      if (typeid(map<string, boost::any>) == m["material"].type()) {
        SubmitProjectTaskRequestFramesLayersMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["material"]));
        material = make_shared<SubmitProjectTaskRequestFramesLayersMaterial>(model1);
      }
    }
    if (m.find("positionX") != m.end() && !m["positionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["positionX"]));
    }
    if (m.find("positionY") != m.end() && !m["positionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["positionY"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~SubmitProjectTaskRequestFramesLayers() = default;
};
class SubmitProjectTaskRequestFramesSubtitle : public Darabonba::Model {
public:
  shared_ptr<string> alignment{};
  shared_ptr<string> backgroundColor{};
  shared_ptr<string> font{};
  shared_ptr<string> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> maxCharLength{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<long> textHeight{};
  shared_ptr<long> textWidth{};

  SubmitProjectTaskRequestFramesSubtitle() {}

  explicit SubmitProjectTaskRequestFramesSubtitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alignment) {
      res["alignment"] = boost::any(*alignment);
    }
    if (backgroundColor) {
      res["backgroundColor"] = boost::any(*backgroundColor);
    }
    if (font) {
      res["font"] = boost::any(*font);
    }
    if (fontColor) {
      res["fontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["fontSize"] = boost::any(*fontSize);
    }
    if (maxCharLength) {
      res["maxCharLength"] = boost::any(*maxCharLength);
    }
    if (positionX) {
      res["positionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["positionY"] = boost::any(*positionY);
    }
    if (textHeight) {
      res["textHeight"] = boost::any(*textHeight);
    }
    if (textWidth) {
      res["textWidth"] = boost::any(*textWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alignment") != m.end() && !m["alignment"].empty()) {
      alignment = make_shared<string>(boost::any_cast<string>(m["alignment"]));
    }
    if (m.find("backgroundColor") != m.end() && !m["backgroundColor"].empty()) {
      backgroundColor = make_shared<string>(boost::any_cast<string>(m["backgroundColor"]));
    }
    if (m.find("font") != m.end() && !m["font"].empty()) {
      font = make_shared<string>(boost::any_cast<string>(m["font"]));
    }
    if (m.find("fontColor") != m.end() && !m["fontColor"].empty()) {
      fontColor = make_shared<string>(boost::any_cast<string>(m["fontColor"]));
    }
    if (m.find("fontSize") != m.end() && !m["fontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["fontSize"]));
    }
    if (m.find("maxCharLength") != m.end() && !m["maxCharLength"].empty()) {
      maxCharLength = make_shared<long>(boost::any_cast<long>(m["maxCharLength"]));
    }
    if (m.find("positionX") != m.end() && !m["positionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["positionX"]));
    }
    if (m.find("positionY") != m.end() && !m["positionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["positionY"]));
    }
    if (m.find("textHeight") != m.end() && !m["textHeight"].empty()) {
      textHeight = make_shared<long>(boost::any_cast<long>(m["textHeight"]));
    }
    if (m.find("textWidth") != m.end() && !m["textWidth"].empty()) {
      textWidth = make_shared<long>(boost::any_cast<long>(m["textWidth"]));
    }
  }


  virtual ~SubmitProjectTaskRequestFramesSubtitle() = default;
};
class SubmitProjectTaskRequestFramesVideoScript : public Darabonba::Model {
public:
  shared_ptr<string> audioUrl{};
  shared_ptr<bool> speechOpen{};
  shared_ptr<string> speedRate{};
  shared_ptr<string> textContent{};
  shared_ptr<string> type{};
  shared_ptr<long> voiceTemplateId{};
  shared_ptr<long> volume{};

  SubmitProjectTaskRequestFramesVideoScript() {}

  explicit SubmitProjectTaskRequestFramesVideoScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioUrl) {
      res["audioUrl"] = boost::any(*audioUrl);
    }
    if (speechOpen) {
      res["speechOpen"] = boost::any(*speechOpen);
    }
    if (speedRate) {
      res["speedRate"] = boost::any(*speedRate);
    }
    if (textContent) {
      res["textContent"] = boost::any(*textContent);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (voiceTemplateId) {
      res["voiceTemplateId"] = boost::any(*voiceTemplateId);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("audioUrl") != m.end() && !m["audioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["audioUrl"]));
    }
    if (m.find("speechOpen") != m.end() && !m["speechOpen"].empty()) {
      speechOpen = make_shared<bool>(boost::any_cast<bool>(m["speechOpen"]));
    }
    if (m.find("speedRate") != m.end() && !m["speedRate"].empty()) {
      speedRate = make_shared<string>(boost::any_cast<string>(m["speedRate"]));
    }
    if (m.find("textContent") != m.end() && !m["textContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["textContent"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("voiceTemplateId") != m.end() && !m["voiceTemplateId"].empty()) {
      voiceTemplateId = make_shared<long>(boost::any_cast<long>(m["voiceTemplateId"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["volume"]));
    }
  }


  virtual ~SubmitProjectTaskRequestFramesVideoScript() = default;
};
class SubmitProjectTaskRequestFrames : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<vector<SubmitProjectTaskRequestFramesLayers>> layers{};
  shared_ptr<SubmitProjectTaskRequestFramesSubtitle> subtitle{};
  shared_ptr<SubmitProjectTaskRequestFramesVideoScript> videoScript{};

  SubmitProjectTaskRequestFrames() {}

  explicit SubmitProjectTaskRequestFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (subtitle) {
      res["subtitle"] = subtitle ? boost::any(subtitle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoScript) {
      res["videoScript"] = videoScript ? boost::any(videoScript->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<SubmitProjectTaskRequestFramesLayers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitProjectTaskRequestFramesLayers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<SubmitProjectTaskRequestFramesLayers>>(expect1);
      }
    }
    if (m.find("subtitle") != m.end() && !m["subtitle"].empty()) {
      if (typeid(map<string, boost::any>) == m["subtitle"].type()) {
        SubmitProjectTaskRequestFramesSubtitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["subtitle"]));
        subtitle = make_shared<SubmitProjectTaskRequestFramesSubtitle>(model1);
      }
    }
    if (m.find("videoScript") != m.end() && !m["videoScript"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoScript"].type()) {
        SubmitProjectTaskRequestFramesVideoScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoScript"]));
        videoScript = make_shared<SubmitProjectTaskRequestFramesVideoScript>(model1);
      }
    }
  }


  virtual ~SubmitProjectTaskRequestFrames() = default;
};
class SubmitProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SubmitProjectTaskRequestFrames>> frames{};
  shared_ptr<string> scaleType{};
  shared_ptr<long> subtitleTag{};
  shared_ptr<long> transparentBackground{};

  SubmitProjectTaskRequest() {}

  explicit SubmitProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["frames"] = boost::any(temp1);
    }
    if (scaleType) {
      res["scaleType"] = boost::any(*scaleType);
    }
    if (subtitleTag) {
      res["subtitleTag"] = boost::any(*subtitleTag);
    }
    if (transparentBackground) {
      res["transparentBackground"] = boost::any(*transparentBackground);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("frames") != m.end() && !m["frames"].empty()) {
      if (typeid(vector<boost::any>) == m["frames"].type()) {
        vector<SubmitProjectTaskRequestFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitProjectTaskRequestFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<SubmitProjectTaskRequestFrames>>(expect1);
      }
    }
    if (m.find("scaleType") != m.end() && !m["scaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["scaleType"]));
    }
    if (m.find("subtitleTag") != m.end() && !m["subtitleTag"].empty()) {
      subtitleTag = make_shared<long>(boost::any_cast<long>(m["subtitleTag"]));
    }
    if (m.find("transparentBackground") != m.end() && !m["transparentBackground"].empty()) {
      transparentBackground = make_shared<long>(boost::any_cast<long>(m["transparentBackground"]));
    }
  }


  virtual ~SubmitProjectTaskRequest() = default;
};
class SubmitProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  SubmitProjectTaskResponseBody() {}

  explicit SubmitProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~SubmitProjectTaskResponseBody() = default;
};
class SubmitProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitProjectTaskResponseBody> body{};

  SubmitProjectTaskResponse() {}

  explicit SubmitProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitProjectTaskResponse() = default;
};
class TransferPortraitStyleRequest : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> numbers{};
  shared_ptr<long> redrawAmplitude{};
  shared_ptr<long> style{};
  shared_ptr<long> width{};

  TransferPortraitStyleRequest() {}

  explicit TransferPortraitStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (numbers) {
      res["numbers"] = boost::any(*numbers);
    }
    if (redrawAmplitude) {
      res["redrawAmplitude"] = boost::any(*redrawAmplitude);
    }
    if (style) {
      res["style"] = boost::any(*style);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["imageUrl"]));
    }
    if (m.find("numbers") != m.end() && !m["numbers"].empty()) {
      numbers = make_shared<long>(boost::any_cast<long>(m["numbers"]));
    }
    if (m.find("redrawAmplitude") != m.end() && !m["redrawAmplitude"].empty()) {
      redrawAmplitude = make_shared<long>(boost::any_cast<long>(m["redrawAmplitude"]));
    }
    if (m.find("style") != m.end() && !m["style"].empty()) {
      style = make_shared<long>(boost::any_cast<long>(m["style"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~TransferPortraitStyleRequest() = default;
};
class TransferPortraitStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  TransferPortraitStyleResponseBody() {}

  explicit TransferPortraitStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~TransferPortraitStyleResponseBody() = default;
};
class TransferPortraitStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferPortraitStyleResponseBody> body{};

  TransferPortraitStyleResponse() {}

  explicit TransferPortraitStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferPortraitStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferPortraitStyleResponseBody>(model1);
      }
    }
  }


  virtual ~TransferPortraitStyleResponse() = default;
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
  AddTextFeedbackResponse addTextFeedbackWithOptions(shared_ptr<AddTextFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTextFeedbackResponse addTextFeedback(shared_ptr<AddTextFeedbackRequest> request);
  BatchGetProjectTaskResponse batchGetProjectTaskWithOptions(shared_ptr<BatchGetProjectTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetProjectTaskResponse batchGetProjectTask(shared_ptr<BatchGetProjectTaskRequest> request);
  CheckSessionResponse checkSessionWithOptions(shared_ptr<CheckSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSessionResponse checkSession(shared_ptr<CheckSessionRequest> request);
  CountTextResponse countTextWithOptions(shared_ptr<CountTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountTextResponse countText(shared_ptr<CountTextRequest> request);
  CreateIllustrationTaskResponse createIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                                   shared_ptr<CreateIllustrationTaskRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIllustrationTaskResponse createIllustrationTask(shared_ptr<string> textId, shared_ptr<CreateIllustrationTaskRequest> request);
  CreateRealisticPortraitResponse createRealisticPortraitWithOptions(shared_ptr<CreateRealisticPortraitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRealisticPortraitResponse createRealisticPortrait(shared_ptr<CreateRealisticPortraitRequest> request);
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
  GetProjectTaskResponse getProjectTaskWithOptions(shared_ptr<GetProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectTaskResponse getProjectTask(shared_ptr<GetProjectTaskRequest> request);
  GetTextResponse getTextWithOptions(shared_ptr<string> textId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextResponse getText(shared_ptr<string> textId);
  GetTextTaskResponse getTextTaskWithOptions(shared_ptr<string> textTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextTaskResponse getTextTask(shared_ptr<string> textTaskId);
  GetTextTemplateResponse getTextTemplateWithOptions(shared_ptr<GetTextTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextTemplateResponse getTextTemplate(shared_ptr<GetTextTemplateRequest> request);
  InteractTextResponse interactTextWithOptions(shared_ptr<InteractTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InteractTextResponse interactText(shared_ptr<InteractTextRequest> request);
  ListAnchorResponse listAnchorWithOptions(shared_ptr<ListAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnchorResponse listAnchor(shared_ptr<ListAnchorRequest> request);
  ListAvatarProjectResponse listAvatarProjectWithOptions(shared_ptr<ListAvatarProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvatarProjectResponse listAvatarProject(shared_ptr<ListAvatarProjectRequest> request);
  ListTextThemesResponse listTextThemesWithOptions(shared_ptr<ListTextThemesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextThemesResponse listTextThemes(shared_ptr<ListTextThemesRequest> request);
  ListTextsResponse listTextsWithOptions(shared_ptr<ListTextsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextsResponse listTexts(shared_ptr<ListTextsRequest> request);
  ListVoiceModelsResponse listVoiceModelsWithOptions(shared_ptr<ListVoiceModelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceModelsResponse listVoiceModels(shared_ptr<ListVoiceModelsRequest> request);
  OperateAvatarProjectResponse operateAvatarProjectWithOptions(shared_ptr<OperateAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAvatarProjectResponse operateAvatarProject(shared_ptr<OperateAvatarProjectRequest> request);
  QueryAvatarProjectResponse queryAvatarProjectWithOptions(shared_ptr<QueryAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvatarProjectResponse queryAvatarProject(shared_ptr<QueryAvatarProjectRequest> request);
  QueryAvatarResourceResponse queryAvatarResourceWithOptions(shared_ptr<QueryAvatarResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvatarResourceResponse queryAvatarResource(shared_ptr<QueryAvatarResourceRequest> request);
  QuerySessionInfoResponse querySessionInfoWithOptions(shared_ptr<QuerySessionInfoRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySessionInfoResponse querySessionInfo(shared_ptr<QuerySessionInfoRequest> request);
  QueryTextStreamResponse queryTextStreamWithOptions(shared_ptr<string> textId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTextStreamResponse queryTextStream(shared_ptr<string> textId);
  SaveAvatarProjectResponse saveAvatarProjectWithOptions(shared_ptr<SaveAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveAvatarProjectResponse saveAvatarProject(shared_ptr<SaveAvatarProjectRequest> request);
  SelectImageTaskResponse selectImageTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectImageTaskResponse selectImageTask(shared_ptr<string> taskId);
  SelectResourceResponse selectResourceWithOptions(shared_ptr<SelectResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectResourceResponse selectResource(shared_ptr<SelectResourceRequest> request);
  SendTextMsgResponse sendTextMsgWithOptions(shared_ptr<SendTextMsgRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendTextMsgResponse sendTextMsg(shared_ptr<SendTextMsgRequest> request);
  StartAvatarSessionResponse startAvatarSessionWithOptions(shared_ptr<StartAvatarSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAvatarSessionResponse startAvatarSession(shared_ptr<StartAvatarSessionRequest> request);
  StopAvatarSessionResponse stopAvatarSessionWithOptions(shared_ptr<StopAvatarSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAvatarSessionResponse stopAvatarSession(shared_ptr<StopAvatarSessionRequest> request);
  StopProjectTaskResponse stopProjectTaskWithOptions(shared_ptr<StopProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopProjectTaskResponse stopProjectTask(shared_ptr<StopProjectTaskRequest> request);
  SubmitProjectTaskResponse submitProjectTaskWithOptions(shared_ptr<SubmitProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitProjectTaskResponse submitProjectTask(shared_ptr<SubmitProjectTaskRequest> request);
  TransferPortraitStyleResponse transferPortraitStyleWithOptions(shared_ptr<TransferPortraitStyleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferPortraitStyleResponse transferPortraitStyle(shared_ptr<TransferPortraitStyleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IntelligentCreation20240313

#endif
