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
class AddDocumentInfo : public Darabonba::Model {
public:
  shared_ptr<string> documentType{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  AddDocumentInfo() {}

  explicit AddDocumentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentType) {
      res["documentType"] = boost::any(*documentType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentType") != m.end() && !m["documentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["documentType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~AddDocumentInfo() = default;
};
class DocumentInfo : public Darabonba::Model {
public:
  shared_ptr<string> documentType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> processStatus{};

  DocumentInfo() {}

  explicit DocumentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentType) {
      res["documentType"] = boost::any(*documentType);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processStatus) {
      res["processStatus"] = boost::any(*processStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentType") != m.end() && !m["documentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["documentType"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processStatus") != m.end() && !m["processStatus"].empty()) {
      processStatus = make_shared<string>(boost::any_cast<string>(m["processStatus"]));
    }
  }


  virtual ~DocumentInfo() = default;
};
class AddDocumentResult : public Darabonba::Model {
public:
  shared_ptr<string> docName{};
  shared_ptr<DocumentInfo> documentInfo{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  AddDocumentResult() {}

  explicit AddDocumentResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docName) {
      res["docName"] = boost::any(*docName);
    }
    if (documentInfo) {
      res["documentInfo"] = documentInfo ? boost::any(documentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docName") != m.end() && !m["docName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["docName"]));
    }
    if (m.find("documentInfo") != m.end() && !m["documentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["documentInfo"].type()) {
        DocumentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["documentInfo"]));
        documentInfo = make_shared<DocumentInfo>(model1);
      }
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AddDocumentResult() = default;
};
class AnchorResponse : public Darabonba::Model {
public:
  shared_ptr<string> anchorCategory{};
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
  shared_ptr<long> supportBgChange{};
  shared_ptr<string> useScene{};

  AnchorResponse() {}

  explicit AnchorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorCategory) {
      res["anchorCategory"] = boost::any(*anchorCategory);
    }
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
    if (supportBgChange) {
      res["supportBgChange"] = boost::any(*supportBgChange);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("anchorCategory") != m.end() && !m["anchorCategory"].empty()) {
      anchorCategory = make_shared<string>(boost::any_cast<string>(m["anchorCategory"]));
    }
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
    if (m.find("supportBgChange") != m.end() && !m["supportBgChange"].empty()) {
      supportBgChange = make_shared<long>(boost::any_cast<long>(m["supportBgChange"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
  }


  virtual ~AnchorResponse() = default;
};
class BatchAddDocumentResult : public Darabonba::Model {
public:
  shared_ptr<vector<AddDocumentResult>> addDocumentResults{};
  shared_ptr<string> requestId{};

  BatchAddDocumentResult() {}

  explicit BatchAddDocumentResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addDocumentResults) {
      vector<boost::any> temp1;
      for(auto item1:*addDocumentResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["addDocumentResults"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addDocumentResults") != m.end() && !m["addDocumentResults"].empty()) {
      if (typeid(vector<boost::any>) == m["addDocumentResults"].type()) {
        vector<AddDocumentResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["addDocumentResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddDocumentResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addDocumentResults = make_shared<vector<AddDocumentResult>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~BatchAddDocumentResult() = default;
};
class DocumentResult : public Darabonba::Model {
public:
  shared_ptr<DocumentInfo> documentInfo{};
  shared_ptr<string> requestId{};

  DocumentResult() {}

  explicit DocumentResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentInfo) {
      res["documentInfo"] = documentInfo ? boost::any(documentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("documentInfo") != m.end() && !m["documentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["documentInfo"].type()) {
        DocumentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["documentInfo"]));
        documentInfo = make_shared<DocumentInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DocumentResult() = default;
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
  shared_ptr<vector<string>> imageUrls{};
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
    if (imageUrls) {
      res["imageUrls"] = boost::any(*imageUrls);
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
    if (m.find("imageUrls") != m.end() && !m["imageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
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
class KnowledgeBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> industry{};
  shared_ptr<string> knowledgeBaseType{};
  shared_ptr<string> name{};

  KnowledgeBaseInfo() {}

  explicit KnowledgeBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (knowledgeBaseType) {
      res["knowledgeBaseType"] = boost::any(*knowledgeBaseType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("knowledgeBaseType") != m.end() && !m["knowledgeBaseType"].empty()) {
      knowledgeBaseType = make_shared<string>(boost::any_cast<string>(m["knowledgeBaseType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~KnowledgeBaseInfo() = default;
};
class KnowledgeBaseListResult : public Darabonba::Model {
public:
  shared_ptr<vector<KnowledgeBaseInfo>> knowledgeBases{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  KnowledgeBaseListResult() {}

  explicit KnowledgeBaseListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeBases) {
      vector<boost::any> temp1;
      for(auto item1:*knowledgeBases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["knowledgeBases"] = boost::any(temp1);
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
    if (m.find("knowledgeBases") != m.end() && !m["knowledgeBases"].empty()) {
      if (typeid(vector<boost::any>) == m["knowledgeBases"].type()) {
        vector<KnowledgeBaseInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["knowledgeBases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            KnowledgeBaseInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        knowledgeBases = make_shared<vector<KnowledgeBaseInfo>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~KnowledgeBaseListResult() = default;
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
  shared_ptr<string> errMsg{};
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
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
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
  shared_ptr<vector<long>> relatedRagIds{};
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
    if (relatedRagIds) {
      res["relatedRagIds"] = boost::any(*relatedRagIds);
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
class BatchAddDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddDocumentInfo>> addDocumentInfos{};

  BatchAddDocumentRequest() {}

  explicit BatchAddDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addDocumentInfos) {
      vector<boost::any> temp1;
      for(auto item1:*addDocumentInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["addDocumentInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addDocumentInfos") != m.end() && !m["addDocumentInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["addDocumentInfos"].type()) {
        vector<AddDocumentInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["addDocumentInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddDocumentInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addDocumentInfos = make_shared<vector<AddDocumentInfo>>(expect1);
      }
    }
  }


  virtual ~BatchAddDocumentRequest() = default;
};
class BatchAddDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchAddDocumentResult> body{};

  BatchAddDocumentResponse() {}

  explicit BatchAddDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAddDocumentResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAddDocumentResult>(model1);
      }
    }
  }


  virtual ~BatchAddDocumentResponse() = default;
};
class BatchCreateAICoachTaskRequestStudentList : public Darabonba::Model {
public:
  shared_ptr<string> studentAudioUrl{};
  shared_ptr<string> studentId{};

  BatchCreateAICoachTaskRequestStudentList() {}

  explicit BatchCreateAICoachTaskRequestStudentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (studentAudioUrl) {
      res["studentAudioUrl"] = boost::any(*studentAudioUrl);
    }
    if (studentId) {
      res["studentId"] = boost::any(*studentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("studentAudioUrl") != m.end() && !m["studentAudioUrl"].empty()) {
      studentAudioUrl = make_shared<string>(boost::any_cast<string>(m["studentAudioUrl"]));
    }
    if (m.find("studentId") != m.end() && !m["studentId"].empty()) {
      studentId = make_shared<string>(boost::any_cast<string>(m["studentId"]));
    }
  }


  virtual ~BatchCreateAICoachTaskRequestStudentList() = default;
};
class BatchCreateAICoachTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scriptRecordId{};
  shared_ptr<vector<string>> studentIds{};
  shared_ptr<vector<BatchCreateAICoachTaskRequestStudentList>> studentList{};

  BatchCreateAICoachTaskRequest() {}

  explicit BatchCreateAICoachTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    if (studentIds) {
      res["studentIds"] = boost::any(*studentIds);
    }
    if (studentList) {
      vector<boost::any> temp1;
      for(auto item1:*studentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["studentList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
    if (m.find("studentIds") != m.end() && !m["studentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["studentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["studentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      studentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("studentList") != m.end() && !m["studentList"].empty()) {
      if (typeid(vector<boost::any>) == m["studentList"].type()) {
        vector<BatchCreateAICoachTaskRequestStudentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["studentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchCreateAICoachTaskRequestStudentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        studentList = make_shared<vector<BatchCreateAICoachTaskRequestStudentList>>(expect1);
      }
    }
  }


  virtual ~BatchCreateAICoachTaskRequest() = default;
};
class BatchCreateAICoachTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> taskIds{};

  BatchCreateAICoachTaskResponseBody() {}

  explicit BatchCreateAICoachTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
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


  virtual ~BatchCreateAICoachTaskResponseBody() = default;
};
class BatchCreateAICoachTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchCreateAICoachTaskResponseBody> body{};

  BatchCreateAICoachTaskResponse() {}

  explicit BatchCreateAICoachTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchCreateAICoachTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchCreateAICoachTaskResponseBody>(model1);
      }
    }
  }


  virtual ~BatchCreateAICoachTaskResponse() = default;
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
class BatchGetTrainTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunMainId{};
  shared_ptr<vector<string>> taskIdList{};

  BatchGetTrainTaskRequest() {}

  explicit BatchGetTrainTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunMainId) {
      res["aliyunMainId"] = boost::any(*aliyunMainId);
    }
    if (taskIdList) {
      res["taskIdList"] = boost::any(*taskIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunMainId") != m.end() && !m["aliyunMainId"].empty()) {
      aliyunMainId = make_shared<string>(boost::any_cast<string>(m["aliyunMainId"]));
    }
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


  virtual ~BatchGetTrainTaskRequest() = default;
};
class BatchGetTrainTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunMainId{};
  shared_ptr<string> taskIdListShrink{};

  BatchGetTrainTaskShrinkRequest() {}

  explicit BatchGetTrainTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunMainId) {
      res["aliyunMainId"] = boost::any(*aliyunMainId);
    }
    if (taskIdListShrink) {
      res["taskIdList"] = boost::any(*taskIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunMainId") != m.end() && !m["aliyunMainId"].empty()) {
      aliyunMainId = make_shared<string>(boost::any_cast<string>(m["aliyunMainId"]));
    }
    if (m.find("taskIdList") != m.end() && !m["taskIdList"].empty()) {
      taskIdListShrink = make_shared<string>(boost::any_cast<string>(m["taskIdList"]));
    }
  }


  virtual ~BatchGetTrainTaskShrinkRequest() = default;
};
class BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial : public Darabonba::Model {
public:
  shared_ptr<long> voiceId{};
  shared_ptr<string> voiceLanguage{};
  shared_ptr<string> voiceUrl{};

  BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial() {}

  explicit BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (voiceId) {
      res["voiceId"] = boost::any(*voiceId);
    }
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
    }
    if (voiceUrl) {
      res["voiceUrl"] = boost::any(*voiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("voiceId") != m.end() && !m["voiceId"].empty()) {
      voiceId = make_shared<long>(boost::any_cast<long>(m["voiceId"]));
    }
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
    }
    if (m.find("voiceUrl") != m.end() && !m["voiceUrl"].empty()) {
      voiceUrl = make_shared<string>(boost::any_cast<string>(m["voiceUrl"]));
    }
  }


  virtual ~BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial() = default;
};
class BatchGetTrainTaskResponseBodyVoiceList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunSubId{};
  shared_ptr<string> auditFailMessage{};
  shared_ptr<string> auditStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> gender{};
  shared_ptr<string> name{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> trainFailMessage{};
  shared_ptr<string> trainStatus{};
  shared_ptr<string> useScene{};
  shared_ptr<BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial> voiceMaterial{};

  BatchGetTrainTaskResponseBodyVoiceList() {}

  explicit BatchGetTrainTaskResponseBodyVoiceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunSubId) {
      res["aliyunSubId"] = boost::any(*aliyunSubId);
    }
    if (auditFailMessage) {
      res["auditFailMessage"] = boost::any(*auditFailMessage);
    }
    if (auditStatus) {
      res["auditStatus"] = boost::any(*auditStatus);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (trainFailMessage) {
      res["trainFailMessage"] = boost::any(*trainFailMessage);
    }
    if (trainStatus) {
      res["trainStatus"] = boost::any(*trainStatus);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    if (voiceMaterial) {
      res["voiceMaterial"] = voiceMaterial ? boost::any(voiceMaterial->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunSubId") != m.end() && !m["aliyunSubId"].empty()) {
      aliyunSubId = make_shared<string>(boost::any_cast<string>(m["aliyunSubId"]));
    }
    if (m.find("auditFailMessage") != m.end() && !m["auditFailMessage"].empty()) {
      auditFailMessage = make_shared<string>(boost::any_cast<string>(m["auditFailMessage"]));
    }
    if (m.find("auditStatus") != m.end() && !m["auditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["auditStatus"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["gender"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("trainFailMessage") != m.end() && !m["trainFailMessage"].empty()) {
      trainFailMessage = make_shared<string>(boost::any_cast<string>(m["trainFailMessage"]));
    }
    if (m.find("trainStatus") != m.end() && !m["trainStatus"].empty()) {
      trainStatus = make_shared<string>(boost::any_cast<string>(m["trainStatus"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
    if (m.find("voiceMaterial") != m.end() && !m["voiceMaterial"].empty()) {
      if (typeid(map<string, boost::any>) == m["voiceMaterial"].type()) {
        BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["voiceMaterial"]));
        voiceMaterial = make_shared<BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial>(model1);
      }
    }
  }


  virtual ~BatchGetTrainTaskResponseBodyVoiceList() = default;
};
class BatchGetTrainTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchGetTrainTaskResponseBodyVoiceList>> voiceList{};

  BatchGetTrainTaskResponseBody() {}

  explicit BatchGetTrainTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (voiceList) {
      vector<boost::any> temp1;
      for(auto item1:*voiceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["voiceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("voiceList") != m.end() && !m["voiceList"].empty()) {
      if (typeid(vector<boost::any>) == m["voiceList"].type()) {
        vector<BatchGetTrainTaskResponseBodyVoiceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["voiceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetTrainTaskResponseBodyVoiceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        voiceList = make_shared<vector<BatchGetTrainTaskResponseBodyVoiceList>>(expect1);
      }
    }
  }


  virtual ~BatchGetTrainTaskResponseBody() = default;
};
class BatchGetTrainTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchGetTrainTaskResponseBody> body{};

  BatchGetTrainTaskResponse() {}

  explicit BatchGetTrainTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetTrainTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetTrainTaskResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetTrainTaskResponse() = default;
};
class BatchGetVideoClipTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> taskIdList{};

  BatchGetVideoClipTaskRequest() {}

  explicit BatchGetVideoClipTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchGetVideoClipTaskRequest() = default;
};
class BatchGetVideoClipTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskIdListShrink{};

  BatchGetVideoClipTaskShrinkRequest() {}

  explicit BatchGetVideoClipTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchGetVideoClipTaskShrinkRequest() = default;
};
class BatchGetVideoClipTaskResponseBodyTaskListVideoList : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> title{};
  shared_ptr<string> videoDownloadUrl{};
  shared_ptr<string> videoName{};
  shared_ptr<string> videoUrl{};

  BatchGetVideoClipTaskResponseBodyTaskListVideoList() {}

  explicit BatchGetVideoClipTaskResponseBodyTaskListVideoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (videoDownloadUrl) {
      res["videoDownloadUrl"] = boost::any(*videoDownloadUrl);
    }
    if (videoName) {
      res["videoName"] = boost::any(*videoName);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["beginTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("videoDownloadUrl") != m.end() && !m["videoDownloadUrl"].empty()) {
      videoDownloadUrl = make_shared<string>(boost::any_cast<string>(m["videoDownloadUrl"]));
    }
    if (m.find("videoName") != m.end() && !m["videoName"].empty()) {
      videoName = make_shared<string>(boost::any_cast<string>(m["videoName"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~BatchGetVideoClipTaskResponseBodyTaskListVideoList() = default;
};
class BatchGetVideoClipTaskResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<double> totalDuration{};
  shared_ptr<long> totalToken{};
  shared_ptr<vector<BatchGetVideoClipTaskResponseBodyTaskListVideoList>> videoList{};

  BatchGetVideoClipTaskResponseBodyTaskList() {}

  explicit BatchGetVideoClipTaskResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (totalDuration) {
      res["totalDuration"] = boost::any(*totalDuration);
    }
    if (totalToken) {
      res["totalToken"] = boost::any(*totalToken);
    }
    if (videoList) {
      vector<boost::any> temp1;
      for(auto item1:*videoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("totalDuration") != m.end() && !m["totalDuration"].empty()) {
      totalDuration = make_shared<double>(boost::any_cast<double>(m["totalDuration"]));
    }
    if (m.find("totalToken") != m.end() && !m["totalToken"].empty()) {
      totalToken = make_shared<long>(boost::any_cast<long>(m["totalToken"]));
    }
    if (m.find("videoList") != m.end() && !m["videoList"].empty()) {
      if (typeid(vector<boost::any>) == m["videoList"].type()) {
        vector<BatchGetVideoClipTaskResponseBodyTaskListVideoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetVideoClipTaskResponseBodyTaskListVideoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoList = make_shared<vector<BatchGetVideoClipTaskResponseBodyTaskListVideoList>>(expect1);
      }
    }
  }


  virtual ~BatchGetVideoClipTaskResponseBodyTaskList() = default;
};
class BatchGetVideoClipTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchGetVideoClipTaskResponseBodyTaskList>> taskList{};

  BatchGetVideoClipTaskResponseBody() {}

  explicit BatchGetVideoClipTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskList") != m.end() && !m["taskList"].empty()) {
      if (typeid(vector<boost::any>) == m["taskList"].type()) {
        vector<BatchGetVideoClipTaskResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetVideoClipTaskResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<BatchGetVideoClipTaskResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~BatchGetVideoClipTaskResponseBody() = default;
};
class BatchGetVideoClipTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchGetVideoClipTaskResponseBody> body{};

  BatchGetVideoClipTaskResponse() {}

  explicit BatchGetVideoClipTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetVideoClipTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetVideoClipTaskResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetVideoClipTaskResponse() = default;
};
class BatchQueryIndividuationTextRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> textIdList{};

  BatchQueryIndividuationTextRequest() {}

  explicit BatchQueryIndividuationTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textIdList) {
      res["textIdList"] = boost::any(*textIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("textIdList") != m.end() && !m["textIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["textIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchQueryIndividuationTextRequest() = default;
};
class BatchQueryIndividuationTextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> textIdListShrink{};

  BatchQueryIndividuationTextShrinkRequest() {}

  explicit BatchQueryIndividuationTextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textIdListShrink) {
      res["textIdList"] = boost::any(*textIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("textIdList") != m.end() && !m["textIdList"].empty()) {
      textIdListShrink = make_shared<string>(boost::any_cast<string>(m["textIdList"]));
    }
  }


  virtual ~BatchQueryIndividuationTextShrinkRequest() = default;
};
class BatchQueryIndividuationTextResponseBodyTextList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> itemId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> textId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  BatchQueryIndividuationTextResponseBodyTextList() {}

  explicit BatchQueryIndividuationTextResponseBodyTextList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (textId) {
      res["textId"] = boost::any(*textId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("textId") != m.end() && !m["textId"].empty()) {
      textId = make_shared<string>(boost::any_cast<string>(m["textId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~BatchQueryIndividuationTextResponseBodyTextList() = default;
};
class BatchQueryIndividuationTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchQueryIndividuationTextResponseBodyTextList>> textList{};

  BatchQueryIndividuationTextResponseBody() {}

  explicit BatchQueryIndividuationTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (textList) {
      vector<boost::any> temp1;
      for(auto item1:*textList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("textList") != m.end() && !m["textList"].empty()) {
      if (typeid(vector<boost::any>) == m["textList"].type()) {
        vector<BatchQueryIndividuationTextResponseBodyTextList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchQueryIndividuationTextResponseBodyTextList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textList = make_shared<vector<BatchQueryIndividuationTextResponseBodyTextList>>(expect1);
      }
    }
  }


  virtual ~BatchQueryIndividuationTextResponseBody() = default;
};
class BatchQueryIndividuationTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchQueryIndividuationTextResponseBody> body{};

  BatchQueryIndividuationTextResponse() {}

  explicit BatchQueryIndividuationTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQueryIndividuationTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQueryIndividuationTextResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQueryIndividuationTextResponse() = default;
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
class CloseAICoachTaskSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uid{};

  CloseAICoachTaskSessionRequest() {}

  explicit CloseAICoachTaskSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CloseAICoachTaskSessionRequest() = default;
};
class CloseAICoachTaskSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CloseAICoachTaskSessionResponseBody() {}

  explicit CloseAICoachTaskSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseAICoachTaskSessionResponseBody() = default;
};
class CloseAICoachTaskSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseAICoachTaskSessionResponseBody> body{};

  CloseAICoachTaskSessionResponse() {}

  explicit CloseAICoachTaskSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseAICoachTaskSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseAICoachTaskSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CloseAICoachTaskSessionResponse() = default;
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
class CreateAICoachTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scriptRecordId{};
  shared_ptr<string> studentAudioUrl{};
  shared_ptr<string> studentId{};

  CreateAICoachTaskRequest() {}

  explicit CreateAICoachTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    if (studentAudioUrl) {
      res["studentAudioUrl"] = boost::any(*studentAudioUrl);
    }
    if (studentId) {
      res["studentId"] = boost::any(*studentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
    if (m.find("studentAudioUrl") != m.end() && !m["studentAudioUrl"].empty()) {
      studentAudioUrl = make_shared<string>(boost::any_cast<string>(m["studentAudioUrl"]));
    }
    if (m.find("studentId") != m.end() && !m["studentId"].empty()) {
      studentId = make_shared<string>(boost::any_cast<string>(m["studentId"]));
    }
  }


  virtual ~CreateAICoachTaskRequest() = default;
};
class CreateAICoachTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateAICoachTaskResponseBody() {}

  explicit CreateAICoachTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateAICoachTaskResponseBody() = default;
};
class CreateAICoachTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAICoachTaskResponseBody> body{};

  CreateAICoachTaskResponse() {}

  explicit CreateAICoachTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAICoachTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAICoachTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAICoachTaskResponse() = default;
};
class CreateAICoachTaskSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> uid{};

  CreateAICoachTaskSessionRequest() {}

  explicit CreateAICoachTaskSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateAICoachTaskSessionRequest() = default;
};
class CreateAICoachTaskSessionResponseBodyScriptInfo : public Darabonba::Model {
public:
  shared_ptr<string> agentIconUrl{};
  shared_ptr<string> characterName{};
  shared_ptr<bool> dialogueTextFlag{};
  shared_ptr<bool> dialogueTipFlag{};
  shared_ptr<string> initiator{};
  shared_ptr<vector<string>> inputTypeList{};
  shared_ptr<long> maxDuration{};
  shared_ptr<string> scriptDesc{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> scriptRecordId{};
  shared_ptr<long> scriptType{};
  shared_ptr<string> sparringTipContent{};
  shared_ptr<string> sparringTipTitle{};
  shared_ptr<bool> studentThinkTimeFlag{};
  shared_ptr<long> studentThinkTimeLimit{};

  CreateAICoachTaskSessionResponseBodyScriptInfo() {}

  explicit CreateAICoachTaskSessionResponseBodyScriptInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentIconUrl) {
      res["agentIconUrl"] = boost::any(*agentIconUrl);
    }
    if (characterName) {
      res["characterName"] = boost::any(*characterName);
    }
    if (dialogueTextFlag) {
      res["dialogueTextFlag"] = boost::any(*dialogueTextFlag);
    }
    if (dialogueTipFlag) {
      res["dialogueTipFlag"] = boost::any(*dialogueTipFlag);
    }
    if (initiator) {
      res["initiator"] = boost::any(*initiator);
    }
    if (inputTypeList) {
      res["inputTypeList"] = boost::any(*inputTypeList);
    }
    if (maxDuration) {
      res["maxDuration"] = boost::any(*maxDuration);
    }
    if (scriptDesc) {
      res["scriptDesc"] = boost::any(*scriptDesc);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    if (scriptType) {
      res["scriptType"] = boost::any(*scriptType);
    }
    if (sparringTipContent) {
      res["sparringTipContent"] = boost::any(*sparringTipContent);
    }
    if (sparringTipTitle) {
      res["sparringTipTitle"] = boost::any(*sparringTipTitle);
    }
    if (studentThinkTimeFlag) {
      res["studentThinkTimeFlag"] = boost::any(*studentThinkTimeFlag);
    }
    if (studentThinkTimeLimit) {
      res["studentThinkTimeLimit"] = boost::any(*studentThinkTimeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentIconUrl") != m.end() && !m["agentIconUrl"].empty()) {
      agentIconUrl = make_shared<string>(boost::any_cast<string>(m["agentIconUrl"]));
    }
    if (m.find("characterName") != m.end() && !m["characterName"].empty()) {
      characterName = make_shared<string>(boost::any_cast<string>(m["characterName"]));
    }
    if (m.find("dialogueTextFlag") != m.end() && !m["dialogueTextFlag"].empty()) {
      dialogueTextFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTextFlag"]));
    }
    if (m.find("dialogueTipFlag") != m.end() && !m["dialogueTipFlag"].empty()) {
      dialogueTipFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTipFlag"]));
    }
    if (m.find("initiator") != m.end() && !m["initiator"].empty()) {
      initiator = make_shared<string>(boost::any_cast<string>(m["initiator"]));
    }
    if (m.find("inputTypeList") != m.end() && !m["inputTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["inputTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["inputTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      inputTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("maxDuration") != m.end() && !m["maxDuration"].empty()) {
      maxDuration = make_shared<long>(boost::any_cast<long>(m["maxDuration"]));
    }
    if (m.find("scriptDesc") != m.end() && !m["scriptDesc"].empty()) {
      scriptDesc = make_shared<string>(boost::any_cast<string>(m["scriptDesc"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
    if (m.find("scriptType") != m.end() && !m["scriptType"].empty()) {
      scriptType = make_shared<long>(boost::any_cast<long>(m["scriptType"]));
    }
    if (m.find("sparringTipContent") != m.end() && !m["sparringTipContent"].empty()) {
      sparringTipContent = make_shared<string>(boost::any_cast<string>(m["sparringTipContent"]));
    }
    if (m.find("sparringTipTitle") != m.end() && !m["sparringTipTitle"].empty()) {
      sparringTipTitle = make_shared<string>(boost::any_cast<string>(m["sparringTipTitle"]));
    }
    if (m.find("studentThinkTimeFlag") != m.end() && !m["studentThinkTimeFlag"].empty()) {
      studentThinkTimeFlag = make_shared<bool>(boost::any_cast<bool>(m["studentThinkTimeFlag"]));
    }
    if (m.find("studentThinkTimeLimit") != m.end() && !m["studentThinkTimeLimit"].empty()) {
      studentThinkTimeLimit = make_shared<long>(boost::any_cast<long>(m["studentThinkTimeLimit"]));
    }
  }


  virtual ~CreateAICoachTaskSessionResponseBodyScriptInfo() = default;
};
class CreateAICoachTaskSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> channelToken{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateAICoachTaskSessionResponseBodyScriptInfo> scriptInfo{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> sessionStatus{};
  shared_ptr<string> token{};
  shared_ptr<string> webSocketUrl{};

  CreateAICoachTaskSessionResponseBody() {}

  explicit CreateAICoachTaskSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scriptInfo) {
      res["scriptInfo"] = scriptInfo ? boost::any(scriptInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (sessionStatus) {
      res["sessionStatus"] = boost::any(*sessionStatus);
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
    if (m.find("scriptInfo") != m.end() && !m["scriptInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["scriptInfo"].type()) {
        CreateAICoachTaskSessionResponseBodyScriptInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scriptInfo"]));
        scriptInfo = make_shared<CreateAICoachTaskSessionResponseBodyScriptInfo>(model1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("sessionStatus") != m.end() && !m["sessionStatus"].empty()) {
      sessionStatus = make_shared<long>(boost::any_cast<long>(m["sessionStatus"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("webSocketUrl") != m.end() && !m["webSocketUrl"].empty()) {
      webSocketUrl = make_shared<string>(boost::any_cast<string>(m["webSocketUrl"]));
    }
  }


  virtual ~CreateAICoachTaskSessionResponseBody() = default;
};
class CreateAICoachTaskSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAICoachTaskSessionResponseBody> body{};

  CreateAICoachTaskSessionResponse() {}

  explicit CreateAICoachTaskSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAICoachTaskSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAICoachTaskSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAICoachTaskSessionResponse() = default;
};
class CreateAnchorRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorMaterialName{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> digitalHumanType{};
  shared_ptr<string> gender{};
  shared_ptr<string> useScene{};

  CreateAnchorRequest() {}

  explicit CreateAnchorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorMaterialName) {
      res["anchorMaterialName"] = boost::any(*anchorMaterialName);
    }
    if (coverUrl) {
      res["coverUrl"] = boost::any(*coverUrl);
    }
    if (digitalHumanType) {
      res["digitalHumanType"] = boost::any(*digitalHumanType);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("anchorMaterialName") != m.end() && !m["anchorMaterialName"].empty()) {
      anchorMaterialName = make_shared<string>(boost::any_cast<string>(m["anchorMaterialName"]));
    }
    if (m.find("coverUrl") != m.end() && !m["coverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["coverUrl"]));
    }
    if (m.find("digitalHumanType") != m.end() && !m["digitalHumanType"].empty()) {
      digitalHumanType = make_shared<string>(boost::any_cast<string>(m["digitalHumanType"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["gender"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
  }


  virtual ~CreateAnchorRequest() = default;
};
class CreateAnchorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAnchorResponseBody() {}

  explicit CreateAnchorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateAnchorResponseBody() = default;
};
class CreateAnchorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAnchorResponseBody> body{};

  CreateAnchorResponse() {}

  explicit CreateAnchorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAnchorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAnchorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAnchorResponse() = default;
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
class CreateIndividuationProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectInfo{};
  shared_ptr<string> projectName{};
  shared_ptr<string> purpose{};
  shared_ptr<string> sceneId{};

  CreateIndividuationProjectRequest() {}

  explicit CreateIndividuationProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectInfo) {
      res["projectInfo"] = boost::any(*projectInfo);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (purpose) {
      res["purpose"] = boost::any(*purpose);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectInfo") != m.end() && !m["projectInfo"].empty()) {
      projectInfo = make_shared<string>(boost::any_cast<string>(m["projectInfo"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("purpose") != m.end() && !m["purpose"].empty()) {
      purpose = make_shared<string>(boost::any_cast<string>(m["purpose"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~CreateIndividuationProjectRequest() = default;
};
class CreateIndividuationProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  CreateIndividuationProjectResponseBody() {}

  explicit CreateIndividuationProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateIndividuationProjectResponseBody() = default;
};
class CreateIndividuationProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIndividuationProjectResponseBody> body{};

  CreateIndividuationProjectResponse() {}

  explicit CreateIndividuationProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIndividuationProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIndividuationProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIndividuationProjectResponse() = default;
};
class CreateIndividuationTextTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<vector<string>>> crowdPack{};
  shared_ptr<string> projectId{};
  shared_ptr<string> taskName{};

  CreateIndividuationTextTaskRequest() {}

  explicit CreateIndividuationTextTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crowdPack) {
      res["crowdPack"] = boost::any(*crowdPack);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("crowdPack") != m.end() && !m["crowdPack"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["crowdPack"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["crowdPack"]);
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
      crowdPack = make_shared<vector<vector<string>>>(toVec1);
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~CreateIndividuationTextTaskRequest() = default;
};
class CreateIndividuationTextTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateIndividuationTextTaskResponseBody() {}

  explicit CreateIndividuationTextTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIndividuationTextTaskResponseBody() = default;
};
class CreateIndividuationTextTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIndividuationTextTaskResponseBody> body{};

  CreateIndividuationTextTaskResponse() {}

  explicit CreateIndividuationTextTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIndividuationTextTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIndividuationTextTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIndividuationTextTaskResponse() = default;
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
class CreateTrainTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunMainId{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> taskType{};
  shared_ptr<string> useScene{};
  shared_ptr<string> voiceGender{};
  shared_ptr<string> voiceLanguage{};
  shared_ptr<string> voiceName{};
  shared_ptr<string> voicePath{};

  CreateTrainTaskRequest() {}

  explicit CreateTrainTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunMainId) {
      res["aliyunMainId"] = boost::any(*aliyunMainId);
    }
    if (resSpecType) {
      res["resSpecType"] = boost::any(*resSpecType);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (useScene) {
      res["useScene"] = boost::any(*useScene);
    }
    if (voiceGender) {
      res["voiceGender"] = boost::any(*voiceGender);
    }
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
    }
    if (voiceName) {
      res["voiceName"] = boost::any(*voiceName);
    }
    if (voicePath) {
      res["voicePath"] = boost::any(*voicePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunMainId") != m.end() && !m["aliyunMainId"].empty()) {
      aliyunMainId = make_shared<string>(boost::any_cast<string>(m["aliyunMainId"]));
    }
    if (m.find("resSpecType") != m.end() && !m["resSpecType"].empty()) {
      resSpecType = make_shared<string>(boost::any_cast<string>(m["resSpecType"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("useScene") != m.end() && !m["useScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["useScene"]));
    }
    if (m.find("voiceGender") != m.end() && !m["voiceGender"].empty()) {
      voiceGender = make_shared<string>(boost::any_cast<string>(m["voiceGender"]));
    }
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
    }
    if (m.find("voiceName") != m.end() && !m["voiceName"].empty()) {
      voiceName = make_shared<string>(boost::any_cast<string>(m["voiceName"]));
    }
    if (m.find("voicePath") != m.end() && !m["voicePath"].empty()) {
      voicePath = make_shared<string>(boost::any_cast<string>(m["voicePath"]));
    }
  }


  virtual ~CreateTrainTaskRequest() = default;
};
class CreateTrainTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateTrainTaskResponseBody() {}

  explicit CreateTrainTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTrainTaskResponseBody() = default;
};
class CreateTrainTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrainTaskResponseBody> body{};

  CreateTrainTaskResponse() {}

  explicit CreateTrainTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTrainTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrainTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrainTaskResponse() = default;
};
class CreateVideoClipTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunMainId{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> ossKeys{};
  shared_ptr<string> requirement{};

  CreateVideoClipTaskRequest() {}

  explicit CreateVideoClipTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunMainId) {
      res["aliyunMainId"] = boost::any(*aliyunMainId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (ossKeys) {
      res["ossKeys"] = boost::any(*ossKeys);
    }
    if (requirement) {
      res["requirement"] = boost::any(*requirement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunMainId") != m.end() && !m["aliyunMainId"].empty()) {
      aliyunMainId = make_shared<string>(boost::any_cast<string>(m["aliyunMainId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("ossKeys") != m.end() && !m["ossKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ossKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ossKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ossKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requirement") != m.end() && !m["requirement"].empty()) {
      requirement = make_shared<string>(boost::any_cast<string>(m["requirement"]));
    }
  }


  virtual ~CreateVideoClipTaskRequest() = default;
};
class CreateVideoClipTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateVideoClipTaskResponseBody() {}

  explicit CreateVideoClipTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVideoClipTaskResponseBody() = default;
};
class CreateVideoClipTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVideoClipTaskResponseBody> body{};

  CreateVideoClipTaskResponse() {}

  explicit CreateVideoClipTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoClipTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoClipTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoClipTaskResponse() = default;
};
class DeleteIndividuationProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  DeleteIndividuationProjectRequest() {}

  explicit DeleteIndividuationProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIndividuationProjectRequest() = default;
};
class DeleteIndividuationProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteIndividuationProjectResponseBody() {}

  explicit DeleteIndividuationProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
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
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DeleteIndividuationProjectResponseBody() = default;
};
class DeleteIndividuationProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndividuationProjectResponseBody> body{};

  DeleteIndividuationProjectResponse() {}

  explicit DeleteIndividuationProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndividuationProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndividuationProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndividuationProjectResponse() = default;
};
class DeleteIndividuationTextRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> textIdList{};

  DeleteIndividuationTextRequest() {}

  explicit DeleteIndividuationTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textIdList) {
      res["textIdList"] = boost::any(*textIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("textIdList") != m.end() && !m["textIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["textIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["textIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      textIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteIndividuationTextRequest() = default;
};
class DeleteIndividuationTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteIndividuationTextResponseBody() {}

  explicit DeleteIndividuationTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
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
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DeleteIndividuationTextResponseBody() = default;
};
class DeleteIndividuationTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndividuationTextResponseBody> body{};

  DeleteIndividuationTextResponse() {}

  explicit DeleteIndividuationTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndividuationTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndividuationTextResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndividuationTextResponse() = default;
};
class DescribeDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DocumentResult> body{};

  DescribeDocumentResponse() {}

  explicit DescribeDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DocumentResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DocumentResult>(model1);
      }
    }
  }


  virtual ~DescribeDocumentResponse() = default;
};
class FinishAICoachTaskSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uid{};

  FinishAICoachTaskSessionRequest() {}

  explicit FinishAICoachTaskSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~FinishAICoachTaskSessionRequest() = default;
};
class FinishAICoachTaskSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  FinishAICoachTaskSessionResponseBody() {}

  explicit FinishAICoachTaskSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FinishAICoachTaskSessionResponseBody() = default;
};
class FinishAICoachTaskSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FinishAICoachTaskSessionResponseBody> body{};

  FinishAICoachTaskSessionResponse() {}

  explicit FinishAICoachTaskSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FinishAICoachTaskSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishAICoachTaskSessionResponseBody>(model1);
      }
    }
  }


  virtual ~FinishAICoachTaskSessionResponse() = default;
};
class GetAICoachCheatDetectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};

  GetAICoachCheatDetectionRequest() {}

  explicit GetAICoachCheatDetectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~GetAICoachCheatDetectionRequest() = default;
};
class GetAICoachCheatDetectionResponseBodyImageCheatList : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> url{};

  GetAICoachCheatDetectionResponseBodyImageCheatList() {}

  explicit GetAICoachCheatDetectionResponseBodyImageCheatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBodyImageCheatList() = default;
};
class GetAICoachCheatDetectionResponseBodyImageCheat : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<vector<GetAICoachCheatDetectionResponseBodyImageCheatList>> list{};
  shared_ptr<long> status{};

  GetAICoachCheatDetectionResponseBodyImageCheat() {}

  explicit GetAICoachCheatDetectionResponseBodyImageCheat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<GetAICoachCheatDetectionResponseBodyImageCheatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachCheatDetectionResponseBodyImageCheatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetAICoachCheatDetectionResponseBodyImageCheatList>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBodyImageCheat() = default;
};
class GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> url{};

  GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList() {}

  explicit GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList() = default;
};
class GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList() {}

  explicit GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList() = default;
};
class GetAICoachCheatDetectionResponseBodyVoiceCheat : public Darabonba::Model {
public:
  shared_ptr<vector<GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList>> comparisonList{};
  shared_ptr<string> desc{};
  shared_ptr<vector<GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList>> originalList{};
  shared_ptr<long> status{};

  GetAICoachCheatDetectionResponseBodyVoiceCheat() {}

  explicit GetAICoachCheatDetectionResponseBodyVoiceCheat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonList) {
      vector<boost::any> temp1;
      for(auto item1:*comparisonList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["comparisonList"] = boost::any(temp1);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (originalList) {
      vector<boost::any> temp1;
      for(auto item1:*originalList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["originalList"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comparisonList") != m.end() && !m["comparisonList"].empty()) {
      if (typeid(vector<boost::any>) == m["comparisonList"].type()) {
        vector<GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["comparisonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        comparisonList = make_shared<vector<GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList>>(expect1);
      }
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("originalList") != m.end() && !m["originalList"].empty()) {
      if (typeid(vector<boost::any>) == m["originalList"].type()) {
        vector<GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["originalList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalList = make_shared<vector<GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheat() = default;
};
class GetAICoachCheatDetectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cheatId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<GetAICoachCheatDetectionResponseBodyImageCheat> imageCheat{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};
  shared_ptr<GetAICoachCheatDetectionResponseBodyVoiceCheat> voiceCheat{};

  GetAICoachCheatDetectionResponseBody() {}

  explicit GetAICoachCheatDetectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheatId) {
      res["cheatId"] = boost::any(*cheatId);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (imageCheat) {
      res["imageCheat"] = imageCheat ? boost::any(imageCheat->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (voiceCheat) {
      res["voiceCheat"] = voiceCheat ? boost::any(voiceCheat->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cheatId") != m.end() && !m["cheatId"].empty()) {
      cheatId = make_shared<string>(boost::any_cast<string>(m["cheatId"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("imageCheat") != m.end() && !m["imageCheat"].empty()) {
      if (typeid(map<string, boost::any>) == m["imageCheat"].type()) {
        GetAICoachCheatDetectionResponseBodyImageCheat model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["imageCheat"]));
        imageCheat = make_shared<GetAICoachCheatDetectionResponseBodyImageCheat>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("voiceCheat") != m.end() && !m["voiceCheat"].empty()) {
      if (typeid(map<string, boost::any>) == m["voiceCheat"].type()) {
        GetAICoachCheatDetectionResponseBodyVoiceCheat model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["voiceCheat"]));
        voiceCheat = make_shared<GetAICoachCheatDetectionResponseBodyVoiceCheat>(model1);
      }
    }
  }


  virtual ~GetAICoachCheatDetectionResponseBody() = default;
};
class GetAICoachCheatDetectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAICoachCheatDetectionResponseBody> body{};

  GetAICoachCheatDetectionResponse() {}

  explicit GetAICoachCheatDetectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAICoachCheatDetectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAICoachCheatDetectionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAICoachCheatDetectionResponse() = default;
};
class GetAICoachScriptRequest : public Darabonba::Model {
public:
  shared_ptr<string> scriptRecordId{};

  GetAICoachScriptRequest() {}

  explicit GetAICoachScriptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
  }


  virtual ~GetAICoachScriptRequest() = default;
};
class GetAICoachScriptResponseBodyCheckCheatConfig : public Darabonba::Model {
public:
  shared_ptr<bool> checkImage{};
  shared_ptr<bool> checkVoice{};

  GetAICoachScriptResponseBodyCheckCheatConfig() {}

  explicit GetAICoachScriptResponseBodyCheckCheatConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkImage) {
      res["checkImage"] = boost::any(*checkImage);
    }
    if (checkVoice) {
      res["checkVoice"] = boost::any(*checkVoice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkImage") != m.end() && !m["checkImage"].empty()) {
      checkImage = make_shared<bool>(boost::any_cast<bool>(m["checkImage"]));
    }
    if (m.find("checkVoice") != m.end() && !m["checkVoice"].empty()) {
      checkVoice = make_shared<bool>(boost::any_cast<bool>(m["checkVoice"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyCheckCheatConfig() = default;
};
class GetAICoachScriptResponseBodyCompleteStrategy : public Darabonba::Model {
public:
  shared_ptr<long> abnormalQuitSessionExpired{};
  shared_ptr<bool> abnormalQuitSessionExpiredFlag{};
  shared_ptr<bool> clickCompleteAutoEnd{};
  shared_ptr<long> duration{};
  shared_ptr<bool> durationFlag{};
  shared_ptr<bool> fullCoverageAutoEnd{};

  GetAICoachScriptResponseBodyCompleteStrategy() {}

  explicit GetAICoachScriptResponseBodyCompleteStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abnormalQuitSessionExpired) {
      res["abnormalQuitSessionExpired"] = boost::any(*abnormalQuitSessionExpired);
    }
    if (abnormalQuitSessionExpiredFlag) {
      res["abnormalQuitSessionExpiredFlag"] = boost::any(*abnormalQuitSessionExpiredFlag);
    }
    if (clickCompleteAutoEnd) {
      res["clickCompleteAutoEnd"] = boost::any(*clickCompleteAutoEnd);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (durationFlag) {
      res["durationFlag"] = boost::any(*durationFlag);
    }
    if (fullCoverageAutoEnd) {
      res["fullCoverageAutoEnd"] = boost::any(*fullCoverageAutoEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("abnormalQuitSessionExpired") != m.end() && !m["abnormalQuitSessionExpired"].empty()) {
      abnormalQuitSessionExpired = make_shared<long>(boost::any_cast<long>(m["abnormalQuitSessionExpired"]));
    }
    if (m.find("abnormalQuitSessionExpiredFlag") != m.end() && !m["abnormalQuitSessionExpiredFlag"].empty()) {
      abnormalQuitSessionExpiredFlag = make_shared<bool>(boost::any_cast<bool>(m["abnormalQuitSessionExpiredFlag"]));
    }
    if (m.find("clickCompleteAutoEnd") != m.end() && !m["clickCompleteAutoEnd"].empty()) {
      clickCompleteAutoEnd = make_shared<bool>(boost::any_cast<bool>(m["clickCompleteAutoEnd"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("durationFlag") != m.end() && !m["durationFlag"].empty()) {
      durationFlag = make_shared<bool>(boost::any_cast<bool>(m["durationFlag"]));
    }
    if (m.find("fullCoverageAutoEnd") != m.end() && !m["fullCoverageAutoEnd"].empty()) {
      fullCoverageAutoEnd = make_shared<bool>(boost::any_cast<bool>(m["fullCoverageAutoEnd"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyCompleteStrategy() = default;
};
class GetAICoachScriptResponseBodyPointDeductionRuleList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> punishmentTypes{};
  shared_ptr<string> ruleValue{};
  shared_ptr<long> weight{};

  GetAICoachScriptResponseBodyPointDeductionRuleList() {}

  explicit GetAICoachScriptResponseBodyPointDeductionRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (punishmentTypes) {
      res["punishmentTypes"] = boost::any(*punishmentTypes);
    }
    if (ruleValue) {
      res["ruleValue"] = boost::any(*ruleValue);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("punishmentTypes") != m.end() && !m["punishmentTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["punishmentTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["punishmentTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      punishmentTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ruleValue") != m.end() && !m["ruleValue"].empty()) {
      ruleValue = make_shared<string>(boost::any_cast<string>(m["ruleValue"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyPointDeductionRuleList() = default;
};
class GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> weight{};

  GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues() {}

  explicit GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues() = default;
};
class GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules() {}

  explicit GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules() = default;
};
class GetAICoachScriptResponseBodyPointsAnswerListAnswerValues : public Darabonba::Model {
public:
  shared_ptr<string> answerName{};
  shared_ptr<long> answerWeight{};
  shared_ptr<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues>> keywordValues{};
  shared_ptr<long> keywordWeight{};
  shared_ptr<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules>> scoringRules{};

  GetAICoachScriptResponseBodyPointsAnswerListAnswerValues() {}

  explicit GetAICoachScriptResponseBodyPointsAnswerListAnswerValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerName) {
      res["answerName"] = boost::any(*answerName);
    }
    if (answerWeight) {
      res["answerWeight"] = boost::any(*answerWeight);
    }
    if (keywordValues) {
      vector<boost::any> temp1;
      for(auto item1:*keywordValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["keywordValues"] = boost::any(temp1);
    }
    if (keywordWeight) {
      res["keywordWeight"] = boost::any(*keywordWeight);
    }
    if (scoringRules) {
      vector<boost::any> temp1;
      for(auto item1:*scoringRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scoringRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerName") != m.end() && !m["answerName"].empty()) {
      answerName = make_shared<string>(boost::any_cast<string>(m["answerName"]));
    }
    if (m.find("answerWeight") != m.end() && !m["answerWeight"].empty()) {
      answerWeight = make_shared<long>(boost::any_cast<long>(m["answerWeight"]));
    }
    if (m.find("keywordValues") != m.end() && !m["keywordValues"].empty()) {
      if (typeid(vector<boost::any>) == m["keywordValues"].type()) {
        vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["keywordValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keywordValues = make_shared<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues>>(expect1);
      }
    }
    if (m.find("keywordWeight") != m.end() && !m["keywordWeight"].empty()) {
      keywordWeight = make_shared<long>(boost::any_cast<long>(m["keywordWeight"]));
    }
    if (m.find("scoringRules") != m.end() && !m["scoringRules"].empty()) {
      if (typeid(vector<boost::any>) == m["scoringRules"].type()) {
        vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scoringRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scoringRules = make_shared<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules>>(expect1);
      }
    }
  }


  virtual ~GetAICoachScriptResponseBodyPointsAnswerListAnswerValues() = default;
};
class GetAICoachScriptResponseBodyPointsAnswerListParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetAICoachScriptResponseBodyPointsAnswerListParameters() {}

  explicit GetAICoachScriptResponseBodyPointsAnswerListParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAICoachScriptResponseBodyPointsAnswerListParameters() = default;
};
class GetAICoachScriptResponseBodyPointsAnswerList : public Darabonba::Model {
public:
  shared_ptr<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValues>> answerValues{};
  shared_ptr<bool> enabledKeyword{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> nameList{};
  shared_ptr<string> operators{};
  shared_ptr<vector<GetAICoachScriptResponseBodyPointsAnswerListParameters>> parameters{};
  shared_ptr<string> type{};
  shared_ptr<long> weight{};

  GetAICoachScriptResponseBodyPointsAnswerList() {}

  explicit GetAICoachScriptResponseBodyPointsAnswerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerValues) {
      vector<boost::any> temp1;
      for(auto item1:*answerValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["answerValues"] = boost::any(temp1);
    }
    if (enabledKeyword) {
      res["enabledKeyword"] = boost::any(*enabledKeyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameList) {
      res["nameList"] = boost::any(*nameList);
    }
    if (operators) {
      res["operators"] = boost::any(*operators);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerValues") != m.end() && !m["answerValues"].empty()) {
      if (typeid(vector<boost::any>) == m["answerValues"].type()) {
        vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["answerValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointsAnswerListAnswerValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerValues = make_shared<vector<GetAICoachScriptResponseBodyPointsAnswerListAnswerValues>>(expect1);
      }
    }
    if (m.find("enabledKeyword") != m.end() && !m["enabledKeyword"].empty()) {
      enabledKeyword = make_shared<bool>(boost::any_cast<bool>(m["enabledKeyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameList") != m.end() && !m["nameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["nameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("operators") != m.end() && !m["operators"].empty()) {
      operators = make_shared<string>(boost::any_cast<string>(m["operators"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<GetAICoachScriptResponseBodyPointsAnswerListParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointsAnswerListParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetAICoachScriptResponseBodyPointsAnswerListParameters>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyPointsAnswerList() = default;
};
class GetAICoachScriptResponseBodyPoints : public Darabonba::Model {
public:
  shared_ptr<vector<GetAICoachScriptResponseBodyPointsAnswerList>> answerList{};
  shared_ptr<vector<string>> knowledgeList{};
  shared_ptr<string> name{};
  shared_ptr<string> pointId{};
  shared_ptr<string> questionDescription{};
  shared_ptr<long> sortNo{};
  shared_ptr<long> weight{};

  GetAICoachScriptResponseBodyPoints() {}

  explicit GetAICoachScriptResponseBodyPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerList) {
      vector<boost::any> temp1;
      for(auto item1:*answerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["answerList"] = boost::any(temp1);
    }
    if (knowledgeList) {
      res["knowledgeList"] = boost::any(*knowledgeList);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pointId) {
      res["pointId"] = boost::any(*pointId);
    }
    if (questionDescription) {
      res["questionDescription"] = boost::any(*questionDescription);
    }
    if (sortNo) {
      res["sortNo"] = boost::any(*sortNo);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerList") != m.end() && !m["answerList"].empty()) {
      if (typeid(vector<boost::any>) == m["answerList"].type()) {
        vector<GetAICoachScriptResponseBodyPointsAnswerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["answerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointsAnswerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        answerList = make_shared<vector<GetAICoachScriptResponseBodyPointsAnswerList>>(expect1);
      }
    }
    if (m.find("knowledgeList") != m.end() && !m["knowledgeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pointId") != m.end() && !m["pointId"].empty()) {
      pointId = make_shared<string>(boost::any_cast<string>(m["pointId"]));
    }
    if (m.find("questionDescription") != m.end() && !m["questionDescription"].empty()) {
      questionDescription = make_shared<string>(boost::any_cast<string>(m["questionDescription"]));
    }
    if (m.find("sortNo") != m.end() && !m["sortNo"].empty()) {
      sortNo = make_shared<long>(boost::any_cast<long>(m["sortNo"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyPoints() = default;
};
class GetAICoachScriptResponseBodySampleDialogueList : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> role{};

  GetAICoachScriptResponseBodySampleDialogueList() {}

  explicit GetAICoachScriptResponseBodySampleDialogueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodySampleDialogueList() = default;
};
class GetAICoachScriptResponseBodyWeights : public Darabonba::Model {
public:
  shared_ptr<long> abilityEvaluation{};
  shared_ptr<bool> abilityEvaluationEnabled{};
  shared_ptr<long> assessmentPoint{};
  shared_ptr<long> expressiveness{};
  shared_ptr<bool> expressivenessEnabled{};
  shared_ptr<long> pointDeductionRule{};
  shared_ptr<bool> pointDeductionRuleEnabled{};
  shared_ptr<long> standard{};
  shared_ptr<bool> standardEnabled{};

  GetAICoachScriptResponseBodyWeights() {}

  explicit GetAICoachScriptResponseBodyWeights(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abilityEvaluation) {
      res["abilityEvaluation"] = boost::any(*abilityEvaluation);
    }
    if (abilityEvaluationEnabled) {
      res["abilityEvaluationEnabled"] = boost::any(*abilityEvaluationEnabled);
    }
    if (assessmentPoint) {
      res["assessmentPoint"] = boost::any(*assessmentPoint);
    }
    if (expressiveness) {
      res["expressiveness"] = boost::any(*expressiveness);
    }
    if (expressivenessEnabled) {
      res["expressivenessEnabled"] = boost::any(*expressivenessEnabled);
    }
    if (pointDeductionRule) {
      res["pointDeductionRule"] = boost::any(*pointDeductionRule);
    }
    if (pointDeductionRuleEnabled) {
      res["pointDeductionRuleEnabled"] = boost::any(*pointDeductionRuleEnabled);
    }
    if (standard) {
      res["standard"] = boost::any(*standard);
    }
    if (standardEnabled) {
      res["standardEnabled"] = boost::any(*standardEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("abilityEvaluation") != m.end() && !m["abilityEvaluation"].empty()) {
      abilityEvaluation = make_shared<long>(boost::any_cast<long>(m["abilityEvaluation"]));
    }
    if (m.find("abilityEvaluationEnabled") != m.end() && !m["abilityEvaluationEnabled"].empty()) {
      abilityEvaluationEnabled = make_shared<bool>(boost::any_cast<bool>(m["abilityEvaluationEnabled"]));
    }
    if (m.find("assessmentPoint") != m.end() && !m["assessmentPoint"].empty()) {
      assessmentPoint = make_shared<long>(boost::any_cast<long>(m["assessmentPoint"]));
    }
    if (m.find("expressiveness") != m.end() && !m["expressiveness"].empty()) {
      expressiveness = make_shared<long>(boost::any_cast<long>(m["expressiveness"]));
    }
    if (m.find("expressivenessEnabled") != m.end() && !m["expressivenessEnabled"].empty()) {
      expressivenessEnabled = make_shared<bool>(boost::any_cast<bool>(m["expressivenessEnabled"]));
    }
    if (m.find("pointDeductionRule") != m.end() && !m["pointDeductionRule"].empty()) {
      pointDeductionRule = make_shared<long>(boost::any_cast<long>(m["pointDeductionRule"]));
    }
    if (m.find("pointDeductionRuleEnabled") != m.end() && !m["pointDeductionRuleEnabled"].empty()) {
      pointDeductionRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["pointDeductionRuleEnabled"]));
    }
    if (m.find("standard") != m.end() && !m["standard"].empty()) {
      standard = make_shared<long>(boost::any_cast<long>(m["standard"]));
    }
    if (m.find("standardEnabled") != m.end() && !m["standardEnabled"].empty()) {
      standardEnabled = make_shared<bool>(boost::any_cast<bool>(m["standardEnabled"]));
    }
  }


  virtual ~GetAICoachScriptResponseBodyWeights() = default;
};
class GetAICoachScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> appendQuestionFlag{};
  shared_ptr<string> assessmentScope{};
  shared_ptr<GetAICoachScriptResponseBodyCheckCheatConfig> checkCheatConfig{};
  shared_ptr<GetAICoachScriptResponseBodyCompleteStrategy> completeStrategy{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> dialogueInputTextLimit{};
  shared_ptr<bool> dialogueTextFlag{};
  shared_ptr<bool> dialogueTipFlag{};
  shared_ptr<long> dialogueVoiceLimit{};
  shared_ptr<bool> evaluateReportFlag{};
  shared_ptr<map<string, long>> expressiveness{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> initiator{};
  shared_ptr<vector<string>> interactionInputTypes{};
  shared_ptr<long> interactionType{};
  shared_ptr<string> introduce{};
  shared_ptr<string> name{};
  shared_ptr<bool> orderAckFlag{};
  shared_ptr<vector<GetAICoachScriptResponseBodyPointDeductionRuleList>> pointDeductionRuleList{};
  shared_ptr<vector<GetAICoachScriptResponseBodyPoints>> points{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetAICoachScriptResponseBodySampleDialogueList>> sampleDialogueList{};
  shared_ptr<string> scriptRecordId{};
  shared_ptr<string> sparringTipContent{};
  shared_ptr<string> sparringTipTitle{};
  shared_ptr<long> status{};
  shared_ptr<bool> studentThinkTimeFlag{};
  shared_ptr<long> studentThinkTimeLimit{};
  shared_ptr<long> type{};
  shared_ptr<GetAICoachScriptResponseBodyWeights> weights{};

  GetAICoachScriptResponseBody() {}

  explicit GetAICoachScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendQuestionFlag) {
      res["appendQuestionFlag"] = boost::any(*appendQuestionFlag);
    }
    if (assessmentScope) {
      res["assessmentScope"] = boost::any(*assessmentScope);
    }
    if (checkCheatConfig) {
      res["checkCheatConfig"] = checkCheatConfig ? boost::any(checkCheatConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (completeStrategy) {
      res["completeStrategy"] = completeStrategy ? boost::any(completeStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coverUrl) {
      res["coverUrl"] = boost::any(*coverUrl);
    }
    if (dialogueInputTextLimit) {
      res["dialogueInputTextLimit"] = boost::any(*dialogueInputTextLimit);
    }
    if (dialogueTextFlag) {
      res["dialogueTextFlag"] = boost::any(*dialogueTextFlag);
    }
    if (dialogueTipFlag) {
      res["dialogueTipFlag"] = boost::any(*dialogueTipFlag);
    }
    if (dialogueVoiceLimit) {
      res["dialogueVoiceLimit"] = boost::any(*dialogueVoiceLimit);
    }
    if (evaluateReportFlag) {
      res["evaluateReportFlag"] = boost::any(*evaluateReportFlag);
    }
    if (expressiveness) {
      res["expressiveness"] = boost::any(*expressiveness);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (initiator) {
      res["initiator"] = boost::any(*initiator);
    }
    if (interactionInputTypes) {
      res["interactionInputTypes"] = boost::any(*interactionInputTypes);
    }
    if (interactionType) {
      res["interactionType"] = boost::any(*interactionType);
    }
    if (introduce) {
      res["introduce"] = boost::any(*introduce);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderAckFlag) {
      res["orderAckFlag"] = boost::any(*orderAckFlag);
    }
    if (pointDeductionRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*pointDeductionRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pointDeductionRuleList"] = boost::any(temp1);
    }
    if (points) {
      vector<boost::any> temp1;
      for(auto item1:*points){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["points"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sampleDialogueList) {
      vector<boost::any> temp1;
      for(auto item1:*sampleDialogueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sampleDialogueList"] = boost::any(temp1);
    }
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    if (sparringTipContent) {
      res["sparringTipContent"] = boost::any(*sparringTipContent);
    }
    if (sparringTipTitle) {
      res["sparringTipTitle"] = boost::any(*sparringTipTitle);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (studentThinkTimeFlag) {
      res["studentThinkTimeFlag"] = boost::any(*studentThinkTimeFlag);
    }
    if (studentThinkTimeLimit) {
      res["studentThinkTimeLimit"] = boost::any(*studentThinkTimeLimit);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (weights) {
      res["weights"] = weights ? boost::any(weights->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendQuestionFlag") != m.end() && !m["appendQuestionFlag"].empty()) {
      appendQuestionFlag = make_shared<bool>(boost::any_cast<bool>(m["appendQuestionFlag"]));
    }
    if (m.find("assessmentScope") != m.end() && !m["assessmentScope"].empty()) {
      assessmentScope = make_shared<string>(boost::any_cast<string>(m["assessmentScope"]));
    }
    if (m.find("checkCheatConfig") != m.end() && !m["checkCheatConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["checkCheatConfig"].type()) {
        GetAICoachScriptResponseBodyCheckCheatConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["checkCheatConfig"]));
        checkCheatConfig = make_shared<GetAICoachScriptResponseBodyCheckCheatConfig>(model1);
      }
    }
    if (m.find("completeStrategy") != m.end() && !m["completeStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["completeStrategy"].type()) {
        GetAICoachScriptResponseBodyCompleteStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["completeStrategy"]));
        completeStrategy = make_shared<GetAICoachScriptResponseBodyCompleteStrategy>(model1);
      }
    }
    if (m.find("coverUrl") != m.end() && !m["coverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["coverUrl"]));
    }
    if (m.find("dialogueInputTextLimit") != m.end() && !m["dialogueInputTextLimit"].empty()) {
      dialogueInputTextLimit = make_shared<long>(boost::any_cast<long>(m["dialogueInputTextLimit"]));
    }
    if (m.find("dialogueTextFlag") != m.end() && !m["dialogueTextFlag"].empty()) {
      dialogueTextFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTextFlag"]));
    }
    if (m.find("dialogueTipFlag") != m.end() && !m["dialogueTipFlag"].empty()) {
      dialogueTipFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTipFlag"]));
    }
    if (m.find("dialogueVoiceLimit") != m.end() && !m["dialogueVoiceLimit"].empty()) {
      dialogueVoiceLimit = make_shared<long>(boost::any_cast<long>(m["dialogueVoiceLimit"]));
    }
    if (m.find("evaluateReportFlag") != m.end() && !m["evaluateReportFlag"].empty()) {
      evaluateReportFlag = make_shared<bool>(boost::any_cast<bool>(m["evaluateReportFlag"]));
    }
    if (m.find("expressiveness") != m.end() && !m["expressiveness"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["expressiveness"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      expressiveness = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("initiator") != m.end() && !m["initiator"].empty()) {
      initiator = make_shared<string>(boost::any_cast<string>(m["initiator"]));
    }
    if (m.find("interactionInputTypes") != m.end() && !m["interactionInputTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["interactionInputTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["interactionInputTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      interactionInputTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("interactionType") != m.end() && !m["interactionType"].empty()) {
      interactionType = make_shared<long>(boost::any_cast<long>(m["interactionType"]));
    }
    if (m.find("introduce") != m.end() && !m["introduce"].empty()) {
      introduce = make_shared<string>(boost::any_cast<string>(m["introduce"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderAckFlag") != m.end() && !m["orderAckFlag"].empty()) {
      orderAckFlag = make_shared<bool>(boost::any_cast<bool>(m["orderAckFlag"]));
    }
    if (m.find("pointDeductionRuleList") != m.end() && !m["pointDeductionRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["pointDeductionRuleList"].type()) {
        vector<GetAICoachScriptResponseBodyPointDeductionRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pointDeductionRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPointDeductionRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pointDeductionRuleList = make_shared<vector<GetAICoachScriptResponseBodyPointDeductionRuleList>>(expect1);
      }
    }
    if (m.find("points") != m.end() && !m["points"].empty()) {
      if (typeid(vector<boost::any>) == m["points"].type()) {
        vector<GetAICoachScriptResponseBodyPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["points"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodyPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        points = make_shared<vector<GetAICoachScriptResponseBodyPoints>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sampleDialogueList") != m.end() && !m["sampleDialogueList"].empty()) {
      if (typeid(vector<boost::any>) == m["sampleDialogueList"].type()) {
        vector<GetAICoachScriptResponseBodySampleDialogueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sampleDialogueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachScriptResponseBodySampleDialogueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sampleDialogueList = make_shared<vector<GetAICoachScriptResponseBodySampleDialogueList>>(expect1);
      }
    }
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
    if (m.find("sparringTipContent") != m.end() && !m["sparringTipContent"].empty()) {
      sparringTipContent = make_shared<string>(boost::any_cast<string>(m["sparringTipContent"]));
    }
    if (m.find("sparringTipTitle") != m.end() && !m["sparringTipTitle"].empty()) {
      sparringTipTitle = make_shared<string>(boost::any_cast<string>(m["sparringTipTitle"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("studentThinkTimeFlag") != m.end() && !m["studentThinkTimeFlag"].empty()) {
      studentThinkTimeFlag = make_shared<bool>(boost::any_cast<bool>(m["studentThinkTimeFlag"]));
    }
    if (m.find("studentThinkTimeLimit") != m.end() && !m["studentThinkTimeLimit"].empty()) {
      studentThinkTimeLimit = make_shared<long>(boost::any_cast<long>(m["studentThinkTimeLimit"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("weights") != m.end() && !m["weights"].empty()) {
      if (typeid(map<string, boost::any>) == m["weights"].type()) {
        GetAICoachScriptResponseBodyWeights model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["weights"]));
        weights = make_shared<GetAICoachScriptResponseBodyWeights>(model1);
      }
    }
  }


  virtual ~GetAICoachScriptResponseBody() = default;
};
class GetAICoachScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAICoachScriptResponseBody> body{};

  GetAICoachScriptResponse() {}

  explicit GetAICoachScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAICoachScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAICoachScriptResponseBody>(model1);
      }
    }
  }


  virtual ~GetAICoachScriptResponse() = default;
};
class GetAICoachTaskSessionHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uid{};

  GetAICoachTaskSessionHistoryRequest() {}

  explicit GetAICoachTaskSessionHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
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
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetAICoachTaskSessionHistoryRequest() = default;
};
class GetAICoachTaskSessionHistoryResponseBodyConversationList : public Darabonba::Model {
public:
  shared_ptr<string> audioUrl{};
  shared_ptr<string> evaluationFeedback{};
  shared_ptr<string> evaluationResult{};
  shared_ptr<string> message{};
  shared_ptr<string> recordId{};
  shared_ptr<string> role{};

  GetAICoachTaskSessionHistoryResponseBodyConversationList() {}

  explicit GetAICoachTaskSessionHistoryResponseBodyConversationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioUrl) {
      res["audioUrl"] = boost::any(*audioUrl);
    }
    if (evaluationFeedback) {
      res["evaluationFeedback"] = boost::any(*evaluationFeedback);
    }
    if (evaluationResult) {
      res["evaluationResult"] = boost::any(*evaluationResult);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (recordId) {
      res["recordId"] = boost::any(*recordId);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("audioUrl") != m.end() && !m["audioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["audioUrl"]));
    }
    if (m.find("evaluationFeedback") != m.end() && !m["evaluationFeedback"].empty()) {
      evaluationFeedback = make_shared<string>(boost::any_cast<string>(m["evaluationFeedback"]));
    }
    if (m.find("evaluationResult") != m.end() && !m["evaluationResult"].empty()) {
      evaluationResult = make_shared<string>(boost::any_cast<string>(m["evaluationResult"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("recordId") != m.end() && !m["recordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["recordId"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~GetAICoachTaskSessionHistoryResponseBodyConversationList() = default;
};
class GetAICoachTaskSessionHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAICoachTaskSessionHistoryResponseBodyConversationList>> conversationList{};
  shared_ptr<long> duration{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pauseDuration{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> total{};
  shared_ptr<string> uid{};

  GetAICoachTaskSessionHistoryResponseBody() {}

  explicit GetAICoachTaskSessionHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationList) {
      vector<boost::any> temp1;
      for(auto item1:*conversationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conversationList"] = boost::any(temp1);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pauseDuration) {
      res["pauseDuration"] = boost::any(*pauseDuration);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conversationList") != m.end() && !m["conversationList"].empty()) {
      if (typeid(vector<boost::any>) == m["conversationList"].type()) {
        vector<GetAICoachTaskSessionHistoryResponseBodyConversationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conversationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAICoachTaskSessionHistoryResponseBodyConversationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversationList = make_shared<vector<GetAICoachTaskSessionHistoryResponseBodyConversationList>>(expect1);
      }
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("pauseDuration") != m.end() && !m["pauseDuration"].empty()) {
      pauseDuration = make_shared<long>(boost::any_cast<long>(m["pauseDuration"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetAICoachTaskSessionHistoryResponseBody() = default;
};
class GetAICoachTaskSessionHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAICoachTaskSessionHistoryResponseBody> body{};

  GetAICoachTaskSessionHistoryResponse() {}

  explicit GetAICoachTaskSessionHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAICoachTaskSessionHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAICoachTaskSessionHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetAICoachTaskSessionHistoryResponse() = default;
};
class GetAICoachTaskSessionReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uid{};

  GetAICoachTaskSessionReportRequest() {}

  explicit GetAICoachTaskSessionReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetAICoachTaskSessionReportRequest() = default;
};
class GetAICoachTaskSessionReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> endTime{};
  shared_ptr<string> evaluationRating{};
  shared_ptr<string> evaluationResult{};
  shared_ptr<bool> feedback{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> uid{};

  GetAICoachTaskSessionReportResponseBody() {}

  explicit GetAICoachTaskSessionReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (evaluationRating) {
      res["evaluationRating"] = boost::any(*evaluationRating);
    }
    if (evaluationResult) {
      res["evaluationResult"] = boost::any(*evaluationResult);
    }
    if (feedback) {
      res["feedback"] = boost::any(*feedback);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("evaluationRating") != m.end() && !m["evaluationRating"].empty()) {
      evaluationRating = make_shared<string>(boost::any_cast<string>(m["evaluationRating"]));
    }
    if (m.find("evaluationResult") != m.end() && !m["evaluationResult"].empty()) {
      evaluationResult = make_shared<string>(boost::any_cast<string>(m["evaluationResult"]));
    }
    if (m.find("feedback") != m.end() && !m["feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["feedback"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetAICoachTaskSessionReportResponseBody() = default;
};
class GetAICoachTaskSessionReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAICoachTaskSessionReportResponseBody> body{};

  GetAICoachTaskSessionReportResponse() {}

  explicit GetAICoachTaskSessionReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAICoachTaskSessionReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAICoachTaskSessionReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAICoachTaskSessionReportResponse() = default;
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
  shared_ptr<long> uploadType{};

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
    if (uploadType) {
      res["uploadType"] = boost::any(*uploadType);
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
    if (m.find("uploadType") != m.end() && !m["uploadType"].empty()) {
      uploadType = make_shared<long>(boost::any_cast<long>(m["uploadType"]));
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
class ListAICoachScriptPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};

  ListAICoachScriptPageRequest() {}

  explicit ListAICoachScriptPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~ListAICoachScriptPageRequest() = default;
};
class ListAICoachScriptPageResponseBodyListCompleteStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> clickCompleteAutoEnd{};
  shared_ptr<long> duration{};
  shared_ptr<bool> fullCoverageAutoEnd{};

  ListAICoachScriptPageResponseBodyListCompleteStrategy() {}

  explicit ListAICoachScriptPageResponseBodyListCompleteStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clickCompleteAutoEnd) {
      res["clickCompleteAutoEnd"] = boost::any(*clickCompleteAutoEnd);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (fullCoverageAutoEnd) {
      res["fullCoverageAutoEnd"] = boost::any(*fullCoverageAutoEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clickCompleteAutoEnd") != m.end() && !m["clickCompleteAutoEnd"].empty()) {
      clickCompleteAutoEnd = make_shared<bool>(boost::any_cast<bool>(m["clickCompleteAutoEnd"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("fullCoverageAutoEnd") != m.end() && !m["fullCoverageAutoEnd"].empty()) {
      fullCoverageAutoEnd = make_shared<bool>(boost::any_cast<bool>(m["fullCoverageAutoEnd"]));
    }
  }


  virtual ~ListAICoachScriptPageResponseBodyListCompleteStrategy() = default;
};
class ListAICoachScriptPageResponseBodyListSampleDialogueList : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> role{};

  ListAICoachScriptPageResponseBodyListSampleDialogueList() {}

  explicit ListAICoachScriptPageResponseBodyListSampleDialogueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ListAICoachScriptPageResponseBodyListSampleDialogueList() = default;
};
class ListAICoachScriptPageResponseBodyListScoreConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<long> passScore{};

  ListAICoachScriptPageResponseBodyListScoreConfig() {}

  explicit ListAICoachScriptPageResponseBodyListScoreConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (passScore) {
      res["passScore"] = boost::any(*passScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("passScore") != m.end() && !m["passScore"].empty()) {
      passScore = make_shared<long>(boost::any_cast<long>(m["passScore"]));
    }
  }


  virtual ~ListAICoachScriptPageResponseBodyListScoreConfig() = default;
};
class ListAICoachScriptPageResponseBodyListWeights : public Darabonba::Model {
public:
  shared_ptr<long> assessmentPoint{};
  shared_ptr<long> expressiveness{};
  shared_ptr<bool> expressivenessEnabled{};
  shared_ptr<long> pointDeductionRule{};
  shared_ptr<bool> pointDeductionRuleEnabled{};
  shared_ptr<long> standard{};
  shared_ptr<bool> standardEnabled{};

  ListAICoachScriptPageResponseBodyListWeights() {}

  explicit ListAICoachScriptPageResponseBodyListWeights(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assessmentPoint) {
      res["assessmentPoint"] = boost::any(*assessmentPoint);
    }
    if (expressiveness) {
      res["expressiveness"] = boost::any(*expressiveness);
    }
    if (expressivenessEnabled) {
      res["expressivenessEnabled"] = boost::any(*expressivenessEnabled);
    }
    if (pointDeductionRule) {
      res["pointDeductionRule"] = boost::any(*pointDeductionRule);
    }
    if (pointDeductionRuleEnabled) {
      res["pointDeductionRuleEnabled"] = boost::any(*pointDeductionRuleEnabled);
    }
    if (standard) {
      res["standard"] = boost::any(*standard);
    }
    if (standardEnabled) {
      res["standardEnabled"] = boost::any(*standardEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assessmentPoint") != m.end() && !m["assessmentPoint"].empty()) {
      assessmentPoint = make_shared<long>(boost::any_cast<long>(m["assessmentPoint"]));
    }
    if (m.find("expressiveness") != m.end() && !m["expressiveness"].empty()) {
      expressiveness = make_shared<long>(boost::any_cast<long>(m["expressiveness"]));
    }
    if (m.find("expressivenessEnabled") != m.end() && !m["expressivenessEnabled"].empty()) {
      expressivenessEnabled = make_shared<bool>(boost::any_cast<bool>(m["expressivenessEnabled"]));
    }
    if (m.find("pointDeductionRule") != m.end() && !m["pointDeductionRule"].empty()) {
      pointDeductionRule = make_shared<long>(boost::any_cast<long>(m["pointDeductionRule"]));
    }
    if (m.find("pointDeductionRuleEnabled") != m.end() && !m["pointDeductionRuleEnabled"].empty()) {
      pointDeductionRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["pointDeductionRuleEnabled"]));
    }
    if (m.find("standard") != m.end() && !m["standard"].empty()) {
      standard = make_shared<long>(boost::any_cast<long>(m["standard"]));
    }
    if (m.find("standardEnabled") != m.end() && !m["standardEnabled"].empty()) {
      standardEnabled = make_shared<bool>(boost::any_cast<bool>(m["standardEnabled"]));
    }
  }


  virtual ~ListAICoachScriptPageResponseBodyListWeights() = default;
};
class ListAICoachScriptPageResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> appendQuestionFlag{};
  shared_ptr<string> assessmentScope{};
  shared_ptr<ListAICoachScriptPageResponseBodyListCompleteStrategy> completeStrategy{};
  shared_ptr<string> coverUrl{};
  shared_ptr<bool> dialogueTextFlag{};
  shared_ptr<bool> dialogueTipFlag{};
  shared_ptr<bool> evaluateReportFlag{};
  shared_ptr<map<string, string>> expressiveness{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> initiator{};
  shared_ptr<string> interactionType{};
  shared_ptr<string> introduce{};
  shared_ptr<string> name{};
  shared_ptr<bool> orderAckFlag{};
  shared_ptr<vector<ListAICoachScriptPageResponseBodyListSampleDialogueList>> sampleDialogueList{};
  shared_ptr<ListAICoachScriptPageResponseBodyListScoreConfig> scoreConfig{};
  shared_ptr<string> scriptRecordId{};
  shared_ptr<string> sparringTipContent{};
  shared_ptr<string> sparringTipTitle{};
  shared_ptr<long> status{};
  shared_ptr<bool> studentThinkTimeFlag{};
  shared_ptr<long> type{};
  shared_ptr<ListAICoachScriptPageResponseBodyListWeights> weights{};

  ListAICoachScriptPageResponseBodyList() {}

  explicit ListAICoachScriptPageResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendQuestionFlag) {
      res["appendQuestionFlag"] = boost::any(*appendQuestionFlag);
    }
    if (assessmentScope) {
      res["assessmentScope"] = boost::any(*assessmentScope);
    }
    if (completeStrategy) {
      res["completeStrategy"] = completeStrategy ? boost::any(completeStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coverUrl) {
      res["coverUrl"] = boost::any(*coverUrl);
    }
    if (dialogueTextFlag) {
      res["dialogueTextFlag"] = boost::any(*dialogueTextFlag);
    }
    if (dialogueTipFlag) {
      res["dialogueTipFlag"] = boost::any(*dialogueTipFlag);
    }
    if (evaluateReportFlag) {
      res["evaluateReportFlag"] = boost::any(*evaluateReportFlag);
    }
    if (expressiveness) {
      res["expressiveness"] = boost::any(*expressiveness);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (initiator) {
      res["initiator"] = boost::any(*initiator);
    }
    if (interactionType) {
      res["interactionType"] = boost::any(*interactionType);
    }
    if (introduce) {
      res["introduce"] = boost::any(*introduce);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (orderAckFlag) {
      res["orderAckFlag"] = boost::any(*orderAckFlag);
    }
    if (sampleDialogueList) {
      vector<boost::any> temp1;
      for(auto item1:*sampleDialogueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sampleDialogueList"] = boost::any(temp1);
    }
    if (scoreConfig) {
      res["scoreConfig"] = scoreConfig ? boost::any(scoreConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scriptRecordId) {
      res["scriptRecordId"] = boost::any(*scriptRecordId);
    }
    if (sparringTipContent) {
      res["sparringTipContent"] = boost::any(*sparringTipContent);
    }
    if (sparringTipTitle) {
      res["sparringTipTitle"] = boost::any(*sparringTipTitle);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (studentThinkTimeFlag) {
      res["studentThinkTimeFlag"] = boost::any(*studentThinkTimeFlag);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (weights) {
      res["weights"] = weights ? boost::any(weights->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendQuestionFlag") != m.end() && !m["appendQuestionFlag"].empty()) {
      appendQuestionFlag = make_shared<string>(boost::any_cast<string>(m["appendQuestionFlag"]));
    }
    if (m.find("assessmentScope") != m.end() && !m["assessmentScope"].empty()) {
      assessmentScope = make_shared<string>(boost::any_cast<string>(m["assessmentScope"]));
    }
    if (m.find("completeStrategy") != m.end() && !m["completeStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["completeStrategy"].type()) {
        ListAICoachScriptPageResponseBodyListCompleteStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["completeStrategy"]));
        completeStrategy = make_shared<ListAICoachScriptPageResponseBodyListCompleteStrategy>(model1);
      }
    }
    if (m.find("coverUrl") != m.end() && !m["coverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["coverUrl"]));
    }
    if (m.find("dialogueTextFlag") != m.end() && !m["dialogueTextFlag"].empty()) {
      dialogueTextFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTextFlag"]));
    }
    if (m.find("dialogueTipFlag") != m.end() && !m["dialogueTipFlag"].empty()) {
      dialogueTipFlag = make_shared<bool>(boost::any_cast<bool>(m["dialogueTipFlag"]));
    }
    if (m.find("evaluateReportFlag") != m.end() && !m["evaluateReportFlag"].empty()) {
      evaluateReportFlag = make_shared<bool>(boost::any_cast<bool>(m["evaluateReportFlag"]));
    }
    if (m.find("expressiveness") != m.end() && !m["expressiveness"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["expressiveness"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      expressiveness = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("initiator") != m.end() && !m["initiator"].empty()) {
      initiator = make_shared<string>(boost::any_cast<string>(m["initiator"]));
    }
    if (m.find("interactionType") != m.end() && !m["interactionType"].empty()) {
      interactionType = make_shared<string>(boost::any_cast<string>(m["interactionType"]));
    }
    if (m.find("introduce") != m.end() && !m["introduce"].empty()) {
      introduce = make_shared<string>(boost::any_cast<string>(m["introduce"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("orderAckFlag") != m.end() && !m["orderAckFlag"].empty()) {
      orderAckFlag = make_shared<bool>(boost::any_cast<bool>(m["orderAckFlag"]));
    }
    if (m.find("sampleDialogueList") != m.end() && !m["sampleDialogueList"].empty()) {
      if (typeid(vector<boost::any>) == m["sampleDialogueList"].type()) {
        vector<ListAICoachScriptPageResponseBodyListSampleDialogueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sampleDialogueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAICoachScriptPageResponseBodyListSampleDialogueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sampleDialogueList = make_shared<vector<ListAICoachScriptPageResponseBodyListSampleDialogueList>>(expect1);
      }
    }
    if (m.find("scoreConfig") != m.end() && !m["scoreConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["scoreConfig"].type()) {
        ListAICoachScriptPageResponseBodyListScoreConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scoreConfig"]));
        scoreConfig = make_shared<ListAICoachScriptPageResponseBodyListScoreConfig>(model1);
      }
    }
    if (m.find("scriptRecordId") != m.end() && !m["scriptRecordId"].empty()) {
      scriptRecordId = make_shared<string>(boost::any_cast<string>(m["scriptRecordId"]));
    }
    if (m.find("sparringTipContent") != m.end() && !m["sparringTipContent"].empty()) {
      sparringTipContent = make_shared<string>(boost::any_cast<string>(m["sparringTipContent"]));
    }
    if (m.find("sparringTipTitle") != m.end() && !m["sparringTipTitle"].empty()) {
      sparringTipTitle = make_shared<string>(boost::any_cast<string>(m["sparringTipTitle"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("studentThinkTimeFlag") != m.end() && !m["studentThinkTimeFlag"].empty()) {
      studentThinkTimeFlag = make_shared<bool>(boost::any_cast<bool>(m["studentThinkTimeFlag"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("weights") != m.end() && !m["weights"].empty()) {
      if (typeid(map<string, boost::any>) == m["weights"].type()) {
        ListAICoachScriptPageResponseBodyListWeights model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["weights"]));
        weights = make_shared<ListAICoachScriptPageResponseBodyListWeights>(model1);
      }
    }
  }


  virtual ~ListAICoachScriptPageResponseBodyList() = default;
};
class ListAICoachScriptPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListAICoachScriptPageResponseBodyList>> list{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListAICoachScriptPageResponseBody() {}

  explicit ListAICoachScriptPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListAICoachScriptPageResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAICoachScriptPageResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListAICoachScriptPageResponseBodyList>>(expect1);
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


  virtual ~ListAICoachScriptPageResponseBody() = default;
};
class ListAICoachScriptPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAICoachScriptPageResponseBody> body{};

  ListAICoachScriptPageResponse() {}

  explicit ListAICoachScriptPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAICoachScriptPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAICoachScriptPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListAICoachScriptPageResponse() = default;
};
class ListAICoachTaskPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> studentId{};
  shared_ptr<string> taskId{};

  ListAICoachTaskPageRequest() {}

  explicit ListAICoachTaskPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (studentId) {
      res["studentId"] = boost::any(*studentId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("studentId") != m.end() && !m["studentId"].empty()) {
      studentId = make_shared<string>(boost::any_cast<string>(m["studentId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListAICoachTaskPageRequest() = default;
};
class ListAICoachTaskPageResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};
  shared_ptr<string> status{};
  shared_ptr<string> studentId{};
  shared_ptr<string> taskId{};

  ListAICoachTaskPageResponseBodyTaskList() {}

  explicit ListAICoachTaskPageResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (studentId) {
      res["studentId"] = boost::any(*studentId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finishTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("studentId") != m.end() && !m["studentId"].empty()) {
      studentId = make_shared<string>(boost::any_cast<string>(m["studentId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListAICoachTaskPageResponseBodyTaskList() = default;
};
class ListAICoachTaskPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAICoachTaskPageResponseBodyTaskList>> taskList{};

  ListAICoachTaskPageResponseBody() {}

  explicit ListAICoachTaskPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskList") != m.end() && !m["taskList"].empty()) {
      if (typeid(vector<boost::any>) == m["taskList"].type()) {
        vector<ListAICoachTaskPageResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAICoachTaskPageResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListAICoachTaskPageResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~ListAICoachTaskPageResponseBody() = default;
};
class ListAICoachTaskPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAICoachTaskPageResponseBody> body{};

  ListAICoachTaskPageResponse() {}

  explicit ListAICoachTaskPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAICoachTaskPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAICoachTaskPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListAICoachTaskPageResponse() = default;
};
class ListAgentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentScene{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListAgentsRequest() {}

  explicit ListAgentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agentId"] = boost::any(*agentId);
    }
    if (agentScene) {
      res["agentScene"] = boost::any(*agentScene);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
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
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("agentScene") != m.end() && !m["agentScene"].empty()) {
      agentScene = make_shared<string>(boost::any_cast<string>(m["agentScene"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ListAgentsRequest() = default;
};
class ListAgentsResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};
  shared_ptr<string> agentScene{};
  shared_ptr<string> charactersDescription{};
  shared_ptr<long> enableInteraction{};
  shared_ptr<string> industry{};
  shared_ptr<bool> onlineSearch{};
  shared_ptr<string> owner{};
  shared_ptr<string> referenceUrl{};
  shared_ptr<long> status{};
  shared_ptr<string> textStyle{};
  shared_ptr<string> viewer{};

  ListAgentsResponseBodyList() {}

  explicit ListAgentsResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (agentScene) {
      res["agentScene"] = boost::any(*agentScene);
    }
    if (charactersDescription) {
      res["charactersDescription"] = boost::any(*charactersDescription);
    }
    if (enableInteraction) {
      res["enableInteraction"] = boost::any(*enableInteraction);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (onlineSearch) {
      res["onlineSearch"] = boost::any(*onlineSearch);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (referenceUrl) {
      res["referenceUrl"] = boost::any(*referenceUrl);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (textStyle) {
      res["textStyle"] = boost::any(*textStyle);
    }
    if (viewer) {
      res["viewer"] = boost::any(*viewer);
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
    if (m.find("agentScene") != m.end() && !m["agentScene"].empty()) {
      agentScene = make_shared<string>(boost::any_cast<string>(m["agentScene"]));
    }
    if (m.find("charactersDescription") != m.end() && !m["charactersDescription"].empty()) {
      charactersDescription = make_shared<string>(boost::any_cast<string>(m["charactersDescription"]));
    }
    if (m.find("enableInteraction") != m.end() && !m["enableInteraction"].empty()) {
      enableInteraction = make_shared<long>(boost::any_cast<long>(m["enableInteraction"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("onlineSearch") != m.end() && !m["onlineSearch"].empty()) {
      onlineSearch = make_shared<bool>(boost::any_cast<bool>(m["onlineSearch"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("referenceUrl") != m.end() && !m["referenceUrl"].empty()) {
      referenceUrl = make_shared<string>(boost::any_cast<string>(m["referenceUrl"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("textStyle") != m.end() && !m["textStyle"].empty()) {
      textStyle = make_shared<string>(boost::any_cast<string>(m["textStyle"]));
    }
    if (m.find("viewer") != m.end() && !m["viewer"].empty()) {
      viewer = make_shared<string>(boost::any_cast<string>(m["viewer"]));
    }
  }


  virtual ~ListAgentsResponseBodyList() = default;
};
class ListAgentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAgentsResponseBodyList>> list{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListAgentsResponseBody() {}

  explicit ListAgentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListAgentsResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentsResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListAgentsResponseBodyList>>(expect1);
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


  virtual ~ListAgentsResponseBody() = default;
};
class ListAgentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAgentsResponseBody> body{};

  ListAgentsResponse() {}

  explicit ListAgentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAgentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentsResponse() = default;
};
class ListAnchorRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorCategory{};
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
    if (anchorCategory) {
      res["anchorCategory"] = boost::any(*anchorCategory);
    }
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
    if (m.find("anchorCategory") != m.end() && !m["anchorCategory"].empty()) {
      anchorCategory = make_shared<string>(boost::any_cast<string>(m["anchorCategory"]));
    }
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
class ListKnowledgeBaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> knowledgeBaseId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListKnowledgeBaseRequest() {}

  explicit ListKnowledgeBaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeBaseId) {
      res["knowledgeBaseId"] = boost::any(*knowledgeBaseId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("knowledgeBaseId") != m.end() && !m["knowledgeBaseId"].empty()) {
      knowledgeBaseId = make_shared<string>(boost::any_cast<string>(m["knowledgeBaseId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListKnowledgeBaseRequest() = default;
};
class ListKnowledgeBaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KnowledgeBaseListResult> body{};

  ListKnowledgeBaseResponse() {}

  explicit ListKnowledgeBaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KnowledgeBaseListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KnowledgeBaseListResult>(model1);
      }
    }
  }


  virtual ~ListKnowledgeBaseResponse() = default;
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
  shared_ptr<string> voiceLanguage{};
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
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
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
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
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
class QueryIndividuationTextTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  QueryIndividuationTextTaskRequest() {}

  explicit QueryIndividuationTextTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryIndividuationTextTaskRequest() = default;
};
class QueryIndividuationTextTaskResponseBodyTextList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> textId{};
  shared_ptr<string> userId{};

  QueryIndividuationTextTaskResponseBodyTextList() {}

  explicit QueryIndividuationTextTaskResponseBodyTextList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (textId) {
      res["textId"] = boost::any(*textId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("textId") != m.end() && !m["textId"].empty()) {
      textId = make_shared<string>(boost::any_cast<string>(m["textId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~QueryIndividuationTextTaskResponseBodyTextList() = default;
};
class QueryIndividuationTextTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<vector<QueryIndividuationTextTaskResponseBodyTextList>> textList{};
  shared_ptr<string> updateTime{};

  QueryIndividuationTextTaskResponseBody() {}

  explicit QueryIndividuationTextTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (textList) {
      vector<boost::any> temp1;
      for(auto item1:*textList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textList"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("textList") != m.end() && !m["textList"].empty()) {
      if (typeid(vector<boost::any>) == m["textList"].type()) {
        vector<QueryIndividuationTextTaskResponseBodyTextList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryIndividuationTextTaskResponseBodyTextList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textList = make_shared<vector<QueryIndividuationTextTaskResponseBodyTextList>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~QueryIndividuationTextTaskResponseBody() = default;
};
class QueryIndividuationTextTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryIndividuationTextTaskResponseBody> body{};

  QueryIndividuationTextTaskResponse() {}

  explicit QueryIndividuationTextTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryIndividuationTextTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryIndividuationTextTaskResponseBody>(model1);
      }
    }
  }


  virtual ~QueryIndividuationTextTaskResponse() = default;
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
  shared_ptr<string> voiceLanguage{};
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
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
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
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
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
  shared_ptr<string> bitRate{};
  shared_ptr<string> frameRate{};
  shared_ptr<vector<SaveAvatarProjectRequestFrames>> frames{};
  shared_ptr<string> operateType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resSpecType{};
  shared_ptr<string> resolution{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> synchronizedDisplay{};

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
    if (bitRate) {
      res["bitRate"] = boost::any(*bitRate);
    }
    if (frameRate) {
      res["frameRate"] = boost::any(*frameRate);
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
    if (resolution) {
      res["resolution"] = boost::any(*resolution);
    }
    if (scaleType) {
      res["scaleType"] = boost::any(*scaleType);
    }
    if (synchronizedDisplay) {
      res["synchronizedDisplay"] = boost::any(*synchronizedDisplay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agentId") != m.end() && !m["agentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agentId"]));
    }
    if (m.find("bitRate") != m.end() && !m["bitRate"].empty()) {
      bitRate = make_shared<string>(boost::any_cast<string>(m["bitRate"]));
    }
    if (m.find("frameRate") != m.end() && !m["frameRate"].empty()) {
      frameRate = make_shared<string>(boost::any_cast<string>(m["frameRate"]));
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
    if (m.find("resolution") != m.end() && !m["resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["resolution"]));
    }
    if (m.find("scaleType") != m.end() && !m["scaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["scaleType"]));
    }
    if (m.find("synchronizedDisplay") != m.end() && !m["synchronizedDisplay"].empty()) {
      synchronizedDisplay = make_shared<string>(boost::any_cast<string>(m["synchronizedDisplay"]));
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
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SelectResourceResponseBodyResourceInfoList>> resourceInfoList{};

  SelectResourceResponseBody() {}

  explicit SelectResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["aliyunUid"] = boost::any(*aliyunUid);
    }
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
    if (m.find("aliyunUid") != m.end() && !m["aliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["aliyunUid"]));
    }
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
class SendSdkMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> header{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> operationName{};
  shared_ptr<string> userId{};

  SendSdkMessageRequest() {}

  explicit SendSdkMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (header) {
      res["header"] = boost::any(*header);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (operationName) {
      res["operationName"] = boost::any(*operationName);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      header = make_shared<string>(boost::any_cast<string>(m["header"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("operationName") != m.end() && !m["operationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["operationName"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~SendSdkMessageRequest() = default;
};
class SendSdkMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendSdkMessageResponseBody() {}

  explicit SendSdkMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SendSdkMessageResponseBody() = default;
};
class SendSdkMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendSdkMessageResponseBody> body{};

  SendSdkMessageResponse() {}

  explicit SendSdkMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSdkMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendSdkMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendSdkMessageResponse() = default;
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
  shared_ptr<string> channelToken{};
  shared_ptr<string> customPushUrl{};
  shared_ptr<string> customUserId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  StartAvatarSessionRequest() {}

  explicit StartAvatarSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelToken) {
      res["channelToken"] = boost::any(*channelToken);
    }
    if (customPushUrl) {
      res["customPushUrl"] = boost::any(*customPushUrl);
    }
    if (customUserId) {
      res["customUserId"] = boost::any(*customUserId);
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
    if (m.find("channelToken") != m.end() && !m["channelToken"].empty()) {
      channelToken = make_shared<string>(boost::any_cast<string>(m["channelToken"]));
    }
    if (m.find("customPushUrl") != m.end() && !m["customPushUrl"].empty()) {
      customPushUrl = make_shared<string>(boost::any_cast<string>(m["customPushUrl"]));
    }
    if (m.find("customUserId") != m.end() && !m["customUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["customUserId"]));
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
  shared_ptr<string> anchorStyleLevel{};
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
    if (anchorStyleLevel) {
      res["anchorStyleLevel"] = boost::any(*anchorStyleLevel);
    }
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
    if (m.find("anchorStyleLevel") != m.end() && !m["anchorStyleLevel"].empty()) {
      anchorStyleLevel = make_shared<string>(boost::any_cast<string>(m["anchorStyleLevel"]));
    }
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
  shared_ptr<string> emotion{};
  shared_ptr<string> pitchRate{};
  shared_ptr<bool> speechOpen{};
  shared_ptr<string> speedRate{};
  shared_ptr<string> textContent{};
  shared_ptr<string> type{};
  shared_ptr<string> voiceLanguage{};
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
    if (emotion) {
      res["emotion"] = boost::any(*emotion);
    }
    if (pitchRate) {
      res["pitchRate"] = boost::any(*pitchRate);
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
    if (voiceLanguage) {
      res["voiceLanguage"] = boost::any(*voiceLanguage);
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
    if (m.find("emotion") != m.end() && !m["emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["emotion"]));
    }
    if (m.find("pitchRate") != m.end() && !m["pitchRate"].empty()) {
      pitchRate = make_shared<string>(boost::any_cast<string>(m["pitchRate"]));
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
    if (m.find("voiceLanguage") != m.end() && !m["voiceLanguage"].empty()) {
      voiceLanguage = make_shared<string>(boost::any_cast<string>(m["voiceLanguage"]));
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
  BatchAddDocumentResponse batchAddDocumentWithOptions(shared_ptr<string> knowledgeBaseId,
                                                       shared_ptr<BatchAddDocumentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAddDocumentResponse batchAddDocument(shared_ptr<string> knowledgeBaseId, shared_ptr<BatchAddDocumentRequest> request);
  BatchCreateAICoachTaskResponse batchCreateAICoachTaskWithOptions(shared_ptr<BatchCreateAICoachTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchCreateAICoachTaskResponse batchCreateAICoachTask(shared_ptr<BatchCreateAICoachTaskRequest> request);
  BatchGetProjectTaskResponse batchGetProjectTaskWithOptions(shared_ptr<BatchGetProjectTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetProjectTaskResponse batchGetProjectTask(shared_ptr<BatchGetProjectTaskRequest> request);
  BatchGetTrainTaskResponse batchGetTrainTaskWithOptions(shared_ptr<BatchGetTrainTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetTrainTaskResponse batchGetTrainTask(shared_ptr<BatchGetTrainTaskRequest> request);
  BatchGetVideoClipTaskResponse batchGetVideoClipTaskWithOptions(shared_ptr<BatchGetVideoClipTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetVideoClipTaskResponse batchGetVideoClipTask(shared_ptr<BatchGetVideoClipTaskRequest> request);
  BatchQueryIndividuationTextResponse batchQueryIndividuationTextWithOptions(shared_ptr<BatchQueryIndividuationTextRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchQueryIndividuationTextResponse batchQueryIndividuationText(shared_ptr<BatchQueryIndividuationTextRequest> request);
  CheckSessionResponse checkSessionWithOptions(shared_ptr<CheckSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSessionResponse checkSession(shared_ptr<CheckSessionRequest> request);
  CloseAICoachTaskSessionResponse closeAICoachTaskSessionWithOptions(shared_ptr<CloseAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseAICoachTaskSessionResponse closeAICoachTaskSession(shared_ptr<CloseAICoachTaskSessionRequest> request);
  CountTextResponse countTextWithOptions(shared_ptr<CountTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountTextResponse countText(shared_ptr<CountTextRequest> request);
  CreateAICoachTaskResponse createAICoachTaskWithOptions(shared_ptr<CreateAICoachTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAICoachTaskResponse createAICoachTask(shared_ptr<CreateAICoachTaskRequest> request);
  CreateAICoachTaskSessionResponse createAICoachTaskSessionWithOptions(shared_ptr<CreateAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAICoachTaskSessionResponse createAICoachTaskSession(shared_ptr<CreateAICoachTaskSessionRequest> request);
  CreateAnchorResponse createAnchorWithOptions(shared_ptr<CreateAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAnchorResponse createAnchor(shared_ptr<CreateAnchorRequest> request);
  CreateIllustrationTaskResponse createIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                                   shared_ptr<CreateIllustrationTaskRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIllustrationTaskResponse createIllustrationTask(shared_ptr<string> textId, shared_ptr<CreateIllustrationTaskRequest> request);
  CreateIndividuationProjectResponse createIndividuationProjectWithOptions(shared_ptr<CreateIndividuationProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndividuationProjectResponse createIndividuationProject(shared_ptr<CreateIndividuationProjectRequest> request);
  CreateIndividuationTextTaskResponse createIndividuationTextTaskWithOptions(shared_ptr<CreateIndividuationTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndividuationTextTaskResponse createIndividuationTextTask(shared_ptr<CreateIndividuationTextTaskRequest> request);
  CreateRealisticPortraitResponse createRealisticPortraitWithOptions(shared_ptr<CreateRealisticPortraitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRealisticPortraitResponse createRealisticPortrait(shared_ptr<CreateRealisticPortraitRequest> request);
  CreateTextTaskResponse createTextTaskWithOptions(shared_ptr<CreateTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTextTaskResponse createTextTask(shared_ptr<CreateTextTaskRequest> request);
  CreateTrainTaskResponse createTrainTaskWithOptions(shared_ptr<CreateTrainTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrainTaskResponse createTrainTask(shared_ptr<CreateTrainTaskRequest> request);
  CreateVideoClipTaskResponse createVideoClipTaskWithOptions(shared_ptr<CreateVideoClipTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoClipTaskResponse createVideoClipTask(shared_ptr<CreateVideoClipTaskRequest> request);
  DeleteIndividuationProjectResponse deleteIndividuationProjectWithOptions(shared_ptr<DeleteIndividuationProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndividuationProjectResponse deleteIndividuationProject(shared_ptr<DeleteIndividuationProjectRequest> request);
  DeleteIndividuationTextResponse deleteIndividuationTextWithOptions(shared_ptr<DeleteIndividuationTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndividuationTextResponse deleteIndividuationText(shared_ptr<DeleteIndividuationTextRequest> request);
  DescribeDocumentResponse describeDocumentWithOptions(shared_ptr<string> knowledgeBaseId,
                                                       shared_ptr<string> documentId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDocumentResponse describeDocument(shared_ptr<string> knowledgeBaseId, shared_ptr<string> documentId);
  FinishAICoachTaskSessionResponse finishAICoachTaskSessionWithOptions(shared_ptr<FinishAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishAICoachTaskSessionResponse finishAICoachTaskSession(shared_ptr<FinishAICoachTaskSessionRequest> request);
  GetAICoachCheatDetectionResponse getAICoachCheatDetectionWithOptions(shared_ptr<GetAICoachCheatDetectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAICoachCheatDetectionResponse getAICoachCheatDetection(shared_ptr<GetAICoachCheatDetectionRequest> request);
  GetAICoachScriptResponse getAICoachScriptWithOptions(shared_ptr<GetAICoachScriptRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAICoachScriptResponse getAICoachScript(shared_ptr<GetAICoachScriptRequest> request);
  GetAICoachTaskSessionHistoryResponse getAICoachTaskSessionHistoryWithOptions(shared_ptr<GetAICoachTaskSessionHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAICoachTaskSessionHistoryResponse getAICoachTaskSessionHistory(shared_ptr<GetAICoachTaskSessionHistoryRequest> request);
  GetAICoachTaskSessionReportResponse getAICoachTaskSessionReportWithOptions(shared_ptr<GetAICoachTaskSessionReportRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAICoachTaskSessionReportResponse getAICoachTaskSessionReport(shared_ptr<GetAICoachTaskSessionReportRequest> request);
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
  ListAICoachScriptPageResponse listAICoachScriptPageWithOptions(shared_ptr<ListAICoachScriptPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAICoachScriptPageResponse listAICoachScriptPage(shared_ptr<ListAICoachScriptPageRequest> request);
  ListAICoachTaskPageResponse listAICoachTaskPageWithOptions(shared_ptr<ListAICoachTaskPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAICoachTaskPageResponse listAICoachTaskPage(shared_ptr<ListAICoachTaskPageRequest> request);
  ListAgentsResponse listAgentsWithOptions(shared_ptr<ListAgentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentsResponse listAgents(shared_ptr<ListAgentsRequest> request);
  ListAnchorResponse listAnchorWithOptions(shared_ptr<ListAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnchorResponse listAnchor(shared_ptr<ListAnchorRequest> request);
  ListAvatarProjectResponse listAvatarProjectWithOptions(shared_ptr<ListAvatarProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvatarProjectResponse listAvatarProject(shared_ptr<ListAvatarProjectRequest> request);
  ListKnowledgeBaseResponse listKnowledgeBaseWithOptions(shared_ptr<ListKnowledgeBaseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListKnowledgeBaseResponse listKnowledgeBase(shared_ptr<ListKnowledgeBaseRequest> request);
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
  QueryIndividuationTextTaskResponse queryIndividuationTextTaskWithOptions(shared_ptr<QueryIndividuationTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryIndividuationTextTaskResponse queryIndividuationTextTask(shared_ptr<QueryIndividuationTextTaskRequest> request);
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
  SendSdkMessageResponse sendSdkMessageWithOptions(shared_ptr<SendSdkMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSdkMessageResponse sendSdkMessage(shared_ptr<SendSdkMessageRequest> request);
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
