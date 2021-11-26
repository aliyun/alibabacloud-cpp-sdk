// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ICE20201109_H_
#define ALIBABACLOUD_ICE20201109_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ICE20201109 {
class AddEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> materialMaps{};
  shared_ptr<string> projectId{};

  AddEditingProjectMaterialsRequest() {}

  explicit AddEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialMaps) {
      res["MaterialMaps"] = boost::any(*materialMaps);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialMaps") != m.end() && !m["MaterialMaps"].empty()) {
      materialMaps = make_shared<string>(boost::any_cast<string>(m["MaterialMaps"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~AddEditingProjectMaterialsRequest() = default;
};
class AddEditingProjectMaterialsResponseBodyLiveMaterials : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> streamName{};

  AddEditingProjectMaterialsResponseBodyLiveMaterials() {}

  explicit AddEditingProjectMaterialsResponseBodyLiveMaterials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyLiveMaterials() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> userData{};

  AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>> fileInfoList{};
  shared_ptr<AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  AddEditingProjectMaterialsResponseBodyMediaInfos() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfos() = default;
};
class AddEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AddEditingProjectMaterialsResponseBodyLiveMaterials>> liveMaterials{};
  shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> projectMaterials{};
  shared_ptr<string> requestId{};

  AddEditingProjectMaterialsResponseBody() {}

  explicit AddEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveMaterials) {
      vector<boost::any> temp1;
      for(auto item1:*liveMaterials){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveMaterials"] = boost::any(temp1);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectMaterials) {
      res["ProjectMaterials"] = boost::any(*projectMaterials);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveMaterials") != m.end() && !m["LiveMaterials"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveMaterials"].type()) {
        vector<AddEditingProjectMaterialsResponseBodyLiveMaterials> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveMaterials"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEditingProjectMaterialsResponseBodyLiveMaterials model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveMaterials = make_shared<vector<AddEditingProjectMaterialsResponseBodyLiveMaterials>>(expect1);
      }
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<AddEditingProjectMaterialsResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEditingProjectMaterialsResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<AddEditingProjectMaterialsResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectMaterials") != m.end() && !m["ProjectMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectMaterials = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBody() = default;
};
class AddEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddEditingProjectMaterialsResponseBody> body{};

  AddEditingProjectMaterialsResponse() {}

  explicit AddEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponse() = default;
};
class AddFavoritePublicMediaRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaIds{};

  AddFavoritePublicMediaRequest() {}

  explicit AddFavoritePublicMediaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
  }


  virtual ~AddFavoritePublicMediaRequest() = default;
};
class AddFavoritePublicMediaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ignoredList{};
  shared_ptr<string> requestId{};

  AddFavoritePublicMediaResponseBody() {}

  explicit AddFavoritePublicMediaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ignoredList) {
      res["IgnoredList"] = boost::any(*ignoredList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IgnoredList") != m.end() && !m["IgnoredList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IgnoredList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IgnoredList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ignoredList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddFavoritePublicMediaResponseBody() = default;
};
class AddFavoritePublicMediaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddFavoritePublicMediaResponseBody> body{};

  AddFavoritePublicMediaResponse() {}

  explicit AddFavoritePublicMediaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFavoritePublicMediaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFavoritePublicMediaResponseBody>(model1);
      }
    }
  }


  virtual ~AddFavoritePublicMediaResponse() = default;
};
class AddTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> relatedMediaids{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  AddTemplateRequest() {}

  explicit AddTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (relatedMediaids) {
      res["RelatedMediaids"] = boost::any(*relatedMediaids);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("RelatedMediaids") != m.end() && !m["RelatedMediaids"].empty()) {
      relatedMediaids = make_shared<string>(boost::any_cast<string>(m["RelatedMediaids"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddTemplateRequest() = default;
};
class AddTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> name{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> type{};

  AddTemplateResponseBodyTemplate() {}

  explicit AddTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddTemplateResponseBodyTemplate() = default;
};
class AddTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddTemplateResponseBodyTemplate> template_{};

  AddTemplateResponseBody() {}

  explicit AddTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        AddTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<AddTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~AddTemplateResponseBody() = default;
};
class AddTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddTemplateResponseBody> body{};

  AddTemplateResponse() {}

  explicit AddTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddTemplateResponse() = default;
};
class BatchGetMediaInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionType{};
  shared_ptr<string> mediaIds{};

  BatchGetMediaInfosRequest() {}

  explicit BatchGetMediaInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionType) {
      res["AdditionType"] = boost::any(*additionType);
    }
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionType") != m.end() && !m["AdditionType"].empty()) {
      additionType = make_shared<string>(boost::any_cast<string>(m["AdditionType"]));
    }
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
  }


  virtual ~BatchGetMediaInfosRequest() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> userData{};

  BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};
  shared_ptr<BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  BatchGetMediaInfosResponseBodyMediaInfos() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetMediaInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfos() = default;
};
class BatchGetMediaInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> requestId{};

  BatchGetMediaInfosResponseBody() {}

  explicit BatchGetMediaInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<BatchGetMediaInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetMediaInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<BatchGetMediaInfosResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBody() = default;
};
class BatchGetMediaInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchGetMediaInfosResponseBody> body{};

  BatchGetMediaInfosResponse() {}

  explicit BatchGetMediaInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetMediaInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetMediaInfosResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponse() = default;
};
class CancelFavoritePublicMediaRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaIds{};

  CancelFavoritePublicMediaRequest() {}

  explicit CancelFavoritePublicMediaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
  }


  virtual ~CancelFavoritePublicMediaRequest() = default;
};
class CancelFavoritePublicMediaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ignoredList{};
  shared_ptr<string> requestId{};

  CancelFavoritePublicMediaResponseBody() {}

  explicit CancelFavoritePublicMediaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ignoredList) {
      res["IgnoredList"] = boost::any(*ignoredList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IgnoredList") != m.end() && !m["IgnoredList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IgnoredList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IgnoredList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ignoredList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelFavoritePublicMediaResponseBody() = default;
};
class CancelFavoritePublicMediaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelFavoritePublicMediaResponseBody> body{};

  CancelFavoritePublicMediaResponse() {}

  explicit CancelFavoritePublicMediaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelFavoritePublicMediaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFavoritePublicMediaResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFavoritePublicMediaResponse() = default;
};
class CreateEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessConfig{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> description{};
  shared_ptr<string> materialMaps{};
  shared_ptr<string> projectType{};
  shared_ptr<string> templateId{};
  shared_ptr<string> timeline{};
  shared_ptr<string> title{};

  CreateEditingProjectRequest() {}

  explicit CreateEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessConfig) {
      res["BusinessConfig"] = boost::any(*businessConfig);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (materialMaps) {
      res["MaterialMaps"] = boost::any(*materialMaps);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessConfig") != m.end() && !m["BusinessConfig"].empty()) {
      businessConfig = make_shared<string>(boost::any_cast<string>(m["BusinessConfig"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaterialMaps") != m.end() && !m["MaterialMaps"].empty()) {
      materialMaps = make_shared<string>(boost::any_cast<string>(m["MaterialMaps"]));
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateEditingProjectRequest() = default;
};
class CreateEditingProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> businessConfig{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createSource{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<double> duration{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectType{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> timeline{};
  shared_ptr<string> title{};

  CreateEditingProjectResponseBodyProject() {}

  explicit CreateEditingProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessConfig) {
      res["BusinessConfig"] = boost::any(*businessConfig);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessConfig") != m.end() && !m["BusinessConfig"].empty()) {
      businessConfig = make_shared<string>(boost::any_cast<string>(m["BusinessConfig"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateEditingProjectResponseBodyProject() = default;
};
class CreateEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateEditingProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};

  CreateEditingProjectResponseBody() {}

  explicit CreateEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        CreateEditingProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<CreateEditingProjectResponseBodyProject>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEditingProjectResponseBody() = default;
};
class CreateEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEditingProjectResponseBody> body{};

  CreateEditingProjectResponse() {}

  explicit CreateEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEditingProjectResponse() = default;
};
class DeleteEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> materialIds{};
  shared_ptr<string> materialType{};
  shared_ptr<string> projectId{};

  DeleteEditingProjectMaterialsRequest() {}

  explicit DeleteEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialIds) {
      res["MaterialIds"] = boost::any(*materialIds);
    }
    if (materialType) {
      res["MaterialType"] = boost::any(*materialType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialIds") != m.end() && !m["MaterialIds"].empty()) {
      materialIds = make_shared<string>(boost::any_cast<string>(m["MaterialIds"]));
    }
    if (m.find("MaterialType") != m.end() && !m["MaterialType"].empty()) {
      materialType = make_shared<string>(boost::any_cast<string>(m["MaterialType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteEditingProjectMaterialsRequest() = default;
};
class DeleteEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEditingProjectMaterialsResponseBody() {}

  explicit DeleteEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEditingProjectMaterialsResponseBody() = default;
};
class DeleteEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEditingProjectMaterialsResponseBody> body{};

  DeleteEditingProjectMaterialsResponse() {}

  explicit DeleteEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEditingProjectMaterialsResponse() = default;
};
class DeleteEditingProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectIds{};

  DeleteEditingProjectsRequest() {}

  explicit DeleteEditingProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIds = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
  }


  virtual ~DeleteEditingProjectsRequest() = default;
};
class DeleteEditingProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEditingProjectsResponseBody() {}

  explicit DeleteEditingProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEditingProjectsResponseBody() = default;
};
class DeleteEditingProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEditingProjectsResponseBody> body{};

  DeleteEditingProjectsResponse() {}

  explicit DeleteEditingProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEditingProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEditingProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEditingProjectsResponse() = default;
};
class DeleteMediaInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputURLs{};
  shared_ptr<string> mediaIds{};

  DeleteMediaInfosRequest() {}

  explicit DeleteMediaInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputURLs) {
      res["InputURLs"] = boost::any(*inputURLs);
    }
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputURLs") != m.end() && !m["InputURLs"].empty()) {
      inputURLs = make_shared<string>(boost::any_cast<string>(m["InputURLs"]));
    }
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
  }


  virtual ~DeleteMediaInfosRequest() = default;
};
class DeleteMediaInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ignoredList{};
  shared_ptr<string> requestId{};

  DeleteMediaInfosResponseBody() {}

  explicit DeleteMediaInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ignoredList) {
      res["IgnoredList"] = boost::any(*ignoredList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IgnoredList") != m.end() && !m["IgnoredList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IgnoredList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IgnoredList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ignoredList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteMediaInfosResponseBody() = default;
};
class DeleteMediaInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteMediaInfosResponseBody> body{};

  DeleteMediaInfosResponse() {}

  explicit DeleteMediaInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMediaInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMediaInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMediaInfosResponse() = default;
};
class DeleteSmartJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  DeleteSmartJobRequest() {}

  explicit DeleteSmartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DeleteSmartJobRequest() = default;
};
class DeleteSmartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  DeleteSmartJobResponseBody() {}

  explicit DeleteSmartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DeleteSmartJobResponseBody() = default;
};
class DeleteSmartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSmartJobResponseBody> body{};

  DeleteSmartJobResponse() {}

  explicit DeleteSmartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSmartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSmartJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSmartJobResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateIds{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      templateIds = make_shared<string>(boost::any_cast<string>(m["TemplateIds"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DescribeIceProductStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};

  DescribeIceProductStatusRequest() {}

  explicit DescribeIceProductStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~DescribeIceProductStatusRequest() = default;
};
class DescribeIceProductStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> ICEServiceAvaliable{};
  shared_ptr<string> requestId{};

  DescribeIceProductStatusResponseBody() {}

  explicit DescribeIceProductStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ICEServiceAvaliable) {
      res["ICEServiceAvaliable"] = boost::any(*ICEServiceAvaliable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ICEServiceAvaliable") != m.end() && !m["ICEServiceAvaliable"].empty()) {
      ICEServiceAvaliable = make_shared<bool>(boost::any_cast<bool>(m["ICEServiceAvaliable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIceProductStatusResponseBody() = default;
};
class DescribeIceProductStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIceProductStatusResponseBody> body{};

  DescribeIceProductStatusResponse() {}

  explicit DescribeIceProductStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIceProductStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIceProductStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIceProductStatusResponse() = default;
};
class DescribeMaterialPackageInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> materialPackageId{};
  shared_ptr<string> materialPackageType{};
  shared_ptr<string> status{};

  DescribeMaterialPackageInfoRequest() {}

  explicit DescribeMaterialPackageInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialPackageId) {
      res["MaterialPackageId"] = boost::any(*materialPackageId);
    }
    if (materialPackageType) {
      res["MaterialPackageType"] = boost::any(*materialPackageType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialPackageId") != m.end() && !m["MaterialPackageId"].empty()) {
      materialPackageId = make_shared<string>(boost::any_cast<string>(m["MaterialPackageId"]));
    }
    if (m.find("MaterialPackageType") != m.end() && !m["MaterialPackageType"].empty()) {
      materialPackageType = make_shared<string>(boost::any_cast<string>(m["MaterialPackageType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMaterialPackageInfoRequest() = default;
};
class DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList : public Darabonba::Model {
public:
  shared_ptr<string> currCapacity{};
  shared_ptr<string> endTime{};
  shared_ptr<string> initCapacity{};
  shared_ptr<string> remainingAuthTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList() {}

  explicit DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currCapacity) {
      res["CurrCapacity"] = boost::any(*currCapacity);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (initCapacity) {
      res["InitCapacity"] = boost::any(*initCapacity);
    }
    if (remainingAuthTime) {
      res["RemainingAuthTime"] = boost::any(*remainingAuthTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrCapacity") != m.end() && !m["CurrCapacity"].empty()) {
      currCapacity = make_shared<string>(boost::any_cast<string>(m["CurrCapacity"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InitCapacity") != m.end() && !m["InitCapacity"].empty()) {
      initCapacity = make_shared<string>(boost::any_cast<string>(m["InitCapacity"]));
    }
    if (m.find("RemainingAuthTime") != m.end() && !m["RemainingAuthTime"].empty()) {
      remainingAuthTime = make_shared<string>(boost::any_cast<string>(m["RemainingAuthTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList() = default;
};
class DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList : public Darabonba::Model {
public:
  shared_ptr<string> authTime{};
  shared_ptr<bool> authorized{};
  shared_ptr<string> displayPrice{};
  shared_ptr<string> initCapacity{};
  shared_ptr<long> materialCount{};
  shared_ptr<string> materialPackageId{};
  shared_ptr<vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList>> materialPackagePurchaseList{};

  DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList() {}

  explicit DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authTime) {
      res["AuthTime"] = boost::any(*authTime);
    }
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (displayPrice) {
      res["DisplayPrice"] = boost::any(*displayPrice);
    }
    if (initCapacity) {
      res["InitCapacity"] = boost::any(*initCapacity);
    }
    if (materialCount) {
      res["MaterialCount"] = boost::any(*materialCount);
    }
    if (materialPackageId) {
      res["MaterialPackageId"] = boost::any(*materialPackageId);
    }
    if (materialPackagePurchaseList) {
      vector<boost::any> temp1;
      for(auto item1:*materialPackagePurchaseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MaterialPackagePurchaseList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthTime") != m.end() && !m["AuthTime"].empty()) {
      authTime = make_shared<string>(boost::any_cast<string>(m["AuthTime"]));
    }
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("DisplayPrice") != m.end() && !m["DisplayPrice"].empty()) {
      displayPrice = make_shared<string>(boost::any_cast<string>(m["DisplayPrice"]));
    }
    if (m.find("InitCapacity") != m.end() && !m["InitCapacity"].empty()) {
      initCapacity = make_shared<string>(boost::any_cast<string>(m["InitCapacity"]));
    }
    if (m.find("MaterialCount") != m.end() && !m["MaterialCount"].empty()) {
      materialCount = make_shared<long>(boost::any_cast<long>(m["MaterialCount"]));
    }
    if (m.find("MaterialPackageId") != m.end() && !m["MaterialPackageId"].empty()) {
      materialPackageId = make_shared<string>(boost::any_cast<string>(m["MaterialPackageId"]));
    }
    if (m.find("MaterialPackagePurchaseList") != m.end() && !m["MaterialPackagePurchaseList"].empty()) {
      if (typeid(vector<boost::any>) == m["MaterialPackagePurchaseList"].type()) {
        vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MaterialPackagePurchaseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        materialPackagePurchaseList = make_shared<vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoListMaterialPackagePurchaseList>>(expect1);
      }
    }
  }


  virtual ~DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList() = default;
};
class DescribeMaterialPackageInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList>> materialPackageInfoList{};
  shared_ptr<string> requestId{};

  DescribeMaterialPackageInfoResponseBody() {}

  explicit DescribeMaterialPackageInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialPackageInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*materialPackageInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MaterialPackageInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialPackageInfoList") != m.end() && !m["MaterialPackageInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["MaterialPackageInfoList"].type()) {
        vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MaterialPackageInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        materialPackageInfoList = make_shared<vector<DescribeMaterialPackageInfoResponseBodyMaterialPackageInfoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMaterialPackageInfoResponseBody() = default;
};
class DescribeMaterialPackageInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMaterialPackageInfoResponseBody> body{};

  DescribeMaterialPackageInfoResponse() {}

  explicit DescribeMaterialPackageInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMaterialPackageInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMaterialPackageInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMaterialPackageInfoResponse() = default;
};
class DescribeRelatedAuthorizationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> authorized{};
  shared_ptr<bool> MNSAuthorized{};
  shared_ptr<bool> MTSAuthorized{};
  shared_ptr<bool> OSSAuthorized{};
  shared_ptr<string> requestId{};

  DescribeRelatedAuthorizationStatusResponseBody() {}

  explicit DescribeRelatedAuthorizationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (MNSAuthorized) {
      res["MNSAuthorized"] = boost::any(*MNSAuthorized);
    }
    if (MTSAuthorized) {
      res["MTSAuthorized"] = boost::any(*MTSAuthorized);
    }
    if (OSSAuthorized) {
      res["OSSAuthorized"] = boost::any(*OSSAuthorized);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("MNSAuthorized") != m.end() && !m["MNSAuthorized"].empty()) {
      MNSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["MNSAuthorized"]));
    }
    if (m.find("MTSAuthorized") != m.end() && !m["MTSAuthorized"].empty()) {
      MTSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["MTSAuthorized"]));
    }
    if (m.find("OSSAuthorized") != m.end() && !m["OSSAuthorized"].empty()) {
      OSSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["OSSAuthorized"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRelatedAuthorizationStatusResponseBody() = default;
};
class DescribeRelatedAuthorizationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRelatedAuthorizationStatusResponseBody> body{};

  DescribeRelatedAuthorizationStatusResponse() {}

  explicit DescribeRelatedAuthorizationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRelatedAuthorizationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRelatedAuthorizationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRelatedAuthorizationStatusResponse() = default;
};
class GetDefaultStorageLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> path{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};

  GetDefaultStorageLocationResponseBody() {}

  explicit GetDefaultStorageLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~GetDefaultStorageLocationResponseBody() = default;
};
class GetDefaultStorageLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDefaultStorageLocationResponseBody> body{};

  GetDefaultStorageLocationResponse() {}

  explicit GetDefaultStorageLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDefaultStorageLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultStorageLocationResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultStorageLocationResponse() = default;
};
class GetEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  GetEditingProjectRequest() {}

  explicit GetEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetEditingProjectRequest() = default;
};
class GetEditingProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> businessConfig{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createSource{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectType{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> timeline{};
  shared_ptr<string> title{};

  GetEditingProjectResponseBodyProject() {}

  explicit GetEditingProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessConfig) {
      res["BusinessConfig"] = boost::any(*businessConfig);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessConfig") != m.end() && !m["BusinessConfig"].empty()) {
      businessConfig = make_shared<string>(boost::any_cast<string>(m["BusinessConfig"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetEditingProjectResponseBodyProject() = default;
};
class GetEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetEditingProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};

  GetEditingProjectResponseBody() {}

  explicit GetEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        GetEditingProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<GetEditingProjectResponseBodyProject>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEditingProjectResponseBody() = default;
};
class GetEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEditingProjectResponseBody> body{};

  GetEditingProjectResponse() {}

  explicit GetEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetEditingProjectResponse() = default;
};
class GetEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  GetEditingProjectMaterialsRequest() {}

  explicit GetEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetEditingProjectMaterialsRequest() = default;
};
class GetEditingProjectMaterialsResponseBodyLiveMaterials : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> liveUrl{};
  shared_ptr<string> streamName{};

  GetEditingProjectMaterialsResponseBodyLiveMaterials() {}

  explicit GetEditingProjectMaterialsResponseBodyLiveMaterials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (liveUrl) {
      res["LiveUrl"] = boost::any(*liveUrl);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("LiveUrl") != m.end() && !m["LiveUrl"].empty()) {
      liveUrl = make_shared<string>(boost::any_cast<string>(m["LiveUrl"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyLiveMaterials() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> userData{};

  GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>> fileInfoList{};
  shared_ptr<GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  GetEditingProjectMaterialsResponseBodyMediaInfos() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfos() = default;
};
class GetEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetEditingProjectMaterialsResponseBodyLiveMaterials>> liveMaterials{};
  shared_ptr<vector<GetEditingProjectMaterialsResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> projectMaterials{};
  shared_ptr<string> requestId{};

  GetEditingProjectMaterialsResponseBody() {}

  explicit GetEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveMaterials) {
      vector<boost::any> temp1;
      for(auto item1:*liveMaterials){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LiveMaterials"] = boost::any(temp1);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectMaterials) {
      res["ProjectMaterials"] = boost::any(*projectMaterials);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveMaterials") != m.end() && !m["LiveMaterials"].empty()) {
      if (typeid(vector<boost::any>) == m["LiveMaterials"].type()) {
        vector<GetEditingProjectMaterialsResponseBodyLiveMaterials> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LiveMaterials"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEditingProjectMaterialsResponseBodyLiveMaterials model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        liveMaterials = make_shared<vector<GetEditingProjectMaterialsResponseBodyLiveMaterials>>(expect1);
      }
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<GetEditingProjectMaterialsResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEditingProjectMaterialsResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<GetEditingProjectMaterialsResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectMaterials") != m.end() && !m["ProjectMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectMaterials = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBody() = default;
};
class GetEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEditingProjectMaterialsResponseBody> body{};

  GetEditingProjectMaterialsResponse() {}

  explicit GetEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponse() = default;
};
class GetEventCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callbackQueueName{};
  shared_ptr<string> eventTypeList{};
  shared_ptr<string> requestId{};

  GetEventCallbackResponseBody() {}

  explicit GetEventCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackQueueName) {
      res["CallbackQueueName"] = boost::any(*callbackQueueName);
    }
    if (eventTypeList) {
      res["EventTypeList"] = boost::any(*eventTypeList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackQueueName") != m.end() && !m["CallbackQueueName"].empty()) {
      callbackQueueName = make_shared<string>(boost::any_cast<string>(m["CallbackQueueName"]));
    }
    if (m.find("EventTypeList") != m.end() && !m["EventTypeList"].empty()) {
      eventTypeList = make_shared<string>(boost::any_cast<string>(m["EventTypeList"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEventCallbackResponseBody() = default;
};
class GetEventCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEventCallbackResponseBody> body{};

  GetEventCallbackResponse() {}

  explicit GetEventCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEventCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEventCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~GetEventCallbackResponse() = default;
};
class GetLiveEditingIndexFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> projectId{};
  shared_ptr<string> streamName{};

  GetLiveEditingIndexFileRequest() {}

  explicit GetLiveEditingIndexFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~GetLiveEditingIndexFileRequest() = default;
};
class GetLiveEditingIndexFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> indexFile{};
  shared_ptr<string> requestId{};

  GetLiveEditingIndexFileResponseBody() {}

  explicit GetLiveEditingIndexFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexFile) {
      res["IndexFile"] = boost::any(*indexFile);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexFile") != m.end() && !m["IndexFile"].empty()) {
      indexFile = make_shared<string>(boost::any_cast<string>(m["IndexFile"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLiveEditingIndexFileResponseBody() = default;
};
class GetLiveEditingIndexFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveEditingIndexFileResponseBody> body{};

  GetLiveEditingIndexFileResponse() {}

  explicit GetLiveEditingIndexFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveEditingIndexFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveEditingIndexFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveEditingIndexFileResponse() = default;
};
class GetLiveEditingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetLiveEditingJobRequest() {}

  explicit GetLiveEditingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetLiveEditingJobRequest() = default;
};
class GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> streamName{};

  GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig() {}

  explicit GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig() = default;
};
class GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig : public Darabonba::Model {
public:
  shared_ptr<string> mode{};

  GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig() {}

  explicit GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig() = default;
};
class GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> fileName{};
  shared_ptr<long> height{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> storageLocation{};
  shared_ptr<string> vodTemplateGroupId{};
  shared_ptr<long> width{};

  GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig() {}

  explicit GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (storageLocation) {
      res["StorageLocation"] = boost::any(*storageLocation);
    }
    if (vodTemplateGroupId) {
      res["VodTemplateGroupId"] = boost::any(*vodTemplateGroupId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("StorageLocation") != m.end() && !m["StorageLocation"].empty()) {
      storageLocation = make_shared<string>(boost::any_cast<string>(m["StorageLocation"]));
    }
    if (m.find("VodTemplateGroupId") != m.end() && !m["VodTemplateGroupId"].empty()) {
      vodTemplateGroupId = make_shared<string>(boost::any_cast<string>(m["VodTemplateGroupId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig() = default;
};
class GetLiveEditingJobResponseBodyLiveEditingJob : public Darabonba::Model {
public:
  shared_ptr<string> clips{};
  shared_ptr<string> code{};
  shared_ptr<string> completeTime{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> jobId{};
  shared_ptr<GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig> liveStreamConfig{};
  shared_ptr<string> mediaId{};
  shared_ptr<GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig> mediaProduceConfig{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> message{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig> outputMediaConfig{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> userData{};

  GetLiveEditingJobResponseBodyLiveEditingJob() {}

  explicit GetLiveEditingJobResponseBodyLiveEditingJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clips) {
      res["Clips"] = boost::any(*clips);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (liveStreamConfig) {
      res["LiveStreamConfig"] = liveStreamConfig ? boost::any(liveStreamConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaProduceConfig) {
      res["MediaProduceConfig"] = mediaProduceConfig ? boost::any(mediaProduceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (outputMediaConfig) {
      res["OutputMediaConfig"] = outputMediaConfig ? boost::any(outputMediaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clips") != m.end() && !m["Clips"].empty()) {
      clips = make_shared<string>(boost::any_cast<string>(m["Clips"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("LiveStreamConfig") != m.end() && !m["LiveStreamConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LiveStreamConfig"].type()) {
        GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LiveStreamConfig"]));
        liveStreamConfig = make_shared<GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaProduceConfig") != m.end() && !m["MediaProduceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaProduceConfig"].type()) {
        GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaProduceConfig"]));
        mediaProduceConfig = make_shared<GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig>(model1);
      }
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OutputMediaConfig") != m.end() && !m["OutputMediaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OutputMediaConfig"].type()) {
        GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OutputMediaConfig"]));
        outputMediaConfig = make_shared<GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig>(model1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetLiveEditingJobResponseBodyLiveEditingJob() = default;
};
class GetLiveEditingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLiveEditingJobResponseBodyLiveEditingJob> liveEditingJob{};
  shared_ptr<string> requestId{};

  GetLiveEditingJobResponseBody() {}

  explicit GetLiveEditingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveEditingJob) {
      res["LiveEditingJob"] = liveEditingJob ? boost::any(liveEditingJob->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveEditingJob") != m.end() && !m["LiveEditingJob"].empty()) {
      if (typeid(map<string, boost::any>) == m["LiveEditingJob"].type()) {
        GetLiveEditingJobResponseBodyLiveEditingJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LiveEditingJob"]));
        liveEditingJob = make_shared<GetLiveEditingJobResponseBodyLiveEditingJob>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLiveEditingJobResponseBody() = default;
};
class GetLiveEditingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLiveEditingJobResponseBody> body{};

  GetLiveEditingJobResponse() {}

  explicit GetLiveEditingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLiveEditingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLiveEditingJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetLiveEditingJobResponse() = default;
};
class GetMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> outputType{};

  GetMediaInfoRequest() {}

  explicit GetMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~GetMediaInfoRequest() = default;
};
class GetMediaInfoResponseBodyMediaInfoAiRoughDataList : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<string> type{};

  GetMediaInfoResponseBodyMediaInfoAiRoughDataList() {}

  explicit GetMediaInfoResponseBodyMediaInfoAiRoughDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoAiRoughDataList() = default;
};
class GetMediaInfoResponseBodyMediaInfoDynamicMetaData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> type{};

  GetMediaInfoResponseBodyMediaInfoDynamicMetaData() {}

  explicit GetMediaInfoResponseBodyMediaInfoDynamicMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoDynamicMetaData() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> channelLayout{};
  shared_ptr<string> channels{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> duration{};
  shared_ptr<string> fps{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> profile{};
  shared_ptr<string> sampleFmt{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (channelLayout) {
      res["ChannelLayout"] = boost::any(*channelLayout);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (sampleFmt) {
      res["SampleFmt"] = boost::any(*sampleFmt);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("ChannelLayout") != m.end() && !m["ChannelLayout"].empty()) {
      channelLayout = make_shared<string>(boost::any_cast<string>(m["ChannelLayout"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["Channels"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("SampleFmt") != m.end() && !m["SampleFmt"].empty()) {
      sampleFmt = make_shared<string>(boost::any_cast<string>(m["SampleFmt"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> duration{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> avgFPS{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> dar{};
  shared_ptr<string> duration{};
  shared_ptr<string> fps{};
  shared_ptr<string> hasBFrames{};
  shared_ptr<string> height{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> level{};
  shared_ptr<string> nbFrames{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> pixFmt{};
  shared_ptr<string> profile{};
  shared_ptr<string> rotate{};
  shared_ptr<string> sar{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};
  shared_ptr<string> width{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgFPS) {
      res["AvgFPS"] = boost::any(*avgFPS);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (dar) {
      res["Dar"] = boost::any(*dar);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (hasBFrames) {
      res["HasBFrames"] = boost::any(*hasBFrames);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (nbFrames) {
      res["Nb_frames"] = boost::any(*nbFrames);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (pixFmt) {
      res["PixFmt"] = boost::any(*pixFmt);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (sar) {
      res["Sar"] = boost::any(*sar);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgFPS") != m.end() && !m["AvgFPS"].empty()) {
      avgFPS = make_shared<string>(boost::any_cast<string>(m["AvgFPS"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Dar") != m.end() && !m["Dar"].empty()) {
      dar = make_shared<string>(boost::any_cast<string>(m["Dar"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("HasBFrames") != m.end() && !m["HasBFrames"].empty()) {
      hasBFrames = make_shared<string>(boost::any_cast<string>(m["HasBFrames"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Nb_frames") != m.end() && !m["Nb_frames"].empty()) {
      nbFrames = make_shared<string>(boost::any_cast<string>(m["Nb_frames"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("PixFmt") != m.end() && !m["PixFmt"].empty()) {
      pixFmt = make_shared<string>(boost::any_cast<string>(m["PixFmt"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<string>(boost::any_cast<string>(m["Rotate"]));
    }
    if (m.find("Sar") != m.end() && !m["Sar"].empty()) {
      sar = make_shared<string>(boost::any_cast<string>(m["Sar"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>> audioStreamInfoList{};
  shared_ptr<GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo> fileBasicInfo{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>> subtitleStreamInfoList{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>> videoStreamInfoList{};

  GetMediaInfoResponseBodyMediaInfoFileInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreamInfoList"] = boost::any(temp1);
    }
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subtitleStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subtitleStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubtitleStreamInfoList"] = boost::any(temp1);
    }
    if (videoStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*videoStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStreamInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioStreamInfoList") != m.end() && !m["AudioStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>>(expect1);
      }
    }
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo>(model1);
      }
    }
    if (m.find("SubtitleStreamInfoList") != m.end() && !m["SubtitleStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubtitleStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubtitleStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitleStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>>(expect1);
      }
    }
    if (m.find("VideoStreamInfoList") != m.end() && !m["VideoStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>>(expect1);
      }
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfoMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default;
};
class GetMediaInfoResponseBodyMediaInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList>> aiRoughDataList{};
  shared_ptr<GetMediaInfoResponseBodyMediaInfoDynamicMetaData> dynamicMetaData{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoList>> fileInfoList{};
  shared_ptr<GetMediaInfoResponseBodyMediaInfoMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  GetMediaInfoResponseBodyMediaInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiRoughDataList) {
      vector<boost::any> temp1;
      for(auto item1:*aiRoughDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AiRoughDataList"] = boost::any(temp1);
    }
    if (dynamicMetaData) {
      res["DynamicMetaData"] = dynamicMetaData ? boost::any(dynamicMetaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiRoughDataList") != m.end() && !m["AiRoughDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["AiRoughDataList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AiRoughDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoAiRoughDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aiRoughDataList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList>>(expect1);
      }
    }
    if (m.find("DynamicMetaData") != m.end() && !m["DynamicMetaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DynamicMetaData"].type()) {
        GetMediaInfoResponseBodyMediaInfoDynamicMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DynamicMetaData"]));
        dynamicMetaData = make_shared<GetMediaInfoResponseBodyMediaInfoDynamicMetaData>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfoMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<GetMediaInfoResponseBodyMediaInfoMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfo() = default;
};
class GetMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMediaInfoResponseBodyMediaInfo> mediaInfo{};
  shared_ptr<string> requestId{};

  GetMediaInfoResponseBody() {}

  explicit GetMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaInfo) {
      res["MediaInfo"] = mediaInfo ? boost::any(mediaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaInfo") != m.end() && !m["MediaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaInfo"]));
        mediaInfo = make_shared<GetMediaInfoResponseBodyMediaInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMediaInfoResponseBody() = default;
};
class GetMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMediaInfoResponseBody> body{};

  GetMediaInfoResponse() {}

  explicit GetMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaInfoResponse() = default;
};
class GetMediaProducingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetMediaProducingJobRequest() {}

  explicit GetMediaProducingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetMediaProducingJobRequest() = default;
};
class GetMediaProducingJobResponseBodyMediaProducingJob : public Darabonba::Model {
public:
  shared_ptr<string> clipsParam{};
  shared_ptr<string> code{};
  shared_ptr<string> completeTime{};
  shared_ptr<string> createTime{};
  shared_ptr<double> duration{};
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> message{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> timeline{};
  shared_ptr<string> vodMediaId{};

  GetMediaProducingJobResponseBodyMediaProducingJob() {}

  explicit GetMediaProducingJobResponseBodyMediaProducingJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (vodMediaId) {
      res["VodMediaId"] = boost::any(*vodMediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("VodMediaId") != m.end() && !m["VodMediaId"].empty()) {
      vodMediaId = make_shared<string>(boost::any_cast<string>(m["VodMediaId"]));
    }
  }


  virtual ~GetMediaProducingJobResponseBodyMediaProducingJob() = default;
};
class GetMediaProducingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMediaProducingJobResponseBodyMediaProducingJob> mediaProducingJob{};
  shared_ptr<string> requestId{};

  GetMediaProducingJobResponseBody() {}

  explicit GetMediaProducingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaProducingJob) {
      res["MediaProducingJob"] = mediaProducingJob ? boost::any(mediaProducingJob->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaProducingJob") != m.end() && !m["MediaProducingJob"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaProducingJob"].type()) {
        GetMediaProducingJobResponseBodyMediaProducingJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaProducingJob"]));
        mediaProducingJob = make_shared<GetMediaProducingJobResponseBodyMediaProducingJob>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMediaProducingJobResponseBody() = default;
};
class GetMediaProducingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMediaProducingJobResponseBody> body{};

  GetMediaProducingJobResponse() {}

  explicit GetMediaProducingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaProducingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaProducingJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaProducingJobResponse() = default;
};
class GetPublicMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};

  GetPublicMediaInfoRequest() {}

  explicit GetPublicMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~GetPublicMediaInfoRequest() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> type{};

  GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> channelLayout{};
  shared_ptr<string> channels{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> duration{};
  shared_ptr<string> fps{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> profile{};
  shared_ptr<string> sampleFmt{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};

  GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (channelLayout) {
      res["ChannelLayout"] = boost::any(*channelLayout);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (sampleFmt) {
      res["SampleFmt"] = boost::any(*sampleFmt);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("ChannelLayout") != m.end() && !m["ChannelLayout"].empty()) {
      channelLayout = make_shared<string>(boost::any_cast<string>(m["ChannelLayout"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["Channels"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("SampleFmt") != m.end() && !m["SampleFmt"].empty()) {
      sampleFmt = make_shared<string>(boost::any_cast<string>(m["SampleFmt"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> duration{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};

  GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> avgFPS{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> dar{};
  shared_ptr<string> duration{};
  shared_ptr<string> fps{};
  shared_ptr<string> hasBFrames{};
  shared_ptr<string> height{};
  shared_ptr<string> index{};
  shared_ptr<string> lang{};
  shared_ptr<string> level{};
  shared_ptr<string> nbFrames{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> pixFmt{};
  shared_ptr<string> profile{};
  shared_ptr<string> rotate{};
  shared_ptr<string> sar{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timebase{};
  shared_ptr<string> width{};

  GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgFPS) {
      res["AvgFPS"] = boost::any(*avgFPS);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (dar) {
      res["Dar"] = boost::any(*dar);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (hasBFrames) {
      res["HasBFrames"] = boost::any(*hasBFrames);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (nbFrames) {
      res["Nb_frames"] = boost::any(*nbFrames);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (pixFmt) {
      res["PixFmt"] = boost::any(*pixFmt);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (sar) {
      res["Sar"] = boost::any(*sar);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgFPS") != m.end() && !m["AvgFPS"].empty()) {
      avgFPS = make_shared<string>(boost::any_cast<string>(m["AvgFPS"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Dar") != m.end() && !m["Dar"].empty()) {
      dar = make_shared<string>(boost::any_cast<string>(m["Dar"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("HasBFrames") != m.end() && !m["HasBFrames"].empty()) {
      hasBFrames = make_shared<string>(boost::any_cast<string>(m["HasBFrames"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Nb_frames") != m.end() && !m["Nb_frames"].empty()) {
      nbFrames = make_shared<string>(boost::any_cast<string>(m["Nb_frames"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("PixFmt") != m.end() && !m["PixFmt"].empty()) {
      pixFmt = make_shared<string>(boost::any_cast<string>(m["PixFmt"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<string>(boost::any_cast<string>(m["Rotate"]));
    }
    if (m.find("Sar") != m.end() && !m["Sar"].empty()) {
      sar = make_shared<string>(boost::any_cast<string>(m["Sar"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoFileInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>> audioStreamInfoList{};
  shared_ptr<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo> fileBasicInfo{};
  shared_ptr<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>> subtitleStreamInfoList{};
  shared_ptr<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>> videoStreamInfoList{};

  GetPublicMediaInfoResponseBodyMediaInfoFileInfoList() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreamInfoList"] = boost::any(temp1);
    }
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subtitleStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subtitleStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubtitleStreamInfoList"] = boost::any(temp1);
    }
    if (videoStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*videoStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStreamInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioStreamInfoList") != m.end() && !m["AudioStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioStreamInfoList"].type()) {
        vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioStreamInfoList = make_shared<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>>(expect1);
      }
    }
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo>(model1);
      }
    }
    if (m.find("SubtitleStreamInfoList") != m.end() && !m["SubtitleStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubtitleStreamInfoList"].type()) {
        vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubtitleStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitleStreamInfoList = make_shared<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>>(expect1);
      }
    }
    if (m.find("VideoStreamInfoList") != m.end() && !m["VideoStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStreamInfoList"].type()) {
        vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStreamInfoList = make_shared<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>>(expect1);
      }
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoFileInfoList() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default;
};
class GetPublicMediaInfoResponseBodyMediaInfo : public Darabonba::Model {
public:
  shared_ptr<GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData> dynamicMetaData{};
  shared_ptr<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoList>> fileInfoList{};
  shared_ptr<GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  GetPublicMediaInfoResponseBodyMediaInfo() {}

  explicit GetPublicMediaInfoResponseBodyMediaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicMetaData) {
      res["DynamicMetaData"] = dynamicMetaData ? boost::any(dynamicMetaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicMetaData") != m.end() && !m["DynamicMetaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DynamicMetaData"].type()) {
        GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DynamicMetaData"]));
        dynamicMetaData = make_shared<GetPublicMediaInfoResponseBodyMediaInfoDynamicMetaData>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublicMediaInfoResponseBodyMediaInfoFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<GetPublicMediaInfoResponseBodyMediaInfoFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<GetPublicMediaInfoResponseBodyMediaInfoMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBodyMediaInfo() = default;
};
class GetPublicMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPublicMediaInfoResponseBodyMediaInfo> mediaInfo{};
  shared_ptr<string> requestId{};

  GetPublicMediaInfoResponseBody() {}

  explicit GetPublicMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaInfo) {
      res["MediaInfo"] = mediaInfo ? boost::any(mediaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaInfo") != m.end() && !m["MediaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaInfo"].type()) {
        GetPublicMediaInfoResponseBodyMediaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaInfo"]));
        mediaInfo = make_shared<GetPublicMediaInfoResponseBodyMediaInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPublicMediaInfoResponseBody() = default;
};
class GetPublicMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPublicMediaInfoResponseBody> body{};

  GetPublicMediaInfoResponse() {}

  explicit GetPublicMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicMediaInfoResponse() = default;
};
class GetSmartHandleJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetSmartHandleJobRequest() {}

  explicit GetSmartHandleJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetSmartHandleJobRequest() = default;
};
class GetSmartHandleJobResponseBodySmartJobInfoInputConfig : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};

  GetSmartHandleJobResponseBodySmartJobInfoInputConfig() {}

  explicit GetSmartHandleJobResponseBodySmartJobInfoInputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBodySmartJobInfoInputConfig() = default;
};
class GetSmartHandleJobResponseBodySmartJobInfoOutputConfig : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> object{};

  GetSmartHandleJobResponseBodySmartJobInfoOutputConfig() {}

  explicit GetSmartHandleJobResponseBodySmartJobInfoOutputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBodySmartJobInfoOutputConfig() = default;
};
class GetSmartHandleJobResponseBodySmartJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<GetSmartHandleJobResponseBodySmartJobInfoInputConfig> inputConfig{};
  shared_ptr<string> jobType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<GetSmartHandleJobResponseBodySmartJobInfoOutputConfig> outputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  GetSmartHandleJobResponseBodySmartJobInfo() {}

  explicit GetSmartHandleJobResponseBodySmartJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputConfig) {
      res["InputConfig"] = inputConfig ? boost::any(inputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (outputConfig) {
      res["OutputConfig"] = outputConfig ? boost::any(outputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InputConfig"].type()) {
        GetSmartHandleJobResponseBodySmartJobInfoInputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InputConfig"]));
        inputConfig = make_shared<GetSmartHandleJobResponseBodySmartJobInfoInputConfig>(model1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OutputConfig"].type()) {
        GetSmartHandleJobResponseBodySmartJobInfoOutputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OutputConfig"]));
        outputConfig = make_shared<GetSmartHandleJobResponseBodySmartJobInfoOutputConfig>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBodySmartJobInfo() = default;
};
class GetSmartHandleJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSmartHandleJobResponseBodySmartJobInfo> smartJobInfo{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  GetSmartHandleJobResponseBody() {}

  explicit GetSmartHandleJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smartJobInfo) {
      res["SmartJobInfo"] = smartJobInfo ? boost::any(smartJobInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmartJobInfo") != m.end() && !m["SmartJobInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SmartJobInfo"].type()) {
        GetSmartHandleJobResponseBodySmartJobInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SmartJobInfo"]));
        smartJobInfo = make_shared<GetSmartHandleJobResponseBodySmartJobInfo>(model1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBody() = default;
};
class GetSmartHandleJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSmartHandleJobResponseBody> body{};

  GetSmartHandleJobResponse() {}

  explicit GetSmartHandleJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSmartHandleJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSmartHandleJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetSmartHandleJobResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> relatedMediaidFlag{};
  shared_ptr<string> templateId{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedMediaidFlag) {
      res["RelatedMediaidFlag"] = boost::any(*relatedMediaidFlag);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelatedMediaidFlag") != m.end() && !m["RelatedMediaidFlag"].empty()) {
      relatedMediaidFlag = make_shared<string>(boost::any_cast<string>(m["RelatedMediaidFlag"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> clipsParam{};
  shared_ptr<string> config{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createSource{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> previewMediaStatus{};
  shared_ptr<string> relatedMediaids{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> type{};

  GetTemplateResponseBodyTemplate() {}

  explicit GetTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (previewMediaStatus) {
      res["PreviewMediaStatus"] = boost::any(*previewMediaStatus);
    }
    if (relatedMediaids) {
      res["RelatedMediaids"] = boost::any(*relatedMediaids);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("PreviewMediaStatus") != m.end() && !m["PreviewMediaStatus"].empty()) {
      previewMediaStatus = make_shared<string>(boost::any_cast<string>(m["PreviewMediaStatus"]));
    }
    if (m.find("RelatedMediaids") != m.end() && !m["RelatedMediaids"].empty()) {
      relatedMediaids = make_shared<string>(boost::any_cast<string>(m["RelatedMediaids"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetTemplateResponseBodyTemplate() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTemplateResponseBodyTemplate> template_{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        GetTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetTemplateMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileList{};
  shared_ptr<string> templateId{};

  GetTemplateMaterialsRequest() {}

  explicit GetTemplateMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileList) {
      res["FileList"] = boost::any(*fileList);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      fileList = make_shared<string>(boost::any_cast<string>(m["FileList"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetTemplateMaterialsRequest() = default;
};
class GetTemplateMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> materialUrls{};
  shared_ptr<string> requestId{};

  GetTemplateMaterialsResponseBody() {}

  explicit GetTemplateMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialUrls) {
      res["MaterialUrls"] = boost::any(*materialUrls);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialUrls") != m.end() && !m["MaterialUrls"].empty()) {
      materialUrls = make_shared<string>(boost::any_cast<string>(m["MaterialUrls"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTemplateMaterialsResponseBody() = default;
};
class GetTemplateMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateMaterialsResponseBody> body{};

  GetTemplateMaterialsResponse() {}

  explicit GetTemplateMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateMaterialsResponse() = default;
};
class ListAllPublicMediaTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> entityId{};

  ListAllPublicMediaTagsRequest() {}

  explicit ListAllPublicMediaTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
  }


  virtual ~ListAllPublicMediaTagsRequest() = default;
};
class ListAllPublicMediaTagsResponseBodyMediaTagListOptions : public Darabonba::Model {
public:
  shared_ptr<string> optionChineseName{};
  shared_ptr<string> optionEnglishName{};
  shared_ptr<string> optionId{};

  ListAllPublicMediaTagsResponseBodyMediaTagListOptions() {}

  explicit ListAllPublicMediaTagsResponseBodyMediaTagListOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionChineseName) {
      res["OptionChineseName"] = boost::any(*optionChineseName);
    }
    if (optionEnglishName) {
      res["OptionEnglishName"] = boost::any(*optionEnglishName);
    }
    if (optionId) {
      res["OptionId"] = boost::any(*optionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionChineseName") != m.end() && !m["OptionChineseName"].empty()) {
      optionChineseName = make_shared<string>(boost::any_cast<string>(m["OptionChineseName"]));
    }
    if (m.find("OptionEnglishName") != m.end() && !m["OptionEnglishName"].empty()) {
      optionEnglishName = make_shared<string>(boost::any_cast<string>(m["OptionEnglishName"]));
    }
    if (m.find("OptionId") != m.end() && !m["OptionId"].empty()) {
      optionId = make_shared<string>(boost::any_cast<string>(m["OptionId"]));
    }
  }


  virtual ~ListAllPublicMediaTagsResponseBodyMediaTagListOptions() = default;
};
class ListAllPublicMediaTagsResponseBodyMediaTagList : public Darabonba::Model {
public:
  shared_ptr<string> mediaTagId{};
  shared_ptr<string> mediaTagNameChinese{};
  shared_ptr<string> mediaTagNameEnglish{};
  shared_ptr<vector<ListAllPublicMediaTagsResponseBodyMediaTagListOptions>> options{};

  ListAllPublicMediaTagsResponseBodyMediaTagList() {}

  explicit ListAllPublicMediaTagsResponseBodyMediaTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaTagId) {
      res["MediaTagId"] = boost::any(*mediaTagId);
    }
    if (mediaTagNameChinese) {
      res["MediaTagNameChinese"] = boost::any(*mediaTagNameChinese);
    }
    if (mediaTagNameEnglish) {
      res["MediaTagNameEnglish"] = boost::any(*mediaTagNameEnglish);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaTagId") != m.end() && !m["MediaTagId"].empty()) {
      mediaTagId = make_shared<string>(boost::any_cast<string>(m["MediaTagId"]));
    }
    if (m.find("MediaTagNameChinese") != m.end() && !m["MediaTagNameChinese"].empty()) {
      mediaTagNameChinese = make_shared<string>(boost::any_cast<string>(m["MediaTagNameChinese"]));
    }
    if (m.find("MediaTagNameEnglish") != m.end() && !m["MediaTagNameEnglish"].empty()) {
      mediaTagNameEnglish = make_shared<string>(boost::any_cast<string>(m["MediaTagNameEnglish"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<ListAllPublicMediaTagsResponseBodyMediaTagListOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAllPublicMediaTagsResponseBodyMediaTagListOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<ListAllPublicMediaTagsResponseBodyMediaTagListOptions>>(expect1);
      }
    }
  }


  virtual ~ListAllPublicMediaTagsResponseBodyMediaTagList() = default;
};
class ListAllPublicMediaTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAllPublicMediaTagsResponseBodyMediaTagList>> mediaTagList{};
  shared_ptr<string> requestId{};

  ListAllPublicMediaTagsResponseBody() {}

  explicit ListAllPublicMediaTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaTagList) {
      vector<boost::any> temp1;
      for(auto item1:*mediaTagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaTagList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaTagList") != m.end() && !m["MediaTagList"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaTagList"].type()) {
        vector<ListAllPublicMediaTagsResponseBodyMediaTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaTagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAllPublicMediaTagsResponseBodyMediaTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaTagList = make_shared<vector<ListAllPublicMediaTagsResponseBodyMediaTagList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAllPublicMediaTagsResponseBody() = default;
};
class ListAllPublicMediaTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAllPublicMediaTagsResponseBody> body{};

  ListAllPublicMediaTagsResponse() {}

  explicit ListAllPublicMediaTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAllPublicMediaTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAllPublicMediaTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAllPublicMediaTagsResponse() = default;
};
class ListMediaBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> includeFileBasicInfo{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> source{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  ListMediaBasicInfosRequest() {}

  explicit ListMediaBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (includeFileBasicInfo) {
      res["IncludeFileBasicInfo"] = boost::any(*includeFileBasicInfo);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IncludeFileBasicInfo") != m.end() && !m["IncludeFileBasicInfo"].empty()) {
      includeFileBasicInfo = make_shared<bool>(boost::any_cast<bool>(m["IncludeFileBasicInfo"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListMediaBasicInfosRequest() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> userData{};

  ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};
  shared_ptr<ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  ListMediaBasicInfosResponseBodyMediaInfos() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaBasicInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfos() = default;
};
class ListMediaBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListMediaBasicInfosResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMediaBasicInfosResponseBody() {}

  explicit ListMediaBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<ListMediaBasicInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaBasicInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<ListMediaBasicInfosResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBody() = default;
};
class ListMediaBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMediaBasicInfosResponseBody> body{};

  ListMediaBasicInfosResponse() {}

  explicit ListMediaBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMediaBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMediaBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListMediaBasicInfosResponse() = default;
};
class ListMediaProducingJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  ListMediaProducingJobsRequest() {}

  explicit ListMediaProducingJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListMediaProducingJobsRequest() = default;
};
class ListMediaProducingJobsResponseBodyMediaProducingJobList : public Darabonba::Model {
public:
  shared_ptr<string> clipsParam{};
  shared_ptr<string> code{};
  shared_ptr<string> completeTime{};
  shared_ptr<string> createTime{};
  shared_ptr<double> duration{};
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> message{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};

  ListMediaProducingJobsResponseBodyMediaProducingJobList() {}

  explicit ListMediaProducingJobsResponseBodyMediaProducingJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ListMediaProducingJobsResponseBodyMediaProducingJobList() = default;
};
class ListMediaProducingJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>> mediaProducingJobList{};
  shared_ptr<string> requestId{};

  ListMediaProducingJobsResponseBody() {}

  explicit ListMediaProducingJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaProducingJobList) {
      vector<boost::any> temp1;
      for(auto item1:*mediaProducingJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaProducingJobList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaProducingJobList") != m.end() && !m["MediaProducingJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaProducingJobList"].type()) {
        vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaProducingJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaProducingJobsResponseBodyMediaProducingJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaProducingJobList = make_shared<vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMediaProducingJobsResponseBody() = default;
};
class ListMediaProducingJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMediaProducingJobsResponseBody> body{};

  ListMediaProducingJobsResponse() {}

  explicit ListMediaProducingJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMediaProducingJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMediaProducingJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMediaProducingJobsResponse() = default;
};
class ListPublicMediaBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeFileBasicInfo{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> mediaTagId{};
  shared_ptr<string> nextToken{};

  ListPublicMediaBasicInfosRequest() {}

  explicit ListPublicMediaBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeFileBasicInfo) {
      res["IncludeFileBasicInfo"] = boost::any(*includeFileBasicInfo);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (mediaTagId) {
      res["MediaTagId"] = boost::any(*mediaTagId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeFileBasicInfo") != m.end() && !m["IncludeFileBasicInfo"].empty()) {
      includeFileBasicInfo = make_shared<bool>(boost::any_cast<bool>(m["IncludeFileBasicInfo"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MediaTagId") != m.end() && !m["MediaTagId"].empty()) {
      mediaTagId = make_shared<string>(boost::any_cast<string>(m["MediaTagId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosRequest() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> formatName{};
  shared_ptr<string> height{};
  shared_ptr<string> region{};
  shared_ptr<string> width{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> userData{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};
  shared_ptr<ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  ListPublicMediaBasicInfosResponseBodyMediaInfos() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfos() = default;
};
class ListPublicMediaBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPublicMediaBasicInfosResponseBody() {}

  explicit ListPublicMediaBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicMediaBasicInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBody() = default;
};
class ListPublicMediaBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPublicMediaBasicInfosResponseBody> body{};

  ListPublicMediaBasicInfosResponse() {}

  explicit ListPublicMediaBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicMediaBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicMediaBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicMediaBasicInfosResponse() = default;
};
class ListSmartJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobState{};
  shared_ptr<string> jobType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<long> status{};

  ListSmartJobsRequest() {}

  explicit ListSmartJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobState) {
      res["JobState"] = boost::any(*jobState);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobState") != m.end() && !m["JobState"].empty()) {
      jobState = make_shared<string>(boost::any_cast<string>(m["JobState"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListSmartJobsRequest() = default;
};
class ListSmartJobsResponseBodySmartJobListInputConfig : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> keyword{};

  ListSmartJobsResponseBodySmartJobListInputConfig() {}

  explicit ListSmartJobsResponseBodySmartJobListInputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobListInputConfig() = default;
};
class ListSmartJobsResponseBodySmartJobListOutputConfig : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> object{};

  ListSmartJobsResponseBodySmartJobListOutputConfig() {}

  explicit ListSmartJobsResponseBodySmartJobListOutputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobListOutputConfig() = default;
};
class ListSmartJobsResponseBodySmartJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> editingConfig{};
  shared_ptr<ListSmartJobsResponseBodySmartJobListInputConfig> inputConfig{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobState{};
  shared_ptr<string> jobType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<ListSmartJobsResponseBodySmartJobListOutputConfig> outputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};
  shared_ptr<long> userId{};

  ListSmartJobsResponseBodySmartJobList() {}

  explicit ListSmartJobsResponseBodySmartJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = inputConfig ? boost::any(inputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobState) {
      res["JobState"] = boost::any(*jobState);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (outputConfig) {
      res["OutputConfig"] = outputConfig ? boost::any(outputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InputConfig"].type()) {
        ListSmartJobsResponseBodySmartJobListInputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InputConfig"]));
        inputConfig = make_shared<ListSmartJobsResponseBodySmartJobListInputConfig>(model1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobState") != m.end() && !m["JobState"].empty()) {
      jobState = make_shared<string>(boost::any_cast<string>(m["JobState"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OutputConfig"].type()) {
        ListSmartJobsResponseBodySmartJobListOutputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OutputConfig"]));
        outputConfig = make_shared<ListSmartJobsResponseBodySmartJobListOutputConfig>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobList() = default;
};
class ListSmartJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSmartJobsResponseBodySmartJobList>> smartJobList{};
  shared_ptr<string> totalCount{};

  ListSmartJobsResponseBody() {}

  explicit ListSmartJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smartJobList) {
      vector<boost::any> temp1;
      for(auto item1:*smartJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmartJobList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmartJobList") != m.end() && !m["SmartJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["SmartJobList"].type()) {
        vector<ListSmartJobsResponseBodySmartJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmartJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSmartJobsResponseBodySmartJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smartJobList = make_shared<vector<ListSmartJobsResponseBodySmartJobList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListSmartJobsResponseBody() = default;
};
class ListSmartJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSmartJobsResponseBody> body{};

  ListSmartJobsResponse() {}

  explicit ListSmartJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSmartJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSmartJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSmartJobsResponse() = default;
};
class ListSysTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> type{};

  ListSysTemplatesRequest() {}

  explicit ListSysTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListSysTemplatesRequest() = default;
};
class ListSysTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<string> type{};

  ListSysTemplatesResponseBodyTemplates() {}

  explicit ListSysTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListSysTemplatesResponseBodyTemplates() = default;
};
class ListSysTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSysTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListSysTemplatesResponseBody() {}

  explicit ListSysTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListSysTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSysTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListSysTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSysTemplatesResponseBody() = default;
};
class ListSysTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSysTemplatesResponseBody> body{};

  ListSysTemplatesResponse() {}

  explicit ListSysTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSysTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSysTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSysTemplatesResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> createSource{};
  shared_ptr<string> keyword{};
  shared_ptr<string> sortType{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> clipsParam{};
  shared_ptr<string> config{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createSource{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> previewMediaStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> type{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (previewMediaStatus) {
      res["PreviewMediaStatus"] = boost::any(*previewMediaStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("PreviewMediaStatus") != m.end() && !m["PreviewMediaStatus"].empty()) {
      previewMediaStatus = make_shared<string>(boost::any_cast<string>(m["PreviewMediaStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class RegisterMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicMetaDataList{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> registerConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  RegisterMediaInfoRequest() {}

  explicit RegisterMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicMetaDataList) {
      res["DynamicMetaDataList"] = boost::any(*dynamicMetaDataList);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (registerConfig) {
      res["RegisterConfig"] = boost::any(*registerConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicMetaDataList") != m.end() && !m["DynamicMetaDataList"].empty()) {
      dynamicMetaDataList = make_shared<string>(boost::any_cast<string>(m["DynamicMetaDataList"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("RegisterConfig") != m.end() && !m["RegisterConfig"].empty()) {
      registerConfig = make_shared<string>(boost::any_cast<string>(m["RegisterConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~RegisterMediaInfoRequest() = default;
};
class RegisterMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> requestId{};

  RegisterMediaInfoResponseBody() {}

  explicit RegisterMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterMediaInfoResponseBody() = default;
};
class RegisterMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterMediaInfoResponseBody> body{};

  RegisterMediaInfoResponse() {}

  explicit RegisterMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterMediaInfoResponse() = default;
};
class SearchEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> createSource{};
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectType{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> templateType{};

  SearchEditingProjectRequest() {}

  explicit SearchEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~SearchEditingProjectRequest() = default;
};
class SearchEditingProjectResponseBodyProjectList : public Darabonba::Model {
public:
  shared_ptr<string> businessConfig{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createSource{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectType{};
  shared_ptr<string> status{};
  shared_ptr<string> templateType{};
  shared_ptr<string> timeline{};
  shared_ptr<string> title{};

  SearchEditingProjectResponseBodyProjectList() {}

  explicit SearchEditingProjectResponseBodyProjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessConfig) {
      res["BusinessConfig"] = boost::any(*businessConfig);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessConfig") != m.end() && !m["BusinessConfig"].empty()) {
      businessConfig = make_shared<string>(boost::any_cast<string>(m["BusinessConfig"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SearchEditingProjectResponseBodyProjectList() = default;
};
class SearchEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<SearchEditingProjectResponseBodyProjectList>> projectList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  SearchEditingProjectResponseBody() {}

  explicit SearchEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectList) {
      vector<boost::any> temp1;
      for(auto item1:*projectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectList"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectList") != m.end() && !m["ProjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectList"].type()) {
        vector<SearchEditingProjectResponseBodyProjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchEditingProjectResponseBodyProjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectList = make_shared<vector<SearchEditingProjectResponseBodyProjectList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchEditingProjectResponseBody() = default;
};
class SearchEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchEditingProjectResponseBody> body{};

  SearchEditingProjectResponse() {}

  explicit SearchEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~SearchEditingProjectResponse() = default;
};
class SearchPublicMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> authorized{};
  shared_ptr<string> dynamicMetaDataMatchFields{};
  shared_ptr<string> entityId{};
  shared_ptr<bool> favorite{};
  shared_ptr<string> mediaIds{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  SearchPublicMediaInfoRequest() {}

  explicit SearchPublicMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (dynamicMetaDataMatchFields) {
      res["DynamicMetaDataMatchFields"] = boost::any(*dynamicMetaDataMatchFields);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (favorite) {
      res["Favorite"] = boost::any(*favorite);
    }
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("DynamicMetaDataMatchFields") != m.end() && !m["DynamicMetaDataMatchFields"].empty()) {
      dynamicMetaDataMatchFields = make_shared<string>(boost::any_cast<string>(m["DynamicMetaDataMatchFields"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Favorite") != m.end() && !m["Favorite"].empty()) {
      favorite = make_shared<bool>(boost::any_cast<bool>(m["Favorite"]));
    }
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~SearchPublicMediaInfoRequest() = default;
};
class SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> type{};

  SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData() {}

  explicit SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData() = default;
};
class SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> source{};
  shared_ptr<string> spriteImages{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo() {}

  explicit SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo() = default;
};
class SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo : public Darabonba::Model {
public:
  shared_ptr<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData> dynamicMetaData{};
  shared_ptr<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<string> mediaId{};

  SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo() {}

  explicit SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicMetaData) {
      res["DynamicMetaData"] = dynamicMetaData ? boost::any(dynamicMetaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicMetaData") != m.end() && !m["DynamicMetaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DynamicMetaData"].type()) {
        SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DynamicMetaData"]));
        dynamicMetaData = make_shared<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData>(model1);
      }
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo>(model1);
      }
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo() = default;
};
class SearchPublicMediaInfoResponseBodyPublicMediaInfos : public Darabonba::Model {
public:
  shared_ptr<bool> authorized{};
  shared_ptr<bool> favorite{};
  shared_ptr<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo> mediaInfo{};
  shared_ptr<string> remainingAuthTime{};

  SearchPublicMediaInfoResponseBodyPublicMediaInfos() {}

  explicit SearchPublicMediaInfoResponseBodyPublicMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (favorite) {
      res["Favorite"] = boost::any(*favorite);
    }
    if (mediaInfo) {
      res["MediaInfo"] = mediaInfo ? boost::any(mediaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remainingAuthTime) {
      res["RemainingAuthTime"] = boost::any(*remainingAuthTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("Favorite") != m.end() && !m["Favorite"].empty()) {
      favorite = make_shared<bool>(boost::any_cast<bool>(m["Favorite"]));
    }
    if (m.find("MediaInfo") != m.end() && !m["MediaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaInfo"].type()) {
        SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaInfo"]));
        mediaInfo = make_shared<SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo>(model1);
      }
    }
    if (m.find("RemainingAuthTime") != m.end() && !m["RemainingAuthTime"].empty()) {
      remainingAuthTime = make_shared<string>(boost::any_cast<string>(m["RemainingAuthTime"]));
    }
  }


  virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfos() = default;
};
class SearchPublicMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos>> publicMediaInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  SearchPublicMediaInfoResponseBody() {}

  explicit SearchPublicMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publicMediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*publicMediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublicMediaInfos"] = boost::any(temp1);
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
    if (m.find("PublicMediaInfos") != m.end() && !m["PublicMediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PublicMediaInfos"].type()) {
        vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublicMediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchPublicMediaInfoResponseBodyPublicMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publicMediaInfos = make_shared<vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchPublicMediaInfoResponseBody() = default;
};
class SearchPublicMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchPublicMediaInfoResponseBody> body{};

  SearchPublicMediaInfoResponse() {}

  explicit SearchPublicMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchPublicMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchPublicMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SearchPublicMediaInfoResponse() = default;
};
class SetDefaultStorageLocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> path{};
  shared_ptr<string> storageType{};

  SetDefaultStorageLocationRequest() {}

  explicit SetDefaultStorageLocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~SetDefaultStorageLocationRequest() = default;
};
class SetDefaultStorageLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDefaultStorageLocationResponseBody() {}

  explicit SetDefaultStorageLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDefaultStorageLocationResponseBody() = default;
};
class SetDefaultStorageLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDefaultStorageLocationResponseBody> body{};

  SetDefaultStorageLocationResponse() {}

  explicit SetDefaultStorageLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultStorageLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultStorageLocationResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultStorageLocationResponse() = default;
};
class SetEventCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackQueueName{};
  shared_ptr<string> eventTypeList{};

  SetEventCallbackRequest() {}

  explicit SetEventCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackQueueName) {
      res["CallbackQueueName"] = boost::any(*callbackQueueName);
    }
    if (eventTypeList) {
      res["EventTypeList"] = boost::any(*eventTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackQueueName") != m.end() && !m["CallbackQueueName"].empty()) {
      callbackQueueName = make_shared<string>(boost::any_cast<string>(m["CallbackQueueName"]));
    }
    if (m.find("EventTypeList") != m.end() && !m["EventTypeList"].empty()) {
      eventTypeList = make_shared<string>(boost::any_cast<string>(m["EventTypeList"]));
    }
  }


  virtual ~SetEventCallbackRequest() = default;
};
class SetEventCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetEventCallbackResponseBody() {}

  explicit SetEventCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetEventCallbackResponseBody() = default;
};
class SetEventCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetEventCallbackResponseBody> body{};

  SetEventCallbackResponse() {}

  explicit SetEventCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetEventCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetEventCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~SetEventCallbackResponse() = default;
};
class SubmitASRJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> duration{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> startTime{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitASRJobRequest() {}

  explicit SubmitASRJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitASRJobRequest() = default;
};
class SubmitASRJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  SubmitASRJobResponseBody() {}

  explicit SubmitASRJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SubmitASRJobResponseBody() = default;
};
class SubmitASRJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitASRJobResponseBody> body{};

  SubmitASRJobResponse() {}

  explicit SubmitASRJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitASRJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitASRJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitASRJobResponse() = default;
};
class SubmitAudioProduceJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> editingConfig{};
  shared_ptr<string> inputConfig{};
  shared_ptr<string> outputConfig{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitAudioProduceJobRequest() {}

  explicit SubmitAudioProduceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = boost::any(*inputConfig);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      inputConfig = make_shared<string>(boost::any_cast<string>(m["InputConfig"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitAudioProduceJobRequest() = default;
};
class SubmitAudioProduceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  SubmitAudioProduceJobResponseBody() {}

  explicit SubmitAudioProduceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SubmitAudioProduceJobResponseBody() = default;
};
class SubmitAudioProduceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitAudioProduceJobResponseBody> body{};

  SubmitAudioProduceJobResponse() {}

  explicit SubmitAudioProduceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAudioProduceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAudioProduceJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAudioProduceJobResponse() = default;
};
class SubmitDelogoJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> inputType{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitDelogoJobRequest() {}

  explicit SubmitDelogoJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitDelogoJobRequest() = default;
};
class SubmitDelogoJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitDelogoJobResponseBody() {}

  explicit SubmitDelogoJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitDelogoJobResponseBody() = default;
};
class SubmitDelogoJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitDelogoJobResponseBody> body{};

  SubmitDelogoJobResponse() {}

  explicit SubmitDelogoJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDelogoJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDelogoJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDelogoJobResponse() = default;
};
class SubmitH2VJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> inputType{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitH2VJobRequest() {}

  explicit SubmitH2VJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitH2VJobRequest() = default;
};
class SubmitH2VJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitH2VJobResponseBody() {}

  explicit SubmitH2VJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitH2VJobResponseBody() = default;
};
class SubmitH2VJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitH2VJobResponseBody> body{};

  SubmitH2VJobResponse() {}

  explicit SubmitH2VJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitH2VJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitH2VJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitH2VJobResponse() = default;
};
class SubmitKeyWordCutJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> keyword{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitKeyWordCutJobRequest() {}

  explicit SubmitKeyWordCutJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitKeyWordCutJobRequest() = default;
};
class SubmitKeyWordCutJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitKeyWordCutJobResponseBody() {}

  explicit SubmitKeyWordCutJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitKeyWordCutJobResponseBody() = default;
};
class SubmitKeyWordCutJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitKeyWordCutJobResponseBody> body{};

  SubmitKeyWordCutJobResponse() {}

  explicit SubmitKeyWordCutJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitKeyWordCutJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitKeyWordCutJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitKeyWordCutJobResponse() = default;
};
class SubmitLiveEditingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clips{};
  shared_ptr<string> liveStreamConfig{};
  shared_ptr<string> mediaProduceConfig{};
  shared_ptr<string> outputMediaConfig{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<string> projectId{};
  shared_ptr<string> userData{};

  SubmitLiveEditingJobRequest() {}

  explicit SubmitLiveEditingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clips) {
      res["Clips"] = boost::any(*clips);
    }
    if (liveStreamConfig) {
      res["LiveStreamConfig"] = boost::any(*liveStreamConfig);
    }
    if (mediaProduceConfig) {
      res["MediaProduceConfig"] = boost::any(*mediaProduceConfig);
    }
    if (outputMediaConfig) {
      res["OutputMediaConfig"] = boost::any(*outputMediaConfig);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clips") != m.end() && !m["Clips"].empty()) {
      clips = make_shared<string>(boost::any_cast<string>(m["Clips"]));
    }
    if (m.find("LiveStreamConfig") != m.end() && !m["LiveStreamConfig"].empty()) {
      liveStreamConfig = make_shared<string>(boost::any_cast<string>(m["LiveStreamConfig"]));
    }
    if (m.find("MediaProduceConfig") != m.end() && !m["MediaProduceConfig"].empty()) {
      mediaProduceConfig = make_shared<string>(boost::any_cast<string>(m["MediaProduceConfig"]));
    }
    if (m.find("OutputMediaConfig") != m.end() && !m["OutputMediaConfig"].empty()) {
      outputMediaConfig = make_shared<string>(boost::any_cast<string>(m["OutputMediaConfig"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitLiveEditingJobRequest() = default;
};
class SubmitLiveEditingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  SubmitLiveEditingJobResponseBody() {}

  explicit SubmitLiveEditingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitLiveEditingJobResponseBody() = default;
};
class SubmitLiveEditingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitLiveEditingJobResponseBody> body{};

  SubmitLiveEditingJobResponse() {}

  explicit SubmitLiveEditingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitLiveEditingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitLiveEditingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitLiveEditingJobResponse() = default;
};
class SubmitMattingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> inputType{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<string> overwrite{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitMattingJobRequest() {}

  explicit SubmitMattingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<string>(boost::any_cast<string>(m["Overwrite"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitMattingJobRequest() = default;
};
class SubmitMattingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitMattingJobResponseBody() {}

  explicit SubmitMattingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitMattingJobResponseBody() = default;
};
class SubmitMattingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitMattingJobResponseBody> body{};

  SubmitMattingJobResponse() {}

  explicit SubmitMattingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitMattingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitMattingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitMattingJobResponse() = default;
};
class SubmitMediaProducingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> editingProduceConfig{};
  shared_ptr<string> outputMediaConfig{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectMetadata{};
  shared_ptr<string> source{};
  shared_ptr<string> templateId{};
  shared_ptr<string> timeline{};
  shared_ptr<string> userData{};

  SubmitMediaProducingJobRequest() {}

  explicit SubmitMediaProducingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (editingProduceConfig) {
      res["EditingProduceConfig"] = boost::any(*editingProduceConfig);
    }
    if (outputMediaConfig) {
      res["OutputMediaConfig"] = boost::any(*outputMediaConfig);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectMetadata) {
      res["ProjectMetadata"] = boost::any(*projectMetadata);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("EditingProduceConfig") != m.end() && !m["EditingProduceConfig"].empty()) {
      editingProduceConfig = make_shared<string>(boost::any_cast<string>(m["EditingProduceConfig"]));
    }
    if (m.find("OutputMediaConfig") != m.end() && !m["OutputMediaConfig"].empty()) {
      outputMediaConfig = make_shared<string>(boost::any_cast<string>(m["OutputMediaConfig"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectMetadata") != m.end() && !m["ProjectMetadata"].empty()) {
      projectMetadata = make_shared<string>(boost::any_cast<string>(m["ProjectMetadata"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitMediaProducingJobRequest() = default;
};
class SubmitMediaProducingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vodMediaId{};

  SubmitMediaProducingJobResponseBody() {}

  explicit SubmitMediaProducingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vodMediaId) {
      res["VodMediaId"] = boost::any(*vodMediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VodMediaId") != m.end() && !m["VodMediaId"].empty()) {
      vodMediaId = make_shared<string>(boost::any_cast<string>(m["VodMediaId"]));
    }
  }


  virtual ~SubmitMediaProducingJobResponseBody() = default;
};
class SubmitMediaProducingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitMediaProducingJobResponseBody> body{};

  SubmitMediaProducingJobResponse() {}

  explicit SubmitMediaProducingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitMediaProducingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitMediaProducingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitMediaProducingJobResponse() = default;
};
class SubmitPPTCutJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  SubmitPPTCutJobRequest() {}

  explicit SubmitPPTCutJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitPPTCutJobRequest() = default;
};
class SubmitPPTCutJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitPPTCutJobResponseBody() {}

  explicit SubmitPPTCutJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitPPTCutJobResponseBody() = default;
};
class SubmitPPTCutJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitPPTCutJobResponseBody> body{};

  SubmitPPTCutJobResponse() {}

  explicit SubmitPPTCutJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitPPTCutJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitPPTCutJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitPPTCutJobResponse() = default;
};
class SubmitSubtitleProduceJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> editingConfig{};
  shared_ptr<string> inputConfig{};
  shared_ptr<long> isAsync{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> userData{};

  SubmitSubtitleProduceJobRequest() {}

  explicit SubmitSubtitleProduceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = boost::any(*inputConfig);
    }
    if (isAsync) {
      res["IsAsync"] = boost::any(*isAsync);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      inputConfig = make_shared<string>(boost::any_cast<string>(m["InputConfig"]));
    }
    if (m.find("IsAsync") != m.end() && !m["IsAsync"].empty()) {
      isAsync = make_shared<long>(boost::any_cast<long>(m["IsAsync"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitSubtitleProduceJobRequest() = default;
};
class SubmitSubtitleProduceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitSubtitleProduceJobResponseBody() {}

  explicit SubmitSubtitleProduceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSubtitleProduceJobResponseBody() = default;
};
class SubmitSubtitleProduceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSubtitleProduceJobResponseBody> body{};

  SubmitSubtitleProduceJobResponse() {}

  explicit SubmitSubtitleProduceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSubtitleProduceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSubtitleProduceJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSubtitleProduceJobResponse() = default;
};
class UpdateEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessStatus{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> description{};
  shared_ptr<string> projectId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> timeline{};
  shared_ptr<string> title{};

  UpdateEditingProjectRequest() {}

  explicit UpdateEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateEditingProjectRequest() = default;
};
class UpdateEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEditingProjectResponseBody() {}

  explicit UpdateEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEditingProjectResponseBody() = default;
};
class UpdateEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEditingProjectResponseBody> body{};

  UpdateEditingProjectResponse() {}

  explicit UpdateEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEditingProjectResponse() = default;
};
class UpdateMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appendDynamicMeta{};
  shared_ptr<bool> appendTags{};
  shared_ptr<string> businessType{};
  shared_ptr<string> category{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicMetaDataList{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> title{};
  shared_ptr<string> userData{};

  UpdateMediaInfoRequest() {}

  explicit UpdateMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendDynamicMeta) {
      res["AppendDynamicMeta"] = boost::any(*appendDynamicMeta);
    }
    if (appendTags) {
      res["AppendTags"] = boost::any(*appendTags);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicMetaDataList) {
      res["DynamicMetaDataList"] = boost::any(*dynamicMetaDataList);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppendDynamicMeta") != m.end() && !m["AppendDynamicMeta"].empty()) {
      appendDynamicMeta = make_shared<bool>(boost::any_cast<bool>(m["AppendDynamicMeta"]));
    }
    if (m.find("AppendTags") != m.end() && !m["AppendTags"].empty()) {
      appendTags = make_shared<bool>(boost::any_cast<bool>(m["AppendTags"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicMetaDataList") != m.end() && !m["DynamicMetaDataList"].empty()) {
      dynamicMetaDataList = make_shared<string>(boost::any_cast<string>(m["DynamicMetaDataList"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~UpdateMediaInfoRequest() = default;
};
class UpdateMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> requestId{};

  UpdateMediaInfoResponseBody() {}

  explicit UpdateMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateMediaInfoResponseBody() = default;
};
class UpdateMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMediaInfoResponseBody> body{};

  UpdateMediaInfoResponse() {}

  explicit UpdateMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMediaInfoResponse() = default;
};
class UpdateSmartJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> FEExtend{};
  shared_ptr<string> jobId{};

  UpdateSmartJobRequest() {}

  explicit UpdateSmartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~UpdateSmartJobRequest() = default;
};
class UpdateSmartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> FEExtend{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateSmartJobResponseBody() {}

  explicit UpdateSmartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSmartJobResponseBody() = default;
};
class UpdateSmartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSmartJobResponseBody> body{};

  UpdateSmartJobResponse() {}

  explicit UpdateSmartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSmartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSmartJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSmartJobResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> relatedMediaids{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (relatedMediaids) {
      res["RelatedMediaids"] = boost::any(*relatedMediaids);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("RelatedMediaids") != m.end() && !m["RelatedMediaids"].empty()) {
      relatedMediaids = make_shared<string>(boost::any_cast<string>(m["RelatedMediaids"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateResponse() = default;
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
  AddEditingProjectMaterialsResponse addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEditingProjectMaterialsResponse addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request);
  AddFavoritePublicMediaResponse addFavoritePublicMediaWithOptions(shared_ptr<AddFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFavoritePublicMediaResponse addFavoritePublicMedia(shared_ptr<AddFavoritePublicMediaRequest> request);
  AddTemplateResponse addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTemplateResponse addTemplate(shared_ptr<AddTemplateRequest> request);
  BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetMediaInfosResponse batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request);
  CancelFavoritePublicMediaResponse cancelFavoritePublicMediaWithOptions(shared_ptr<CancelFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFavoritePublicMediaResponse cancelFavoritePublicMedia(shared_ptr<CancelFavoritePublicMediaRequest> request);
  CreateEditingProjectResponse createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEditingProjectResponse createEditingProject(shared_ptr<CreateEditingProjectRequest> request);
  DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request);
  DeleteEditingProjectsResponse deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEditingProjectsResponse deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request);
  DeleteMediaInfosResponse deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMediaInfosResponse deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request);
  DeleteSmartJobResponse deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSmartJobResponse deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DescribeIceProductStatusResponse describeIceProductStatusWithOptions(shared_ptr<DescribeIceProductStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIceProductStatusResponse describeIceProductStatus(shared_ptr<DescribeIceProductStatusRequest> request);
  DescribeMaterialPackageInfoResponse describeMaterialPackageInfoWithOptions(shared_ptr<DescribeMaterialPackageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMaterialPackageInfoResponse describeMaterialPackageInfo(shared_ptr<DescribeMaterialPackageInfoRequest> request);
  DescribeRelatedAuthorizationStatusResponse describeRelatedAuthorizationStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRelatedAuthorizationStatusResponse describeRelatedAuthorizationStatus();
  GetDefaultStorageLocationResponse getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultStorageLocationResponse getDefaultStorageLocation();
  GetEditingProjectResponse getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEditingProjectResponse getEditingProject(shared_ptr<GetEditingProjectRequest> request);
  GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEditingProjectMaterialsResponse getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request);
  GetEventCallbackResponse getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventCallbackResponse getEventCallback();
  GetLiveEditingIndexFileResponse getLiveEditingIndexFileWithOptions(shared_ptr<GetLiveEditingIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveEditingIndexFileResponse getLiveEditingIndexFile(shared_ptr<GetLiveEditingIndexFileRequest> request);
  GetLiveEditingJobResponse getLiveEditingJobWithOptions(shared_ptr<GetLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLiveEditingJobResponse getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request);
  GetMediaInfoResponse getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaInfoResponse getMediaInfo(shared_ptr<GetMediaInfoRequest> request);
  GetMediaProducingJobResponse getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaProducingJobResponse getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request);
  GetPublicMediaInfoResponse getPublicMediaInfoWithOptions(shared_ptr<GetPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicMediaInfoResponse getPublicMediaInfo(shared_ptr<GetPublicMediaInfoRequest> request);
  GetSmartHandleJobResponse getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSmartHandleJobResponse getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  GetTemplateMaterialsResponse getTemplateMaterialsWithOptions(shared_ptr<GetTemplateMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateMaterialsResponse getTemplateMaterials(shared_ptr<GetTemplateMaterialsRequest> request);
  ListAllPublicMediaTagsResponse listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAllPublicMediaTagsResponse listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request);
  ListMediaBasicInfosResponse listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMediaBasicInfosResponse listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request);
  ListMediaProducingJobsResponse listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMediaProducingJobsResponse listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request);
  ListPublicMediaBasicInfosResponse listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicMediaBasicInfosResponse listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request);
  ListSmartJobsResponse listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSmartJobsResponse listSmartJobs(shared_ptr<ListSmartJobsRequest> request);
  ListSysTemplatesResponse listSysTemplatesWithOptions(shared_ptr<ListSysTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSysTemplatesResponse listSysTemplates(shared_ptr<ListSysTemplatesRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  RegisterMediaInfoResponse registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterMediaInfoResponse registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request);
  SearchEditingProjectResponse searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchEditingProjectResponse searchEditingProject(shared_ptr<SearchEditingProjectRequest> request);
  SearchPublicMediaInfoResponse searchPublicMediaInfoWithOptions(shared_ptr<SearchPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchPublicMediaInfoResponse searchPublicMediaInfo(shared_ptr<SearchPublicMediaInfoRequest> request);
  SetDefaultStorageLocationResponse setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultStorageLocationResponse setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request);
  SetEventCallbackResponse setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetEventCallbackResponse setEventCallback(shared_ptr<SetEventCallbackRequest> request);
  SubmitASRJobResponse submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitASRJobResponse submitASRJob(shared_ptr<SubmitASRJobRequest> request);
  SubmitAudioProduceJobResponse submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAudioProduceJobResponse submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request);
  SubmitDelogoJobResponse submitDelogoJobWithOptions(shared_ptr<SubmitDelogoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDelogoJobResponse submitDelogoJob(shared_ptr<SubmitDelogoJobRequest> request);
  SubmitH2VJobResponse submitH2VJobWithOptions(shared_ptr<SubmitH2VJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitH2VJobResponse submitH2VJob(shared_ptr<SubmitH2VJobRequest> request);
  SubmitKeyWordCutJobResponse submitKeyWordCutJobWithOptions(shared_ptr<SubmitKeyWordCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitKeyWordCutJobResponse submitKeyWordCutJob(shared_ptr<SubmitKeyWordCutJobRequest> request);
  SubmitLiveEditingJobResponse submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitLiveEditingJobResponse submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request);
  SubmitMattingJobResponse submitMattingJobWithOptions(shared_ptr<SubmitMattingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitMattingJobResponse submitMattingJob(shared_ptr<SubmitMattingJobRequest> request);
  SubmitMediaProducingJobResponse submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitMediaProducingJobResponse submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request);
  SubmitPPTCutJobResponse submitPPTCutJobWithOptions(shared_ptr<SubmitPPTCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitPPTCutJobResponse submitPPTCutJob(shared_ptr<SubmitPPTCutJobRequest> request);
  SubmitSubtitleProduceJobResponse submitSubtitleProduceJobWithOptions(shared_ptr<SubmitSubtitleProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSubtitleProduceJobResponse submitSubtitleProduceJob(shared_ptr<SubmitSubtitleProduceJobRequest> request);
  UpdateEditingProjectResponse updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEditingProjectResponse updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request);
  UpdateMediaInfoResponse updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMediaInfoResponse updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request);
  UpdateSmartJobResponse updateSmartJobWithOptions(shared_ptr<UpdateSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSmartJobResponse updateSmartJob(shared_ptr<UpdateSmartJobRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<UpdateTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ICE20201109

#endif
